//5. Accessing Characters in a String 
//Task: Access and print the first and last characters of the string "Hello, World!" using array indexing. 

#include<iostream>
#include<string>
using namespace std;
int main(){
string greeting = "hello ,world!";
char firstchar = greeting[0];
cout<<"the first char is !" <<firstchar<<endl;
char lastchar= greeting[greeting.length()-1];
cout<<"the last char is!"<<lastchar<<endl;
return 0;

}