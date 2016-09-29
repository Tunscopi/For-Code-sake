#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int no_tests;
    cin >> no_tests;
    
    for(int a0 = 0; a0 < no_tests; a0++){
        int R, C, r, c, Pattern_start = 0;
        cin >> R >> C;
        
        // Read in Grid and Pattern matrices
        vector<int> G(R);
        for(int G_i = 0;G_i < R;G_i++){
           cin >> G[G_i];
        }
        cin >> r >> c;
        vector<int> P(r);
        for(int P_i = 0;P_i < r;P_i++){
           cin >> P[P_i];
        }
        
        // Grid search
        // Search Grid for first Pattern element
        std::vector<int>::iterator it_start;
        it_start = find(G.begin(), G.end(), P[0]);  // efficiency/performance of find algorithm unknown
        
        if (it_start != G.end())  {  // Determine start pos./index on row
            Pattern_start = (it_start - G.begin())%c;
            cout << Pattern_start << "\n";  //dd
            
            // Loop for rest of Pattern
            for (int i = 0; i < r; i++){
                // Confirm Pattern row elements
                for (int j = 0; j < c; j++){
                    if (P[j] != G[j+Pattern_start+(r*c)]) { cout << P[j] << "\n"; goto NoPattern;}    // dd, Breaking condition
                } 
              cout << "YES\n";
            }
        }
        else
        NoPattern:
        cout << "NO\n";        
    }
    
    return 0;
}
