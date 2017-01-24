#include <iostream>

int main()
{
    int n,k, currCloud=0, energy=100, j=0;
    bool thunderCloud = 1;
    std::cin >> n >> k;
    int cloudType[n];

    for (int i=0; i<n; i++)
        std::cin >> cloudType[i];

    while (currCloud != n) {
        currCloud += k;
        energy -= (1 + 2*(cloudType[j] == thunderCloud));
        j+=k;
    } 
    

    std::cout << energy << "\n";

    return 0;
}
