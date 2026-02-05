#include "logic.h"

bool is_color_the_same(int x1, int y1, int x2, int y2) {

	while ((x2 - x1) % 2 == 0 && (y2 - y1) % 2 == 0) {
		return true;
	}

	return false;
}