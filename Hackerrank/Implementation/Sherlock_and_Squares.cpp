#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int no_testcases;
    cin >> no_testcases;
    int A, B, sq_count;
    double root;
    
    for (int i = 0; i < no_testcases; i++){
        cin >> A >> B;
        sq_count = 0;   // Resets the square count value
        
        //1. 
        root = ceil (sqrt(A));
        while (root*root <= B){
            root++;
            sq_count++;
        }
        cout << sq_count << "\n";
    }   
    
    
    return 0;
}
