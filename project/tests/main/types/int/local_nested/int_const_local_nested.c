#include <stdio.h>
int main() {
    long long i = 0;

    {
        const int x_1 = -1;
        i = 1;
        printf("%lld\n", i);
        printf("%d\n", x_1);
        const int x_2 = -2147483647;
        i = 2;
        printf("%lld\n", i);
        printf("%d\n", x_2);
        const int x_3 = -346534;
        i = 3;
        printf("%lld\n", i);
        printf("%d\n", x_3);
        const int x_4 = -5147483647;
        i = 4;
        printf("%lld\n", i);
        printf("%d\n", x_4);
        const int x_5 = 0;
        i = 5;
        printf("%lld\n", i);
        printf("%d\n", x_5);
        const int x_6 = 1;
        i = 6;
        printf("%lld\n", i);
        printf("%d\n", x_6);
        const int x_7 = 2147483647;
        i = 7;
        printf("%lld\n", i);
        printf("%d\n", x_7);
        const int x_8 = 5147483647;
        i = 8;
        printf("%lld\n", i);
        printf("%d\n", x_8);
        const int x_9 = 523432;
        i = 9;
        printf("%lld\n", i);
        printf("%d\n", x_9);

        const int x_10 = -1, x_11 = -2147483647, x_12 = -346534, x_13 = -5147483647, x_14 = 0, x_15 = 1, x_16 = 2147483647, x_17 = 5147483647, x_18 = 523432;

        i = 10;
        printf("%lld\n", i);
        printf("%d\n", x_10);
        i = 11;
        printf("%lld\n", i);
        printf("%d\n", x_11);
        i = 12;
        printf("%lld\n", i);
        printf("%d\n", x_12);
        i = 13;
        printf("%lld\n", i);
        printf("%d\n", x_13);
        i = 14;
        printf("%lld\n", i);
        printf("%d\n", x_14);
        i = 15;
        printf("%lld\n", i);
        printf("%d\n", x_15);
        i = 16;
        printf("%lld\n", i);
        printf("%d\n", x_16);
        i = 17;
        printf("%lld\n", i);
        printf("%d\n", x_17);
        i = 18;
        printf("%lld\n", i);
        printf("%d\n", x_18);
    }
}
