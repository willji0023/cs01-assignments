// Simple mi to km converter

#include<iostream>

int main(){
	double miles;
	std::cout << "Enter your miles: ";
	std::cin >> miles;
	double kilometers = miles * 1.60934;
	std::cout << kilometers << " km";
}
