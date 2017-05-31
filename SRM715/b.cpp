#include <string>
#include <algorithm>

using namespace std;

class MaximumRangeDiv2{
    
    public:
    	int findMax(string s);
};

int MaximumRangeDiv2::findMax(string s){
    int p=0;
    int m=0;
    while(s.empty() != true){
        if(s.back() == '+'){
            p++;
        } else {
            m++;
        }
    }
    return max({p, m});
}
