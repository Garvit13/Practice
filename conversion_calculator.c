#include <stdio.h>

int main()
{
    while (1 < 2)
    {
        char y_n_input, another_variable;
        float value;
        printf("\n\n         <---Conversion Calculator--->\n");
        printf("<---Enter 1 for converting kilometers to miles--->\n");
        printf("<---Enter 2 for converting inches to foot--->\n");
        printf("<---Enter 3 for converting centimeters to inche--->\n");
        printf("<---Enter 4 for converting pounds to kilograms--->\n");
        printf("<---Enter 5 for converting inches to meters--->\n");
        scanf("%d", &another_variable);
        if (another_variable == 1)
        {
            printf("Enter Kilometers : ");
            scanf("%f", &value);
            printf("%f Kilometers converted to Miles are : %f\n", value, value * (float)1 / 1.609);
        }
        else if (another_variable == 2)
        {
            printf("Enter Inches : ");
            scanf("%f", &value);
            printf("%f Inches converted to Foot are : %f\n", value, value * ((float)1 / 12));
        }
        else if (another_variable == 3)
        {
            printf("Enter Centimeters : ");
            scanf("%f", &value);
            printf("%f Centimeters converted to Inches are : %f\n", value, value * (float)(1 / 2.54));
        }
        else if (another_variable == 4)
        {
            printf("Enter pounds : ");
            scanf("%f", &value);
            printf("%f Pounds converted to Kilograms are : %f\n", value, value * (float)(1 / 2.205));
        }
        else if (another_variable == 5)
        {
            printf("Enter Inches : ");
            scanf("%f", &value);
            printf("%f Inches converted to Meters are : %f\n", value, value * (float)(1 / 39.37));
        }
        else
        {
            printf("<---Try Again--->\n");
        }

        char a;
        printf("<---Enter \'N\' to quit and \'Y\' to convet again--->\n");
        scanf("%c", &a);
        scanf("%c", &a);
        if ((a == 'y') || (a == 'Y'))
        {
            a = 'y';
        }
        else
        {
            printf("Exit");
            break;
        }
    }
    return 0;
}