/* Program that demonstrates the Euclidean algorithm
 * Math reference: How to Find the Greatest Common Divisor by Using the Euclidian Algorithm
 * https://youtu.be/JUzYl1TYMcU
 */

#include <iostream>
using namespace std;

// create a function with two int arguments
int gcd(int, int); 

int main()
{
  int a, b;  
  a = 10; // GCD(10,45) = 5
  b = 45;
  
  cout << "GCD(" << a << ", " << b << ") = " << gcd(a,b) << endl;
  
  return 0;
}

// Recursion
int gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
  
}
