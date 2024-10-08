// October Marathon : 319

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x;
    cin>>x;
    if(x>0 && x<3)
    {
        cout<<"gold";
    }
    else if(x>=3 && x<6)
    {
        cout<<"silver";
    }
    
    else if (x>=6)
    {
        cout<<"bronze";
    }
    return 0;
}
