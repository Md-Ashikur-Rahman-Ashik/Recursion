// #include <stdio.h>

// void printNToOne(int num)
// {
//     if (num > 1)
//     {
//         /* code */
//         printf("%d\n", num);
//         printNToOne(num - 1);
//     }
//     else if (num == 1)
//     {
//         printf("%d", num);
//     }
// }

// int main()
// {
//     int num;
//     scanf("%d", &num);

//     printNToOne(num);

//     return 0;
// }

#include <stdio.h>

void printInReverse(int num1, int num2)
{
    if (num2 == 6)
    {
        /* code */
        return;
    }
    printInReverse(num1, num2 + 1);
    printf("%d\n", num2);
}

int main()
{
    int num1;
    scanf("%d", &num1);

    int num2 = 1;

    printInReverse(num1, num2);

    return 0;
}