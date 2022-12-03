#include<iostream>
using namespace std;

int ReverseNumber(int x)
{
    int i=0;
    int ans=0;

    while(x!=0)
    {
        int digit=x%10;
        if((ans>INT_MAX/10) || (ans<INT_MIN/10))
        {
            return 0;
        }
        ans=(ans*10)+digit;
        x=x/10;
    }
    return ans;
}

int main()
{    
    int n;
    cout<<" Enter the value of n:";
    cin>>n;

    int k;
    cout<<" Enter the value of k:";
    cin>>k;

    cout<<ReverseNumber(n)<<endl;
    cout<<ReverseNumber(k)<<endl;

    return 0;
}