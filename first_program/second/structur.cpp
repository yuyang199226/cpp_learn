#include<iostream>

struct inflatable {
    char name[20];
    float volume;
    double price;
};

int main() {
    using namespace std;
    inflatable guest = {
        "glory dnas",
        1.188,
        29.99,
    };
    inflatable pal = {
        "wang er",
        3.12,
        32.99
    };
    cout << "expand your guest list with "<< guest.name;
    cout << " and " << pal.name << "!\n";
    cout << "both " << guest.price + pal.price << endl;
    inflatable guests[2] = {
        {"Smith Sha", 0.5, 2.12},
        {"Kary s", 0.4, 32.43},
    };
    cout <<  " name is : " << guests[0].name << "\n";
    enum colors {red=1, green, blue};
    cout << "red value: " << red << "blue val : " << blue << endl;
    return 0;
}