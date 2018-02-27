/* 
 * File:   main.cpp
 * Author: david
 *
 * Created on 23 de febrero de 2018, 21:18
 */

#include <cstdlib>
#include <vector>

#include "RecorrerVector.hpp"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   
    RecorrerVector *recorrerVector = new RecorrerVector();
    
    recorrerVector->agregatNumero(5);
    recorrerVector->agregatNumero(15);
    recorrerVector->agregatNumero(7);
    recorrerVector->agregatNumero(2);
    recorrerVector->agregatNumero(9);
    recorrerVector->agregatNumero(3);
    
    recorrerVector->ImprimirVector();
    
    
    recorrerVector->OrdenarMenorMayor();
    recorrerVector->ImprimirVector();
    
    
    recorrerVector->OrdenarMayorMenor();
    recorrerVector->ImprimirVector();
    
    return 0;
}

