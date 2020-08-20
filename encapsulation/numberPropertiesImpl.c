#include "numbersPropertiesDef.h"

int GetDigitsProductForNumber (int Number) {

    int Digit;
    int Product = 1;

    while (Number != 0) {

        Digit = Number % 10;
        Product *= Digit;
        Number /= 10;
    }

    return Product;
}

int GetTheBiggestDigitFromNumber (int Number) {

    int Digit = Number % 10;
    int MaxValue = Digit;

    while (Number != 0) {

        if (MaxValue < Digit)
            MaxValue = Digit;

        Digit = Number % 10;
        Number /= 10;
    }

    return MaxValue;
}

void TestGetDigitsProductForNumber () {

    if (GetDigitsProductForNumber(123) == 6)

        printf("%s", "Test Passed\n");
    else 
        printf("%s", "Test Failed\n");
}

void TestGetTheBiggestDigitFromNumber () {

    if (GetTheBiggestDigitFromNumber(1234) == 4)

        printf("%s", "Test Passed\n");    
    else
    
        printf("%s", "Test Failed\n");
}

void main (void) {

    TestGetDigitsProductForNumber ();
    TestGetTheBiggestDigitFromNumber ();
}