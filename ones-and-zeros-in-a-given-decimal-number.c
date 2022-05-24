/*

Module:
    ones_and_zeros_in_a_given_decimal_number.c

Function:
    Finding Binary zeros and Ones in a given decimal number.

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
#include<conio.h>
/****************************************************************************\
|
|    Code.
|
\****************************************************************************/

/*

Name: main()

Function:
    To compute Binary zeros and Ones in a given decimal number.
    and to diplay the output.

Definition:
    void main(
        void
        ) ;

Returns:
   it returns nothing

*/

void main(void)
    {
    int number;
    int countOne;
    int countZero;
    int bit;

    printf("\n");
    printf("*******************************************************\n");
    printf("This is binary-zeroes-and-ones-of-decimal-numbers v1.0.0\n");
    printf("*********************************************************\n");
    printf("\n");
    printf("It is used to find the number of binary zeroes and ones\n");
    printf("in a given decimal number.\n\n");


    countOne = 0;
    countZero = 0;

    /* Getting decimal input and printing it's Binary output. */
    printf("\nEnter a Decimal Number: ");
    scanf("%d", &number);

    printf("\nThe Binary value of your number is: ");

    /* Loop condition to print Binary Value. */
    for (bit = 31; bit >= 0; --bit)
        {
        int bin;

        bin = number & (1 << bit);

        if (bin == 0)
            printf("0");
        else
            printf("1");

        if(bit % 4 == 0 && bit != 0)
            printf("|");
        }

    printf("\n");

    /* While the given number is greater than zero, do the condition */
    while (number > 0)
        {
        /* comparing binary value of num with 1 using bitwise operator */
        if (number & 1 == 1)
            countOne++;                                 /* if true, increment one */
        else
            countZero++;                                /* if false increment zero */

        /* rightshifting the binary number by 1 digit */
        number = number >> 1;
        }

    /* Printing number of ones and zeros */
    printf("\nThe number of Ones is: %d\n", countOne);
    printf("The number of zeros is: %d\n", countZero);
    
    getch();
    }