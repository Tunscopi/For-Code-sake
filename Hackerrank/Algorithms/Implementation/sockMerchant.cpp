#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int noOfSocks = 0, noOfMatchingPairs = 0;
    cin >> noOfSocks;
    int sockColors[noOfSocks];
    vector <int> matchingPair;
    bool matchFound = false;;

    for (int i=0; i<noOfSocks; i++) {
        cin >> sockColors[i];
        
        for (int j=0; j<matchingPair.size(); j++) {
            if (sockColors[i] == matchingPair[j]) { // match found
                matchingPair.erase(matchingPair.begin()+j);
                noOfMatchingPairs++;
                matchFound = true;
                break;
            }
        }
        if (!matchFound)
            matchingPair.push_back(sockColors[i]);
        else 
            matchFound = false;
    }

   cout << noOfMatchingPairs << endl; 
   
   return 0;
}
