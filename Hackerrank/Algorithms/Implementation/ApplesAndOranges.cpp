#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main() {
    int s,t,a,b,m,n;
    int no_orangesHouse = 0, no_applesHouse = 0;
    cin >> s >> t 
        >> a >> b
        >> m >> n;    
    vector <int> applesDist(m), orangesDist(n);

    for (int i=0;i<m;i++)
        cin >> applesDist[i];
    for (int i=0;i<n;i++)
        cin >> orangesDist[i];

    // Does it fall on House?
    for (int i=0;i<m;i++)
        if (applesDist[i] + a >= s) no_applesHouse++;
    for (int i=0;i<m;i++)
        if (b - orangesDist[i] <= t) no_orangesHouse++; 

    cout << no_applesHouse << endl << no_orangesHouse << endl;

    return 0;
}
