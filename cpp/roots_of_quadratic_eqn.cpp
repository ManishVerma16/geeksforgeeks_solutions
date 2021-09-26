#include <bits/stdc++.h>
// #include <iostream>
// #include <cmath>
// #include <vector>

using namespace std;

vector<int> quadraticRoots(int a, int b, int c);

int main()
{
	cout<< "Provide values for a, b, c in ax^2+bx+c=0 "<< endl;
	int a=0, b=0, c=0, i=0;
	vector<int> roots;
	cin >>a >>b >>c;
	roots = quadraticRoots(a, b, c);
	if(roots.size() == 1 && roots[0] == -1)
		cout<< "Imaginary";
	else
		for (i = 0; i < roots.size(); i++)
	{
		cout << roots[i] << " ";
	}
	cout << endl;
	return 0;
}

vector<int> quadraticRoots(int a, int b, int c){
	double x;
	vector<int> v;
	int d = 0;

	d = (b*b) - (4*a*c);
	x = sqrt(abs(d));
	if (d<0 || a == 0){
		v.push_back(-1);
	}
	else if (d == 0 || a != 0){
		v.push_back(floor((-b + x)/(2*a)));
		v.push_back(floor((-b + x)/(2*a)));
	}
	else{
		v.push_back(floor((-b + x)/(2*a)));
		v.push_back(floor((-b - x)/(2*a)));
	}
	return v;
}

// void roots(int a, int b, int c){
// 	double result1 = 0, result2 = 0, x;
// 	int d = 0;

// 	d = ((b*b) - (4*a*c));
// 	x = sqrt(abs(d));
// 	if (d<0 && a != 0){
// 		result1 = (-b + x)/2*a;
// 		result2 = (-b - x)/2*a;
// 	}
// 	else if (d = 0 && a != 0){
// 		result1 = (-b + x)/2*a;
// 		result2 = (-b - x)/2*a;
// 	}
// 	else{
// 		result1 = (-b + x)/(2*a);
// 		result2 = (-b - x)/(2*a);
// 	}
// 	cout << result1 << " " << result2;
// }
