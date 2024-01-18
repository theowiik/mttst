#include <iostream>
#include "mathz.cpp"
#include "zorter.cpp"

void sort_demo() {
    const std::vector arr = {5, 4, 3, 2, 1};

    std::cout << "Before sort: ";
    for (auto x : arr) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    auto sorted = Zorter::sort(arr);
    std::cout << "After sort: ";
    for (auto x : sorted) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "-------------" << std::endl << std::endl;

    auto a = 10;
    auto b = 20;

    std::cout << "a + b = " << Mathz::add(a, b) << std::endl;

    auto msg = Mathz::greater_or_equal(a, b) ? "yessir" : "nauurrr";
    std::cout << "Is a >= b? " << msg << std::endl;

    std::cout << std::endl;
    sort_demo();

    return 0;
}
