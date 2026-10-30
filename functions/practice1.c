/*
Q1. Compound Interest Calculator
Topic: Math library: pow() and round()     Level: Moderate
Question: Write a function double compoundInterest(double p, double r, int t) that returns the compound interest using A = P * (1 + R/100)^T and CI = A - P. In main(), print the CI and also the CI rounded to the nearest rupee using round().


Sample Input / Output:
Enter principal, rate (%) and time (years): 10000 8.5 3
Compound Interest          = 2772.89
Rounded to nearest rupee   = 2773
Explanation: %% is used inside printf() to print a literal percent sign.

=====================================================
Q2. Comparing ceil(), floor(), round() and trunc()
Topic: Math library: ceil, floor, round, trunc     Level: Easy
Question: Write a function void showRounding(double x) that prints the results of ceil(), floor(), round() and trunc() for the value passed. Call it for 4.3, 4.7, -4.3 and -4.7 and observe the difference for negative numbers.

Output:
Value    ceil   floor  round  trunc
  4.3    5.0    4.0    4.0    4.0
  4.7    5.0    4.0    5.0    4.0
 -4.3   -4.0   -5.0   -4.0   -4.0
 -4.7   -4.0   -5.0   -5.0   -4.0
Explanation: ceil() moves up to the next integer and floor() moves down. round() goes to the nearest integer. trunc() simply chops off the decimal part (moves toward zero). For negative numbers floor and trunc differ: floor(-4.3) = -5 but trunc(-4.3) = -4.

===========================================================
Q3. Armstrong Number Checker
Topic: Math library: pow() with user-defined functions     Level: Moderate
Question: An Armstrong number is equal to the sum of its digits, each raised to the power of the number of digits (e.g. 153 = 1^3 + 5^3 + 3^3). Write functions int countDigits(int n) and int isArmstrong(int n) (using pow()) and print all Armstrong numbers from 1 to 1000.

Output:
Armstrong numbers from 1 to 1000:
1 2 3 4 5 6 7 8 9 153 370 371 407
Explanation: pow() returns a double. round() is applied before converting to int to avoid tiny floating-point errors (e.g. 124.9999 becoming 124).

==========================================================
Q4. Roots of a Quadratic Equation
Topic: Math library: sqrt()     Level: Moderate
Question: Write a function void findRoots(float a, float b, float c) that finds and prints the roots of ax^2 + bx + c = 0 using sqrt(). Handle the three cases: real and distinct, real and equal, and imaginary roots.  (b^2-4ac)>0, ==0,<0

Sample Input / Output:
Enter coefficients a, b and c: 1 -5 6
Roots are real and distinct: 3.00 and 2.00
Explanation: sqrt() is declared in math.h. On Linux/GCC compile with: gcc program.c -o program -lm

*/

#include <stdio.h>
#include <math.h>

double compoundInterest(double p, double r, int t)
{
  // A = P * (1 + R/100)^T and CI = A - P.
  double a = p * pow((1 + (r / 100)), t);
  return a - p;
}

int countDigits(int n)
{
  // 1234 == 4
  // 1234/10=123  --> discard the last digit

  int ans = 0;
  while (n > 0)
  {
    n = n / 10;  //n= 1/10 = 0
    ans++;  // ans= 1+1+1+1 = 4
  }
  return ans;
}

int isArmstrong(int n)
{
  int actualN = n;
  int expo = countDigits(n);
  double val = 0;
  while (n > 0)
  {                                // n=1,     1%10=1
    val = val + pow(n % 10, expo); // val=0 + pow(4,4)+pow(3,4)+pow(2,4)
    n = n / 10;                    //  val= 0 + pow(4,4)+pow(3,4)+pow(2,4)+pow(1,4)
  }                                // n= 1/10 =0
  if (actualN == val)
  {
    return 1;
  }
  return 0;
}



void findRoots(float a, float b, float c)
{
  // D=b^2-4ac
  //  If D>0, the equation has two distinct real roots.
  //  If D=0, the equation has real and equal.
  //  If D<0, the equation has imaginary roots.

  double d = pow(b, 2) - (4 * a * c);
  double r1 = (-b + sqrt(d)) / (2 * a);
  double r2 = (-b - sqrt(d)) / (2 * a);
  if (d > 0)
  {
    printf("The equation has two distinct real roots.\n");
  }
  else if (d == 0)
  {
    printf("The equation has real and equal.\n");
  }
  else
  {
    printf("The equation has imaginary roots.\n");
  }
  printf("The root1: %d.\n", r1);
  printf("The root2: %d.\n", r2);
}

int main()
{
  // printf("The digits in 1234 are %d\n",countDigits(1234));
  // printf("The digits in 4 are %d\n",countDigits(4));

  // int n=153;

  // if (isArmstrong(n)==0)
  // {
  //   printf("%d is Not a armstrong number\n",n);
  // }else{
  //   printf("%d is a armstrong number\n",n);
  // }

  int i;
  for ( i = 1; i <= 1000; i++)
  {
    if (isArmstrong(i)==0)
    {
      continue;
    }
    printf("%d ",i);
  }

  // double p=50000;
  // double r=5;
  // int t=10;

  // printf("The calculated CI: %lf",round(compoundInterest(p,r,t)));

  // float a=2;
  // float b=-1;   // 64> 20
  // float c=-3;
  // findRoots(a,b,c);


  return 0;
}