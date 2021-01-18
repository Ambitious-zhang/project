#ifndef CLASS_H
#define CLASS_H

#include <string>
#include <iostream>
using namespace std; 

class BigInteger
{
    int data[1005]{}, len = 0; 

public:

    friend istream& operator>> (istream& is, BigInteger& x);

    friend ostream& operator<< (ostream& os, const BigInteger& x);

    BigInteger& operator+= (const BigInteger& rhs) ;

    friend BigInteger operator+ (BigInteger x, const BigInteger& y);

};



#endif
