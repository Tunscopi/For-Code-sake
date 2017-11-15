//Problem        : Volleyball Rotations
//Language       : C++11
//Compiled Using : g++
//Version        : GCC 4.9.1
//Input for your program will be provided from STDIN
//Print out all output from your program to STDOUT

#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

void performrotation();

int main() {
    int no_rotations, no_sidelines;
    string setter;
    string playernames[6];
    string firstplayer, lastplayer;
    bool firstplayerset = false;
    
    cin >> no_rotations;
    cin >> setter;
    
    for (int i=0; i<6; i++) {
        cin >> playernames[i];
    }
    cin >> no_sidelines;
    
    // read in sideline players
      //vector<string> sidelineplayers(no_sidelines);
    string sidelineplayers[20];
    for(int i = 0;i < no_sidelines; i++){
       cin >> sidelineplayers[i];
    }
    
    // perform rotations N times
    for (int i=0; i<no_rotations; i++){
        firstplayer = playernames[0];
        lastplayer = playernames[1];

        if (playernames[1] == setter) { // setter can't be removed
                playernames[0] = setter;
        } else {
                playernames[0] = sidelineplayers[0];
                //sidelineplayers.erase(sidelineplayers.begin()+0);
                for (int j = 0; j<no_sidelines; j++) {
                    sidelineplayers[j] = sidelineplayers[j+1];
                }
        }
        for (int i=1; i<5; i++) {
            playernames[i] = playernames[i+1];
        }
        playernames[5] = firstplayer;
        //sidelineplayers.push_back(lastplayer);
        sidelineplayers[no_sidelines-1] = lastplayer;
        
    for (int i=0; i<6; i++) {
        cout << playernames[i] << " ";
    }
    cout << "\n";
    }
    
    // Display final results
    for (int i=0; i<6; i++) {
        cout << playernames[i] << " ";
    }
    
    return 0;
}

