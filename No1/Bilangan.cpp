#include <iostream>

int main() {
    int N;

    // Meminta input untuk N
    std::cout << "Masukkan N: ";
    std::cin >> N;

    // Alokasi array dinamis
    int *arr = new int[N];

    // Meminta input untuk N buah bilangan bulat
    for (int i = 0; i < N; i++) {
        std::cout << "Masukkan bilangan ke " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Menentukan apakah semua bilangan berbeda atau tidak
    bool isAllDifferent = true;

    for (int i = 0; i < N - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            isAllDifferent = false;
            break;
        }
    }

    // Menampilkan hasil
    if (isAllDifferent) {
        std::cout << "Berbeda semua\n";
    } else {
        std::cout << "Tidak berbeda semua\n";
    }

    // Membebaskan memori yang dialokasikan
    delete[] arr;

    return 0;
}