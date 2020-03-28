#include <stdio.h>
int main()
{
    int qty, dis = 0;
    float rate = 0, total = 0;
    printf("\n\n-----------> This Program is only check the IF statement <--------------\n\n");

    printf("\n--->Please Enter the Rate of the Product: ");
    scanf("%f", &rate);

    printf("\n   If your Quantity is More then 1000 you will get 10%% Discount on Total Price.\n");

    printf("\n--->Please Enter the Quantity of the Product: ");
    scanf("%d", &qty);

    if (qty > 1000)
    {
        dis = 10;
    }
    total = (qty * rate) - (qty * rate * dis / 100);
    printf("\n  You Pay %0.2f Rs. for %d Quantity of your product", total, qty);
    return 0;
}