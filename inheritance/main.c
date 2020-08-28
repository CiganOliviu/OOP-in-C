#include "inheritance.h"
#include <stdio.h>

void test (int data_set_one, int data_set_two) {

    if (data_set_one == 12)
        if (data_set_two == 13)
            printf("%s", "Test passed\n");
        else 
            printf("%s", "Test failed\n");
    else
        printf("%s", "Test failed\n");
}

int main(void) {

    struct first_derivated_class FiDeCl;
    struct second_derivated_class SeDeCl;

    FiDeCl.base.data_x = 12;
    FiDeCl.data_y = 13;

    test (FiDeCl.base.data_x, FiDeCl.data_y);

    return 0;
}
