#include <iostream>
using namespace std;
int main()
{
    int first, second, third, fourth, digit, temp;
    int encryptedNumber;
    cout << "Enter a four digit number to be encrypted: ";
    cin >> digit;
    first = ( digit / 1000 + 9 ) % 10;
    second = ( digit % 1000 / 100 + 9 ) % 10;
    third = ( digit % 1000 % 100 / 10 + 9 ) % 10;
    fourth = ( digit % 1000 % 100 % 10 + 9 ) % 10;
    temp = first;
    first = third * 1000;
    third = temp * 10;
    temp = second;
    second = fourth * 100;
    fourth = temp * 1;
    encryptedNumber = first + second + third + fourth;
    cout << "Encrypted number is " << encryptedNumber << endl;


//Part 2:

    int first1, second1, third1, fourth1, decrypted, temp1, num1;
    //cout << "Enter a four digit encrypted number: ";
    //cin >> num;
    num1 = encryptedNumber;
    first1 = num1 / 1000;
    second1 = num1 % 1000 / 100;
    third1 = num1 % 1000 % 100 / 10;
    fourth1 = num1 % 1000 % 100 % 10;
    temp1 = ( first1 + 1 ) % 10;
    first1 = ( third1 + 1 ) % 10;
    third1 = temp1;
    temp1 = ( second1 + 1 ) % 10;
    second1 = ( fourth1 + 1 ) % 10;
    fourth1 = temp1;
    decrypted = first1 * 1000 + second1 * 100 + third1 * 10 + fourth1;
    cout << "Decrypted number is " << decrypted << endl;
    return 0;
}

