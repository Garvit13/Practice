#include <stdio.h>
// 0 1 1 2 3 5 8 13 21 34
int fibo_recursive(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }

    return ((fibo_recursive(n - 1)) + (fibo_recursive(n - 2)));
}
// 0 1 1 2 3 5 8 13 21 34
int fibo_interative(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    int a = 0, b = 1;
    for (int i = 0; i < (n - 2); i++)
    {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int num;
    printf("\n\n\n\n\n\n\n\n<---Done using recursion--->\n");
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("At the postion of %d in the fibonacci series is : %d\n\n\n", num, fibo_recursive(num));

    printf("<---Done using Iteration--->\n");
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("At the postion of %d in the fibonacci series is : %d\n\n\n\n\n\n\n\n", num, fibo_interative(num));
    return 0;
}