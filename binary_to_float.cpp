#include <iostream>
#include <string>

using namespace std;

float binaryToFloat(string& binaryStr) {
    if (binaryStr.size() != 32) {
        cerr<< "Binary string must be 32 bits long." <<endl;
        return 0.0f;
    }
    unsigned int intValue = 0;
    for (char bit : binaryStr) {
        if (bit == '0' || bit == '1') {
            intValue = (intValue << 1) | (bit - '0');
        } else {
            std::cerr << "Invalid binary character: " << bit << std::endl;
            return 0.0f;
        }
    }
    float floatValue = *reinterpret_cast<float*>(&intValue);
    return floatValue;
}

int main() {
    string binaryStr;
    cin>>binaryStr;
    float floatValue = binaryToFloat(binaryStr);
    cout << "Float representation: " << floatValue << std::endl;
    return 0;
}
