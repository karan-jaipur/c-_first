#include <bits/stdc++.h>
using namespace std;

int main(){
  vector <int> arr={1,3,5,7,9};

  int var;
  cout<<"sect one of these:-"<<endl;
  cout<<"1. low to high"<<endl;
  cout<<"2. high to low"<<endl;
  cin>>var;

      if(var==1){
        
  for(int i=0;i<arr.size();i++){
    for(int j=i+1;j<arr.size();j++){
        if(arr[j]<arr[i]){
          int temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
        }
      }
    }
  }
  else if(var==2){
    for(int i=0;i<arr.size();i++){
      for(int j=0;j<arr.size();j++){
        if(arr[i]>arr[j]){
          int temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
        }
      }
    }
  }
   for(int i=0;i<arr.size();i++){
    cout<<arr[i];
   }
}