#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define radian(n) (n * M_PI / 180)
void select();
int addition();
int subtraction();
int multiply();
int division();
int square();
int square_root();
int cube();
int cube_root();
int power();
int log_calc();
int trigonometry();
int inverse_trigonometry();
int main()
{
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t***************************  ~ WELCOME TO CALCULATOR ~  ***************************\n\n\n\n\n");
    select();

    return 0;
}
void select()
{
    while (1)
    {
        int choice;
        printf("\nWhat operation you want to perform:\n\n");
        printf("Press 1 for Addition.\t\t\t\t\t");
        printf("Press 2 for Subtraction.\n");
        printf("Press 3 for Multiplication.\t\t\t\t");
        printf("Press 4 for Division.\n");
        printf("Press 5 for Square.\t\t\t\t\t");
        printf("Press 6 for Square Root.\n");
        printf("Press 7 for Cube.\t\t\t\t\t");
        printf("Press 8 for Cube Root.\n");
        printf("Press 9 for Exponents.\t\t\t\t\t");
        printf("Press 10 for Log.\n");
        printf("Press 11 for Trigonometric Ratios.\t\t\t");
        printf("Press 12 for Inverse Trigonometric Ratios.\n");
        printf("Press 0 to Exit.\n\n\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            printf("\nExiting the calculator.........\n");
            exit(0);
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiply();
            break;
        case 4:
            division();
            break;
        case 5:
            square();
            break;
        case 6:
            square_root();
            break;
        case 7:
            cube();
            break;
        case 8:
            cube_root();
            break;
        case 9:
            power();
            break;
        case 10:
            log_calc();
            break;
        case 11:
            trigonometry();
            break;
        case 12:
            inverse_trigonometry();
            break;
        default:
            printf("\nWrong Input Entered!\nPlease choose again......\n\n\n");
            select();
        }
    }
}
int addition()
{
    float num, sum = 0;
    int count;
    printf("\nEnter numbers of terms on which operation needs to be performed: ");
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        printf("\nEnter %d number: ", i + 1);
        scanf("%f", &num);
        sum += num;
    }
    printf("\nThe sum of numbers is %f\n\n", sum);
}
int subtraction()
{
    float *num, ans;
    int count;
    printf("\nEnter numbers of terms on which operation needs to be performed: ");
    scanf("%d", &count);
    num = (float *)malloc(count * sizeof(int));
    for (int i = 0; i < count; i++)
    {
        printf("\nEnter the %d number: ", i + 1);
        scanf("%f", &num[i]);
        ans = num[0];
    }
    for (int j = 1; j < count; j++)
    {
        ans -= num[j];
    }

    printf("\nThe answer is %f\n\n", ans);
}
int multiply()
{
    float num, ans = 1, *arr;
    int count;
    printf("\nEnter numbers of terms on which operation needs to be performed: ");
    scanf("%d", &count);
    arr = (float *)malloc(count * sizeof(int));

    for (int i = 0; i < count; i++)
    {
        printf("\nEnter the %d number: ", i + 1);
        scanf("%f", &arr[i]);
    }
    for (int i = 0; i < count; i++)
    {
        ans = ans * arr[i];
    }
    printf("\nThe answer is %f\n\n", ans);
}
int division()
{
    float num1, num2, ans;
    printf("\nEnter 1 number: ");
    scanf("%f", &num1);
    printf("\nEnter 2 number: ");
    scanf("%f", &num2);
    ans = num1 / num2;
    printf("\nThe answer is %f\n\n", ans);
}
int square()
{
    float ans, num;
    printf("\nEnter the number of which square is needed: ");
    scanf("%f", &num);
    ans = num * num;
    printf("\nThe answer is %f\n\n", ans);
}
int square_root()
{
    float ans, num;
    printf("\nEnter number of which square root is needed: ");
    scanf("%f", &num);
    ans = sqrt(num);
    printf("\nThe answer is %f\n\n", ans);
}
int cube()
{
    float num, ans;
    printf("\nEnter number of which cube is needed: ");
    scanf("%f", &num);
    ans = pow(num, 3);
    printf("\nThe answer is %f\n\n", ans);
}
int cube_root()
{
    float num, ans;
    printf("\nEnter number of which cube root is needed: ");
    scanf("%f", &num);
    ans = cbrt(num); // pow(num,1/3);
    printf("\nThe answer is %f\n\n", ans);
}
int power()
{
    float base, exponent, ans;
    printf("\nEnter the base value: ");
    scanf("%f", &base);
    printf("\nEnter the exponent: ");
    scanf("%f", &exponent);
    ans = pow(base, exponent);
    printf("\n%f raised to power %f is %f\n\n", base, exponent, ans);
}
int log_calc()
{
    int choice;
    float num, ans;
    printf("\nChoose 1 for Logarithm (log).\t\t\t\t");
    printf("Choose 2 for natural log (ln):\n");
    printf("Choose 9 to return to previous menu.\t\t\t");
    printf("Choose 0 to exit\n\n");

    scanf("%d", &choice);
    switch (choice)
    {
    case 0:
        printf("\nExiting the calculator.........\n");
        exit(0);
    case 1:
        printf("\nEnter the number of which log is required: ");
        scanf("%f", &num);
        ans = log10(num);
        printf("\nThe log of %f is %f\n\n", num, ans);
        break;
    case 2:
        printf("\nEnter the number of which natural log is required: ");
        scanf("%f", &num);
        ans = log(num);
        printf("\nThe natural log of %f is %f\n\n", num, ans);
        break;
    case 9:
        select();
        break;
    }
}
int trigonometry()
{
    int user_choice;
    float angle, value;
    while (1)
    {
        printf("\nChoose 1 for Sin()\t\t\t\t\t");
        printf("Choose 2 for Cos()\n");
        printf("Choose 3 for Tan()\t\t\t\t\t");
        printf("Choose 4 for Cot()\n");
        printf("Choose 5 for Sec()\t\t\t\t\t");
        printf("Choose 6 for Cosec()\n");
        printf("Choose 9 to return to previous menu.\t\t\t");
        printf("Choose 0 to exit.\n\n");
        scanf("%d", &user_choice);

        switch (user_choice)
        {
        case 1:
            printf("\nEnter the value of angle in degree: ");
            scanf("%f", &angle);
            value = radian(angle);
            printf("\nSin(%f) = %f\n\n", angle, sin(value));
            break;
        case 2:
            printf("\nEnter the value of angle in degree: ");
            scanf("%f", &angle);
            value = radian(angle);
            printf("\nCos(%f) = %f\n\n", angle, cos(value));
            break;
        case 3:
            printf("\nEnter the value of angle in degree: ");
            scanf("%f", &angle);
            if (angle == 90 || angle == 270)
            {
                printf("\nTan(%f) = INFINITE\n\n", angle);
                break;
            }
            else
            {
                value = radian(angle);
                printf("\nTan(%f) = %f\n\n", angle, tan(value));
                break;
            }
        case 4:
            printf("\nEnter the value of angle in degree: ");
            scanf("%f", &angle);
            if (angle == 0 || angle == 180 || angle == 360)
            {
                printf("\nCot(%f) = INFINITE\n\n", angle);
                break;
            }
            else
            {
                value = radian(angle);
                printf("\nCot(%f) = %f\n\n", angle, (1 / tan(value)));
                break;
            }
        case 5:
            printf("\nEnter the value of angle in degree: ");
            scanf("%f", &angle);
            if (angle == 90 || angle == 270)
            {
                printf("\nSec(%f) = INFINITE\n\n", angle);
                break;
            }
            else
            {
                value = radian(angle);
                printf("\nSec(%f) = %f\n\n", angle, (1 / cos(value)));
                break;
            }
        case 6:
            printf("\nEnter the value of angle in degree: ");
            scanf("%f", &angle);
            if (angle == 0 || angle == 180 || angle == 360)
            {
                printf("\nCosec(%f) = INFINITE\n\n", angle);
                break;
            }
            else
            {
                value = radian(angle);
                printf("\nCosec(%f) = %f\n\n", angle, (1 / sin(value)));
                break;
            }
        case 9:
            select();
            break;
        case 0:
            printf("\nExiting the calculator.........\n");
            exit(0);
        default:
            printf("Wrong input entered!\nPlease enter again......\n\n");
            trigonometry();
            break;
        }
    }
}
int inverse_trigonometry()
{
    int user_choice;
    float angle, value;
    while (1)
    {
        printf("\nChoose 1 for Sin^-1()\t\t\t\t\t");
        printf("Choose 2 for Cos^-1()\n");
        printf("Choose 3 for Tan^-1()\t\t\t\t\t");
        printf("Choose 4 for Cot^-1()\n");
        printf("Choose 5 for Sec^-1()\t\t\t\t\t");
        printf("Choose 6 for Cosec^-1()\n");
        printf("Choose 9 to return to previous menu.\t\t\t");
        printf("Choose 0 to exit.\n\n");
        scanf("%d", &user_choice);

        switch (user_choice)
        {
        case 1:
            printf("\nEnter the value: ");
            scanf("%f", &value);
            printf("\nSin^-1(%f) = %f\n\n", value, asin(value) * 180 / M_PI);
            break;
        case 2:
            printf("\nEnter the value : ");
            scanf("%f", &value);
            printf("\nCos^-1(%f) = %f\n\n", value, acos(value) * 180 / M_PI);
            break;
        case 3:
            printf("\nEnter the value : ");
            scanf("%f", &value);
            printf("\nTan^-1(%f) = %f\n\n", value, atan(value) * 180 / M_PI);
            break;
        case 4:
            printf("\nEnter the value : ");
            scanf("%f", &value);
            printf("\nCot^-1(%f) = %f\n\n", value, (atan(1 / value)) * 180 / M_PI);
            break;
        case 5:
            printf("\nEnter the value : ");
            scanf("%f", &value);
            printf("\nSec^-1(%f) = %f\n\n", value, (acos(1 / value)) * 180 / M_PI);
            break;
        case 6:
            printf("\nEnter the value : ");
            scanf("%f", &value);
            printf("\nCosec^-1(%f) = %f\n\n", value, (asin(1 / value)) * 180 / M_PI);
            break;
        case 9:
            select();
            break;
        case 0:
            printf("\nExiting the calculator.........\n");
            exit(0);
        default:
            printf("Wrong input entered!\nPlease enter again......\n\n");
            trigonometry();
            break;
        }
    }
}