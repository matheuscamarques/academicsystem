#pragma once
#include "string.h"
#include <stdio.h>
class Pessoa{

    private:
    int dia,mes,ano;
    int idade;
    char nome[60];



    public:

    //Construtores
    Pessoa(int diaP,int mesP,int anoP,const char* nomeP = "");
    Pessoa();

    //Destrutores
    ~Pessoa();


    // Métodos VOID
    void Inicializa(int diaP,int mesP,int anoP,const char* nomeP = "");
    void Calc_idade(int diaA,int mesA,int anoA);
    void informaDados();

    //MÉTODOS CHAR
    char* getNome();


    //MÉTODOS INT
    int getIdade();
    int getDia();
    int getMes();
    int getAno();




};