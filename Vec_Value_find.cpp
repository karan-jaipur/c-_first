#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> value = {10, 23, 34, 5};
    bool found = false;
    
    for (int i = 0; i < value.size(); i++) {
        if (value[i] == 5) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "match";
    } else {
        cout << "not match";
    }
    
    return 0;
}
