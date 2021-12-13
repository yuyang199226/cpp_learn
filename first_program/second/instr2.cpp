#include<iostream>

int main() {
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    cout << "Enter name:\n";
    cin.getline(name, ArSize);
    cout << "Enter your fav dessert:\n";
    cin.getline(dessert, ArSize);
    cout << "I have some delicious: " << dessert;
    cout << "your name: "<< name << "\n";
    return 0;
}