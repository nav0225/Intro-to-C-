// Program to print product of 2 numbers
#include <iostream>
using namespace std;
int main()
{
    int a, b, prod;
    cout << "Enter first number: \n";
    cin >> a;
    cout << "Enter second number: \n";
    cin >> b;
    prod = a * b;
    cout << "Product of 2 given numbers is: " << prod << endl;

    return 0;
}

// Program to print the ASCII value of a character

#include <iostream>
using namespace std;
int main()
{
    char c = 'U';
    cout << "The ASCII value of " << c <<" is: " << int(c);

    return 0;
}

// Program to take in length and breadth of a rectangle

#include <iostream>
using namespace std;
int main()
{
    int l, b, area;
    cout << "Enter length and breadth\n";
    cin >> l >> b;
    area = l * b;
    cout << "Area of rectangle is: " << area << endl;

    return 0;
}

// Program to calculate cube of a number
#include <iostream>
using namespace std;
int main()
{
    int n, cube;
    cout << "Enter any number\n";
    cin >> n;
    cube = n * n * n;
    cout << "Cube of given number is: " << cube;

    return 0;
}

// Program to print size of data types

#include <iostream>
using namespace std;

int main()
{
    int integerType;
    char charType;
    float floatType;
    double doubleType;

    cout << "size of int is: " << sizeof(integerType) << endl;
    cout << "size of char is: " << sizeof(charType) << endl;
    cout << "size of float is: " << sizeof(floatType) << endl;
    cout << "size of double is: " << sizeof(doubleType) << endl;

    return 0;
}

// Program to swap two variables

#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter any two numbers: \n";
    cin >> a >> b;
    c = a;
    a = b;
    b = c;
    cout << a <<" "<< b << endl;

    return 0;
}
