#include <string>
#include <vector>

using namespace std;

class ImageCompression {

    public:
        string isPossible(vector<string> image, int k);
};

string ImageCompression::isPossible(vector<string> image, int k) {
    vector<string> comprow(k);
    while (image.enpty() != true) {
        for (int i = 0; i < k; i++) {
            comprow[i] = image.back();
            image.pop_back();
        }
        while (comprow[0] != "") {
            char x = comprow[0].back()
            for (int i = 0; i < k; i++) {
                for (int j = 0; j < k; j++) {
                    if (comprow[i].back() != x) {
                        return "Impossible"
                    }
                    comprow[i].pop_back();
                }
            }
        }
    }
    return "Possible"
}
