#include <iostream>

// Function to reverse a string
void reverseString(char str[], int length) {
    for (int i = 0; i < length / 2; ++i) {
        // Swap characters from the beginning and end of the string
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    const int maxSize = 100;
    char inputString[maxSize];

    // Read a string from the user
    std::cout << "Enter a string: ";
    std::cin.getline(inputString, maxSize);

    // Calculate the length of the string
    int length = 0;
    while (inputString[length] != '\0') {
        ++length;
    }

    // Reverse the string
    reverseString(inputString, length);

    // Display the reversed string
    std::cout << "Reversed string: " << inputString << std::endl;

    return 0;
}
