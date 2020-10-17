#include <iostream>
#include <string>
#include "Token.h"
using namespace std;

Token::Token(int n, Token *sig){
    this->n = n;
    this->sig = sig;
}

void Pila::push(Token *nodo){
    nodo->sig = this->cab;
    this->cab = nodo;
}

Token*Pila::pop(){
    if(esVacia()){
        return NULL;
    }else{
    Token *obj = this->cab;
    this->cab = this->cab->sig;
    return obj;
    }
}

bool Pila::esVacia(){
    if(!this->cab){
        return true;
    }else{
        return false;
    }
}
