#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int freeway_length, no_tests, max_size = 1;
    cin >> freeway_length >> no_tests;
    vector<int> width(freeway_length);
    vector <int>::iterator pos;
    
    // Read in service-lane widths
    for(int width_i = 0; width_i < freeway_length; width_i++){
       cin >> width[width_i];
    }
    
    for(int a0 = 0; a0 < no_tests; a0++){
        int i,j;
        cin >> i >> j;
        pos = width.begin();
        
        // Find min. width in range i,j
        max_size = *min_element(pos+i, pos+j+1);   // +1 so as to span from i to j inclusive!
        cout << max_size << "\n";
    }
    
    
    return 0;
}
