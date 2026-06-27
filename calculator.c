#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    double num1, num2, result;

    do
    {
        printf("\n==================================\n");
        printf("         SMARTCALC PRO\n");
        printf("==================================\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Square Root\n");
        printf("8. Exit\n");
        printf("==================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result = %.2lf\n", num1 + num2);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result = %.2lf\n", num1 - num2);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result = %.2lf\n", num1 * num2);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);

                if(num2 == 0)
                    printf("Error! Division by zero not allowed.\n");
                else
                    printf("Result = %.2lf\n", num1 / num2);
                break;

            case 5:
                {
                    int a, b;
                    printf("Enter two integers: ");
                    scanf("%d %d", &a, &b);
                    printf("Result = %d\n", a % b);
                }
                break;

            case 6:
                printf("Enter base and power: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result = %.2lf\n", pow(num1, num2));
                break;

            case 7:
                printf("Enter number: ");
                scanf("%lf", &num1);

                if(num1 < 0)
                    printf("Square root of negative number not possible.\n");
                else
                    printf("Result = %.2lf\n", sqrt(num1));
                break;

            case 8:
                printf("Thank You For Using SmartCalc Pro!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 8);

    return 0;
}