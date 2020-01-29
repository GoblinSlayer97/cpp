
#include <iostream>

using namespace std;
int main()
{
	int a;
	int b;
	int c;

	cout << "----------------------------";
	cout << endl << "tORDENAR DE MANERA ASCENDENTE";
	cout << endl << "----------------------------";

cout << endl << "Escribe el primer entero: ";
cin >> a;

cout << "Escribe el segundo entero: ";
cin >> b;

cout <<  "Escribe el tercer entero: ";
cin >> c;

if (a <= b && b <= c)
{
	cout << endl << "En orden ascendente: " << a << "," << b << "," << c << endl;
}
else if (a <= c && c <= b)
{
	cout << endl << "En orden ascendente: " << a << "," << c << "," << b << endl;
}
else if (b <= a && a <= c)
{
	cout << endl << "En orden ascendente: " << b << "," << a << "," << c << endl;
}
else if (b <= c && c <= a)
{
	cout << endl << "En orden ascendente: " << b << "," << c << "," << a << endl;
}
else if (c <= a && a <= b)
{
	cout << endl << "En orden ascendente: " << c << "," << a << "," << b << endl;
}
else
{

}
}
