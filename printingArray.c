#include <stdio.h>

void printingArray(int arraySize, int integerArray[], int i)
{
    if (i < arraySize)
    {
        /* code */
        printf("%d ", integerArray[i]);
        printingArray(arraySize, integerArray, i + 1);
    }
}

int main()
{
    int arraySize, i = 0;
    scanf("%d", &arraySize);

    int integerArray[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        /* code */
        scanf("%d", &integerArray[i]);
    }

    printingArray(arraySize, integerArray, i);

    return 0;
}