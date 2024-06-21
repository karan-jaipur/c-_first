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
        sort(arr.begin(),arr.end());
    }
    else if(select==1){
        sort(arr.rbegin(),arr.rend());
    }

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }

}
