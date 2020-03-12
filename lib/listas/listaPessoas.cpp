#include "listaPessoas.h"

listaPessoa::listaPessoa(int tamanho)
{
        Inicializa(tamanho);
}


listaPessoa::listaPessoa(){
        Inicializa(0);
}

void listaPessoa::Inicializa(int tamanho){
        tam = tamanho;
        dados = (Pessoa*)malloc(sizeof(Pessoa)*tamanho);
        inicio = 0;
        fim = 0 ;
}


void listaPessoa::registraPessoa(Pessoa people)
{
       if(!ListaCheia())
          //DADOS É UM TIPO DE DADO PESSOA
           dados[fim++] = people;
        else{
                printf("Lista cheia\n");
                exit(1);
        }

}

int listaPessoa::ListaCheia(){
        return fim>=tam;
}

void listaPessoa::mostraDados(){

        printf("NOME          \t|\t DATA         \t|\t IDADE \n");
        printf("=============================================================\n");
        for(int i = inicio; i<fim; i++)
           printf("%s \t|\t %d/%d/%d \t|\t %d \n",dados[i].getNome(),dados[i].getDia(),dados[i].getMes(),dados[i].getAno(),dados[i].getIdade());
        

}