// Minimum Coins : 390


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x<10)
        {
            cout<<x<<endl;
        }
        else {
            cout<<x%10<<endl;
        }
    }
    return 0;
}
