#pragma once
#include <string>

class conta
{
    std::string numero;
    std::string cpfTitular;
    std::string nomeTitular;
    float saldo = 0;
    public:;
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    float recupersaldo();
};