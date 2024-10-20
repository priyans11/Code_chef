// Determine the Winner : 626





#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int maxp=max(a,b);
	    int maxq=max(c,d);
	    if(maxp>maxq)
	    {
	        cout<<"Q"<<endl;
	    }
	    if(maxp<maxq)
	    {
	        cout<<"P"<<endl;
	    }
	    if(maxp==maxq)
	    {
	        cout<<"TIE"<<endl;
	    }
	    
	}
	
    return 0;
}
