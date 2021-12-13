#include<iostream>

int main() {
    using namespace std;
    int nights = 1001;
    int * pt = new int;
    *pt = 1001;
    cout << "night value: " << nights << "location" << &nights << endl;
    cout << "pt value :" << *pt << "location "<< pt << endl;
    cout << "size of pt " << sizeof(pt) << endl;
    cout << "size of *pt " << sizeof(*pt) << endl;
    int hight = 100;
    int* pd = &hight;
    delete pd;
    delete pt;
    return 0;
}