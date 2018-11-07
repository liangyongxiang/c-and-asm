// SPDX-License-Identifier: GPL-2.0+

#include <stdio.h>

extern int add(void);

int add2(int cnt)
{
    int sum = 0;
    int i;
    for (i = 1; i <= cnt; i++)
    {
        sum += i;
        printf("sum: %d\n", sum);
    }
    return sum;
}

int main(void)
{
    printf("sum: %d\n", add());
    //printf("sum: %d\n", add2(100));
    //printf("sum: %d\n", add2(100));
    return 0;
}
