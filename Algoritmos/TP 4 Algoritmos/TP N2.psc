Algoritmo sin_titulo
	///Escribir un programa que solicite la carga de n�meros por teclado y que permita obtener el 
	///promedio de todos los n�meros ingresados. Finalizar la carga de valores cuando se cargue el valor 0.
	Definir op,acumulador,num,promedio Como Real
	
	op = 1
	Escribir "Ingrese la cantidad de veces que desea ingresar valores"
	leer acumulador 
	//Dependiendo el valor que se ingrese, esta variable guardar� el numero que defina el final del bucle 
	Repetir
		contador = contador + 1 
		//Contador (si el contador equipara el valor que se le asigno a acumulador, este frenar� el bucle)
		Escribir "Ingrese los valores (numericos) que desea sacar el promedio"
		leer num  
		//Variable para almacenar los valores numericos que desea ingresar el usuario.
		suma = suma + num
		//Acumulador (Suma) de todos los valores ingresados a la variable num
		
	Hasta Que contador == acumulador
	//Cuando el contador llegue al valor de acumulador, se frenar� el bucle.
	promedio = suma / acumulador
	//Operaci�n para sacar promedio, almacenada a una variable llamada PROMEDIO
	Escribir "El promedio de tus numeros ingresados es: ",promedio
	
FinAlgoritmo
