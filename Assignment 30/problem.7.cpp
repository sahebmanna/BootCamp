//7. Write a C++ program to accept a username if the username has less than 6 characters or does contain any digit or special symbol.

#include<iostream>
#include<string.h>
using namespace std;
bool digitORspecialsymbol(string str){
    for(char character :str){
    if(!isalnum(character)){
        return true;
    }
    else if(!isdigit(character)){
        return true;
    }
    }
    return false;

}

int main(){
    string u_name;//="1234567890";
    try{
        cout<<"Enter your u_name:-->";
        getline(cin,u_name);
        //int x=strlen(Phonenumber);
       int x=u_name.length();
       if(x<6)
            throw runtime_error("username must be >= 6 ");
       if(!digitORspecialsymbol(u_name))
            throw runtime_error("u_name must have digit OR specialsymbol");
       cout<<"Your u_name "<<u_name<<" is valid"<<endl;
    }
    catch(exception &e){
        cout<<"Exception:-->"<<e.what()<<endl;;
    }

    return 0;
}
/*/ the cctype header is part of the Standard Library and provides functions and macros for working with character classification and manipulation. It's used for determining various properties of characters, such as whether they are letters, digits, whitespace, etc.

// Here are some commonly used functions and macros from the cctype header:

// isalnum(int c): Checks if the given character is an alphanumeric character (either a letter or a digit).

// isalpha(int c): Checks if the given character is a letter.

// isdigit(int c): Checks if the given character is a digit.

// islower(int c): Checks if the given character is a lowercase letter.

// isupper(int c): Checks if the given character is an uppercase letter.

// isspace(int c): Checks if the given character is a whitespace character (space, tab, newline, etc.).

// tolower(int c): Converts the given character to lowercase.

// toupper(int c): Converts the given character to uppercase.

// These functions and macros operate on integers (ASCII values) and are often used with characters represented as char types in C++. For example, you can use isalpha('A') to check if the character 'A' is a letter.
*/
