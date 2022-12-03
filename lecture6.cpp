#include<iostream>
#include<math.h>
using namespace std;

// int main()
// {
//                     //decimal to binary && 21 to 10101
//     int n;
//     cin>>n;

//     int i=0;
//     int ans=0;

//     while(n!=0)
//     {
//         int bit=n&1;

//         ans=(bit*pow(10,i))+ans;

//         n=n>>1;
//         i++;
//     }
//     cout<<"answer"<<ans<<endl;
//     return 0;
// }



int main()
{
                      //binary to decimal  &&  10101 to 21
    int n;
    cin>>n;

    int i=0;
    int ans=0;

    while(n!=0)
    {
        
        // int bit=n&1;                           //BOTH WORK AS SAME HEHAHEHAHEHA
        // if(bit==1)
        // {
        //     ans=ans+pow(2,i);
        // }
        
        int bit=n%10;
        if(bit==1)
        {
            ans=(bit*pow(2,i))+ans;
        }
        n=n/10;
        i++;
    }
    cout<<ans<<endl;
}
