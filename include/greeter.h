#pragma once
#include <string>

namespace demo {

// Header-only tiny function so app and tests can both use it without a lib
inline std::string greet(const std::string& name) {
    return "Hello, " + (name.empty() ? std::string("World") : name) + "!";
}

}  // namespace demo
