/* REGULA FALSI METHOD IN C++  

Created using the F.F.CAMPOS' Algotithm in "Algoritmos Numéricos", LTC 3rd

Author: Davi Ferreira Santiago
    School of Engineering, Universidade Federal de Minas Gerais
Date: January 31st, 2022 */

#include <iostream>
#include <cmath>
#include <iomanip>

#include "RegulaFalsi.hpp"

using namespace std;

int main(){

    double a, b, Toler;
    unsigned IterMax;

    cin >> a >> b >> Toler >> IterMax;

    regula_falsi(a, b, Toler, IterMax);

    return 0;

}