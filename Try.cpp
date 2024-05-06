#include<iostream>
#include<vector>
using namespace std;

int Compare( vector<int>a, vector<int>b){

  for (int i = 0; i<a.size(); i++){
    for(int j=0; j<b.size(); j++){
      if(a[i]==b[j]){
        cout<<"match number"<<a[i];
      }
    }
  }
  

}
int main (){
    vector<int>a={1,2,3,4,5};
    vector<int>b={2,3};
    int compare = Compare(a,b);
    cout<<compare<<endl;
   
}






// ----------------------------------------------------------------------------------------------------


// #include<iostream>
// #include<vector>
// using namespace std;

// int Compare(vector<int> a, vector<int> b) {
//     int count = 0;
//     for (int i = 0; i < a.size(); i++) {
//         for(int j = 0; j < b.size(); j++) {
//             if(a[i] == b[j]) {
//                 cout << "Matched number: " << a[i] << endl;
//                 count++;
//             }
//         }
//     }
//     return count;
// }

// int main() {
//     vector<int> a = {1, 2, 3, 4, 5};
//     vector<int> b = {2, 3};
//     int compare = Compare(a, b);
//     cout << "Total matched numbers: " << compare << endl;
//     return 0;
// }
