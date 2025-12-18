#include <iostream>

using namespace std;

unsigned long long factorial(int n);

int main()
{
	int number;
	cout << "Input: ";
	cin >> number;

	// jika input tidak valid (bilangan negative)
	// tampilkan pesan dan keluar dari program
	if (number < 0)
	{
		cout << "Invalid input\n";
		return 1;
	}

	unsigned long long result = factorial(number);
	cout << "Factorial of " << number << ": " << result << endl;

	system("pause");

	return 0;
}
// fungsi factorial()
// menghitung faktorial dari sebuah bilangan bulat non-negatif
// menggunakan pendekatan iteratif
// parameter: n - bilangan bulat positive
// return: faktorial dari n

unsigned long long factorial(int n)
{
	// faktorial dari n (n > 1) adalah n * (n-1) * ... * 2 * 1
	unsigned long long result = 1;
	for (int i = n; i > 1; --i) {
		result *= i;
	}

	return result;
}
