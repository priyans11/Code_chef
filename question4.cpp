// Chairs Requirement : 305

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
    for(int i=0;i<t;i++)
    {
        int x,y;
    
        cin>>x>>y;
        if(x<=y)
        {
            cout<<"0"<<endl;
        
        }
        else
        {
            cout<<x-y<<endl;
        }
  
    }
    return 0;
}
