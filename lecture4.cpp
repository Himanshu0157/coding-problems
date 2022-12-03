      //PATTERN
#include<iostream>
using namespace std;

/*
int main()
{
        //  ****
        //  ****
        //  ****
        //  **** 
    int n;
    cin>>n;

    int i=1;
    while(i<=n) 
    {
        int j=1;
        while(j<=n)
        {
            cout<<" * ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }   
}
*/
/*
int main()
{

                                         // 123
                                         // 123
                                         // 123
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}*/

/*
int main()
{                                            
       // 321
       // 321
       // 321
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<n-j+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/

/*
      //123
      //456
      //789
int main()
{
    int n;
    cin>>n;

    int i=1;
    int count=1;
    while(i<=n)
    {
        int j=1;        
        while(j<=n)
        {            
            cout<<count <<" ";
            j++;
            count=count+1;
        }        
        cout<<endl;
        i=i+1;
    }    
}
*/
/*
   //1
   //22
   //333
   //4444
int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;        
        while(j<=i)
        {            
            cout<<i;
            j++;
        }        
        cout<<endl;
        i=i+1;
    }    
}
*/
/*
    //1
    //23
    //456
    //78910
int main()
{
    int n;
    cin>>n;

    int i=1;
    int count=i;
    while(i<=n)
    {
        int j=1;        
        while(j<=i)
        {            
            cout<<count<<" ";            
            j++;
            count++;
        }            
        cout<<endl;
        i=i+1;
    }    
}
*/
/*
   //*
   //**
   //***
   //****
int main()
{
    int n;
    cin>>n;

    int i=1; 
    while(i<=n)
    {
        int j=1;        
        while(j<=i)
        {            
            cout<< '*';            
            j++;
        }            
        cout<<endl;
        i=i+1;
    }    
}
*/
/*
    //1
    //23
    //345
    //4567
int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {        
        int j=1;
        int value=i+j-1;              //USE 'i' AT PLACE IN VALUE
        while(j<=i)
        {            
            cout<<value;    
            value=value+1;
            j=j+1;
        }            
        cout<<endl;
        i=i+1;
    }    
}
*/
/*
         //1
         //21
         //321
         //4321
int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {        
        int j=1;
        int value=i-j+1;
        while(j<=i)
        {            
            cout<<value;            //directly USE"i-j+1"
            value=value-1;           //not use if we use directly "i-j+1"
            j=j+1;
        }            
        cout<<endl;
        i=i+1;
    }    
}
*/
/*
    //AAAA
    //BBBB
    //CCCC
    //DDDD
int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {        
        int j=1;
        char ch='A'+i-1;              
        while(j<=n)
        {            
            cout<<ch;    
            j=j+1;
        }            
        cout<<endl;
        i=i+1;
    }    
}
*/
/*
   //ABCD
   //ABCD
   //ABCD
   //ABCD
int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {        
        int j=1;                      
        while(j<=n)
        {        
            char ch='A'+j-1;    
            cout<<ch;    
            j=j+1;
        }            
        cout<<endl;
        i=i+1;
    }    
}
*/
/*
       //ABCD
       //EFGH
       //IJKL
       //MNOP
int main()
{
    int n;
    cin>>n;

    int i=1;
    char ch='A';
    while(i<=n)
    {        
        int j=1;        
        while(j<=n)
        {                        
            cout<<ch <<" ";
            ch=ch+1;
            j++;
        }        
        cout<<endl;
        i=i+1;
    }    
}
*/
/*
   //ABC
   //BCD
   //CDE
int main()
{
    int n;
    cin>>n;

    int i=1;    
    while(i<=n)
    {        
        int j=1;                
        while(j<=n)
        {          
            char ch='A'+i+j-2;              
            cout<<ch <<" ";
            j++;
        }        
        cout<<endl;
        i=i+1;
    }    
}
*/
/*
   //A
   //BB
   //CCC
   //DDDD
int main()
{
    int n;
    cin>>n;

    int i=1;    
    while(i<=n)
    {        
        int j=1;                
        while(j<=i)
        {          
            char ch='A'+i-1;              
            cout<<ch <<" ";
            j++;
        }        
        cout<<endl;
        i=i+1;
    }    
}
*/
/*
   //A
   //BC
   //DEF
   //GHIJ 
int main()
{
    int n;
    cin>>n;

    int i=1;
    char ch='A';
    while(i<=n)
    {        
        int j=1;        
        while(j<=i)
        {                        
            cout<<ch <<" ";
            ch=ch+1;
            j++;
        }        
        cout<<endl;
        i=i+1;
    }    
}
*/
/*
   //A
   //BC
   //CDE
   //DEFG
int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        char ch ='A'+i-1;
        int j=1;
        while(j<=i)
        {            
            cout<<ch;
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/
/*
   //4
   //34
   //234
   //1234
int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int value=n-i+1;
        int j=1;
        while(j<=i)
        {
            cout<<value;
            value=value+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/
/*
    //D
    //CD
    //BCD
    //ABCD
int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        char value='A'+n-i;
        int j=1;
        while(j<=i)
        {
            cout<<value;
            value=value+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/
/*
    //    *
    //   **
    //  ***
    // ****
    //*****
int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        // SPACE
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        //STAR
        int j=1;

        while(j<=i)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/
/*
       //****
       //***
       //**
       //*
int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int star=n-i+1;
        int j=1;
        while(j<=i)
        {
            
            while(star)
            {
                cout<<'*';
                star=star-1;
                j=j+1;
            }        
              
        }
        cout<<endl;
        i=i+1;
    }
}
*/
/*
    //*****
    // ****
    //  ***
    //   **
    //    *
int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        // SPACE
        int space=i-1;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        //STAR
        int star=n-i+1;
        int j=1;

        while(star)
        {
            cout<<"*";
            star=star-1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/
/*
    //11111
    // 2222
    //  333
    //   44
    //    5
int main()
{
    int n;
    cin>>n;

    int i=1;
    
    while(i<=n)
    {
        // SPACE
        int space=i-1;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        //number
        
        int j=1;
        int value=n-i+1;
        while (value)
        {
            cout<<i; 
            value=value-1;           
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }
}
*/
/*
    //     1
    //    22
    //   333
    //  4444
    // 55555
    //666666
int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        //SPACE
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        //NUMBER
        int j=1;
        int value=i;
        while(j<=i)
        {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/
/*
      //1234
      // 234
      //  34
      //   4
int main()
{
    int n;
    cin>>n;
          //ACCORDING TO WHILE LOOP
    int i=1;
    while(i<=n)
    {
        //SPACE
        int space=i-1;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        //number
        int j=i;
        while(j<=n)
        {            
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
                  // USING FOR LOOP
    for(int i=0; i < n; i++)
    {
        // spaces
        for(int j = 0; j < i; j++){
            cout << " ";
        }

        // number
        for(int j = i+1; j <= n; j++){
            cout << j;
        }
        cout << endl;
    }
}
*/
/*
    //    1
    //   23
    //  456
    // 78910
int main()
{
    int n;
    cin>>n;

    int i=1;
    int count =1;
    while(i<=n)
    {
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        int j=1;        
        while(j<=i)
        {            
            cout<<count<<"";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}
*/
/*
      //   1
      //  121
      // 12321
      //1234321
int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        int j=1;        
        while(j<=i)
        {            
            cout<<j;
            j=j+1;
        }
        int k=1;
        int value=i-1;
        while(k<i)
        {            
            cout<<value;
            value =value-1;
            k=k+1;
        }
        cout<<endl;
        i=i+1;
    }

}
*/
/*
     //1234554321
     //1234**4321
     //123****321
     //12******21
     //1********1
int main()
{
    int n;
    cin>>n;

    int i=1;
    
    while(i<=n)
    {
        //first pattern
        int j=1;
        int val=j;
        while(j<=n-i+1)
        {
            cout<<val;
            val=val+1;
            j=j+1;
        }

        // first star 
        int fstar=i-1;
        while(fstar)
        {
            cout<<"*";
            fstar=fstar-1;
        }


        // secondspace
        int star=i-1;
        while(star)
        {
            cout<<"*";
            star=star-1;
        }

        // second pattern 
        int k=i;
        int value=n-i+1;
        while(k<=n)
        {
            cout<<value;
            value=value-1;
            k=k+1;
        }

        cout<<endl;
        i=i+1;
    }
}
*/

       //1*******1
       //12*****21
       //123***321
       //1234*4321
       //123454321
int main()
{
    int n;
    cin>>n;
    
    int i=1;
    while(i<=n)
    {
        //first pattern
        int j=1;
        while(j<=i)
        {
            cout<<j;
            j=j+1;
        }

        //star
        int star=n-i;
        while(star)
        {
            cout<<"*";
            star=star-1;
        }

        //star2
        int stare=n-i-1;
        while(stare>0)
        {
            cout<<"*";
            stare=stare-1;
        }
        
        //second pattern
        int k=i;
        while(k>0)
        {
            if(k != n)
            {
                cout<<k;
                
            }
            k=k-1;
        }
        cout<<endl;
        i=i+1;
    }
}
