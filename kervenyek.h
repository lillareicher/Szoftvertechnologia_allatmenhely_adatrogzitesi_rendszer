#ifndef KERVENYEK_H
#define KERVENYEK_H

#include <string>
using namespace std;

class Kervenyek
{
    
public:   
    Kervenyek(const string& _kerveny, const string& _kervenyTargy); // 2023.12.01. modositva
    static int id;
    string kerveny;
    string kervenyTargy;
    static int getId();
};

#endif // KERVENYEK_H