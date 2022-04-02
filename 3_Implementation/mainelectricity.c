#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>
#include "mainelectricity.h"
#include "electricity.h"
double Urban();
double Rural();
float Amount;
void main()
{
    details();
    int option;
    do
        {
        printf("****Electricity Bill****\n");
        printf("Please enter your choice from below (1-3):\n");
        printf("1. Urban\n");
        printf("2. Rural\n");
        printf("3. EXIT\n");
        printf("Electricity Board Helpline: 8435 2340\n");
        printf("Enter your choice :\n");
        scanf("%d", &option);
        system("cls");
        switch (option)
        {
        case 1:
            Amount=Urban();
            printf("****Electricity Bill****\n\n");
            printf("Name : %s\n", B.name);
            printf("In Urban, your electricity bill is: %.2f\n", Amount);
            printf("Units you consumed per month: %d\n", B.unitsconsumed);
            break;
        case 2:
            Amount=Rural();
             printf("****Electricity Bill****\n\n");
             printf("Name : %s\n", B.name);
             printf("In Rural, your electricity bill is: %.2f\n", Amount);
             printf("Units you consumed per month: %d\n", B.unitsconsumed);
            break;
    default:
            printf("SORRY INVALID CHOICE!\n");
            printf("PLEASE CHOOSE FROM 1 or 2\n");
        }
        getch();
    } while (option != 3);
}

