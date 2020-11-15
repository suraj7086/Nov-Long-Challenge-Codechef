#include<bits/stdc++.h>
using namespace std;
int main()
{   int testcase,n;
    cin>>testcase;
    while(testcase>0)
    {
     int n,a,b,c,temp,diff;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     sort(arr,arr+n);
     cout<<endl;
     if(n==1)
     {
         temp=arr[0];
     }
     else if(n==2)
     {
         temp=arr[1];

     }
     else if(n==3)
     {
         a=arr[2];
         b=arr[1];
         c=arr[0];
         temp=a;
         diff=a-b;
         b=c;
         if(diff<b)
         {
             temp=temp+(b-diff);
         }
     }
     else{
         a=arr[3];
         b=arr[2];
         c=arr[1];
         temp=a;
         diff=a-b;
         b=c;
         if(diff>=b)
         {
             diff=diff-b;
             b=arr[0];
             if(diff<b){
                temp=temp+(b-diff);
             }

         }
         else if(diff<b)
         {   diff=b-diff;
             b=diff;
             temp=temp+diff;
             a=arr[0];
             if(diff<a){
                temp=temp+(a-diff);
             }
         }
     }
    cout<<temp<<endl;
    testcase--;
    }
    return 0;
}
