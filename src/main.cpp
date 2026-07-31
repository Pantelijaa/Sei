#include <iostream>

#include "types.h"
#include "bitboard.h"

using namespace Sei;

int main() {
	std::cout << std::hex << Rank1 << std::endl;
	std::cout << std::hex << Rank2 << std::endl;
	std::cout << std::hex << Rank3 << std::endl;
	std::cout << std::hex << Rank4 << std::endl;
	std::cout << std::hex << Rank5 << std::endl;
	std::cout << std::hex << Rank6 << std::endl;
	std::cout << std::hex << Rank7 << std::endl;
	std::cout << std::hex << Rank8 << std::endl;
	std::cin.get(); // Keep console alive
	return 0;
}