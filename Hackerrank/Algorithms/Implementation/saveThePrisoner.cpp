#include <iostream>

int main()
{
    int no_tests,n,m,s;
    int id_no;
    std::cin >> no_tests;


    for (int i=0; i<no_tests; i++) {
        std::cin >> n >> m >> s;

        id_no = (m+s-1)%n; 
        if (id_no == 0)
            id_no = n;

        std::cout << id_no << "\n"; 
    }


    return 0;
}
