// calculates number of tiles needed for 1000, 1000000, and 1000000000 grains of rice
#include<iostream>
#include<cmath>

int main(){
	int grams = 1;
	int totalgrams = 1;
	int tiles = 1;

	// 1000
	while (totalgrams < 1000){
		tiles++;
		grams = pow(2, tiles - 1);
		totalgrams += grams;
	}
	std::cout << tiles << " tiles for 1000 grams of rice" << std::endl;

	grams, totalgrams, tiles = 1;

	// 1000000
	while (totalgrams < 1000000){
		tiles++;
		grams = pow(2, tiles - 1);
		totalgrams += grams;
	}
	std::cout << tiles << " tiles for 1000000 grams of rice" << std::endl;

	grams, totalgrams, tiles = 1;

	// 1000000
	while (totalgrams < 1000000000){
		tiles++;
		grams = pow(2, tiles - 1);
		totalgrams += grams;
	}
	std::cout << tiles << " tiles for 1000000000 grams of rice" << std::endl;

}



