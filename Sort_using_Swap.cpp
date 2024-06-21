#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
vector<int> arr = {1000,200,51,78,98};
    int n = arr.size();

    int select;
    cout<<"Enter yor number 0 and 1";
    cin>>select;


    if(select==0){
       for(int i=0; i<arr.size();i++){
    for(int j=i+1; j<arr.size(); j++){
      if(arr[j]<arr[i]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
    }
    else if(select==1){
        for(int i=0; i<arr.size();i++){
    for(int j=i+1; j<arr.size(); j++){
      if(arr[j]>arr[i]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }

}



