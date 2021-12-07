#! /usr/bin/python3

import os
import sys
import re as regex

# Our scripts
import tools
import settings


def main():
    print()
    current_version = settings.get_setting('current_eo_version')
    latest_version = settings.get_setting('latest_eo_version')

    is_latest_version, latest_version = is_update_needed(current_version, latest_version)
    if is_latest_version:
        return

    found_files = tools.search_files_by_pattern('../../', 'pom.xml', recursive=True)
    update_version_in_files(found_files, latest_version)
    settings.set_setting('current_eo_version', latest_version)
    print('EO version updated\n')


def is_update_needed(current_version, latest_version):
    compare = tools.version_compare(current_version, latest_version)
    is_latest_version = False
    if compare == 1:
        latest_version = current_version
        print(f'Manual update latest EO version to {latest_version}')
    elif compare == 0:
        is_latest_version = True
        print('We use latest EO version\n')
    else:
        print(f'We use old EO version: "{current_version}"\nStart updating files')

    return is_latest_version, latest_version


def update_version_in_files(files, latest_version):
    print('Updating version')
    count_changed_files = 0
    pattern = r'<eolang\.version>.*<\/eolang\.version>'
    latest_version_declaration = f'<eolang.version>{latest_version}</eolang.version>'
    for file in files:
        with open(file, 'r') as f:
            data = f.read()

        result = regex.search(pattern, data)
        if (not result) or (latest_version_declaration in result.group()):
            continue

        new_data = regex.sub(pattern, latest_version_declaration, data)
        with open(file, 'w') as f:
            f.write(new_data)
        count_changed_files += 1

    print(f'{count_changed_files} files updated')
    return count_changed_files


if __name__ == '__main__':
    os.chdir(os.path.dirname(sys.argv[0]))  # Go to current script dir
    main()
