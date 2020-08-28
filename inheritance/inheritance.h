struct base_class {
    
    int data_x;
};

struct first_derivated_class {
    
    struct base_class base;
    int data_y;
};

struct second_derivated_class {

    struct base_class base;
    int data_z;
};

