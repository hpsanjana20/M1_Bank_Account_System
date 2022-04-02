#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>
#include"mainelectricity.h"


double Urban()
{
   
    int amount=0;
    B.unitsconsumed;
    if(B.unitsconsumed <=30 && B.unitsconsumed >= 0)
    {
        amount = B.unitsconsumed * 3.75; 
    }
    else if(B.unitsconsumed >= 31 && B.unitsconsumed <= 100)
    {
        amount = B.unitsconsumed * 4.75;
    }
    else if(B.unitsconsumed >= 101 && B.unitsconsumed <= 200)
    {
        amount = B.unitsconsumed * 6.25;
    }
    else
    {
        amount = B.unitsconsumed * 7.25;
    }

    return amount;

    
}

#if 0
int main()
{
    Urban();
    return 0;
}
#endif
