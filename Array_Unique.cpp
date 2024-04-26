#include <iostream>
#include <vector>
using namespace std;
int main(){
    
    vector <int> karan;
    int size;
    cout<<"enter size: ";
    cin>>size;  
    
    for (int i = 0; i < size; i++)
    {
        int a;
        cin>>a;
        karan.push_back(a);
    }
    for (int i = 0; i < size; i++)
    {
        cout<<karan[i];
    }
}
