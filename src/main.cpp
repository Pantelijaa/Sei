#include <iostream>

#include "types.h"
#include "bitboard.h"

using namespace Sei;

int main() {
	std::cout << Bitboards::print(Rank2) << std::endl;
	std::cin.get(); // Keep console alive
	return 0;
}