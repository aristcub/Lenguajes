
#pragma once
#include <iostream>
#include <string>

using namespace std;

class NodoOp {
   public:
      NodoOp(string n, NodoOp *sig);
      string n;
      NodoOp *sig;
   private:
 
};

class PilaOp{
   public:
     PilaOp(){this->cab = NULL;}
     NodoOp *cab;

     void push(NodoOp *nodo);
     NodoOp* pop();
     bool esVacia();  
   private:

};