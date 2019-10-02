#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Welcome to my program" << std::endl;
    //initialise some integer variables
    int a = 0;
    int b = 0;
    //ask the user to enter a number
    std::cout <<"please enter a number a: " ;
    //read in the user's number into variable a
    std::cin >> a;
    std::cout <<"please enter a number b: " ;
    //read in the user's number into variable a
    std::cin >> b;
    //output the variable a to the command line
    std::cout <<"your number is " << a+b << std::endl;
    return 0;
}