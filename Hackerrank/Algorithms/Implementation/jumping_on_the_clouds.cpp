
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	int no_clouds;
	int i,no_jumps = 0;
	bool available = 0;
	cin >> no_clouds;
	int clouds[no_clouds];

	for (int i=0; i<no_clouds; i++) {
		cin >> clouds[i];
	}

	while (i < no_clouds-1) {
		i += (clouds[i+2] == available) + 1;
		no_jumps++;
	}
	cout << no_jumps;

	return 0;
}
