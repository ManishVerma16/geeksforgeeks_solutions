#include <iostream>

using namespace std;

float celsiusToFahrenheit(float N);


int main()
{
	float celsius, fahrenheit;
	cin>> celsius;
	fahrenheit = celsiusToFahrenheit(celsius);
	cout << fahrenheit;
	return 0;
}

float celsiusToFahrenheit(float celsius){
	return (9*celsius)/5 + 32;
}