//////////////////////////////////////////////////////////////////////////
// Lab_9_2_1.cpp
// Частина 1. Варіант 28
// w = max(x^3, (x + y)^2),   z > 10
// w = min(|x - z|, |x + z|), z <= 10

#include <iostream>
#include "macros.h"

using namespace std;

#ifndef Z
#define Z 12            // значення z; на його основі препроцесор вибирає гілку
#endif

int main()
{
    double x, y, w;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

#if Z > 10              // компілюється, якщо z > 10
    cout << "z = " << Z << " > 10:  w = max(x^3, (x+y)^2)" << endl;
    w = W_HIGH(x, y);
#else                   // компілюється, якщо z <= 10
    cout << "z = " << Z << " <= 10:  w = min(|x-z|, |x+z|)" << endl;
    w = W_LOW(x, Z);
#endif

    PRINTR(w);

    return 0;
}
