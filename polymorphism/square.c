#include "shape.h"

static float area (void) {
	
	float length = 4;
	float result = length * length;

	return result;
}

const struct shape_vtable_ SQUARE[] = { { area } };
