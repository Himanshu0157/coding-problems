#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n:";
    cin>>n;

    bool isprime=1;                  //IF CONDITION IS TRUE THEN NUMBER IS NOT PRIME
    for(int i=2; i<n; i++)
    {
       if(n%i==0)
       {
            isprime=0;
            break;
       }
    }
     if(isprime==0)
        {
            cout<<"IS NOT PRIME"<<endl;
        }
        else{
            cout<<"IS PRIME"<<endl;
        }
}