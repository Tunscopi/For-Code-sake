#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int no_chapters, max_perpage, no_ch_problems, no_special = 0, last_page = 0, no_pages, track_pg_no = 1;  
    cin >> no_chapters >> max_perpage;
    
    for (int i = 0; i < no_chapters; i++){
        // Read in no of chapter problems
        cin >> no_ch_problems;
        
        if (no_ch_problems == 0);
       
        else {
            no_pages = no_ch_problems/max_perpage;
            last_page = no_ch_problems % max_perpage;
            
            for (int i = 0; i < no_pages; i++){    // check thru complete pages
                if (track_pg_no > i*max_perpage && track_pg_no <= (i+1)*max_perpage) no_special++;
                    track_pg_no++;
            }
            
            if (last_page > 0){           // last page special problem check 
                if (track_pg_no > no_pages*max_perpage && track_pg_no <= no_ch_problems) no_special++;
                     track_pg_no++;
            }
        }
        
    }
    cout << no_special << endl;
    return 0;
}
