#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector <int> myvec;
  // myvec.push_back(18);
  // cout<<myvec.size()<<endl;
  // cout<<myvec[0]<<endl;
  int size,value;
  cout<<"enter vector size ";
  cin>>size;
  for(int i=0; i<size; i++){
    cout<<"enter the vector value ";
    cin>>value;
    myvec.push_back(value);

  }
  cout<<myvec.size()<<endl;
  for(int i=0; i<myvec.size(); i++){
    cout<<myvec[i]<<" ";6
  }



}