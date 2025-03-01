#include <iostream>

int main() {
    int N;
    int A[100], B[100];  
    int M = 0;  

    std::cout << "Enter number of elements (max " << 100 << "): ";
    std::cin >> N;

    std::cout << "Enter elements:\n";
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        if (A[i] >= 0) {
           B[M] = A[i]; 
           M++;
        } 
    }

    if (M == 0){
        std::cout << "No positive elements in matrix A.";
        return 0;
    }
    
    std::cout << "Array B: ";
    for (int i = 0; i < M; i++) {
        std::cout << B[i] << " ";
    }
    std::cout << "\n";

    return 0;
}