#include <iostream>
#include <string>

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Hello, " << name << "Bob" << std::endl;

    return 0;
}
// This program prompts the user for their name and greets them.