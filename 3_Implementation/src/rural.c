#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>
#include"mainelectricity.h"

double Rural()
{
    int amount=0;
    B.unitsconsumed;
    if(B.unitsconsumed <=30 && B.unitsconsumed >= 0)
    {
        amount = B.unitsconsumed * 3.5; 
    }
    else if(B.unitsconsumed >= 31 && B.unitsconsumed <= 100)
    {
        amount = B.unitsconsumed * 4.5;
    }
    else if(B.unitsconsumed >= 101 && B.unitsconsumed <= 200)
    {
        amount = B.unitsconsumed * 5.8;
    }
    else
        {
        amount = B.unitsconsumed * 6.80;
    }
    return amount;
}

#if 0
int main()
{
    Rural();
    return 0;
}
#endif