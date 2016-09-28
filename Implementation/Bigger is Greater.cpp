
#include <iostream>
#include <string>
using namespace std;

int main() {
	int no_tests, pivot_index;	
        int i = 0;
	char pivot, temp;
	bool isPivot = 0;
	string word_;
	cin >> no_tests;

        while (i < no_tests) {
		cin >> word_;

		if (word_.length() > 1) {
			// Search for longest non-increasing suffix
			for (int j=word_.length()-1; j>0; j--) {
				if (word_[j-1] < word_[j]) {
					isPivot = 1;
					
					// Identify pivot	
					pivot = word_[j-1];
					pivot_index = j-1;
                                        break;
				}
			}

                        if (isPivot) {
                            // Scan left-wards for i>pivot	
                            for (int k=word_.length()-1; k>pivot_index; k--) {
                                if (word_[k] > pivot){ 
                                    // Swap 
                                    temp = word_[k];	
                                    word_[k] = pivot;
                                    word_[pivot_index] = temp;				

                                    // Sort suffix in increasing order as prefix has been increased
                                    sort(word_.begin()+pivot_index+1, word_.end());
                                    break;

                                }
                            }
                            cout << word_;
		            isPivot = 0;
                        } else 
		             cout << "no answer";

		} else 
			cout << word_;
		cout << "\n";
                i++;
	}

	cout << "\n";
	return 0;
}
