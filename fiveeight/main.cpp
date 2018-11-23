#include<iostream>
using namespace std;
int main() {
	int x , a[40], i = 1, cnt = 0, y;
	cout << "输入之后的个数";
	cin >> x;
	while (1) {
		cin >> y;
		a[i] = y;
		cnt++;
		if (cnt >= x)
			break;
		i++;
	}

	int k = 1;
	for (; k <i; k++) {
		if (a[k] < a[k + 1]) {
			int z = a[k + 1];
			a[k + 1] = a[k];
			a[k] = z;
		}
	}
	cout << "最小的数为:" << a[k] << endl;
	return 0;
}
