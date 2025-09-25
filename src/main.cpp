#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <cstdio>

std::vector<long int> lexlator(std::string input) {
	char* pstart = &input[0];
	std::vector<long int> array;
	while (*pstart != EOF && *pstart != '\n') {
		long int var = strtoul(pstart, &pstart, 10);
		if (var == 0)
			break;
		array.push_back(var);
	}
	return array;
}

int main() {
	std::string input;
	std::getline(std::cin, input);
	std::vector<long int> vararray = lexlator(input);
	int a = vararray.at(0);
	int b = vararray.at(1);
	int c = vararray.at(2);
	int D = round((b * b) - (4 * a * c));
	float x1, x2 = 0;
	if (D < 0) {
		std::cout << "The equation has no solutions in real numbers.\n";
	}
	else {
		x1 = (-b - sqrt(D)) / 2 * a;
		x2 = (-b + sqrt(D)) / 2 * a;
	}
	std::cout << "First solution of an equation = " << x1 << '\n' << "Second solution of an equation = " << x2 << '\n';
}