#include <cassert>
#include <string>
#include "greeter.h"

int main() {
    using demo::greet;

    assert(greet("") == "Hello, World!");
    assert(greet("Arifur") == "Hello, Arifur!");
    assert(greet("BTU") != "Hello, World!");  // a negative check

    return 0;
}
