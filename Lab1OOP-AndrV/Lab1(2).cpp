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
        std::cin >> *(A + i);  
    }

    int maxNum = -1, lastIndex = -1;
    int* pA = A;  
    int* pB = B;  

    for (int i = 0; i < N; i++) {
        if (*(pA + i) >= 0) {
            *(pB + M) = *(pA + i);  
            M++;
        }
    }

    for (int i = M - 1; i >= 0; i--) {
        if (*(pB + i) > T && *(pB + i) >= maxNum) {
            maxNum = *(pB + i);
            lastIndex = i;
        }
    }

    std::cout << "Array B: ";
    for (int i = 0; i < M; i++) {
        std::cout << *(pB + i) << " ";  
    }
    std::cout << "\n";

    if (lastIndex != -1) {
        std::cout << "Last index of max element greater than T: " << lastIndex << "\n";
    } else {
        std::cout << "No positive element greater than T found.\n";
    }

    return 0;
}