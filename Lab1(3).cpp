#include <iostream>

int main()
{
    int n;
    double a, b, X[200];

    std::cout << "Enter the number of elements:\n";
    std::cin >> n;

    std::cout << "Enter the elements of matrix X:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> X[i];
    }

    std::cout << "Enter the value for a and b(a < b):\n";
    std::cin >> a >> b;

    if (a > b) {
        std::cout << "Wrong value for a and b!!";
        return 0;
    }

    double Sum = 0, MultiP = 1, max = X[0], min = X[0];
    for (int i = 0; i < n; i++) {
        if (X[i] < a) {
            Sum += X[i]; 
        } else if (X[i] > b) {
            MultiP *= X[i]; 
        } else if (X[i] >= a && X[i] <= b) {
            if (X[i] > max) {
                max = X[i];
            }
            if (X[i] < min) {
                min = X[i];
            }
        }
    }

    std::cout << "Sum of (X(i) < a): " << Sum << "\n";
    std::cout << "Multiplication of (X(i) > b): " << MultiP << "\n";
    std::cout << "Max X(i) in [a, b]: " << max << "\n";
    std::cout << "Min X(i) in [a, b]: " << min << "\n";

    return 0;
}