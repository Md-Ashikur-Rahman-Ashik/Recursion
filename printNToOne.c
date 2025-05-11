#include <stdio.h>

void printNToOne(int num)
{
    if (num > 1)
    {
        /* code */
        printf("%d\n", num);
        printNToOne(num - 1);
    }
    else if (num == 1)
    {
        printf("%d", num);
    }
}

int main()
{
    int num;
    scanf("%d", &num);

    printNToOne(num);

    return 0;
}