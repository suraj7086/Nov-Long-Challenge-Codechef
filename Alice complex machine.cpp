#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin>>testcase;
    while(testcase!=0){
        {
            int n;
            cin>>n;
            int arr[n];
            int val[n];
            for(int i=0,j=n;i<n;i++){
                cin>>arr[i];
                val[i]=j+1;
                j--;
            }
            for(int i=0;i<n;i++)
            {
                cout<<val[--arr[i]]<<" ";

            }
            cout<<endl;

        }
        testcase--;
    }

}
