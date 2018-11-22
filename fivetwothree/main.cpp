#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << "请输入菱形的边长" << endl;
	int x, a, k, y, z = 2;
	cin >> x; a = x;
	for (int i = 1; i <= x; i++) {
		cout << setw(a--);
		for (int z = 2 * i - 1; z > 0; z--)
			cout << '*';
		cout << endl;
	}
	for (k = x - 1; k > 0; k--) {
		cout << setw(z++);
		for (y = k*2-1; y > 0; y--)
			cout << '*';
		cout << endl;
	}
	return 0;
}
