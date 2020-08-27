#include "shape.h"

static float area(void) {
	
	const float PI = 3.14;
	float radius = 3;
	float result;

	result = PI * radius * radius;
}

const struct shape_vtable_ CIRCLE[] = { { area } };

