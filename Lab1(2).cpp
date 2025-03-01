#include <iostream>

int main() {
    int N, M = 0, T;
    std::cout << "Enter number of elements: ";
    std::cin >> N;

    int A[100], B[100];

    std::cout << "Enter number T: " << "\n";
    std::cin >> T;

    std::cout << "Enter elements: \n";
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    int maxNum = -1, lastIndex = -1;
    for (int i = 0; i < N; i++) {
        if (A[i] >= 0) {
            B[M] = A[i];
            M++;
        }
    }

    for (int i = M; i >= 0; i--) {
        if (B[i] > T && B[i] >= maxNum) {
            maxNum = B[i];
            lastIndex = i;
        }
    }

    std::cout << "Array B: ";
    for (int i = 0; i < M; i++) {
        std::cout << B[i] << " ";
    }
    std::cout << "\n";


    if (lastIndex != -1) {
        std::cout << "Last index of max element greater than T: " << lastIndex << "\n";
    } else {
        std::cout << "No positive element greater than T found.\n";
    }


    return 0;
}