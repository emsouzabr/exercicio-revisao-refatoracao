#include "Engenheiro.hpp"
#include "Vendedor.hpp"

#define MESES 12

  void mostraDadosEngenheiro(Engenheiro* eng, double horasTrabalhadas) {
    double pagamento = eng->pagamentoMes(horasTrabalhadas);

    std::cout << "Nome: " << eng->getNome() << std::endl;
    std::cout << "Salario Mes: " << pagamento << std::endl;
    std::cout << "Projetos: " << eng->getProjetos() << std::endl;
}

void mostraDadosVendedor(Vendedor* vend, double horasTrabalhadas) {
    double pagamento = vend->pagamentoMes(horasTrabalhadas);
    double quotaTotalAnual =  vend->getQuotaMensalVendas() * MESES;

    std::cout << "Nome: " << vend->getNome() << std::endl;
    std::cout << "Salario Mes: " << pagamento << std::endl;
    std::cout << "Quota vendas: " << quotaTotalAnual << std::endl;
}

int main() {

    Engenheiro* eng1= new Engenheiro("Joao Snow", 35, 3);
    mostraDadosEngenheiro(eng1, 9.5);
    std::cout << std::endl;
  
    Engenheiro* eng2 = new Engenheiro("Daniela Targaryen", 30, 1);
    mostraDadosEngenheiro(eng2, 8);
    std::cout << std::endl;

    Engenheiro* eng3 = new Engenheiro("Bruno Stark", 30, 2);
    mostraDadosEngenheiro(eng3, 8);
    std::cout << std::endl;
  
    Vendedor* vend1 = new Vendedor("Tonho Lannister", 20, 5000);
    mostraDadosVendedor(vend1, 6);
    std::cout << std::endl;
  
    Vendedor* vend2 = new Vendedor("Jose Mormont", 25, 3000);
    mostraDadosVendedor(vend2, 8);
    std::cout << std::endl;  
	
    Vendedor* vend3 = new Vendedor("Sonia Stark", 30, 4000);
    mostraDadosVendedor(vend3, 8);
  
  return 0;	
}