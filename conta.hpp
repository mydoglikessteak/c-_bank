#pragma once
#include <string>

class conta
{

    std::string numero;
    std::string nomeTitular;
    std::string cpfTitular;
    private:
   static int numeroDeContas ;
   void verificaTamanhoDoNome();
    public:
    static int recuperNumeroDeContas();


    float saldo = 0;

    public:
    conta(std::string nomeTitular, std::string nome,std::string cpfTitular);
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    float recupersaldo()const;
    
};