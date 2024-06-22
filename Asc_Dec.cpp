#include <bits/stdc++.h>
using namespace std;

int main(){
      vector <int> arr={1,3,5,7,9};

  int var;
  cout<<"sect one of these:-"<<endl;
  cout<<"1. low to high"<<endl;
  cout<<"2. high to low"<<endl;
  cin>>var;

  if(var == 1){
    sort(arr.begin(),arr.end());

  }else if(var==2){
    sort(arr.rbegin(),arr.rend());
  }
  for(int i=0;i<arr.size();i++){
    cout<<arr[i];
  }
}