//this is used to find (greatest common divisor) gcd or highest common factor (hcf)
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    while(a>0 && b>0)
    {
        if(a>b) a=a%b;
        else b=b%a;
    }
    if (a==0) return b;
    else return a;
}
int main()
{
    cout<<"gcd of 20 and 15 is "<<gcd(20,15);
    return 0;
}