#include <iostream>
#include <string>
#include "PilaOperaciones.h"

using namespace std;

NodoOp :: NodoOp(string n, NodoOp *sig){
    this->n = n;
    this->sig = sig;
}

void PilaOp :: push(NodoOp *nodo){
    nodo->sig = this->cab;
    this->cab = nodo;
}

NodoOp* PilaOp :: pop(){
    if(esVacia()){
        return NULL;
    }else{
    if(!this->cab->sig){
       NodoOp *cola = this->cab; 
       this->cab = NULL;
       return cola;
    }else{
    NodoOp *temp = this->cab;
    NodoOp *tempsig = this->cab->sig;
    while(tempsig->sig){        
        temp = temp->sig;
        tempsig = tempsig->sig;
    }
    NodoOp *cola = tempsig;
    temp->sig = NULL;
    return cola;
    }
    }
    
    
}

bool PilaOp :: esVacia(){
    if(!this->cab){
        return true;
    }else{
        return false;
    }
}