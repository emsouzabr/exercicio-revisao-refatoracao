#include "Engenheiro.hpp"

Engenheiro::Engenheiro(std::string nome, double salarioHora, int projetos): Empregado(nome, salarioHora), _projetos(projetos){}

int Engenheiro::getProjetos() {
  return this->_projetos;
}



