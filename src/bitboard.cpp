#include "bitboard.h"
#include "types.h"

namespace Sei { 
	namespace Bitboards {
		std::string print(Bitboard bb) {
			std::string output = "+---+---+---+---+---+---+---+---+\n";

			for (Rank r = RANK_8; ; --r) {
				for (File f = FILE_A; f <= FILE_H; ++f) {
					output += bb & make_square(f, r) ? "| X " : "|   ";
				}
				output += "| " + std::to_string(1 + r) + "\n+---+---+---+---+---+---+---+---+\n";

				if (r == RANK_1) 
					break;
			}
			output += "  a   b   c   d   e   f   g   h\n";
			return output;
		}
	} // namespace Bitboards
} // namespace Sei