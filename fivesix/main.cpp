#include <iostream>
using namespace std;
int main()
{
	double x, i = 0, sum = 0;
	while (cin.peek() != '\n') {
		cin >> x;
		i++;
		sum += x;
	}
	cout << "这些数的平均数为:" << sum / i;
	return 0;
}
