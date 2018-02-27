/* 
 * File:   RecorrerVector.cpp
 * Author: david
 * 
 * Created on 24 de febrero de 2018, 20:28
 */

#include "RecorrerVector.hpp"

RecorrerVector::RecorrerVector() {
    //this->numeros;
    this->ordenamiento = 0;
}
RecorrerVector::RecorrerVector(const RecorrerVector& orig) {
}
void RecorrerVector::ImprimirVector(){
    for(int i = 0; i< numeros.size(); i++){
        cout << numeros[i] << endl;
    }
}
void RecorrerVector::agregatNumero(int num){
    this->numeros.insert(this->numeros.end(), num);
}
void RecorrerVector::OrdenarMenorMayor() {
    //TODO
//        cout << "Orden menor a mayor" << endl;
//        int i = 0;
//        int k = numeros.size();
//        this->ordenamiento = numeros[(i + k) / 2];
//        while (i < k) {
//            while (numeros[i] < ordenamiento) {
//                i++;
//            }
//            while (numeros[k] > ordenamiento) {
//                k--;
//            }
//            if (i <= k) {
//                swap(numeros[i], numeros[k]);
//                i++;
//                k--;
//            }
//        }
}

void RecorrerVector::OrdenarMayorMenor() {
    //TODO
//    cout << "Orden mayor a menor" << endl;
//    int i = 0;
//    int k = numeros.size();
//    this->ordenamiento = numeros[(i + k) / 2];
//    while (i < k) {
//        while (numeros[i] > ordenamiento) {
//            i++;
//        }
//        while (numeros[k] < ordenamiento) {
//            k--;
//        }
//        if (i <= k) {
//            swap(numeros[i], numeros[k]);
//            i++;
//            k--;
//        }
//    }
}


RecorrerVector::~RecorrerVector() {
}
