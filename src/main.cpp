#include <iostream>
#include "greeter.h"

int main(int argc, char** argv) {
    std::string name = (argc > 1) ? argv[1] : "";
    std::cout << demo::greet(name) << std::endl;
    return 0;
}
