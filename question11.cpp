// Multivitamin Tablets : 376



#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(y>=3*x){
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}
