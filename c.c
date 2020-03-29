#include <stdio.h>

int factorial(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return (n * factorial(n - 1));
}
int main()
{
    int num;
    printf("Enter the number you have to find the factorial of : \n");
    scanf("%d", &num);
    printf("The factorial of %d is %d \n", num, factorial(num));
    return 0;
}