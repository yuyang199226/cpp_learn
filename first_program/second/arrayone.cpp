#include<iostream>

int main() {
    using namespace std;
    int yams[3];
    yams[0] = 1;
    yams[1] = 2;
    yams[2] = 3;
    cout << yams << endl;
    cout << yams[0] << endl;
    cout << "size of yams " << sizeof yams << endl;
    cout << "size of element " << sizeof yams[0] << endl;
    return 0;
}