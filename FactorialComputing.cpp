//4/26/21
//Joel Lee
//C++ factorial code
//Structure of Programming Languages

#include<iostream>
using namespace std;

int factorial(int n);

int main()
{
    //creates integer for factorial
    int n;
    
    //Asks the user to submit the integer 
    cout << "Enter a positive integer: ";
    cin >> n;
    // prints the factorial using the factorial function
    cout << "Factorial of " << n << " = " << factorial(n);
    //returns 
    return 0;
}

//this defines the factorial function using recursion
int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
