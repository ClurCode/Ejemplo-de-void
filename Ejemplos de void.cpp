#include <iostream>

//Prototipo de funcion
void no_retorno_suma (int, int, int&);
int retorna_entero_suma(int, int);

//Funcion principal
int main(int argc, char const *argv[])
{
	int resultado, valor1 = 3, valor2 = 5;
	//Llamada a funcion
	no_retorno_suma(valor1, valor2, resultado); //Ambas funciones llegaran al mismo valor (3+5=8)
						    //Pero en pantalla no se verá nada, porque las funciones 
	retorna_entero_suma(valor1, valor2);	    //no tienen un cout
	//Para imprimir el resultado de la funcion void
	// std::cout<<no_retorno_suma(valor1, valor2, resultado); da error porque no tiene ningun
	//valor, lo que se debe hacer es:
	std::cout<<resultado; // esta variable resultado, fue afectada por la funcion no_retorno_suma
			      // por eso el "&", asi que ahora resultado tiene el valor de valor1+valor2
	// Para la funcion con retorno, si se puede mostrar directamente, y no quedará guardado
	std::cout<<retorna_entero_suma(valor1, valor2); // En pantalla se verá 8
	// Para funciones con retorno tambien se ve valido
	int a = retorna_entero_suma(valor1, valor2);// Si y solo si, variable a, es del mismo
			                            // tipo que funcion f, en este caso int
	// Tambien son validas todas las operaciones (suma, resta, multiplicacion, division, etc)
	a = retorna_entero_suma(valor1, valor2) + resultado; 
	std::cout<<a; // Esto mostrará en pantalla 16
	return 0;
}

//Definicion de funcion
void no_retorno_suma (int n1, int n2, int &res)
{
	res = n1 + n2;
}
int retorna_entero_suma(int n1, int n2)
{
	//return(int) n1 + n2;
	//O directamente, porque como n1 y n2 son int, su suma será int
	return n1 + n2;
}
