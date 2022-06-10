#include<iostream>
using namespace std;
int bin(int a[], int n, int b);
main()
{
    int n;
    cin>>n;
    int arr[100];
    for (int i = 1; i <= n; i++)
    {
    scanf("%d",&arr[i]);
    }
    int b; 
    cin>>b;
    cout<<bin(arr,n,b);
}
int bin(int a[], int n, int b)
{
   int s=0;
   int e=n;
   while(s<=e)
   {
       int mid=(s+e)/2;
       if(a[mid]==b)
       {
           return mid;
       }
       else if(a[mid]>b)
       {
           e=mid-1;
       }
       else
       {
           s=mid+1;
       }
       
   }
   return -1;
}