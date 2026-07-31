#pragma once

#include <cassert>

#include "types.h"

namespace Sei {
	constexpr Bitboard FileA = 0x0101010101010101ULL;
	constexpr Bitboard FileB = FileA << 1;
	constexpr Bitboard FileC = FileA << 2;
	constexpr Bitboard FileD = FileA << 3;
	constexpr Bitboard FileE = FileA << 4;
	constexpr Bitboard FileF = FileA << 5;
	constexpr Bitboard FileG = FileA << 6;
	constexpr Bitboard FileH = FileA << 7;

	constexpr Bitboard Rank1 = 0xFFULL;
	constexpr Bitboard Rank2 = Rank1 << (8 * 1);
	constexpr Bitboard Rank3 = Rank1 << (8 * 2);
	constexpr Bitboard Rank4 = Rank1 << (8 * 3);
	constexpr Bitboard Rank5 = Rank1 << (8 * 4);
	constexpr Bitboard Rank6 = Rank1 << (8 * 5);
	constexpr Bitboard Rank7 = Rank1 << (8 * 6);
	constexpr Bitboard Rank8 = Rank1 << (8 * 7);

	constexpr Bitboard square_to_bb(Square sq) {
		assert(is_valid(sq));
		return 1ULL << sq;
	}

} // namespace Sei