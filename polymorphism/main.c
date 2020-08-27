#include <stdio.h>

#include "shape.h"

int main(void) {
		
	struct shape circle = { CIRCLE, "Circle"};
	struct shape square = { SQUARE, "Square"};

	printf("%s area is %f\n", circle.shape_name, shape_area(&circle));
	printf("%s area is %f\n", square.shape_name, shape_area(&square));

	return 0;
}
