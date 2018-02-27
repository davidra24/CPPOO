/* 
 * File:   RecorrerVector.hpp
 * Author: david
 *
 * Created on 24 de febrero de 2018, 20:28
 */

#ifndef RECORRERVECTOR_HPP
#define RECORRERVECTOR_HPP
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class RecorrerVector {
public:
    RecorrerVector();
    RecorrerVector(const RecorrerVector& orig);
    void ImprimirVector();
    void agregatNumero(int);
    void OrdenarMenorMayor();
    void OrdenarMayorMenor();
    virtual ~RecorrerVector();
private:
    vector <int> numeros;
    int ordenamiento;
};

#endif /* RECORRERVECTOR_HPP */