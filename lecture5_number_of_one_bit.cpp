#include<iostream>
using namespace std;

int BitCount(int n)     //hammming weight
{
    int count=0;
    while(n != 0)
    {
        if(n&1)
        {
            count++;
        }
        n=n>>1;
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    
    cout<<BitCount(n)<<endl;
}
     //NOT CORRECT ANSWER