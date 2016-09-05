
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
	int n,k,input,opposite;
	int result = 0;
	
	//ifstream reader;
	//reader.open("input.txt");
	cin >> n >> k;
	
	int remainders[n];
	
	// Read-in remainder values
	for (int i=0; i<n; i++) {
		cin >> input;
		remainders[i] = input%k;
	}

	for (int i=0; i*2<=k; i++) {
		opposite = (k-i)%k;
		if (i == opposite)	
			result += min(remainders[i], 1);
		else
			result += max(remainders[i], remainders[opposite]);
	}

	cout << result;

	cout << "\n";
	return 0;
}
