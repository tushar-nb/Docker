#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num,fact=1;
    cout<<"Enter the number to find the factorial: ";
    cin>>num;
    for(int i=num;i>0;i--)
    {
        // cout<<i;
        fact =fact * i;
    }
    cout<<"The factorial of "<<num<<" is: "<<fact;
    return 0;
}