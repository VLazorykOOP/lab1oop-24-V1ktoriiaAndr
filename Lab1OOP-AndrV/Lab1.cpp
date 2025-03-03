#include <iostream>

using namespace std;

// Перший код
void Code1() {
    cout << "Виконання першого коду\n";
    int N;
    int A[100], B[100];  
    int M = 0;  

    cout << "Enter number of elements (max " << 100 << "): ";
    cin >> N;

    cout << "Enter elements:\n";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        if (A[i] >= 0) {
           B[M] = A[i]; 
           M++;
        } 
    }

    if (M == 0) {
        cout << "No positive elements in matrix A.\n";
        return;
    }
    
    cout << "Array B: ";
    for (int i = 0; i < M; i++) {
        cout << B[i] << " ";
    }
    cout << "\n";
}

// Другий код
void Code2() {
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
        if (A[i] > 0) {
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

    std::cout << "Max Number: " << maxNum << "\n";


    if (lastIndex != -1) {
        std::cout << "Last index of max element greater than T: " << lastIndex << "\n";
    } else {
        std::cout << "No positive element greater than T found.\n";
    }
}

// Третій код
void Code3() {
    cout << "Виконання третього коду\n";
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

    double Sum = 0, MultiP = 1, max = -1e9, min = 1e9;
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
}

// Функція для відображення меню
void ShowMenu() {
    cout << "=== Головне меню ===\n";
    cout << "1. Виконати перший код\n";
    cout << "2. Виконати другий код\n";
    cout << "3. Виконати третій код\n";
    cout << "4. Вихід\n";
    cout << "Ваш вибір: ";
}

int main() {
    int choice;
    
    do {
        ShowMenu();
        cin >> choice;

        switch (choice) {
            case 1: Code1(); break;
            case 2: Code2(); break;
            case 3: Code3(); break;
            case 4: cout << "Вихід з програми...\n"; break;
            default: cout << "Неправильний вибір! Спробуйте ще раз.\n";
        }
        
        cout << "\n";
        
    } while (choice != 4);

    return 0;
}