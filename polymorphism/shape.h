#ifndef SHAPE_H
#define SHAPE_H

struct shape {
	
	const struct shape_vtable_ * vtable_;
	const char * shape_name;
};

struct shape_vtable_ {
	
	float (* area)(void);
};

static inline float shape_area(struct shape * shape) {
	
	return shape->vtable_->area();
}

extern const struct shape_vtable_ SQUARE[], CIRCLE[];

#endif
