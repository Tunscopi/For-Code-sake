#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int no_tests, smallest_stick, i = 0;
    cin >> no_tests;
    vector<int> arr(no_tests);

    // Read in stick lengths
    for(int arr_i = 0;arr_i < no_tests;arr_i++){
       cin >> arr[arr_i];
    }
    
    // Heart of code
    while(arr.size() > 0){
        smallest_stick = *min_element(arr.begin(), arr.end());  
        cout << arr.size() << endl;
        i = 0;
        
        // Cut sticks
        while (i < arr.size()){
            arr[i] = arr[i] - smallest_stick;
            
            if (arr[i] == 0)
                arr.erase(arr.begin()+i);
            else 
                i++;
        }
    }
    
    return 0;
}
