#ifndef ARBOL_H
#define ARBOL_H

//Arbol Binario



struct nodo{
	    int dato;
        nodo *menIzq;
        nodo *mayDer;
        nodo *descendiente;
       };
       
 nodo *crearNodo(int n){
	nodo *raiz = new nodo();
	raiz->dato=n;
	raiz->menIzq=NULL;
	raiz->mayDer=NULL;
	}
       
class Arbol{

      public: Arbol(){}
        void insertarNodo(nodo *&arbolynodo, int n);
        bool borrarNodo(int n);
        ~Arbol();
      };


void Arbol::insertarNodo(nodo *&arbolynodo, int n){

	if(arbolynodo== NULL){
		nodo *raiz= crearNodo(n);
	    arbolynodo=raiz;
	}else{
		int datoRaiz = arbolynodo->dato;
		if(n< datoRaiz){
	 		  insertarNodo(arbolynodo->menIzq,n);
	}else
	insertarNodo(arbolynodo->mayDer,n);
	}
 }
bool Arbol::borrarNodo(int n){

     }
     
Arbol::~Arbol(){
     
}

#endif
