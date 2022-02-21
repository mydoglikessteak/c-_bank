#include <iostream>
#include <string>
#include "conta.cpp"
using namespace std;
void exibeSaldo( conta& conta) {
    cout << "o saldo da conta é "<<conta.recupersaldo()<<endl;
};

using namespace std;

//a partir de uma classe pode-se gerar diversos objetos

int main(){

    conta vini("1234","Viniiii","123.456.78");
    conta andre("4234","andre","33.4");
    // conta andre;
    andre.depositar(3000);
    vini.depositar(500);
    vini.sacar(200);
    exibeSaldo(vini);
    exibeSaldo(andre);
    
    cout<<"numero de contas "<<conta::recuperNumeroDeContas()<<endl;
   

    // depositar(vini,500);programação estrutual em OO
    
    // andre.depositar(500);
    // cout<<"A conta do "<<vini.recupersaldo()<<endl;

    // cout<<"uma conta " <<andre.recupersaldo()<<endl;




    return 0;
}
