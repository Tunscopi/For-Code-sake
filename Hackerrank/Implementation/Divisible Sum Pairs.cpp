#include <vector>
#include <iostream>

using namespace std;


int main(){
    int n, k;
    int count = 0;
    cin >> n >> k;
    vector<int> a(n);
    
    // Read-in array elements
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    
    // Perform operation
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++){
            if ((a[i] + a[j])%k == 0)  {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}
