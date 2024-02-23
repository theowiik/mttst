#include <iostream>
#include "mathz.cpp"
#include "zorter.cpp"

void sort_demo() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Before sort: ";
    for (const int x : arr) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    Zorter::sort(arr, arr_size);
    std::cout << "After sort: ";
    for (const int x : arr) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "-------------" << std::endl << std::endl;

    int a = 10;
    int b = 20;

    std::cout << "a + b = " << Mathz::add(a, b) << std::endl;

    const char* msg = Mathz::greater_or_equal(a, b) ? "yessir" : "nauurrr";
    std::cout << "Is a >= b? " << msg << std::endl;

    std::cout << std::endl;
    sort_demo();

    return 0;
}
