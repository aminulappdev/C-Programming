#include<iostream>
using namespace std;

int large(int a,int b)
{
    if((a>= 20 and a<=30) and (b>= 20 and b<=30))
    {
        if(a>=b)
        {
            return a;
        }
        else if(b>a)
        {
            return b;
        }
    }

    else
    {
        return 0 ;
    }
}

int main()
{
   cout<<large(25,30)<<endl;
   cout<<large(10,30)<<endl;
   cout<<large(25,24)<<endl;
   cout<<large(24,24)<<endl;
}

