#include <iostream>
#include <string>
#include "conta.cpp"
#include <iostream>


using namespace std;

//a partir de uma classe pode-se gerar diversos objetos

int main(){
    conta vini;
   

    // depositar(vini,500);programação estrutual em OO
    
    conta andre;
    andre.depositar(500);
    cout<<"uma conta " <<vini.recupersaldo()<<endl;
        cout<<"uma conta " <<andre.recupersaldo()<<endl;




    return 0;
}
