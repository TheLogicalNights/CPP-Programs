///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkEvenOdd
// Parameters    : Integer
// Return Value  : None
// Description   : It takes one integer as input and check whether it is even or odd
// Author        : Swapnil Ramesh Adhav
// Date          : 27th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int ChkEvenOdd(int iValue)
{
    if((iValue%2)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}