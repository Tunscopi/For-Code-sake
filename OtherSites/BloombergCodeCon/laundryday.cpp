//Problem        : Laundry Day
//Language       : C++11
//Compiled Using : g++
//Version        : GCC 4.9.1
//Input for your program will be provided from STDIN
//Print out all output from your program to STDOUT

#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include <map>
#include <math.h>

using namespace std;

int main() {
    string item;
    int temp;
    map<string, int> articles;  // not a sequence container, hence, items are in sorted lexicographical order 
    
    while(getline(cin, item)) {
        if (articles.find(item) == articles.end()) {
            articles[item] = 1;    // insert into map
        } 
        else  {
            // increment count
            temp = articles[item];
            articles[item] = temp + 1;
        }
    }
    
    
    // print nicely
    for (auto& singleItem : articles) {
        if (singleItem.first.find("sock") != string::npos) { // sock
            if (singleItem.second > 1) {
                for (int i=0; i<floor(singleItem.second/2); i++) {
                 cout << "1|" << singleItem.first << "\n";   
                }
                //cout << floor(singleItem.second/2) << "|" << singleItem.first << "\n";   
                cout << "0|" << singleItem.first << "\n";
            } 
            else {
                cout << "0|" << singleItem.first << "\n";
            }
        }
        else {
                cout << singleItem.second << "|" << singleItem.first << "\n";
        }
    }
    
    
    return 0;
}
