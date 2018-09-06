//Add two numbers using bitwise operator
#include <iostream>

using namespace std;

int main() {

	int a=4,b=5;

	while(b != 0)
	{
		int carry = a & b;
		
		a=a^b;
		b=carry << 1;
	}
	cout << "sum = " << a <<endl;
}
