// Test Score : 610


#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,y;
	    cin>>n>>x>>y;
	   
	    
	       if (y % x == 0 && y <= n * x)
	       {
            cout << "YES" << endl;
        } else
        {
            cout << "NO" << endl;
        }
	    
	}
    return 0;
}
