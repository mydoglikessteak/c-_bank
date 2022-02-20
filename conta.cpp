#include "conta.hpp"
#include <string>
#include <iostream>

void conta::sacar(float valorASacar){
    if(valorASacar<0){
        std::cout<<"ta sem dinheiro =("<<std::endl;
        return;

    }else if(valorASacar>saldo){
       std::cout<<"ta mentindo em";
       return;
    
    }else{
        saldo -= valorASacar;
   std::cout <<"seu nome é" << nomeTitular <<std::endl<<"seu saldo é "<<saldo<<std::endl;
    }
    
};

void conta::depositar(float valorADepositar)
{
 	if (valorADepositar < 0) {
            std::cout << "Não pode sacar valor negativo" << std::endl;
            return;
        }else{
            std ::cout <<"seu deposito foi de "<<valorADepositar<<std::endl;
        saldo += valorADepositar;

        }

}

float conta::recupersaldo(){
    return saldo;
}


