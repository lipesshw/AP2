//
// Created by lipeb on 03/12/2023.
//

#ifndef UNTITLED2_GARAGEM_H
#define UNTITLED2_GARAGEM_H


double calculaTaxas(double horas) {
    const double taxaMinima = 2.00;
    const double taxaAdicional = 0.50;
    const double taxaMaxima = 10.00;
    const double horasMaximas = 3.0;

    if (horas <= horasMaximas) {
        return taxaMinima;
    } else {
        double taxa = taxaMinima + taxaAdicional * (horas - horasMaximas);
        return (taxa > taxaMaxima) ? taxaMaxima : taxa;
    }
}
#endif //UNTITLED2_GARAGEM_H
