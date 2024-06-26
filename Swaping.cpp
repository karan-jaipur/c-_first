#include<iostream>
using namespace std;

void fab(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 2;
    int y = 3;
    fab(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;


}
