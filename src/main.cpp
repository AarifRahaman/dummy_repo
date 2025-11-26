#include <iostream>
#include "greeter.h"
int main() {
    Greeter g("Arifur");
    std::cout << "Hello, " << g.get_name() << "!" << std::endl;
    return 0;
}
