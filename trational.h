#ifndef TRATIONAL_H
#define TRATIONAL_H

#include <iostream>
#include <sstream>
#include <cmath>
#include <numeric>

class TRational
{
private:
    int a, b;
    void norm();
    TRational(int inp_a, int inp_b);
public:
    TRational();
    friend std::ostream& operator << (std::ostream& , TRational const&);
    friend std::istream& operator >> (std::istream& , TRational&);
    TRational& operator= (const int&);
    TRational operator-() const;
    friend TRational const operator* (TRational const&, TRational const&);
    friend TRational const operator* (int const&, TRational const&);
    friend TRational const operator+ (TRational const&, TRational const&);
    friend TRational const operator- (TRational const&, TRational const&);
    friend TRational const operator/ (TRational const&, TRational const&);
    friend bool operator< (TRational const&, int const&);
    friend bool operator< (int const&, TRational const&);
    friend bool operator== (TRational const&, int const&);
    friend TRational sqrt(TRational const& t);






};

#endif // TRATIONAL_H
