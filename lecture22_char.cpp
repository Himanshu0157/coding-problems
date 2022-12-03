#include<iostream>
using namespace std;

char LowerCase(char ch)
{
    if((ch>='a' && ch<='z')   || (ch>='0' && ch<='9'))
    {
        return ch;
    }
    else
    {
        char temp=ch-'A'+'a';
        return temp;
    }
    return ch;
}

bool checkPalindrome(char name[], int n)
{
    int s=0; 
    int e=n-1;
    while(s<e)
    {
        if(LowerCase(name[s]) != LowerCase(name[e])) 
        {
            return 0;
        }
        else
        {
            s++;e--;
        }
    }
    return 1;
}

void Reverse(char name[] , int n)
{
    int s=0; 
    int e=n-1;
    while(s<e)
    {
        swap(name[s++],name[e--]);
    }

}

int getLength(char name[])
{
    int count=0;
    for(int i=0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}


int main()
{
    char name[20];

    cout<<"Enter your name:"<<endl;
    cin>>name;

    cout<<"Your name is:"; 
    cout<<name<<endl;
    int len=getLength(name);
    cout<<"Length:"<<len<<endl;
    Reverse(name,len);
    cout<<"your nmae is:";
    cout<<name<<endl;

    cout<<" IS palindrome or not:"<<checkPalindrome(name,len)<<endl;


    cout<<"Lowercase or not:"<<LowerCase('F')<<endl;
    cout<<"Lowercase or not:"<<LowerCase('b')<<endl;

    return 0;
}