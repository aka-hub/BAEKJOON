#pragma once
#include <iostream>
using namespace std;

void ChangeDouble(int* number);

void pointer1() {

        int number = 3;
        printf("%d\n", number);

        number = 5;
        printf("%d\n", number);

        ChangeDouble(&number);
        printf("After Doubling is... -> %d\n", number);


    
}

void ChangeDouble(int* number) {

    *number *= 2;

}