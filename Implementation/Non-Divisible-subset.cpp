
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
	int n,k,input,pair;
	int result = 0;

	cin >> n >> k;
	
	int remainders[k];

	// Initialise remainders to zero
	for (int i=0; i<k; i++) {
		remainders[i] = 0;
	}	

	// Keep count of no. of occurences of remainder values
	for (int i=0; i<n; i++) {
		cin >> input;
		remainders[input%k]++; 
	}
	
	for (int i=0; i*2<=k; i++) {
		pair = (k-i)%k;
		if (i == pair)	
			result += min(remainders[i], 1);
			//result++;
		else
			result += max(remainders[i], remainders[pair]);
	}

	cout << result;

	cout << "\n";
	return 0;
}
