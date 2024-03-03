#include <iostream>

const enum EXIT_STATUS {
    UNKNOWN_ERROR = -1,
    SUCCESSFUL = 0,
};

int main(int argc, char *argv[]) {
    std::cout << "Hello World!\n";

    return EXIT_STATUS::SUCCESSFUL();
}
