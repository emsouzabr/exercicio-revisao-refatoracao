#include "Vendedor.hpp"

#define MESES 12;

Vendedor::Vendedor(std::string nome, double salarioHora, double quotaMensalVendas): Empregado(nome, salarioHora), _quotaMensalVendas(quotaMensalVendas){}

double Vendedor::getQuotaMensalVendas() {
	return _quotaMensalVendas;
}
