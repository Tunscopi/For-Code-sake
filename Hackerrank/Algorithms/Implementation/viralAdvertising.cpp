#include <iostream>
#include <cmath>


int main()
{
    int n, noAdLikes=0, noAdsReceived=5, noNewAdLikes=0, noPrevAdLikes=0;
    std::cin >> n;


    for(int i=0; i<n; i++){
       noAdLikes += floor(noAdsReceived/2);
       noNewAdLikes = noAdLikes - noPrevAdLikes;

       noAdsReceived = noNewAdLikes*3;
       noPrevAdLikes = noAdLikes;
    }


    std::cout << noAdLikes << "\n";

    return 0;
}
