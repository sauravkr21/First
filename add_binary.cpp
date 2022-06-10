#include<iostream>
#include<math.h>
using namespace std;
int deci(int x);
void bin(int a);
int main()
{
    int a;
    int b;
    cin>>a>>b;
    int add = deci(a)+deci(b);
    bin(add);
    
}
int deci(int x)
{
    int ans=0;
    int l= log10(x)+1;
    for (int i = 0; i <l+1; i++)
    {
        int b=x%10;
        x=x/10;
        ans+=b*pow(2,i);
    }
    return ans;
}
void bin(int a)
{
    int b[16];
    for (int i = 0; i<16; i++)
    {
        b[i]=a%2;
        a=a/2;
    }
    for ( int i = 15; i >=0; i--)
    {
        cout<<b[i];
    }
    
    
}