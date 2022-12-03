#include<iostream>
#include<math.h>
using namespace std;

bool isPowerOfTwo(int n)               //by brute force method
{
    for(int i=0; i<=30; i++)
    {
        int ans=pow(2,i);
        if(ans==n)
        {
            return true;
        }
        if(ans<INT_MAX/2)
        {
            ans=ans*2;
        }
    }
    
}


// bool isPowerOfTwo(int n)               //by brute force method
// {
//     for(int i=0; i<=30; i++)
//     {
//         int ans=pow(2,i);
//         if(ans==n)
//         {
//             return true;
//         }
//         return false;
//     }
// }

int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    bool pwr=isPowerOfTwo(n);
    cout<<pwr<<endl;
    
}


//NOT RIGHT ANSWER
