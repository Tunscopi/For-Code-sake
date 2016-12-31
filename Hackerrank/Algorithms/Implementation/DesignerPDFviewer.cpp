#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    const int n = 26;
    int largest = 0, word_count, letter_width = 1;
    string word;
    vector <int> h(n);

    for (int i=0; i<n; i++) 
        cin >> h[i];
    
    cin >> word;
    for (int i=0; i<word.length(); i++)
        if ( h[word[i]-'a'] > largest)  
            largest = h[word[i]-'a'];

    cout << largest*letter_width*word.length();
    cout << endl;
    return 0;
}
