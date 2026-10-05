#include<iostream>
using namespace std;

void OddOrEven(auto a)
{
	if (a % 2 == 0) { cout << "Even" << endl; }
	else{ cout << "Odd" << endl; }
}
int main()
{
	int a, b;
	cin >> a >> b;
	if (a < 1 || a>10000 || b < 1 || b>10000) { return 0; }
	OddOrEven(a * b);
}