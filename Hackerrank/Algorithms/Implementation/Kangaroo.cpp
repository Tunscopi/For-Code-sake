#include <iostream>

using namespace std;


int main(){
    double x1, x2, v1, v2;
    double n = 0.0;
    cin >> x1 >> v1 >> x2 >> v2;
    n = (x2-x1)/(v1-v2);
    
    if (x2 > x1 && v2 > v1) {   // Impossible catch-up condition
        cout << "NO" << endl;
    } else {
        if (n > 0 && n == int (n)) {  // Catch-up scenario after n (x2-x1/v1-v2) jumps. Check if it's a +ve integer
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    
    return 0;
}
