//Problem        : Sum Sum Cryptography
//Language       : C++
//Compiled Using : g++
//Version        : GCC 4.9.1
//Input for your program will be provided from STDIN
//Print out all output from your program to STDOUT

#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int Bobsno;
    int final_i, final_j, final_k;
    int final_sum = 0;
    cin >> Bobsno;
    vector<int> values(1);
    for(int i = 0;i < 1; i++){
       values[i] = 0;
    }
    
    int upper_bound = ceil (sqrt(Bobsno/3));
    int count = 0;

    for (int i = 0; i < upper_bound; i++) {
        int i2 = i * i;
        int j = i;
        int k = floor (sqrt(Bobsno-i2));

      while (j <= k) {
        int j2 = j * j;
        int k2 = k * k;
        int sum = i2 + j2 + k2;

        if (sum < Bobsno) {
            j ++;
        } else if (sum > Bobsno) {
            k --;
        } else {
            values.push_back(i);
            values.push_back(j);
            values.push_back(k);
            count ++;
            j ++;
        }
    }
}

    int final = 0;
    for(int i = 0;i < values.size(); i++){
       final += values[i];
    }
    cout << final;
    return 0;
}
