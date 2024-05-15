#include <iostream>
#include <vector>
using namespace std; 

int main() {
    vector<int> digits = {5, 10, 8, 11, 1};
    int temp;
    for (int i = 0; i < digits.size(); i++) {
        for (int j = i + 1; j < digits.size(); j++) {
            if (digits[i] > digits[j]) {
                temp = digits[i];
                digits[i] = digits[j];
                digits[j] = temp;
            }
        }
    }
 
    for (int i = 0; i < digits.size(); i++) {
        cout << digits[i] << " ";
    }
    return 0;
}

