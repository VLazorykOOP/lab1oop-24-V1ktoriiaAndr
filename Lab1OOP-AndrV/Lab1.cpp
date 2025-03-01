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
}

// Третій код
void Code3() {
    cout << "Виконання третього коду\n";
    int n;
    double a, b, X[200];

    cout << "Enter the number of elements:\n";
    cin >> n;

    cout << "Enter the elements of matrix X:\n";
    for (int i = 0; i < n; i++) {
        cin >> X[i];
    }

    cout << "Enter the value for a and b (a < b):\n";
    cin >> a >> b;

    if (a > b) {
        cout << "Wrong value for a and b!!\n";
        return;
    }

    double Sum = 0, MultiP = 1;
    bool hasMultiplication = false;
    double max = X[0], min = X[0];

    for (int i = 0; i < n; i++) {
        if (X[i] < a) {
            Sum += X[i]; 
        } else if (X[i] > b) {
            MultiP *= X[i]; 
            hasMultiplication = true;
        } else if (X[i] >= a && X[i] <= b) {
            if (X[i] > max) {
                max = X[i];
            }
            if (X[i] < min) {
                min = X[i];
            }
        }
    }

    cout << "Sum of (X(i) < a): " << Sum << "\n";
    if (hasMultiplication) {
        cout << "Multiplication of (X(i) > b): " << MultiP << "\n";
    } else {
        cout << "No elements found for multiplication (X(i) > b).\n";
    }
    cout << "Max X(i) in [a, b]: " << max << "\n";
    cout << "Min X(i) in [a, b]: " << min << "\n";
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