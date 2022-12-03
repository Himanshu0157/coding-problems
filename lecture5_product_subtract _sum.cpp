#include<iostream>
using namespace std;

int answer(int n)
{
    int prod=1;
    int sum=0;
    
    while(n != 0)
    {
        int digit=n%10;
        prod=prod*digit;
        sum=sum+digit;
        n=n/10;
    }
    int solution=prod-sum;
    return solution;
}

int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    cout<<answer(n)<<endl;
}