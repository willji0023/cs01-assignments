#include<iostream>
#include<vector>

int main(){
	std::vector<int> numbers;
	for (int i = 8; i < 100; i++){
		numbers.push_back(i);
	}

	std::vector<int> primes;
	for (int i = 0; i < numbers.size(); i++){
		if (numbers[i] % 2 != 0 && numbers[i] % 3 != 0 && numbers[i] % 5 != 0 && numbers[i] % 7 != 0){
			primes.push_back(numbers[i]);
		}
	}

	std::cout << "Primes: 2, 3, 5, 7, " << std::endl;
	for (int i = 0; i < primes.size(); i++){
		std::cout << primes[i] << std::endl;
	}
}
