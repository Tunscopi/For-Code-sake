//Problem        : Mug Color
//Language       : C++
//Compiled Using : g++
//Version        : GCC 4.9.1
//Input for your program will be provided from STDIN
//Print out all output from your program to STDOUT

#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include <set>

using namespace std;

int main() {
    int N;
    const int numColors = 5;
    cin >> N;
    
    string color;
    set<string> wrongColors;
    string allColors[numColors] = {"White", "Black", "Blue", "Red", "Yellow"};

    
    for (int i=0; i<N; i++) {
        cin >> color;
        wrongColors.insert(color); 
    }
    
    // for (auto item : wrongColors){
    //     cout << item;
    // }
    
    // print out correct unique mug color
    for (int i=0; i<numColors; i++) {
        if (wrongColors.find(allColors[i]) == wrongColors.end()) {   // item not found in wrongColors set
            cout << allColors[i];
            break;
        } 
    }
    
    return 0;
}
