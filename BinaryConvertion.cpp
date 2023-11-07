#include <iostream>

using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(int binary) {
  int decimal = 0;
  int base = 1;

  while (binary > 0) {
    int remainder = binary % 10;
    decimal += remainder * base;
    base *= 2;
    binary /= 10;
  }

  return decimal;
}

// Function to convert decimal to binary
int decimalToBinary(int decimal) {
  int binary = 0;
  int base = 1;

  while (decimal > 0) {
    int remainder = decimal % 2;
    binary += remainder * base;
    base *= 10;
    decimal /= 2;
  }

  return binary;
}

int main() {
  // Get the binary number to be converted
  int binary;
  cout << "Enter a binary number: ";
  cin >> binary;

  // Convert the binary number to decimal
  int decimal = binaryToDecimal(binary);

  // Display the converted decimal number
  cout << "The decimal equivalent of " << binary << " is " << decimal << endl;

  // Get the decimal number to be converted
  cout << "Enter a decimal number: ";
  cin >> decimal;

  // Convert the decimal number to binary
  binary = decimalToBinary(decimal);

  // Display the converted binary number
  cout << "The binary equivalent of " << decimal << " is " << binary << endl;

  return 0;
}
