#include <iostream>
#include <vector>


std::vector<int> decrement(std::vector<int>&);
std::vector<int> mult(std::vector<int>&, std::vector<int>&);

int main(){
    
    std::vector<int> digits; 
    std::string n;
    int count = 0, lsd; // LSD: least signif. digit
    std::cin >> n;
    std::vector<int> N, ans;
    
    // set digits
    for (int i=0; i<n.length(); i++)
        N.push_back(int(n[i]));

    // initialize ans 
    ans = N;

    // factorial
    while (N[0] != 0){
        N = decrement(N);
        ans = mult(ans,N);
    }

    // Result
    for (int i=0; i<ans.size(); i++)
        std::cout << ans[i]; 

    return 0;
}  


std::vector<int> decrement (std::vector<int>& N) {
   
    //decrement N by 1

    return N;
}

std::vector<int> mult(std::vector<int>& ans, std::vector<int>& N) {

    // multiply 2 bigInts
    

    return ans;
}
