#include <iostream>
using namespace std;

void sum_elem(int* A, int* B, int* C, int size) {
	for (int i = 0; i < size; i++) {
		C[i] = A[i] + B[i];
	}
}

typedef void (*elem)(int*, int*, int*, int);

int main() {
	int size;
	cout << "enter size 2 array: ";
	cin >> size;

	int* A = new int[size];
	int* B = new int[size];
	int* C = new int[size];

	cout << "enter element for array A: ";
	for (int i = 0; i < size; i++) {
		cin >> A[i];
	}

	cout << "enter element for array B: ";
	for (int i = 0; i < size; i++) {
		cin >> B[i];
	}

	elem elem = &sum_elem;
	(*elem)(A, B, C, size);
	cout << "array B: ";
	for (int i = 0; i < size; i++) {
		cout<< C[i]<<" ";
	}
	cout << endl;

	delete[] A;
	delete[] B;
	delete[] C;
	return 0;
}