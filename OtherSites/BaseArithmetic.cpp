//Problem        : Base Arithmetic
//Language       : C++
//Compiled Using : g++
//Version        : GCC 4.9.1
//Input for your program will be provided from STDIN
//Print out all output from your program to STDOUT

#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include <cctype>
#include <cmath>

using namespace std;

int main() {
    const int num_inputs = 2;
    char min_base;
    bool isNumdigit = true;
    int max_digit, max_letter, val;
    string num, alpha_num;
    long long b10_value[num_inputs];
    b10_value[0] = b10_value[1] = 0;
    
    
    int sentinel_count = 0;
    if (sentinel_count == num_inputs) {
        // check if input consists of only numerals
        cin >> num;
        
        // if numeric, then b/w base 2 - 16
        for (unsigned int i = 0; i < num.size(); i++) {
            if (std::isdigit(static_cast<unsigned char>(num[i]))) {}
            else {
                isNumdigit = false;
                break;
            }
        }       
        
        if (isNumdigit) {
            max_digit = (int)num[0];
            for (unsigned int i = 0; i< num.size(); i++) {
                if ((int)num[i] > max_digit) {
                    max_digit = (int)num[i];
                }
            }
            min_base = max_digit;
        }
        else {
            max_letter = alpha_num[0];
            for (unsigned int i=0; i<alpha_num.length(); i++) {
                if (alpha_num[i] > max_letter) {
                    max_letter = alpha_num[i];
                }
            }
            min_base = (int)max_letter - 55;
        }
        
        // Convert from min_base to base 10
        for(unsigned int i=0; i<num.size(); i++) {
            val = (int)num[0];
            if ((int)num[i] > 9) {
                val -= 55;
            }
            b10_value[sentinel_count] += val * pow(min_base,10);
        }
        sentinel_count--;
    }
    
    // Results
    std::cout << b10_value[0] << "\n" << b10_value[1] << "\n";
    std::cout << b10_value[0] + b10_value[1];
    
    return 0;
}
