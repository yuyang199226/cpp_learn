#include <iostream>

int add(int x, int y) {
	return x+y;
}

 int main() {
	using namespace std;
	cout << "hello" << endl;
	cout << "world!" << endl;
	int x = 1;
	int y = 2;
	int z = add(x,y);
	cout << z << endl;
	return 0;

}
