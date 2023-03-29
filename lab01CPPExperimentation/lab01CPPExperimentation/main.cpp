#include <iostream>

int main() {

    for (int row{10}; row >= 1; --row) {

        for (unsigned int space{10}; space > row; --space) {

            std::cout << " ";

        }

        for (int column{1}; column <= row; ++column) {

            std::cout << "*";

        }

        std::cout << std::endl;

    }



}
