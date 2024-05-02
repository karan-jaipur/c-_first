// ==================push_back(add element in last)=================
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//    vector<int> vecyt;
//     vecyt.push_back(10);
//     vecyt.push_back(20);
//     vecyt.push_back(30);

//     for (int i : vecyt) {
//         cout << i << " ";
//     }
// }

// ===========================front(access first element)===========
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> vec = {10, 20, 30};
//     cout << "First element: " << vec.front() << endl;
//     // Output: First element: 10
//     return 0;
// }

// ================================back(access last element)========
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> vec = {10, 20, 30};
//     cout << "Last element: " << vec.back() << endl;
//     // Output: Last element: 30
//     return 0;
// }




// =======================pop_back(removes element from last)========
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//    vector<int> vec = {10, 20, 30};
//     vec.pop_back();

//     for (int i : vec) {
//        cout << i << " ";
//     }
//     // Output: 10 20
//     return 0;
// }


// =======================size(array size)=========================
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> vec = {10, 20, 30};
//     cout << "Size: " << vec.size() << endl;
//     // Output: Size: 3
//     return 0;
// }

// ================================at(index)take specified inex and give value=====
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> vec = {10, 20, 30};
//     cout << "Element at index 1: " << vec.at(1) << endl;
//     // Output: Element at index 1: 20
//     return 0;
// }

// ==========================clear(size 0 ,remove all element)======
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> vec = {10, 20, 30};
//     vec.clear();
//     cout << "Size after clear: " << vec.size() << endl;
//     // Output: Size after clear: 0
//     return 0;
// }

// ====================empty(check vector is empty or not)=================
// #include <iostream>
// using namespace std;
// #include <vector>

// int main() {
//     vector<int> vec = {10, 20, 30};
//     if (vec.empty()) {
//         cout << "Vector is empty" << endl;
//     } else {
//         cout << "Vector is not empty" << endl;
//     }
//     // Output: Vector is not empty
//     return 0;
// }


// ========================insert( Inserts elements at a specified position)==
// #include <iostream>
// using namespace std;
// #include <vector>

// int main() {
//     vector<int> vec = {10, 20, 30};
//     vec.insert(vec.begin() + 1, 15); // Insert 15 at index 1
//     for (int i : vec) {
//         cout << i << " ";
//     }
//     // Output: 10 15 20 30
//     return 0;
// }

// =======================erase(Removes elements from a specified position or range)
// #include <iostream>
// using namespace std;
// #include <vector>

// int main() {
//     vector<int> vec = {10, 20, 30, 40, 50};
//     vec.erase(vec.begin() + 2); // Remove element at index 2
//     for (int i : vec) {
//         cout << i << " ";
//     }
//     // Output: 10 20 40 50
//     return 0;
// }

