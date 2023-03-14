#ifndef LIBRERIAS_H_INCLUDED
#define LIBRERIAS_H_INCLUDED

#include<stdio.h>//maneja la lectura e impresion en pantalla
#include<math.h>//maneja operadores matematicos
#include <ctype.h>//maneja caracteres
#include"decifracc.h"//libreria para transformar de decimal a fraccion

/// CONSTANTES PARA LA MATRIZ
#define F 2
#define C 2
///LIBRERIAS PARA LA POLINOMICA
#include<stdlib.h>//gestión de memoria dinámica, control de procesos y otras.(EXIT_SUCCESS)
#include<string.h>//maneja cadena de caracteres
///CONSTANTES PARA LA POLINOMICA
#define GRMAX 10//Grado maximo del polinomio
#define N 2000//total division de rectangulos del polinomio
///FUNCION PARA EL MENU GLOBAL
void menugloblal();

///FUNCIONES PARA CALCULAR OPERACIONES BASICAS
void Menuoperaciones();
void encabezadoMenu();
void suma();
void resta();
void multiplicacion();
void division();
void potencia();
void raizcuadrada();
///FUNCIONES PARA CALCULAR DERIVADAS
void MenuDerivada();
void opcion1();
void opcion2();
void opcion3();
void opcion4();
void opcion5();
void opcion6();

///FUNCIONES PARA CALCULAR MATRICES
void mostrarMatriz1(int Matriz1[F][C]);
void primeraMatriz(int Matriz1[F][C]);
void mostrarMatriz2(int Matriz2[F][C]);
void segundaMatriz(int Matriz2[F][C]);
void sumaMatriz(int Matriz1[F][C],int Matriz2[F][C],int MatrizS[F][C]);
void MultiplicarMatriz(int Matriz1[F][C],int Matriz2[F][C],int MatrizM[F][C]);
void inversaMatriz(int Matriz1[F][C],float MatrizIn[F][C]);
void determinanteMatriz(int Matriz1[F][C]);
void MenuMatriz();

///FUNCIONES PARA CALCULAR INTEGRALES
void variable(char x[1]);
void constante(int k, char x);
void exponencial(int n,int k, char x[1]);
void Racional(char x[1],int k);
void Raiz(char x[1],float n);
void polinomica(int n,int k, char x);
int validarLetra(char letra[1]);

///ESTRUCTURA TDA PARA LA POLINOMICA
//real es una referencia al tipo double
typedef double real;
//estructura para los limites
typedef struct{
    real limiteinferio,limitesuperior;
}limites;
///FUNCIONES PARA LA POLINOMICA
int validarentero(char caracteres[]);//recibe una cadena de caracteres y va a comprobar si la cadena de caracteres represente un un numero
int validanumeros(char caracteres[]);//recibe una cadena de caracteres, comprobar si la cadena de caracteres represente un un numeroy que sea un valor valido
void grado(int *puntero);//aqui se asigna el grado del polinomio
void reservarmemoria(real **puntero,int n);//aqui se almacena el arreglo n+1 del polinomio
void leecoeficiente(real *a, int n);//lee los coeficientes que se ingresen
void Limites(limites *l);//se ingrese los limites
real reglasimpson(real *a,int n,limites *l);//se aplica el proceso de la suma de areas
int MenuIntegrales();

///ESTRUCTURAS TDA PARA CIRCUITOS
typedef struct circuito
{
    int nResistencia;   //Número de resistencias
    int nFem;  //Número de fuentes de voltaje
    float rTotal;   //Resistencia total del circuito
    float fTotal;    //fem total del circuito
    float iTotal;   //Corriente total del circuito
}Circuito;


//Declaración del tipo de estructura resistencia
typedef struct resistencia
{
    float resist[20];   //Valor de resistencia en Ohms
    float voltaje[20];  //Valor de voltaje en cada resistencia
    float corriente[20];//Valor de la corriente en cada resistencia
    float potencia[20]; //Valor de potencia utilizada
}Resistencia;
//Declaración del tipo de estructura fuente de voltaje
typedef struct fem
{
    float voltaje[20];  //Valor del voltaje de la fuente
    float corriente[20];//Valor de la corriente de la fuente
    float potencia[20]; //Valor de la potencia suministrada
}Fem;
int tipoAnalisis();
void ingresoResistencia(int analisis);
void ingresoFem();
void calculoParametros(int analisis);
void imprimirResultados(int analisis);
void circuitoSerieParalelo();
void mostrarPotenciaFem(float array[],int indice, int tamanio);//FUNCION RECURSIVA
#endif // LIBRERIAS_H_INCLUDED
