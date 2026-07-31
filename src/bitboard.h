#pragma once

#include "types.h"

namespace Sei {
	constexpr Bitboard FileA = 0x0101010101010101ULL;
	constexpr Bitboard FileB = FileA << 1;
	constexpr Bitboard FileC = FileB << 1;
	constexpr Bitboard FileD = FileC << 1;
	constexpr Bitboard FileE = FileD << 1;
	constexpr Bitboard FileF = FileE << 1;
	constexpr Bitboard FileG = FileF << 1;
	constexpr Bitboard FileH = FileG << 1;

	constexpr Bitboard Rank1 = 0xFFULL;
	constexpr Bitboard Rank2 = Rank1 << (8 * 1);
	constexpr Bitboard Rank3 = Rank1 << (8 * 2);
	constexpr Bitboard Rank4 = Rank1 << (8 * 3);
	constexpr Bitboard Rank5 = Rank1 << (8 * 4);
	constexpr Bitboard Rank6 = Rank1 << (8 * 5);
	constexpr Bitboard Rank7 = Rank1 << (8 * 6);
	constexpr Bitboard Rank8 = Rank1 << (8 * 7);

} // namespace Sei