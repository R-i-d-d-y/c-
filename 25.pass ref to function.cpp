
#include<iostream>
using namespace std;
// function declaration
void swap(int *a, int *b) {
int temp;
temp = *a; /* save the value at address x */
*a = *b; /* put y into x */
*b = temp; /* put x into y */

}
int main () {
// local variable declaration:
int a = 100;
int b = 200;
cout << "Before swap, value of a :" << a << endl;
cout << "Before swap, value of b :" << b << endl;
/* calling a function to swap the values using variable reference.*/
swap(&a,&b);
cout << "\nAfter swap, value of a :" << a << endl;
cout << "After swap, value of b :" << b << endl;

return 0;
}
