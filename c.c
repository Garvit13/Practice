#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("\a");
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    printf("Table of ");
    printf("%d", a);
    printf(" is : ");
    for (size_t i = 0; i < 11; i++)
    {
        printf("\n%d", a);
        printf(" X ");
        printf("%d", i);
        printf(" = ");
        printf("%d", a * (int)i);
    }

    return 0;
}
