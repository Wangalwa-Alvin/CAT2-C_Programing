/*
Name: Wangalwa Alvin
Reg no.: PA106/G/28804/25
Description: Program to calculate gross pay, taxes, and net pay.
*/

#include <stdio.h>

int main()
{
    float hours_worked;
    float hourly_wage;
    float gross_pay;
    float taxes;
    float net_pay;

    printf("Please enter the number of hours worked: ");
    scanf("%f", &hours_worked);

    printf("Please enter your hourly wage: ");
    scanf("%f", &hourly_wage);

    // Calculate gross pay
    if (hours_worked <= 40)
        gross_pay = hours_worked * hourly_wage;
    else
        gross_pay = (40 * hourly_wage) + ((hours_worked - 40) * hourly_wage * 1.5);

    // Calculate taxes
    if (gross_pay <= 600)
        taxes = gross_pay * 0.15;
    else
        taxes = (600 * 0.15) + ((gross_pay - 600) * 0.2);

    // Calculate net pay
    net_pay = gross_pay - taxes;

    // Output results
    printf("\nYour Gross Pay is: %.2f\n", gross_pay);
    printf("Your Taxes are: %.2f\n", taxes);
    printf("Your Net Pay is: %.2f\n", net_pay);

    return 0;
}