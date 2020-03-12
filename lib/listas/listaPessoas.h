#pragma once
#include "../Pessoa.h"
#include <stdlib.h>

class listaPessoa{

    private:
    int tam;
    int inicio;
    int fim;
    Pessoa *dados;


    public:

    listaPessoa(int tamanho);
    listaPessoa();
    void Inicializa(int tamanho);

    void registraPessoa(Pessoa people);
    void mostraDados();

    int ListaCheia();






};