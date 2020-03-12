#!/bin/bash
echo "Compilando";
g++ -o main main.cpp lib/Principal.cpp lib/Pessoa.cpp lib/listas/listaPessoas.cpp
./main
exit
