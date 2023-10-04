#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        
        if (s[1]=='b') {
            cout << "YES" << endl;
        }
    
         
                else if  ((s[0] == 'a' && s[1] == 'c' ) ||
                 (s[0] == 'b' && s[1] == 'a')) {
            cout << "YES" << endl;
        }
        
        else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}