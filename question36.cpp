// Police and Thief : 639



#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    if(y>=x)
	    {
	        cout<<y-x<<endl;
	    }
	    if(y<x)
	    {
	        cout<<x-y<<endl;
	    }
	    
	}
    return 0;
}
