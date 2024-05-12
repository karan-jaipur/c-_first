#include<iostream>
#include<vector>
using namespace std;

int main(){
  // vector<int>values={1,2,3,45};  
  // // -------------------------------------------push_back()
  //   // values.push_back(5);
  //   // -------------------------------------------pop_back()
  //   values.pop_back(5);

  //   for(int i=0;i<values.size();i++){
  //     cout<<values[i]<<" ";
  //   }
    

// =============que: take user input in for loop and add them


    int val;
    cout << "Give a val : ";
    cin >> val;
    int total = 0;
    int a[val];
    for (int i = 0; i < val; i++) {
        cin >> a[i];
        total += a[i]; 
    }
    cout << "Sum of all values: " << total << endl;
    



  




}