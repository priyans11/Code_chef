// Find maximum in an Array : 650


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	  
        int maxa=arr[0];
        for(int i=1;i<n;i++)
         {
             if(arr[i]>=maxa)
             {
                 maxa=arr[i];
             }
         }
	
	    cout<<maxa<<endl;
	}
	    return 0;
}
