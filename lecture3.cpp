#include<iostream>
using namespace std;

      // Question 1 ,LOWWER ,UPPER,NUMERIC CASE
/*
int main()
{
    char ch;
    cin>>ch;
    if(ch>='a'&& ch<='z')
    cout<<"this is lower case"<<endl;

    else if(ch>='A' && ch<='Z')
    cout<<"this is upper case"<<endl;

    else
    cout<<"this is numeric"<<endl;
    return 0;

}
*/
           //SUM OF ALL EVEN NUMBER 
/*    
int main()
{
    int n;
    cin>>n;

    int i=2;
    int sum=0;

    while(i<=n)
    {
        sum=sum+i;
        i=i+2;
    }
    cout<<sum<<endl;
    
    return 0;
}
*/


          // PRIME NUMBER or not
int main()
{
    int n;
    cin>>n;

    int i=2;

    while(i<n)
    {
        if(n%i==0)
        {
            cout<<" Number is not prime"<< i <<endl;
        }
        else
        {
            cout<<"Number is prime"<< i <<endl;
        }
        i=i+1;
    }
    return 0;
}