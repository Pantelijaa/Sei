#include <iostream>

#include "types.h"
#include "bitboard.h"

using namespace Sei;

int main() {
	std::cout << std::hex << FileH << std::endl;
	std::cout << std::hex << square_to_bb(SQ_H1) << std::endl;
	std::cout << std::hex << square_to_bb(SQ_H7) << std::endl;
	std::cout << std::hex << square_to_bb(SQ_H8) << std::endl;
	std::cin.get(); // Keep console alive
	return 0;
}