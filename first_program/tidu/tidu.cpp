#include<iostream>
double myabs(double x);
const int maxLoop = 1000;
int main() {
    using namespace std;
    double step = 0.2;
    double x = 100;
    double threshold = 0.000001;
    double change = 10;
    int iterCount = 0;
    for (;iterCount<=maxLoop;) {
        double tx = x - step * (4*x-10);
        double loss = myabs(x - tx);
        cout << tx << endl;
        change = myabs(x - tx);
        iterCount++;
        if (loss < threshold) {
            break;
        }
        x = tx;
    }
    cout << x << endl;
    cout << "count: " << iterCount << endl;
    return 0;
}

double myabs(double x) {
    if (x<0) return -x;
    return x;
}
