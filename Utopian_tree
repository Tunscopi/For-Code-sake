#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int no_testcases, tree_height;
    bool isSpring = 1;
    cin >> no_testcases;
    
    for(int a0 = 0; a0 < no_testcases; a0++){
        int no_cycles;
        cin >> no_cycles;
       tree_height = 1; isSpring = 1;  // Reset original tree height to 1m.
        
        while (no_cycles > 0){
            if (isSpring){ // Spring-effect
                tree_height *= 2;
                no_cycles--;
             }
            else{ // Summer-effect    
                tree_height++;
                no_cycles--;
            }
           isSpring = !isSpring;
        } 
       cout << tree_height << "\n";
    }
    return 0;
}
