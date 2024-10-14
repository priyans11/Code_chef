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
	    float z=1.07*x;
	    if(z>=y)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	}
    return 0;
}
