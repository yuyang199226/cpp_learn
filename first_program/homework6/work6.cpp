#include<iostream>
using namespace std;
double acculate(double x);
int main() {
	double years ;
	double res;
	cout << "Enter the number of light years:";
	cin >> years;
	res = acculate(years);
	cout << years << " light years " <<  "= " << res << " units\n";

return 0;
}

double acculate(double x) {
	return x * 63240;

}
