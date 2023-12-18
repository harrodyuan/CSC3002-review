#include <iostream>
using namespace std;

//
//template <typename dad>
//dad myMax(dad v1, dad v2) {
//    return (v1 > v2) ? v1 : v2;
//}
//
////模版重点
//template <typename ValueType1, typename ValueType2>
//
//ValueType1 Max2(ValueType1 v1, ValueType2 v2) {
//
//return (v1 > v2) ? v1 : v2;
//
//}
//
///*
// condition ? expression1 : expression2
//condition 是 v1 > v2，即比较两个值 v1 和 v2。
//如果 condition 为真（即 v1 大于 v2），则表达式返回 expression1，也就是 v1。
//如果 condition 为假（即 v1 不大于 v2），则表达式返回 expression2，也就是 v2。
//*/
//
//int & ReturnByReference(int a)  {
//cout << "Into ReturnByReference:" << endl;
//cout << "&a = " << &a << "; a = " << a << endl;
//int* b = new int(a); // can be safely returned by reference
//cout << "&b = " << &b << "; b = " << b << "; *b = " << *b << endl; cout << "Out of ReturnByReference:" << endl;
//return *b;
//}
//int CallByReference(int & a) {
//cout << "Into CallByReference:" << endl;
//    cout << "&a = " << &a << "; a = " << a << endl; cout << "Out of CallByReference:" << endl; return a;}
//
//
//int operate(int a, int b) {
//    return a*b;
//}
//
//double operate(double a, double b) {
//    return a/b;
//}
//
//int main () {
//    cout << operate(1, 2) << endl; // Outputs 2
//    cout << operate(1.0, 2.0) << endl; // Outputs 0.5
//    cout << myMax<int>(1.3, 2.4) << endl;
//    cout<< int(2.34) << endl;
//    cout << myMax<float>(1, 2.4) << endl;
//
//    cout << Max2(1, 1.2) << endl;
//    int a = 1;
//    cout << "&a = " << &a << "; a = " << a << endl; a = CallByReference(ReturnByReference(a) = a+1); cout << "&a = " << &a << "; a = " << a << endl;
//
//    int sdkfja = 10;
//    int *ptr = &sdkfja;  // ptr now holds the address of a
//
//    cout<< &ptr<< endl;
//    cout<< *ptr<< endl;
//    cout<< sdkfja<< endl;
//    cout <<ptr;
//
//    unsigned int x = 5;  // Binary: 101
//    unsigned int y = 3;  // Binary: 011
//
//    // Bitwise AND: 101 & 011 = 001 (1 in decimal)
//    unsigned int andResult = x & y;
//
//    // Bitwise OR: 101 | 011 = 111 (7 in decimal)
//    unsigned int orResult = x | y;
//
//    // Bitwise XOR: 101 ^ 011 = 110 (6 in decimal)
//    unsigned int xorResult = x ^ y;
//
//    // Bitwise NOT: ~101 = ...11111010 (in 32-bit, the result is a large number due to inversion)
//    unsigned int notResult = ~x;
//
//    // Left shift: 101 << 1 = 1010 (10 in decimal)
//    unsigned int leftShift = x << 1;
//
//    // Right shift: 101 >> 1 = 10 (2 in decimal)
//    unsigned int rightShift = x >> 1;
//
//
//
//
//    return 0;
//}
//
//
//int main(){
//
//    int a = 10;
//    int *b = &a;
//    int **c = &b;
//    int pixel= 0xFF202104;
//    int color = (pixel >> 16) &0xFF;
//
////    std::cout << b << endl<< &b << endl<< *b << endl << &a << endl;
////    std::cout << c <<  endl << *c << endl << **c <<endl;
//    std::cout << &*&a << endl << &a << endl;
//    std::cout << color<< endl  ;
//    return 0;
//}


// pointer thing... confusing but worth your trying...
//int main(void){
//int arr[] = {2, 0, 2, 1};
//int* p = arr;
//int a = *++p;
//int b = *p++;
//int c = ++*p;
//int d = (*p)++;
//cout << arr[0] << arr[1] << arr[2] << arr[3] << endl;
//cout << a << b << c << d << endl;
//    cout << p++ << endl;
//return 0;
//}


// pointers are variables that store memory addresses, while dereferencing a pointer (using *p) accesses the value at that memory address.
//So, when you manipulate *p, you are indeed working with the value at the memory address, not the address itself.

//int main(void) {
//    int arr[] = {2, 0, 2, 1}; // An array with 4 elements is declared.
//    int* p = arr; // p is a pointer to the first element of arr.
//
//    // The following lines perform different operations on the pointer and the array:
//
//    int a = *++p; // Increments the pointer before dereferencing it, so it now points to arr[1], and assigns the value 0 to 'a'.
//    // a = *p, p = p+1
//    int b = *p++; // Dereferences the pointer first (which points to arr[1]), assigning the value 0 to 'b', then increments the pointer to point to arr[2].
////    Post-Increment (p++): The ++ operator is a post-increment operator, but it's applied to p, not *p. This means that the pointer p is incremented to point to the next memory location after the current one. However, because it's a post-increment, the increment happens after the value of the entire expression is determined.
//
//    // b = *p, p = p+1
////    x = *p, *p = x + 1, c = x + 1
//
//
//    int c = ++*p; // Increments the value pointed by 'p' before dereferencing it, so arr[2] is incremented from 2 to 3, and assigns 3 to 'c'.
//    // x = *p,  = *p + 1, c = *p
//
//    int d = (*p)++; // Dereferences the pointer first (which points to arr[2]), assigning the value 3 to 'd', then increments the value of arr[2] to 4.
//    // x = *p, d = x, *p = *p + 1
//    // x = *p, d = x, *p = x + 1
//
//
//    // The array now looks like this: arr = {2, 0, 4, 1}.
//
//    cout << arr[0] << arr[1] << arr[2] << arr[3] << endl; // This prints '2041'.
//    cout << a << b << c << d << endl; // This prints '0033', because a=0, b=0, c=3, d=3.
//
//    // This prints the current pointer value (address), and then increments the pointer.
//    // The printed value will be the address of arr[3], and then 'p' will point to one past the end of the array.
//    cout << (p++) << endl;
//
//    return 0;
//}

// int doubleArray[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};


// int main(){
//     cout << doubleArray<< endl;
//     std::cout << std::hex << *doubleArray<< endl;

    
// }
