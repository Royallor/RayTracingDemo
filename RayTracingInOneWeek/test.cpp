#include<iostream>
#include<vector>
using namespace std;
//vector<int> vec;
void test(vector<int>& vec) {
    vec.push_back(1);
    vec.push_back(2);
}
int main() {
    vector<int> vec;
    cout << &vec << endl;
    test(vec);
    cout << &vec << endl;
}