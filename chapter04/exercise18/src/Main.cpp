// solves user's quadratic problem
#include<iostream>
#include<cmath>

void quadratic(double a, double b, double c){
	double radical = pow(b, 2)-(4*a*c);
	if (radical < 0){
		std::cout << "error, no real solution\n";
	}
	else{
		std::cout << ((-1 * b) - sqrt(radical))/(2*a) << std::endl;
		std::cout << ((-1 * b) + sqrt(radical))/(2*a) << std::endl;
	}
}
int main(){
	std::cout << "ax^2 + bx + c = 0" << std::endl;
	std::cout << "Enter value for a, b, c" << std::endl;
	double a, b, c;
	std::cin >> a >> b >> c;
	quadratic(a, b, c);
}

