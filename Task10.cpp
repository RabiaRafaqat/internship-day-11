//Multiple Word Input (Simple) 
//task: Read a full sentence from the user and print it. Use basic input handling to store the sentence in a string.



#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << sentence << endl;

    return 0;
}
