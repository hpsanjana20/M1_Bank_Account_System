#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>
#include"mainelectricity.h"

void details()
{
    printf("Enter your  area name:\n");
    scanf("%s", &B.area);
    printf("Enter your  name:\n");
    scanf("%s", &B.name);
    printf("Enter your Meter Number:\n");
    scanf("%d", &B.meternumber);
    printf("Enter units consumed:\n");
    scanf("%d", &B.unitsconsumed);
    printf("Enter email ID :\n");
    scanf("%s", &B.email);
    printf("Enter the permanent address :\n");
    scanf("%s", &B.address);
    printf("Enter the phone number : \n");
    scanf("%s", &B.phonenumber);
}

