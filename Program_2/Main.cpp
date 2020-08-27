/*
    Problem Statement : Accept one number from user and check whether it is even or odd
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    BOOL iRet = FALSE;

    cout<<"Enter a Number\n";
    cin>>iNo;
 
    iRet = ChkEvenOdd(iNo);

    if(iRet==TRUE)
    {
        cout<<iNo<<" "<<"is even\n";
    } 
    else
    {
        cout<<iNo<<" "<<"is odd\n";
    }

    return 0;
}