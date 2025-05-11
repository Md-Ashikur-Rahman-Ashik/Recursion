#include <stdio.h>

void printToN(int num1, int num2)
{
    if (num1 <= num2)
    {
        /* code */
        printf("%d\n", num1);
        printToN(num1 + 1, num2);
    }
}

int main()
{
    int i = 1;
    int num;
    scanf("%d", &num);

    printToN(i, num);

    return 0;
}