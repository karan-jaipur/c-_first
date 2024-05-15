#include <iostream>
#include <vector>
#include<algorithm>
using namespace std; 

int main() {
    vector<int>values={1,24,5,56};
    sort(values.begin(),values.end());
    for(auto val:values){
      cout<<val<<" ";
    }
}

