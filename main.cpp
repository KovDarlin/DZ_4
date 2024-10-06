#include <iostream>
using namespace std;

int maxi(int* A, int* B, int size_A, int size_B) {
    int max = A[0];
    for (int i = 1; i < size_A; i++) {
        if (A[i] > max) {
            max = A[i];
        }
    }

    for (int i = 0; i < size_B; i++) {
        if (B[i] > max) {
            max = B[i];
        }
    }

    return max;
}

int mini(int* A, int* B, int size_A, int size_B) {
    int min = A[0];
    for (int i = 1; i < size_A; i++) {
        if (A[i] < min) {
            min = A[i];
        }
    }

    for (int i = 0; i < size_B; i++) {
        if (B[i] < min) {
            min = B[i];
        }
    }

    return min;
}

double average(int* A, int* B, int size_A, int size_B) {
    int s = 0;
    for (int i = 0; i < size_A; i++) {
        s += A[i];
    }
    for (int i = 0; i < size_B; i++) {
        s += B[i];
    }
    int s_size = size_A + size_B;
    return static_cast<double>(s) / s_size;
}

double Action(int* A, int* B, int size_A, int size_B, double (*dii)(int*, int*, int, int)) {
    return dii(A, B, size_A, size_B);
}

int main() {
    int size_A;
    int size_B;
    cout << "enter size for array A: ";
    cin >> size_A;
    cout << "enter size for array B: ";
    cin >> size_B;

    int* A = new int[size_A];
    int* B = new int[size_B];

    cout << "enter element for array A: ";
    for (int i = 0; i < size_A; i++) {
        cin >> A[i];
    }

    cout << "enter element for array B: ";
    for (int i = 0; i < size_B; i++) {
        cin >> B[i];
    }

    int operation;
    cout << "enter number to chose operation 1(max), 2(min), 3(average): ";
    cin >> operation;

    double res;
    if (operation == 1) {
        res = static_cast<double>(maxi(A, B, size_A, size_B));
        cout << "Max: " << res << endl;
    }
    else if (operation == 2) {
        res = static_cast<double>(mini(A, B, size_A, size_B));
        cout << "Min: " << res << endl;
    }
    else if (operation == 3) {
        res = average(A, B, size_A, size_B);
        cout << "Average: " << res << endl;
    }
    else {
        cout << "Problem!" << endl;
    }

    delete[] A;
    delete[] B;

    return 0;
}