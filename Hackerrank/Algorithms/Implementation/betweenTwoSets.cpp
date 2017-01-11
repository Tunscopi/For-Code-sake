#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, m, a_largest = INT_MIN, b_smallest = INT_MAX;
    int num_btw, count =0;
    bool factor = true;
    cin >> n >> m;
    int a[n], b[m];

    // Read-in data
    for (int i=0; i<n; i++){
        cin >> a[i];
        if (a[i] > a_largest) a_largest = a[i];
    }
    for (int i=0; i<m; i++){
        cin >> b[i];
        if (b[i] < b_smallest) b_smallest = b[i];
    }

    num_btw = a_largest;
    //Get LCM of a
    while (num_btw <= b_smallest) {
        for (int i=0; i<n; i++)
            if (num_btw % a[i] != 0) factor = false;

        if (factor == true) 
            break;
        else { 
            num_btw++;
            factor = true;
        }

    }

    // numbers are b/w largest and smallest of both arrays
    factor = true;
    for (int i=1; i*num_btw <= b_smallest; i++) { 
        for (int j=0; j<m; j++) {
            if (b[j] % (num_btw*i) != 0) 
                factor = false;
        }
        if (factor == true) 
            count++;
        else 
            factor = true;
    }

    cout << count << endl;

    return 0;
}

