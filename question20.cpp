// First and Last Digit : 461


#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        
    int N;
    
    cin >> N;

    
    N = abs(N);

    
    string numStr = to_string(N);
    
    
    int firstDigit = numStr[0] - '0';
    
    
    int lastDigit = numStr[numStr.length() - 1] - '0';
    
    
    int sum = firstDigit + lastDigit;

    cout<< sum << endl;

    }
    return 0;
}
