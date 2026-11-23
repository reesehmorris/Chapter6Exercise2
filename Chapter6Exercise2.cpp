#include <iostream>
#include <iomanip>
using namespace std;

double celsius(double fahrenheit)
{
	return (5.0 / 9.0) * (fahrenheit - 32);
}

int main()
{
	cout << "Farhenheit\tCelsius\n";
	
	cout << fixed << setprecision(1);

	for (int f = 0; f <= 100; f += 5)
	{
		cout << setw(6) << f << "\t\t"
			<< setw(7) << celsius(f) << endl;
	}

	return 0;
}