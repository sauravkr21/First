#include<iostream>
using namespace std;
main()
{
    int a;
    cin>>a;
    int i;
    cin>>i;
    int m=~(1<<i);
   cout<<a & m;
   cout>>"thank you";
}