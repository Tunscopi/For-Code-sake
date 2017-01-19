#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>

long reverse(int);

int main()
{
    long i,j,k;
    long noBeautifulDays = 0;
    std::cin >> i >> j >> k;

    for (long x=i; x<=j; x++) {
        if ((std::abs(x-reverse(x)) % k) == 0)
            noBeautifulDays++;
    }

    std::cout << noBeautifulDays << "\n";

    return 0;
}

long reverse(int num)
{
    std::string num_str = std::to_string(num);
    std::string temp = "";
    int length = num_str.length();
    
    // Reverse
    for (int i=0; i<length/2; i++)
        std::swap(num_str[i], num_str[length-1-i]);
 
    // Alt option
    //reverse(num_str.begin(), num_str.end());
   
    /* Alt. 3
    for (int i=0; i<length; i++)
        temp += num_str[length-1-i];

    num_str = temp;*/

    std::stringstream convert(num_str);
    convert >> num;

    return num;
}
