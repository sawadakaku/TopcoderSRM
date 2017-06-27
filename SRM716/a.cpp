#include <vector>
#include <string>

using namespace std;

class Permutiple {

    public:
        string isPossible(int x);
    private:
        bool dfs(vector<int> digits, int orig, int y){
            if (digits.empty()) {
                if (y == orig) {
                    return false;
                } else {
                    return y%orig==0;
                }
            } else {
                bool ret = false;
                for (int i = 0; i < digits.size(); i++) {
                    vector<int> tmp = digits;
                    tmp.erase(tmp.begin()+i);
                    ret = ret or Permutiple::dfs(tmp, orig, y*10+digits[i]);
                }
                return ret;
            }
        };
};

string Permutiple::isPossible(int x) {
    vector<int> digits;
    int orig = x;
    int c = 0;
    while (x > 0) {
        digits.push_back(x%10);
        x /= 10;
        c++;
    }

    if (Permutiple::dfs(digits, orig, 0)) {
        return "Possible";
    } else {
        return "Impossible";
    }
}
