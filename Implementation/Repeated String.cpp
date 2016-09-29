
#include <iostream>
#include <string>
using namespace std;

int main() {
    int a_count=0;
    unsigned long int n, result;
    string s;    
    cin >> s >> n;

    if (s.length() == 1 && s=="a") 
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
