#include<iostream>

struct CandyBar {
    char name[20];
    double weight;
    int kaluli;
};


int main() {
    using namespace std;
    CandyBar snake = {"Mocha Munch", 2.3, 350};
    CandyBar snake2 = {"Mocha Munch2", 2.3, 400};
    CandyBar snake3 = {"Mocha Munch3", 4.5, 600};
    CandyBar snakes[3] = {{"Mocha Munch", 2.3, 350}, {"Mocha Munch", 2.3, 400}, {"Mocha Munch", 4.5, 600}};
    cout << snakes[2].name << endl;
    CandyBar* snakes2 = new CandyBar[3];
    CandyBar snake4 = {"xxx", 2.3, 350};;
    snakes2[0] = snake4;
    CandyBar* sd = new CandyBar;
    cin.get(sd->name,20);
    cin >> sd->weight;
    cout << "point name: " << sd->name << "weight :" << sd->weight << endl;
    cout << snakes2[0].name << endl;
    delete[] snakes2;
    return 0;
}