// copy_one_string_into_another.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::cout << "Hello World!\n";

    // Source string
    std::string source = "Hello, World!";

    // Destination string
    std::string destination;

    // Copying the source string into the destination string
    destination = source;

    // Display the result
    std::cout << "Source: " << source << std::endl;
    std::cout << "Destination: " << destination << std::endl;

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
