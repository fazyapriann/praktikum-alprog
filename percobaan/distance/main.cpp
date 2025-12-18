#include <iostream>
#include <cmath>

using namespace std;

double dist(double x1, double y1, double x2, double y2);

int main()
{
	double x1, y1, x2, y2;

	cout << "Objek 1 (x1 y1): ";
	cin >> x1 >> y1;
		cout << "Objek 2 (x2 y2): ";
	cin >> x2 >> y2;

	cout << "Jarak kedua objek: " << dist(x1, x2, y1, y2) << endl;

	system("pause");

	return 0;
}

// fungsi dist()
// menghitung jarak antara dua titik (x1, y1) dan (x2, y2)
// menggunakan fungsi hypot() dari pustaka cmath
// parameter: x1, y1, x2, y2 - koordinat kedua titik
// return: jarak antara kedua titik

double dist(double x1, double y1, double x2, double y2)
{
	double deltaX = x2 - x1;
	double deltaY = y2 - y1;

	return hypot(deltaX, deltaY);
}