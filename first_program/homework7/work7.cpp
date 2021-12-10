#include<iostream>
using namespace std;
void display(double x, double y);
int main() {
    int hour;
    int minute;
    cout << "Enter the nubmer of hours: ";
    cin >> hour;
    cout << "Enter the number od minutes: ";
    cin >> minute;
    display(hour, minute);
    return 0;
}

void display(double x, double y) {
    cout << "Time: " << x << ":" << y << endl;
}