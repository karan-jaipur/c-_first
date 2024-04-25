#include<iostream>
using namespace std;

int main(){
    int n;
      cout<<"Enter the number of array: ";
      cin >> n;

      int a[n];
      cout<<"Enter "<<n <<" integers: ";
      for(int i=0;i<n;i++) {
          cin >> a[i];
      }

      cout<<"Reversed:";
      for(int i=n-1;i>=0;i--){
          cout<<a[i]<<" ";
      }
}