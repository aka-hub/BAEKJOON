#pragma once
#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    if (n == 1|| n == 0) return 1;

    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;

}

void run11050() {

    int N, K;
    cin >> N >> K;

    cout << factorial(N) / (factorial(K) * factorial(N - K));

 
}

