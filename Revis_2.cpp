#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int>values={1,2,3,45};  
  // -------------------------------------------push_back()
    // values.push_back(5);
    // -------------------------------------------pop_back()
    values.pop_back(5);

    for(int i=0;i<values.size();i++){
      cout<<values[i]<<" ";
    }
    



}