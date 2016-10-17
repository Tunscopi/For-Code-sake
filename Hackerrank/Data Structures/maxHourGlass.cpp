#include <iostream>
using namespace std;

int main() {
    const int dimension = 6;
    int arr[dimension][dimension];
    int count = 0, largestSum = 0, currSum = 0;

    // Read-in values
    
    for (int i=0; i<dimension; i++) {
        for (int j=0; j<dimension; j++) {
            cin >> arr[i][j];
        }
    }

    // Ensure 3 successive pairs in i,j direction exists (running it dimension-2 times to ensure we have 2 values left) 
    for (int i=0; i<dimension-2; i++) {
        for (int j=0; j<dimension-2; j++) {
                currSum = 0;

                for (int k = 0; k<3; k++) {
                    currSum += arr[i][j+k] + arr[i+2][j+k]; 
                }

                currSum += arr[i+1][j+1];

                if (currSum > largestSum) largestSum = currSum;
        }
    }

    cout << largestSum << "\n";

    return 0;
}

