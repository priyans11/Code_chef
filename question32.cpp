// Elections in Chefland : 604


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<endl;
        int count=0;
        for(int i=0;i<n;i++)
    {
        if(arr[i]>=x)
        {
            count++;
        }
        
    }
        cout<<count<<endl;
        
    }
    return 0;
}



