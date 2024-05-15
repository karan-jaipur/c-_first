// #include<iostream>
// #include<vector>
// using namespace std;

//   int findunique(vector<int>values){
//     int uniq=0;
//     for(int i=0;i<values.size();i++){
//       uniq = uniq ^ values[i];
//     }
//     return uniq;
//   }
// int main(){
//   vector<int>values={1,1,5,4,4};
//   int uniq=findunique(values);
//   cout<<"unique values : "<<uniq<<endl;
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int>values = {23,1,5,87,6};
    sort(values.begin(),values.end());
    for(auto value:values){
        cout<<value<<" ";
}
}