#include <vector>
#include <string>

using namespace std;

class ConstructLCSEasy {

    public:
        string construct(int ab, int bc, int ca);
};

string ConstructLCSEasy::construct(int ab, int bc, int ca) {
    string A, B, C;
    for (int i = 0; i < ca; i++) {
        A.push_back('1');
        C.push_back('1');
    }
    for (int i = 0; i < ab; i++) {
        B.push_back('1');
    }
    for (int i = 0; i < bc-ab; i++) {
        B.push_back('0');
        C.push_back('0');
    }
    string ret = A + " " + B + " " + C;
    return ret;
}
