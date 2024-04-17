#include<iostream>
using namespace std;

bool large(string s)
{
    int coun = 0;
    for(int i = 0 ; i<= s.length(); i++)
    {
        if(s[i] == 'z')
        {
            coun ++;
        }
    }

    if(coun>=2 and coun<=4)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
   cout<<large("frizz")<<endl;
   cout<<large("false")<<endl;
   cout<<large("zrizz")<<endl;

}
