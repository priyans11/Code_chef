// Rating Improvement : 400

#include <iostream>
using namespace std;

int main() {
    // your code goes her
    int T;
    cin >> T; 

    while (T--) {
        int X, Y;
        cin >> X >> Y; 

    
        if (X <= Y && Y <= X + 200) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
