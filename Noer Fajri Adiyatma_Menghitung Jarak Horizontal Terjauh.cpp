#include <bits/stdc++.h>
using namespace std;
// jarak = (v * v * sin(s) ) / 10

int main()
{
	double s, v;
	cout << "Masukkan sudut : ";
	cin >> s;
	cout << "Masukkan kecepatan : ";
	cin >> v;
	v = v * v;
	cout << "Jadi : ";
	float jarak;
	float sinA = sin(2 * s * 3.141 / 100);
	jarak = (v * sinA) / 10;
	cout << fixed << setprecision(2) << jarak;
}
