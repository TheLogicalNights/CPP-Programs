///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Division
// Parameters    : Integer,Integer,Float *
// Return Value  : BOOLEAN
// Description   : it takes two integers as input and calculate the division of that integers
// Author        : Swapnil Ramesh Adhav
// Date          : 29th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL Division(int iValue1,int iValue2,float *pDiv)
{
    float iDiv = 0.0f;
    if(iValue2==0)
    {
        return FALSE;
    }
    if(iValue1<0)
    {
        iValue1 = -iValue1;
    }
    if(iValue2<0)
    {
        iValue2 = -iValue2;
    }

    iDiv = (float)iValue1 / iValue2;
    *pDiv = iDiv;

    return TRUE;
}