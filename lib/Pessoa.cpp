#include "Pessoa.h"

Pessoa::Pessoa(){
    
       Inicializa(0,0,0);
}

Pessoa::~Pessoa(){
    
}

Pessoa::Pessoa(int diaP,int mesP,int anoP,const char* nomeP){

    Inicializa(diaP,mesP,anoP,nomeP);
}

void Pessoa::Inicializa(int diaP,int mesP,int anoP,const char* nomeP){
        
        dia = diaP;
        mes = mesP;
        ano = anoP;
        strcpy(nome,nomeP);




        Calc_idade(9,3,2020);
}

char* Pessoa::getNome(){
    return nome;
}

void Pessoa::Calc_idade(int diaA,int mesA,int anoA)
{
    int *calcId =  &idade;
    
    *calcId = anoA-ano;

    if(mes<mesA)
        *calcId--;
    else
        if(mes == mesA)  
            if(dia<diaA)
                *calcId--;
        
    
}

int Pessoa::getIdade()
{
    return idade;
}

void Pessoa::informaDados(){

    printf("Nome: %s \n",nome);
    printf("Nascimento: %i/%i/%i \n",dia,mes,ano);
    printf("Idade:%i \n",idade);



}


int Pessoa::getDia(){
 return dia;
}
int Pessoa::getMes(){
 return mes;
}
int Pessoa::getAno(){
 return ano;
}