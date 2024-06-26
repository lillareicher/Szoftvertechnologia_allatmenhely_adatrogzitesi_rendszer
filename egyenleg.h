#ifndef EGYENLEG_H
#define EGYENLEG_H

#include "regisztraltfelhasznalo.h"
#include <string>
using namespace std;

class Egyenleg
{
    int egyenleg;
public:
    Egyenleg(unsigned _egyenleg);
    unsigned getEgyenleg() const;
    void setEgyenleg(unsigned ujegyenleg);
    static int getFelhasznaloEgyenleg(const string& felhasznalonev);
    static void setFelhasznaloEgyenleg(const string& felhasznalonev, int ertek);
    static int getMenhelyEgyenleg();

};

#endif // EGYENLEG_H