/* Program that demonstrates the Euclidean algorithm
 * Math reference: How to Find the Greatest Common Divisor by Using the Euclidian Algorithm
 * https://youtu.be/JUzYl1TYMcU
 */

package Java_sandbox;

public class euclideanAlgo 
{  
    public static void main(String[] args) 
    {
        int a = 10;
        int b = 45;
        
        System.out.println("GCD(" + a + ", " + b + ") = " + gcd(a,b) );
    }
    
    // Recursive function
    public static int gcd(int a, int b) 
    {
        if (a == 0)
            return b;
        return gcd(b % a, a);
    }
    
}
