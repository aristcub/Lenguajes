// g++ -g -o punto2 ejemploPila.cpp pila.o pilaStr.o

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "Token.h"
#include "PilaOperaciones.h"

#include <sstream>
using namespace std;

//variable gobal
Pila *pila = new Pila();
PilaOp *operadores = new PilaOp();
Pila *operandos = new Pila();
int solucion;

void analizarExpresion(string expresion)
{
    vector <String> Tokens;
    stringstream expresionRevisada(expresion);
    string caracter;
    int a;
    int b;
    int sol;
    while(getline(expresionRevisada, caracter, ' '))
    {
        tokens.push_back(caracter);  
    }

    for(int i = token.size-1; i>=0;i--)
    {
        string elemento=tokens[i];
        if (elemento.compare("+") == 0)
        {
            //es suma
            a = operandos->pop()->n;
            b = operandos->pop()->n;
            sol = b + a;
            operandos->push(new Token(sol, NULL));
            cout << "es suma" << endl;
            operadores->push(new NodoOp(elemento, NULL));
        }
        else
        {
            if (elemento.compare("-") == 0)
            {
                a = operandos->pop()->n;
                b = operandos->pop()->n;
                sol = b - a;
                operandos->push(new Token(sol, NULL));
                cout << "es resta" << endl;
                operadores->push(new NodoOp(elemento, NULL));
            }
            else
            {
                if (elemento.compare("*") == 0)
                {
                    a = operandos->pop()->n;
                    b = operandos->pop()->n;
                    sol = b * a;
                    operandos->push(new Token(sol, NULL));
                    cout << "es multiplicacion" << endl;
                    operadores->push(new NodoOp(elemento, NULL));
                }
                else
                {
                    if (elemento.compare("/") == 0)
                    {
                        //es suma
                        a = operandos->pop()->n;
                        b = operandos->pop()->n;
                        sol = b / a;
                        operandos->push(new Token(sol, NULL));
                        cout << "es division" << endl;
                        operadores->push(new NodoOp(elemento, NULL));
                    }
                    else
                    {
                        cout << "es numero..." << endl;
                        operandos->push(new Token(stoi(elemento), NULL));
                    }
                }
            }
        }   
        solucion = operandos->pop()->n;
    }
}

void verificar(String expresion){
    
}
string leer_Por_Teclado(string s)
{
    cout << s << endl;
    std::string name;
    std::getline(std::cin, name);
    return name;
}

int main()
{  
    string expresion = leer_Por_Teclado("Ingrese la expresion");
    analizarExpresion(expresion);
    cout << "La solución es: "<< to_string(solucion) << endl;
}