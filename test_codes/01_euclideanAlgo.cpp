// Program that demonstrates the Euclidean Algorithm

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
