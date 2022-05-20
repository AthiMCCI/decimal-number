/*
Module: Binary-Zeros-Ones-of-Decimal-Number.c

Function:
    Finding Binary zeros and Ones in a given decimal  number.

Copyright notice:
    This file copyright (C) 2022 by
    MCCI Corporation
    3520 Krums Corners Road
    Ithaca, NY 14850
    An unpublished work. All rights reserved.
    This file is proprietary information, and may not be disclosed or
    copied without the prior permission of MCCI Corporation.

Author:
    Athisankar, MCCI Corporation   May 2022
*/

#include<stdio.h>

/****************************************************************************\
|
|   Code.
|
\****************************************************************************/

/*
Name: main()

Function:
    To compute Binary zeros and Ones in a given decimal  number.
 and to diplay the output.

Definition:
    Void Function();

Returns:
    Functions returning type: Void.
*/

void function()
    {
    int n;

    printf("***************************************************************\n");
    printf("THE NUMBER OF ONES AND ZEROS IN A GIVEN DECIMAL NUMBER v1.0.0\n");
    printf("***************************************************************\n");
    printf("\n");
    printf("IT IS USED TO FIND NUMBER OF ZEROS AND ONES IN BINARY \n");
    printf("IN A GIVEN DECIMAL NUMBER \n");

    printf("ENTER A NUMBER: \n");
    scanf("%d",&n);

    int count0=0,count1=1,bi[100],m=0;

    // WHILE THE GIVEN NUMBER IS GREATER THAN ZERO,DO THE CONTITION:
    while(n>0)
        {
        if(n&1)
            {
            bi[m++]=1;
            count1++;
            }
        else
            {
            bi[m++]=0;
            count0++;
            }
        // RIGHTSHIFTING THE BUNARY VALUE BY 1 digit
        n=n>>1;
        }

    printf("Binary = ");

    for(int i=m-1;i>=0;i--)
        {
        printf("%d",bi[i]);
        }

    printf("\n");
    printf("1's count = %d\n",count1);
    printf("0's count = %d\n",count0);
    }

int main()
    {
    function();

    return 0;
    }