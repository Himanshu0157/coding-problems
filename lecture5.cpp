#include<iostream>
using namespace std;
/*
int main()
{
                //bitwice operator
    int a=3;
    int b=5;

    cout<<" a&b "<<(a&b)<<endl;
    cout<<" ~a "<<~a<<endl;
    cout<<" a^b "<<(a^b)<<endl;
    cout<<" a|b "<<(a|b)<<endl;

    cout<< (17>>1)<<endl;
    cout<< (17>>2)<<endl;
    cout<< (19<<2)<<endl;
    cout<< (21<<2)<<endl;


    int i=5;

    cout<< (++i)<<endl;
    cout<< (i++)<<endl;
    cout<< (i--)<<endl;
    cout<< (--i)<<endl;
}
*/
/*
//    /SUM OF NUMBER
int main()
{
    int n;
    cout<<" Enter the value of n:";
    cin>>n;

    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<sum<<endl;
}
*/
//fibboniche serries
int main()
{
    int n;
    cout<<"enter the value of n:";
    cin>>n;

    int a=0;
    int b=1;

    cout<<a<<" "<<b<<" ]";

    for(int i=0; i<n; i++)
    {
        int nextNumber =a+b;
        cout<<nextNumber<<" ";

        a=b;
        b=nextNumber;
    }
}