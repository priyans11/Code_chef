// Chef Drinks Tea : 591


#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int x, y, z;
        cin >> x >> y >> z;
        
        if(x<=y)
        {
            cout<<z<<endl;
        }
        if(x>y)
        {
            if(x%y==0)
            {
                cout<<(x/y)*z<<endl;
            }
            if(x%y!=0)
            {
                cout<<((x/y)+1)*z<<endl;
            }
        }
    }

    return 0;
}