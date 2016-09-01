#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string.h>
using namespace std;

int main(){
    int no_tests, div_count = 0;
    cin >> no_tests;
    stringstream converter;
    string num_string, temp; 
        
    for(int a0 = 0; a0 < no_tests; a0++){
        int num, digit;
        cin >> num;
        
        div_count = 0;  // Reset the div_count value
        converter << num;
      
        num_string = converter.str();  // convert number to string
        
       for (int i = 0; i < num_string.length(); i++){
            // Obtain individual digits in num_string
            temp = num_string[i]; 
            digit = atoi(temp.c_str());
            
            // Perform divisibility test
            if (digit != 0){
                if (num % digit == 0) div_count++;
            }
       }
       cout << div_count << "\n";
       converter.clear();
       converter.str("");
    }
    return 0;
}
