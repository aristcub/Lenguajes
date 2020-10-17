
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Token {
   public:
      Token(int n, Token *sig);
      int n;
      Token *sig;
   private:    
};

class Pila{
   public:
     Pila(){this->cab = NULL;}
     Token *cab;     
     void push(Token *nodo);
     Token* pop();
     bool esVacia();  
   private:   
};