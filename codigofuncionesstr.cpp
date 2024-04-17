#include <iostream>
#include <string.h>
using namespace std;


int main() {

char str1[20] = "Hello, ";
char str2[] = "world!";
char str3[20]; // Copying a string

strcpy(str3, str1);

cout << "After copying, str3 is: " << str3 << endl;
// Concatenating two strings

strcat(str1, str2);
cout << "After concatenating, str1 is: " << str1 << endl;

// Getting the length of a string
cout << "The length of str2 is: " <<

strlen(str2) << endl; // Comparing two strings
if (strcmp(str1, str3) == 0) {
cout << "str1 and str3 are equal." << endl;
}

 else {

cout << "str1 and str3 are not equal." << endl;

}

  return 0;

}
