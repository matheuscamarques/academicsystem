#include "Principal.h"
#include <stdio.h>
#include <stdlib.h>


Principal::Principal(){
      Matheus.Inicializa(9,3,1997,"Matheus");
      Bruna.Inicializa(20,3,2000,"Bruna  ");
      Rafaela.Inicializa(3,5,2011,"Rafaela");
      funcionarios.Inicializa(3);

}
void Principal::Executa(){
    funcionarios.registraPessoa(Matheus);
    funcionarios.registraPessoa(Bruna);
    funcionarios.registraPessoa(Rafaela);
    funcionarios.mostraDados();

}