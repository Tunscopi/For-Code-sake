#include <iostream>
#include <vector>
using namespace std;

int main() {
    int no_values;
    cin >> no_values;
    vector <int> arr(no_values);

    for (int i=0; i<no_values; i++) {
        cin >> arr[i];
    }

    for (int i=no_values-1; i>=0; i--) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
