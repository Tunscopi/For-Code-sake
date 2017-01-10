#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main()
{
long n, sum = 0;
long smallest =INT_MAX, largest = INT_MIN;
int i = 0;

while (i<5) {
    cin >> n;
    sum += n;
    if (n < smallest)
        smallest = n;
    if (n > largest)
        largest = n;
    i++;
}

cout << sum-largest << " " << sum-smallest << endl;


return 0;
}
