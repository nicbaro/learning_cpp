#include <iostream>

using namespace std;

int main() {
    //cout is an object to output values/print text
    //if I use two cout this won't insert at the end the '\n'
    cout << "Hello World!";
    cout << "I'm learning a new program language!";

    //to insert a new line I can use \n or '<< endl' at the end
    cout << "\n\nHi guys, up on me there is a blank line!" << endl;
    cout << "I'm under :)\n\n";

    /*
    Other escape sequence are:
        - \t --> creates a horizontal tab;
        - \\ --> creates a backslash character (\);
        - \" --> inserts a double quote character;
    */
    cout << "Reasons to study C++:" << endl;
    cout << "\t- Because I'm cool \\ Or just crazy!";  
    return 0;
}