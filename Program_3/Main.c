/*
    Problem Statement : Accept two numbers from user and return there division
*/

#include "Header.h"

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    float iDiv = 0.0f;
    BOOL bRet = FALSE;

    cout<<"Enter first number"<<endl;
    cin>>iNo1;
    cout<<"Enter Second number"<<endl;
    cin>>iNo2;

    bRet = Division(iNo1,iNo2,&iDiv);

    if(bRet==TRUE)
    {
        cout<<"The Division is "<<iDiv<<endl;
    }
    else
    {
        cout<<"Invalid Input"<<endl;
    }

    return 0;
}