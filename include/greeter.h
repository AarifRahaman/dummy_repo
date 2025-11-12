/**
 * @file greeter.h
 * @brief Provides a simple inline function to generate greeting messages.
 *
 * This header defines a small header-only utility inside the `demo` namespace.
 * The function `greet()` creates a greeting message for a given name.
 * If no name is provided, it defaults to greeting "World".
 */

#pragma once
#include <string>

namespace demo {

/**
 * @brief Generates a greeting message for the specified name.
 *
 * This inline helper function returns a string like `"Hello, Arifur!"`.
 * If the given name is empty, it defaults to `"Hello, World!"`.
 *
 * @param name The name of the person to greet.  
 *             If empty, the function uses `"World"`.
 * @return A greeting string in the format `"Hello, <name>!"`.
 *
 * @note Being declared `inline`, this function can be used from both
 *       application and test code without requiring a separate compiled library.
 *
 * @example
 * std::string message = demo::greet("Arifur");
 * // message = "Hello, Arifur!"
 */
inline std::string greet(const std::string& name) {
    return "Hello, " + (name.empty() ? std::string("World") : name) + "!";
}

}  // namespace demo
