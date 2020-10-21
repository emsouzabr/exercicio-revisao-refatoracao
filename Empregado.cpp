#include "Empregado.hpp"

#define HORAS 8
#define ADICIONAL 0.5

Empregado::Empregado (std::string nome, double salarioHora) : _nome(nome), _salarioHora(salarioHora) {}

double Empregado::pagamentoMes(double horasTrabalhadas) {
 
    double t = horasTrabalhadas;
	  
    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > HORAS) {
        double x = horasTrabalhadas - HORAS;
        t = t + (x * ADICIONAL);
    }
	  
    return t * this->_salarioHora;
}

std::string Empregado::getNome() {
    return this->_nome;
}

