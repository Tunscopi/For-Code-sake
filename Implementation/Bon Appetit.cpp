
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n,k,b_charge,sum,fair_charge  = 0;
    cin >> n >> k;
    int amounts[n];

    // Check if overcharged
    // Read-in amounts 
        for (int i=0; i<n; i++) {
            cin >> amounts[i];
            sum += amounts[i];
        } 

        fair_charge = 0.5*(sum - amounts[k]);        
        
        cin >> b_charge;
        if (b_charge > fair_charge)  // overcharged 
            cout << b_charge - fair_charge << "\n";    
        else 
            cout << "Bon Appetit" << "\n"; 
        

    cout << "\n";
    return 0;
}

