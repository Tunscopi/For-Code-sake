#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string.h>
using namespace std;

int main(){
    string time, military_time, military_time1, hold;
    stringstream converter;
    int military_hr;
    cin >> time;
    
    military_time = time.substr(0,8);
    if (time.substr(8,2) == "AM"){ 
     if (military_time.substr(0,2) == "12"){  
         military_time.replace(0,2,"00");
     }
    } 
    else {// PM 
        if (military_time.substr(0,2) == "12");   // Leave the same if PM time starts with "12"
        else{
        military_time1 = military_time.substr(0,2);
        military_hr = atoi(military_time1.c_str());  // convert string to int, add 12 and re-convert
        military_hr += 12;
        converter << military_hr;
        hold = converter.str();
            military_time.replace(0,2,hold);}
    }
    cout << military_time;
    return 0;
}
