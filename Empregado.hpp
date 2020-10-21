#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  private:
    std::string _nome;
    double _salarioHora;
  
  public:
    // double quotaMensalVendas;  // vai para Vendedor
    Empregado (std::string nome, double salarioHora);

    double pagamentoMes(double horasTrabalhadas);

    std::string getNome();
	
};

#endif