#include <iostream>

int main()
{
    int t,n,m,s;
    int id_no;
    std::cin >> t >> n >> m >> s;


    for (int i=0; i<t; i++) {
        id_no = (m+s-1)%n; 

        std::cout << id_no << "\n"; 
    }


    return 0;
}
