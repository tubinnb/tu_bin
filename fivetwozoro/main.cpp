#include<iostream>
using namespace std;
int main()
{
	int side1, side2, hyp;

	for (side1 = 1; side1 <= 500; side1++)

		for (side2 = 1; side2 < 500; side2++)

			for (hyp = 1; hyp < 500; hyp++)

				if ((side1*side1 + side2*side2) == hyp*hyp)

					cout << side1 << '\t' << side2 << '\t' << hyp << endl;

	return 0;
}
