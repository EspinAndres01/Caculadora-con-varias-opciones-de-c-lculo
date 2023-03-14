///LIBRERIAS A UTILIZAR
#include"Librerias.h"
///VARIABLES GLOBALES
int i=0,j;
int i,j, analisis;
Resistencia r1;
Fem v1;
Circuito c1;
int main(){
    int op;
    imprimirSello();
    do{
        menugloblal();
        scanf("%d",&op);
        switch(op){
            case 1:
                //Operaciones basicas
                system("cls");
                Menuoperaciones();
                break;
            case 2:
                //Derivadas
                system("cls");
                MenuDerivada();
                break;
            case 3:
                //Matrices
                system("cls");
                MenuMatriz();
                system("cls");
                menugloblal();
                break;
            case 4:
                //Integrales
                system("cls");
                MenuIntegrales();
                system("cls");
                menugloblal();
                break;
            case 5:
                system("cls");
                circuitoSerieParalelo();
                system("cls");
                menugloblal();
                break;
            case 6:
                system("cls");
                imprimirSello();
                printf("\n\n\t----------------GRACIAS POR USAR LA CALCULADORA-------------------\n");

                break;
            default:
                printf("\nOpcion equivocada...");
                break;
        }
    }while(op=!5);
    return 0;
}
///PROGRAMA PARA IMPRIMIR EL SELLO
void imprimirSello(){
    system("color 4A");
    printf("\t  ___________________________________________________________\n");
    printf("\t  000000000000_____000000000_____000000000000____000000000000\n");
    printf("\t  000000000000___0000000000000___00000000000000__000000000000\n");
    printf("\t  0000____0000__000000___000000____0000____0000__0000____0000\n");
    printf("\t  0000___________0000000___________0000____0000__0000________\n");
    printf("\t  00000000_________00000000______00000000000000__00000000____\n");
    printf("\t  00000000_____________0000000___000000000000____00000000____\n");
    printf("\t  0000___________________000000____0000__________0000________\n");
    printf("\t  0000____0000__000000___000000____0000__________0000____0000\n");
    printf("\t  000000000000___0000000000000_____0000__________000000000000\n");
    printf("\t  000000000000_____000000000_______0000__________000000000000\n");
    printf("\t  -----------------------------------------------------------\n\n\n\n");
    printf("\t  -----------------------------------------------------------\n");
    printf("\t  -------------------CALCULADORA BASICA----------------------\n");
    printf("\t  -----------------------------------------------------------\n\n\n");
    system("pause");
    system("cls");
    printf("\r");
}
///PROGRAMA PARA EL MENU GLOBAL
void menugloblal(){
    system("color 4B");
    printf("\n\t\t ------------CALCULADORA BASICA---------\n");
    printf("\n\t\t ------------------MENU-----------------\n");
    printf("\n\t\t 1.Operaciones Basicas       2.Derivadas\n");
    printf("\n\t\t 3.Matrices                  4.Integrales\n");
    printf("\n\t\t 5.Circuitos                 6.Salir\n");
    printf("\n\n\t\t Escoja lo que quiera calcular: ");
}

///PROGRAMA PARA OPERACIONES BASICAS
void Menuoperaciones(){
    char opcion;
    do{
		encabezadoMenu();	//llamado a funcion que contiene el encabezado.
		fflush(stdin);
		scanf("%c",&opcion);
		switch(opcion){
			case '1':
				system("cls");
				suma();	//llamado a funcion de opcion 1
				break;
			case '2':
				system("cls");
				resta();	//llamado a funcion de opcion 2
				break;
			case '3':
				system("cls");
				multiplicacion();	//llamado a funcion de opcion 3
				break;
			case '4':
				division();	//llamado a funcion de opcion 4
				break;
			case '5':
				system("cls");
				potencia();	//llamado a funcion de opcion 5
				break;
				case '6':
				system("cls");
				raizcuadrada();	//llamado a funcion de opcion 6
				break;
				case '7':
				system("cls");
				if(opcion=='7'){
                    return main();
                }	//llamado a funcion de opcion 6
				break;
			default:
				printf("\n ***Ingrese una opcion valida***\n",162);
		}
		}while(opcion!='7');

}
void encabezadoMenu(){	//encabezado del programa.
    int op;
    printf("\n\t -----------------------------------------------------\n");
    printf("\n\t ---------------- OPERACIONES BASICAS ----------------\n");
    printf("\n\t -----------------------------------------------------\n");
    printf("\n\t 1. Suma                     2. Resta          \n");
    printf("\n\t 3. Multiplicacion           4. Division       \n");
    printf("\n\t 5. Potencia                 6. Raiz cuadrada  \n");
    printf("\n\t 7. Salir al menu principal                            \n");
    printf("\n\t ------------------------------------------------------\n");
    printf("\n\n\tEscoja el tipo de operacion que desee calcular: ");

           }
void suma(){	//funcion de opcion 1 del case usado en el menu.
    int x,n,c=0,s=0;
    printf("\n\t -----------------------------------------------------\n");
    printf("\n\t ---------------------- SUMA -------------------------\n");
    printf("\n\t -----------------------------------------------------\n");
    printf("\n\t Ingresar cantidad de numeros: ");
    scanf("%d",&n);
    while(c<n){
        printf("\n\t Ingresar numero: ");
        scanf("%d",&x);
        s=s+x;
        c=c+1;
    }
    printf("\n\tLa suma de los numeros es: %d\n\n",s);
}

void resta(){	//funcion de opcion 2 del case usado en el menu.
    float x,y;
    system("cls");
    printf("\n\t -----------------------------------------------------\n");
    printf("\n\t ---------------------- RESTA ------------------------\n");
    printf("\n\t -----------------------------------------------------\n");
    printf("\n\t Ingrese primer digito\n");
    scanf("\n\t%f",&x);
    printf("\n\t Ingrese segundo digito\n");
    scanf("%f",&y);
    printf("\n\t Resultado\n");
    printf("\n\t%f\n",x-y);
    printf("\n\t -----------------------------------------------------\n");

}
void multiplicacion(){	//funcion de opcion 3 del case usado en el menu.
    int x,n,c=0,s=1;
    system("cls");
    printf("\n\t -----------------------------------------------------\n");
    printf("\n\t ----------------- MULTIPLICACION --------------------\n");
    printf("\n\t -----------------------------------------------------\n");
    printf("\n\t Ingresar cantidad de numeros: ");
    scanf("%d",&n);
    while(c<n){
        printf("\n\t Ingresar numero: ");
        scanf("\n\t%d",&x);
        s=s*x;
        c=c+1;
    }
    printf("\n\t El producto de los numeros es: %d",s);
    printf("\n\t -----------------------------------------------------\n");

}
void division(){	//funcion de opcion 4 del case usado en el menu.
    float x,y;
    system("cls");
    printf("\n\t -----------------------------------------------------\n");
    printf("\n\t ----------------- MULTIPLICACION --------------------\n");
    printf("\n\t -----------------------------------------------------\n");
    printf("\n\t Ingrese un primer digito\n");
    scanf("\n\t%f",&x);
    printf("\n\t Ingrese divisor\n");
    scanf("\n\t%f",&y);
    if(y==0){
        printf("\n\t Error: No se puede dividir para cero");
    }else{
    printf("\n\t Resultado\n");
    printf("\n\t%f\n",x/y);
    printf("\n\t -----------------------------------------------------\n");
    }
}
void potencia(){	//funcion de opcion 5 del case usado en el menu.
    float numero1;
    float numero2;
    system("cls");
    printf("\n\t -----------------------------------------------------\n");
    printf("\n\t --------------------- POTENCIA ----------------------\n");
    printf("\n\t -----------------------------------------------------\n");
    printf("ingrese un digito\n");
    scanf("\n\t%f",&numero1);
    printf("\n\t Ingrese exponente\n");
    scanf("\n\t%f",&numero2);
    printf("\n\t Resultado\n");
    printf("\n\t%f\n",pow(numero1,numero2));
    printf("\n\t ------------------------------------------------------\n");
}
void raizcuadrada(){	//funcion de opcion 5 del case usado en el menu.
    float y;
    system("cls");
    printf("\n\t -----------------------------------------------------\n");
    printf("\n\t ------------------- RAIZ CUADRADA -------------------\n");
    printf("\n\t -----------------------------------------------------\n");
    printf("\n\t Ingrese un numero\n");
    scanf("%f",&y);
    printf("reslutado\n");
    printf("%f\n",sqrtf(y));
    printf("\n\t -----------------------------------------------------\n");
}

///PROGRAMA PARA DERIVADAS
void MenuDerivada(){	//encabezado del programa.
    char opcion;
	do{
	//char opcion;
	printf("\n\t-----------------------------------------------------\n");
	printf("\n\t---------------------- DERIVADAS --------------------\n");
	printf("\n\t-----------------------------------------------------\n");
	printf("\n\t{ x,y=variables  ; n=constante }\n");
	printf("\n\t La derivada (d/dx) de:");
	printf("\n\t 1.- Constante.		                -->  '(d/dx)n'  ");
	printf("\n\t 2.- Variable.  	                -->  '(d/dx)x'");
	printf("\n\t 3.- Constante por variable.            -->  '(d/dx)nx'");
	printf("\n\t 4.- Variable elevada a un exponente.   -->  '(d/dx)x^n'");
	printf("\n\t 5.- Variable x por variable y.		-->  '(d/dx)xy'");
	printf("\n\t 6.- Polinomica.			-->  '(d/dx)[nx^p + mx^q]'");
	printf("\n\t 7.- Salir al menu principal.");
	printf("\n\n\t Ingrese la opcion de derivada a ejecutar:  (1-7)\n");

    fflush(stdin);
    scanf("%c",&opcion);
    switch(opcion){
        case '1':
            system("cls");
            opcion1();	//llamado a funcion de opcion 1
            break;
        case '2':
            system("cls");
            opcion2();	//llamado a funcion de opcion 2
            break;
        case '3':
            system("cls");
            opcion3();	//llamado a funcion de opcion 3
            break;
        case '4':
            system("cls");
            opcion4();	//llamado a funcion de opcion 4
            break;
        case '5':
            system("cls");
            opcion5();	//llamado a funcion de opcion 5
            break;
        case '6':
            system("cls");
            opcion6();	//llamado a funcion de opcion 6
            break;
        case '7':
            system("cls");
            if(opcion=='7'){
                return main();
            }
            break;
        default:
            printf("\n ***Opci%cn mal ingresada, intente nuevamente...***",162);
    }
	}while(opcion!='7');
	printf("\n\n Gracias por usar el programa.\n\n");
}

void opcion1(){	//funcion de opcion 1 del case usado en el menu.
	int constante1;
	system("cls");
	printf("\n 	****1.- constante.****			 -->  '(d/dx)n'  \n\n");
	printf("\n Ingrese la constante (n) a calcular:  ejemplo: %d \n",10);
	scanf("%d",&constante1);
	printf("\n la respuesta es: 	(d/dx)%d= 0",constante1);
	printf("\n ***La derivada de cualquier constante es igual a cero. ***<<<<<<RESPUESTA.\n");
	printf("\n ------------------------------------------------------------------\n");
}

void opcion2(){	//funcion de opcion 2 del case usado en el menu.
	system("cls");
	printf("\n	 ****2.- variable.****  		 -->  '(d/dx)x'");
	printf("\n tomando a x como variable");
	printf("\n la respuesta de la derivada es: 	(d/dx)x = 1 	<<<<<<RESPUESTA.\n");
	printf("\n -------------------------------------------------------------------\n");
}
void opcion3(){	//funcion de opcion 3 del case usado en el menu.
	int constante1;
    system("cls");
	printf("\n	 ****3.- constante por variable.****		-->  '(d/dx)nx'\n\n");
	printf("\n Ingrese la constante (n): \n");
	scanf("%d",&constante1);
	printf("\n  tomando a x como variable que multiplica a (n): \n");
	printf("\n La respuesta es:	 %d(d/dx)x = %d				<<<<<<<RESPUESTA.\n\n",constante1,constante1);
	printf("\n --------------------------------------------------------------------\n");
}
void opcion4(){	//funcion de opcion 4 del case usado en el menu.
	int constante1;
	printf("\n 	****4.- variable elevada  a un exponente.**** 	-->  '(d/dx)x^n'\n\n");
	printf("\n Tomaremos a 'x' como variable prefijada:  ");
	printf("\n Ingrese el valor del exponente: ");
	scanf("%d",&constante1);
	printf("\n La respuesta es: 	%d x^(%d-1) (d/dx)x= %d x^%d	<<<<<<<RESPUESTA.\n",constante1,constante1,constante1,(constante1-1));
	printf("\n ------------------------------------------------------------------\n");
}
void opcion5(){	//funcion de opcion 5 del case usado en el menu.
	char v;
	system("cls");
	printf("\n 	****5.- variable x por variable y.****		-->  '(d/dx)xy'\n\n");
	printf("\n tenemos a la variable x predestinada,\n ahora ingrese la segunda variable:  ");
	scanf("%c",&v);scanf("%c",&v);
	printf("\n La respuesta es:  x(d/dx)%c + %c(d/dx)x = x(d/dx)%c + %c  <<<<<<<<<<RESPUESTA.\n",v,v,v,v); //variable2,variable2,variable2,variable2);
	printf("\n --------------------------------------------------------------------\n");
}
void opcion6(){	//funcion de opcion 6 del case usado en el menu.
	int constante1,constante2,constante3,constante4;
	system("cls");
	printf("\n 	****6.- polinomica.****		-->  '(d/dx)[nx^p + mx^q]'\n\n");
	printf("\n tenemos a la variable x predestinada...\n ");
	printf("Ingrese el valor de n: ");
	scanf("%d",&constante1);
	printf("Ingrese el valor de p: ");
	scanf("%d",&constante2);
	printf("Ingrese el valor de m: ");
	scanf("%d",&constante3);
	printf("Ingrese el valor de q: ");
	scanf("%d",&constante4);
	printf("\n La respuesta es: 	(%d)(%d)x^(%d-1)+(%d)(%d)x^(%d-1)=%dx^%d+%dx^%d",constante1,constante2,constante2,constante3,constante4,constante4,(constante1*constante2),(constante2-1),(constante3*constante4),(constante4-1)); //n*p x^(p-1)	+m*q x^(q-1)
	printf("\n -----------------------------------------------------------------------\n");
}
///FIN PROGRAMA DERIVADAS


///PROGRAMA PARA MATRICES
void MenuMatriz(){

    int Matriz1 [F][C]={},Matriz2[F][C]={},MatrizS[F][C]={},MatrizM[F][C]={};
    float MatrizIn[F][C]={};
    char opcion;
    do{
        printf("\n\t -----------------------------------------------------\n");
        printf("\n\t ---------------------- MATRICES ---------------------\n");
        printf("\n\t -----------------------------------------------------\n");
        printf("\n\t a.-Suma                 b.-Inversa\n");
        printf("\n\t c.-Multiplicaci%cn       d.-Salir al menu principal\n",162);
        printf("\n\t Ingrese la opci%cn: ",162);

        fflush(stdin);
        scanf("%c", &opcion);

        switch(opcion){
            case 'a':
            case 'A':
                system("cls");
                primeraMatriz(Matriz1);
                printf("\n\n");
                //Mostrar la primera matriz
                mostrarMatriz1(Matriz1);
                printf("\n\n");
                segundaMatriz(Matriz2);
                printf("\n\n");
                //Mostrar la seggunda matriz
                mostrarMatriz2(Matriz2);
                printf("\n\n");
                 //Suma de Matrices
                sumaMatriz(Matriz1,Matriz2,MatrizS);
                printf("\n\n");
            break;
            case 'b':
            case 'B':
                system("cls");
                printf("*** Inversa SOLO MATRICES 2X2   ***\n");
                primeraMatriz(Matriz1);
                printf("\n\n");
                //Mostrar la primera matriz
                mostrarMatriz1(Matriz1);
                printf("\n\n");
                determinanteMatriz(Matriz1);
                inversaMatriz(Matriz1, MatrizIn);
                printf("\n\n");
            break;
            case 'c':
            case 'C':
                system("cls");
                printf("*** MULTIPLICACION DE MATRICES ***\n");
                primeraMatriz(Matriz1);
                printf("\n\n");
                //Mostrar la primera matriz
                mostrarMatriz1(Matriz1);
                printf("\n\n");
                segundaMatriz(Matriz2);
                printf("\n\n");
                //Mostrar la seggunda matriz
                mostrarMatriz2(Matriz2);
                printf("\n\n");
                //Multiplicacion de matrices
                MultiplicarMatriz( Matriz1, Matriz2, MatrizM);
                printf("\n\n");
            break;
            case 'd':
            case 'D':
                system("cls");
                if(opcion=='d' || opcion=='D'){
                return main();
            }
            break;
            default :
                system("cls");
                printf("La opci%cn ingresada es incorrecta",162);
        }
    }
    while (opcion!='d');
}
void mostrarMatriz1(int Matriz1[F][C]){
    for (i=0;i<F; i++){
        for (j=0; j<C;j++){
        printf("%d\t",Matriz1[i][j]);
        }
        printf("\n");
    }

}
void primeraMatriz(int Matriz1[F][C]){
 printf("Ingrese los datos de la Primera Matriz:\n");
    for (i=0;i<F;i++){
        for(j=0;j<C;j++){
            printf("Ingrese el valor [%d,%d]:",(i+1),(j+1));
            scanf("%d",&Matriz1 [i][j]);
        }
    }

}
void mostrarMatriz2(int Matriz2[F][C]){
    for (i=0;i<F; i++){
        for (j=0; j<C;j++){
        printf("%d\t",Matriz2[i][j]);
        }
        printf("\n");
    }

}
void segundaMatriz(int Matriz2[F][C]){
 printf("Ingrese los datos de la segunda Matriz:\n");
    for (i=0;i<F;i++){
        for(j=0;j<C;j++){
            printf("Ingrese el valor [%d,%d]:",(i+1),(j+1));
            scanf("%d",&Matriz2 [i][j]);
        }
    }

}
void sumaMatriz(int Matriz1[F][C],int Matriz2[F][C],int MatrizS[F][C]){
    for (i=0;i<F;i++){
        for(j=0;j<C;j++){
            MatrizS [i][j]= Matriz1[i][j]+ Matriz2[i][j];
        }
    }
    printf("La Matriz Resultante de la suma es:\n");
    for (i=0;i<F; i++){
        for (j=0; j<C;j++){
        printf("%d\t",MatrizS[i][j]);
        }
        printf("\n");
    }
}

void MultiplicarMatriz(int Matriz1[F][C],int Matriz2[F][C],int MatrizM[F][C]){
    int k=0;
    for (i=0;i<F;i++){
        for(j=0;j<C;j++){

            for(k=0;k<C;k++){
                MatrizM [i][j]+=Matriz1[i][k]*Matriz2[k][j];
            }
        }
    }
    printf("La Matriz Resultante de la Multiplicaci%cn es:\n",162);
    for (i=0;i<F; i++){
        for (j=0; j<C;j++){
        printf("%d\t",MatrizM[i][j]);
        }
        printf("\n");
    }
}

void inversaMatriz(int Matriz1[F][C],float MatrizIn[F][C]){
    int determinante;
    float aux= pow(determinante,-1.00);
    printf("La Matriz Inversa Resultante es:\n");
    printf("\n\n");
    for (j=C-1;j>=0; j--){
        for (i=F-1;i>=0; i--){
            MatrizIn [i][j]= pow(-1,i+j)*aux*(Matriz1[i][j]);
            printf("%.2f\t",MatrizIn[i][j]);
        }
        printf("\n");
    }
}

void determinanteMatriz(int Matriz1[F][C]){
    int determinante;
    determinante=Matriz1[0][0]*Matriz1[1][1]-Matriz1[0][1]*Matriz1[1][0];
    printf("El determinante es %d",determinante);
    printf("\n");
}
///FIN DEL PROGRAMA MATRICES

///PROGRAMA PARA INTEGRAR
int MenuIntegrales(){
    int opcion,k,n;
    char x;
    float integral;
    real *a,area; //a es un arreglo dinamico de tipo real
    limites limites;
     do{
        printf("\n\t -----------------------------------------------------\n");
        printf("\n\t --------------------- INTEGRALES --------------------\n");
        printf("\n\t -----------------------------------------------------\n");
        printf("\n\t 1. dx               2. kx^n dx  \n");
        printf("\n\t 3. k/x dx           4. Raiz(x) dx \n");
        printf("\n\t 5. Polinomica       6.Salir al menu principal\n");
        printf("\n\t------------------------------------------------------\n");
        printf("\n\nEscoja el tipo de integral que quiera calcular: ");
        scanf("%d",&opcion);
        switch(opcion){
            case 1:
                //dx
                system("cls");
                variable(x);
                break;
            case 2:
                //exponencial
                system("cls");
                exponencial(n,k,x);
                break;
            case 3:
                //racional
                system("cls");
                Racional(x,k);
                break;
            case 4:
                //raiz
                system("cls");
                Raiz(x,n);
                break;
            case 5:
                 //polinomica
                system("cls");
                grado(&n);
                reservarmemoria(&a,n);
                leecoeficiente(a,n);
                Limites(&limites);
                area=reglasimpson(a,n,&limites);
                printf("El area es : %.4f \n",area);
                break;
            case 6:
                system("cls");
                if(opcion==6){
                    return main();
                }
                break;
            default:
                printf("La opcion es incorrecta...");
                break;
        }

    }while(opcion!=6);

    return(EXIT_SUCCESS);
}

///FUNCION PARA CALCULAR LA INTEGRAL UNA VARIABLE
void variable(char x[1]){
    int sw;
    char x1[1];
    system("cls");
    printf("\nIngrese la variable del diferencial: ");
    fflush(stdin);
    gets(x1);
    sw=validarLetra(x1);
    if(sw==0){
       printf("\n La integral de d%s es: %s + c \n\n",x1,x1);
    }else{
        printf("\nCaracter no valido\n");
    }

}
int validarLetra(char letra[1]){
    int i=0,sw=0,j;
    j=strlen(letra);
    while(i<j && sw==0){
        if(isalpha(letra[i])!=0){
            i++;
        }else{
            sw=1;
        }
    }
    return sw;
}

///FUNCION PARA CALCULAR LA INTEGRAL DE UN EXPONECIAL
void exponencial(int n,int k, char x[1]){
    int n1,k1,numerador,denominador,sw=0;
    char x1[1];

    system("cls");
    printf("\nIngrese el valor del exponente: ");
    scanf("%d",&n1);
    printf("\nIngrese el valor de la constante: ");
    scanf("%d",&k1);
    printf("\nIngrese el valor de la variable: ");
    fflush(stdin);
    gets(x1);
    sw=validarLetra(x1);
    if(sw==0){
       numerador = (n1+1);
    denominador =(n1+1);

    if((n1==0)&&(k1==0)){
        printf("\n\tError...\n");
        printf("\nNo se puede calcular %d %s^%d + c\n",k1,x1,n1);
    }
    else{
        if(k1==denominador){
            printf("\n La expresion %d %s^%d \n",k1,x1,n1);
            printf("\n La respuesta de la integral es: (%s^%d) + c",x1,numerador);
        }else
            printf("\n La expresion %d %s^%d + c\n",k1,x1,n1);
            printf("\n La respuesta de la integral es: %d((%s^%d)/(%d))+ c",k1,x1,numerador,denominador);
        }
    }else{
        printf("\nCaracter no valido\n");
    }

}

///FUNCION PARA CALCULAR LA INTEGRAL DE UNA FRACCION
void Racional(char x[1],int k){
    char x1[1];
    int k1,sw=0;
    system("cls");
    printf("\nIngrese el numero del numerador: ");
    scanf("%d",&k1);
    if(k1==0){
        printf("El valor de la integral es 0\n");
    }else{
    printf("\nIngrese la variable del diferencial: ");
    fflush(stdin);
    gets(x1);
    sw=validarLetra(x1);
    if(sw==0){
        printf("\n La expresion %d/%s d%s  \n",k1,x1,x1);
        printf("\n La integral es: %dln%s + c\n\n",k1,x1);
    }else{
        printf("\nCaracter no valido\n");
    }

    }
}

///FUNCION PARA CALCULAR LA INTEGRARL DE UNA RAIZ
void Raiz(char x[1],float n){
    char x1[1];
    float n1,n2,n3,constante,fraccion;
    int sw=0;
    system("cls");
    printf("\nIngrese el grado de la raiz: ");
    scanf("%f",&n1);
    printf("\nIngrese la variable del diferencial: ");
    fflush(stdin);
    gets(x1);
    sw=validarLetra(x1);
    if(sw==0){
       n2=1/n1;
        n3=n2+1;
        constante=n2+1;

        float num;
        num=n3;
        printf("\n La expresion Raiz^%.2f(%s)d%s  \n",n1,x1,x1);
        printf("\n La integral es: %.2f(%s)^%.2f + c \n\n",num,x1,num);
        decimalFraccion(num);
    }else{
        printf("\nCaracter no valido\n");
    }

}

/// AQUI EMPIEZZA LA POLINOMICA
//recibe una cadena de caracteres, comprobar si la cadena de caracteres represente un un numero
//y que sea un valor valido
int validanumeros(char caracteres[]){
     int verdadero=1,i=0,puntos=0,signos=0;

     while(caracteres[i]!='\0'&& verdadero){
        if(caracteres[i]=='-'){
            signos++;
        }
        if(caracteres[i]=='.'){
            puntos++;
        }
        if(isdigit(caracteres[i])||(caracteres[i]=='.')||(caracteres[0]=='-'))
            verdadero=1;
        else
            verdadero=0;
            i++;
    }
    if(puntos>1||signos>1){
        return 0;
    }
    return verdadero;
}
//recibe una cadena de caracteres y va a comprobar si la cadena de caracteres represente un un numero
int validarentero(char caracteres[]){
    int verdadero=1,i=0;
    while(caracteres[i]!='\0'&& verdadero){
        //(isdigit) Indica si un carácter es numérico
        if(isdigit(caracteres[i]))
            verdadero=1;
        else
            verdadero=0;
            i++;
    }
    return verdadero;
}

void grado(int *puntero){
    char caracteres[5];
    do{
        system("cls");
        printf("\n Ingrese el grado del polinomio: ");
        fflush(stdin);
        gets(caracteres);
    }
    while(!validarentero(caracteres));


    do{
       /*atoi convierte una cadena a su valor numérico (entero)*/
        *puntero=atoi(caracteres);
        if(*puntero>GRMAX){
            printf("\nError: El grado debe ser menor que %d\n\n",GRMAX);
            system("pause");
        }
    }
    while(*puntero>GRMAX);
}

void reservarmemoria(real **puntero,int n){
    /*La función malloc, perteneciente a la cabecera stdlib.h, se utiliza para asignar un bloque de memoria
    (tamaño del tipo de datoen el montón.
    El programa accede a este bloque de memoria a través de un puntero que malloc regresa.*/
    *puntero=(real*)malloc((n+1)*sizeof(real));
    //se hace un casting
}

void leecoeficiente(real *a, int n){
    int i;
    char caracteres[20];
    for(i=0;i<=n;i++){
        do{
            printf("\ta(%d) :",i);
            fflush(stdin);
            gets(caracteres);
        }while(!validanumeros(caracteres));//se valida un numero real

        /*Convierte una cadena a su valor numérico (coma flotante)*/
        a[i]=atof(caracteres);
    }
}

void Limites(limites *l){
    char caracteres[20];

    do{
        system("cls");
        do{
            printf("\nIngrese el limite inferior: ");
            fflush(stdin);
            gets(caracteres);
        }while(!validanumeros(caracteres));// aqui se valida el numero limite inferior que se ingreso por teclado
        l->limiteinferio=atof(caracteres);
        do{
            printf("\nIngrese el limite superior: ");// aqui se valida el numero limite superior que se ingreso por teclado
            fflush(stdin);
            gets(caracteres);
        }while(!validanumeros(caracteres));
        l->limitesuperior=atof(caracteres);

        if(l->limiteinferio>l->limitesuperior){
            printf("Error: Limite inferior no debe ser mayor que limite superior");
        }
    }while(l->limiteinferio>l->limitesuperior);
}

real reglasimpson(real *a,int n,limites *l){
    real fx,suma,x=l->limiteinferio;
    int i,j,c;

    for(i=0;i<=N;i++){
        fx=0;
        if(n==0){
            fx=a[0];
        }
        else{
            for(j=0;j<=n;j++){
                if(l->limiteinferio=0&& j==0){
                    fx=fx+a[j]*pow(1,j);
                }else{
                    fx=fx+a[j]*pow(x,j);
                }
            }
        }
        if(i==0 || i==N){
            c=1;
        }else{
            if(i%2==0){
                c=2;
            }else{
                c=4;
                suma=suma+c*fabs(fx);
                x=x+(l->limitesuperior-l->limiteinferio)/N;
            }
        }
    }
    return (((l->limitesuperior-l->limiteinferio)/(3*N))* suma);
}
///AQUI TERMINA LA POLINOMICA

///PROGRAMA PARA CIRCUITOS EN SERIE Y PARALELO

void circuitoSerieParalelo(){
    int analisis=0;
    char continuar='S';

    do{
        system("cls");
        analisis=tipoAnalisis();
        ingresoResistencia(analisis);
        ingresoFem();
        calculoParametros(analisis);
        imprimirResultados(analisis);
        do{
            printf("\nContinuar<S/N>");
            fflush(stdin);
            scanf("%c",&continuar);
        }while(continuar!='s'&&continuar!='S'&&continuar!='N'&&continuar!='n');
     }while(continuar!='N'&&continuar!='n');

}


int tipoAnalisis(){
    int analisis=0;
    do{
        printf("\n\t -----------------------------------------------------------\n");
        printf("\n\t --------------CALCULADORA DE CIRCUITOS ELECTRICOS----------\n");
        printf("\n\t -----------------------------------------------------------\n");
        printf("\n\t 0. Circuito Serie\n");
        printf("\n\t 1. Circuito Paralelo\n");
        printf("\n\t 2. Salir al menu principal\n");
        printf("\n\t Ingrese el tipo de analisis que desea realizar: ");
        fflush(stdin);
        scanf("%d",&analisis);
        printf("\t  ------------------------------------------------------------\n");
        if(analisis==2){
            system("cls");
            return main();
        }
    }while(analisis!=0&&analisis!=1);
    return analisis;
}

void ingresoResistencia(int analisis){
    //Asignación de variable
    c1.nResistencia=0;
    printf("\n\tCuantas resistencias tiene su circuito: ");
    fflush(stdin);
    scanf("%d",&c1.nResistencia);
    c1.rTotal=0;
    for(i=0;i<c1.nResistencia;i++){
        printf("\n\tIngrese la resistencia %d: ",i+1);
        fflush(stdin);
        scanf("%f",&r1.resist[i]);
    //Cálculo de la resistencia total
        if(analisis==0){
            c1.rTotal+=r1.resist[i];
        }else{
            c1.rTotal+=(1/r1.resist[i]);
        }
    }
    if(analisis==1){
        c1.rTotal=(1/c1.rTotal);
    }
}

void ingresoFem(){
//Asignación de variable
    c1.fTotal=0;
    fflush(stdin);
    printf("\n\tCuantas fuentes de voltaje  en serie tiene su circuito: ");
    scanf("%d",&c1.nFem);
    for(i=0;i<c1.nFem;i++){
        printf("\n\tIngrese la fem %d: ",i+1);
        fflush(stdin);
        scanf("%f",&v1.voltaje[i]);
        c1.fTotal+=v1.voltaje[i];
    }
}
void calculoParametros(int analisis){
    int j;
    c1.iTotal=0;

    //Cálculo de la corriente del circuito
    c1.iTotal=c1.fTotal/c1.rTotal;
    //Cálculo de las corrientes y voltajes individuales
    switch(analisis){
    case 0:
        //Cálculo de los voltajes individuales de las resistencias
        //La corriente es la misma para todas
        for(j=0;j<c1.nResistencia;j++){
            r1.voltaje[j]=c1.iTotal*r1.resist[j];
        }
        //Cálculo de los potencias
        for(j=0;j<c1.nResistencia;j++){
            r1.potencia[j]=c1.iTotal*r1.voltaje[j];
    }
    break;
    case 1:
        //Cálculo de las corrientes individuales de las resistencias
        //El voltaje es el mismo para todos
        for(j=0;j<c1.nResistencia;j++){
            r1.corriente[j]=c1.fTotal/r1.resist[j];
        }
        //Cálculo de los potencias
        for(j=0;j<c1.nResistencia;j++){
            r1.potencia[j]=c1.fTotal/r1.corriente[j];
        }
    break;
    default:
    break;
    }

    //Cálculo de las potencias de las fuentes
    for(j=0;j<c1.nFem;j++){
        v1.potencia[j]=v1.voltaje[j]*c1.iTotal;
    }
}
void imprimirResultados(int analisis){
    int j;
    printf("\n\t -----------------------------------------------------------\n");
    printf("\n\t ___________________________________________________________\n");
    printf("\n\t RESULTADOS\n");
    printf("\n\t ___________________________________________________________\n");
    printf("\n\t VALORES TOTALES DEL CIRCUITO\n");
    printf("\n\t |  fem [Volts]            | %f \n",c1.fTotal);
    printf("\n\t |  resistencia [Ohms]     | %f \n",c1.rTotal);
    printf("\n\t |  corriente [Amperes]    | %f \n",c1.iTotal);
    printf("\n\t  ___________________________________________________________\n");
    switch(analisis){
        case 0:
            printf("\n\t VALORES INDIVIDUALES DE LOS ELEMENTOS DEL CIRCUITO SERIE\n");
            for(j=0;j<c1.nResistencia;j++){
                printf("\n\t |  voltaje R%d [Volts]     | %f \n",j+1,r1.voltaje[j]);
            }
        break;
        case 1:
            printf("\n\t VALORES INDIVIDUALES DE LOS ELEMENTOS DEL CIRCUITO PARALELO\n");
            for(j=0;j<c1.nResistencia;j++){
                printf("\n\t |  corriente R%d [Volts]   | %f \n",j+1,r1.corriente[j]);
            }
        break;
        default:
        break;
    }
    for(j=0;j<c1.nResistencia;j++){
        printf("\n\t |  potencia R%d [Watts]    | %f \n",j+1,r1.potencia[j]);
    }
    j=0;
    mostrarPotenciaFem(v1.potencia,j,c1.nFem);
}

void mostrarPotenciaFem(float array[],int indice, int tamanio){
    if(indice!=tamanio){
        printf("\n\t |  potencia V%d [Watts]    | %f \n\n",indice+1,array[indice]);
        mostrarPotenciaFem(array,indice+1,tamanio);
    }
}

