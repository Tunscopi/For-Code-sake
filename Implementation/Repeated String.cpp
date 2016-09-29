
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, a_count=0, result;
    string s;    
    cin >> s >> n;

    if (s.length() == 1) 
        cout << n;    
    else {    
        // Count no. of a's in single word occurence
        for (int i=0; i<s.length(); i++) {
            if (s[i] == 'a') a_count++;
        } 

        result = n*a_count/s.length();

        if (n%s.length() > 0) {
            for (int i=0;i<n%s.length();i++) {
                if (s[i] == 'a') result++; 
            }
        }

        cout << result;
    }
    
   cout << "\n"; 
   return 0; 
}
