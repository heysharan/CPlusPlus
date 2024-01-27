[1] - Hello World 

#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Hello World";
    return 0;
}

[2] - Sum of two numbers

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a , b, sum;
    cout << "Enter Two numbers";
    cin >> a >> b;
    sum = a + b;
    cout << "Sum of two numbers" << sum;
}

[3] - Sum of N natural numbers (Formule - (n*(n+1)/2))

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the natural number";
    cin >> n;
    cout << "The sum of" << n << "natural numbers are" << (n*(n+1)/2);
}

[4] - If condition

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number to check ?";
    cin >> n;
    if (n > 10){
        cout << "The Number greater than 10";
    }
    
}

[5] - If / Else condition

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number to check ?";
    cin >> n;
    if (n > 10){
        cout << n << " greater than 10 ";
    }
    else{
        cout << n << " is not greater than 10 ";
    }
}

[6] - Even or Odd (If/Else)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number to check ?";
    cin >> n;
    if (n % 2 == 0){
        cout << n << " is a even number ";
    }
    else{
        cout << n << " is a odd number ";
    }
}

[7] - Check Equality (If/Else)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number to check ?";
    cin >> n;
    if (n  == 10){
        cout << n << " is a equal 10 ";
    }
    else{
        cout << n << " is not equal 10 ";
    }
}

[8] - Greatest of three number (Nested If/Else)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter three numbers ";
    cin >> a >> b >> c;
    if( a > b ){
        if( a > c ){
            cout << a << " is the greatest number ";
        }
        else {
            cout << c << " is the greatest number ";
        }
    }
    else{
        if( b > c ){
            cout << b << " is the greatest number ";
        }
        else {
            cout << c << " is the greatest number ";
        }
    }
}

[9] - Leap year (If/Else)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the year to check ? ";
    cin >> n;
    if((n%4==0 && n%100!=0) || n%400==0 ){
        cout << n << " is a leap year";
    }
    else{
        cout << n << " is not a leap year ";
    }
}

[10] - Multiple of 8 and 5

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number to check ? ";
    cin >> n;
    if( n%8==0 && n%5==0 ){
        cout << n << " multiple of both 8 and 5 ";
    }
    else if ( n % 8 == 0 ){
        cout << n << " is multiple of 8 ";
    }
    else if ( n % 5 == 0 ){
        cout << n << " multiple of 5 ";
    }
    else {
        cout << "Enter valid number ";
    }
    
}

[11] - Grade System (Switch case)

#include <bits/stdc++.h>
using namespace std;

int main(){
    char g;
    cout << "Enter the Grade (A, B, C, O)";
    cin >> g;
    switch(g){
        case 'O' : cout << "Outstanding"; break;
        case 'A' : cout << "Very Good"; break;
        case 'B' : cout << "Good"; break;
        case 'C' : cout << "Fail"; break;
        default : cout << "Enter valid grade";
    }
         
}

[12] - Greatest of 4 numbers (If/Else)  - HomeWork

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cout << " Enter 4 numbers to check ? ";
    cin >> a >> b >> c >> d;
    if ( (a>b) && (a>c) && (a>d) ){
        cout << a << " is the greatest number ";
    }
    else if ( (b>a) && (b>c) && (b>d) ){
        cout << b << " is the greatest number ";
    }
    else if ( (c>a) && (c>b) && (c>d) ){
        cout << c << " is the greatest number ";
    }
    else if ( (d>a) && (d>b) && (d>c) ){
        cout << d << " is the greatest number ";
    }
     
}

[13] - Find the Quadrant of the given pts(x,y) with edge cases - HomeWork

#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cout << " Enter the points (x,y) ";
    cin >> x >> y;
    if( x==0 && y==0 ){
        cout << "Origin";
    }
    else if ( x==0 && y!=0 ){
        cout << "Y-axis";
    }
    else if ( x!=0 && y==0 ){
        cout << "X-axis";
    }
    else if ( x>0 && y>0 ){
        cout << "1st Quadrant";
    }
    else if ( x<0 && y>0 ){
        cout << "2nd Quadrant";
    }
    else if ( x<0 && y<0 ){
        cout << "3rd Quadrant";
    }
    else if ( x>0 && y<0 ){
        cout << "4th Quadrant";
    }
}


[14] - For Loop 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout << "Enter the number to calculate ? ";
    cin >> n;
    cout << "Enter the number upto which it should be calculated ? ";
    cin >> m;
    for( int i = 1 ; i < m ; i++ ){
         cout << i << " * " << n << " = " << n*i << endl;
        }
    }


[15] - While Loop

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout << "Enter the number to calculate ? ";
    cin >> n;
    cout << "Enter the number upto which it should be calculated ? ";
    cin >> m;
    int i = 1;
    while(i<=n){
        cout << n << " * " << i << " = " << n*i << endl;
        i++;
    }
}

[16] - do While Loop

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout << "Enter the number to calculate ? ";
    cin >> n;
    cout << "Enter the number upto which it should be calculated ? ";
    cin >> m;
    int i = 1;
    do{
        cout  << n << " * " << i << " = " << n*i << endl;
        i++;
    }while(i<=m);
}

[17] - Break Implementation

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout << "Enter the number to calculate ? ";
    cin >> n;
    cout << "Enter the number upto which it should be calculated ? ";
    cin >> m;
    for ( int i = 1 ; i <= m ; i++ ){
        if( i == 5 ) break;
        cout << n << " * " << i << " = " << n*i << endl;
    }
}

[18] - Continue Implementation

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout << "Enter the number to calculate ? ";
    cin >> n;
    cout << "Enter the number upto which it should be calculated ? ";
    cin >> m;
    for ( int i = 1 ; i <= m ; i++ ){
        if( i == 5 ) continue;
        cout << n << " * " << i << " = " << n*i << endl;
    }
}

[19] - Nested Loops 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of weeks ? ";
    cin >> n;
    int i = 1;
    while(i<=n){
        cout << "Week " << i << " : ";
        int j = 1;
        while(j <= 7) {
            cout << "Day " << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    
}

[19b] - Nested Loops

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout << "Enter the number of Rows ? ";
    cin >> n;
    cout << "Enter the number of Columns ?";
    cin >> m;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= m) {
            cout << " * ";
            j++;
        }
        cout << endl;
        i++;
    }
    
}

[19c] - Nested Loops 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    cout << " Enter the number of Row ? ";
    cin >> r;
    cout << "Enter the number of Columns ? ";
    cin >> c;
    for( int i = 0 ; i < r ; i++ ){
        for( int j = 0 ; j < c ; j++){
            cout << i << j << " ";
        }
        cout << endl; 
    }
    
}

[20] - Funtion Implementation - With return

#include <bits/stdc++.h>
using namespace std;

int add (int a, int b){
    int c = a + b;
    return c;
}
int main(){
    int a,b;
    cout << " Enter the first number ? ";
    cin >> a;
    cout << "Enter the second number ? ";
    cin >> b;
    cout << a << " + " << b << " = " << add(a,b);
    
}

[20a] - Funtion Implementation - Without return

#include <bits/stdc++.h>
using namespace std;

void add (int a, int b){
    int c = a + b;
    cout << a << " + " << b << " = " << c;
}
int main(){
    int a,b;
    cout << " Enter the first number ? ";
    cin >> a;
    cout << "Enter the second number ? ";
    cin >> b;
    add(a,b);
    
}

[21] - Pass by value (Only value of variables are passed to function)

#include <bits/stdc++.h>
using namespace std;

int add (int a, int b){
    a++;
    b++;
    return a+b;
}
int main(){
    int a,b;
    cout << " Enter the first number ? ";
    cin >> a;
    cout << "Enter the second number ? ";
    cin >> b;
    cout << add(a,b) << endl;
    cout << a << endl;
    cout << b << endl;
    
}

[22] - Pass by reference (Address of the variable are passed to function)

#include <bits/stdc++.h>
using namespace std;

int add (int &a, int &b){
    a++;
    b++;
    return a+b;
}
int main(){
    int a,b;
    cout << " Enter the first number ? ";
    cin >> a;
    cout << "Enter the second number ? ";
    cin >> b;
    cout << add(a,b) << endl;
    cout << a << endl;
    cout << b << endl;
    
}

[23] - Given a string s consisting of words and spaces,return the length of the last word in the string. 
       A word is a maximal substring consisting of non-space characters only.

#include <bits/stdc++.h>
using namespace std;

int solve(string s) {
    int count = 0, len = s.length() - 1;
    while(len >= 0 && s[len] == ' ') len--; //this loop makes sure the spaces after the last word are omitted. 
    while(len >= 0 && s[len] != ' ') {      //this loop counts the length of the last word in the string.
        count++;
        len--;
    }
    return count;

}

int main() {

    std::string userInput;
    std::cout << "Enter the string: ";
    std::getline(std::cin, userInput);

    int result = solve(userInput);
    
    cout << "Length of the last word in \"" << userInput << "\": " << result << endl;
    

    return 0;
}

[24] - Check if number is palindrome or not ?

#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n) {
    int original = n;
    int reversedNum = 0;
    while(n > 0){
        int digit = n % 10;
        reversedNum = (reversedNum * 10) + digit;
        n = n / 10;
    }
    return (original == reversedNum);
}

int main() {

    int n;
    cout << "Enter the number to check ? ";
    cin >> n;
    cout << std::boolalpha << palindrome(n) << endl;
}

[25] - Return sum of first N odd natural numbers (Formule N*N)

#include <bits/stdc++.h>
using namespace std;

int sumOddNaturalNum(int n) {
    return n*n;
}
int main() {

    int n;
    cout << " Enter upto which number it should be calculated ? ";
    cin >> n;
    cout << sumOddNaturalNum(n) << endl;
}

[26] - Calculate the factorial of the given number 

#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    int fac = 1;
    for(int i = 1 ; i <=n ; i++){
        fac *= i;
    }
    return fac;
}
int main() {

    int n;
    cout << " Enter the number to calculate the factorial  ? ";
    cin >> n;
    cout << factorial(n) << endl;
}

[27] - Enter the number to check if its a Armstrong number or not ?

#include <bits/stdc++.h>
using namespace std;

bool armstrongNum(int n) {
          int result = 0;
          int original = n;
          while(n > 0){
                int digit = n % 10;
                result += (digit*digit*digit);
                n /= 10;
          }
          return (original==result);
      }
int main() {

    int n;
    cout << " Enter the number to check if its a Armstrong number or not ? ";
    cin >> n;
    cout << std::boolalpha << armstrongNum(n) << endl;
}

[28] - Prime Number or not?

#include <bits/stdc++.h>
using namespace std;

bool primeNum(int n) {
    int count = 0;
    for (int i = 1 ; i <= n ; i++){
        if(n%i==0){
            count++;
        }
    }
    return (count == 2);
}
bool optimizedPrimeNum(int n){
    for(int i = 2 ; i * i <= n ; i++){        { Loop condition (i * i <= n): The loop continues as long as the square of i is less than or equal to n. 
        if(n % i == 0) {                        This condition is based on the fact that if a number n is not a prime, it must have a divisor smaller than or equal to its square root. 
            return false;                       Therefore, checking up to the square root is sufficient. }
        }
    }
    return true;
} 
int main() {

    int n;
    cout << " Enter the number to check if its a Prime number or not ? ";
    cin >> n;
    cout << std::boolalpha << optimizedPrimeNum(n) << endl;
    cout << std::boolalpha << primeNum(n) << endl;
}












