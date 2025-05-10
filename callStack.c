#include <stdio.h>

void mello()
{
    printf("Mello\n");
}

void fun()
{
    printf("Fun Left\n");
    mello();
}

void hello()
{
    printf("Hello\n");
    fun();
}

int main()
{
    printf("Hi\n");

    hello();

    return 0;
}