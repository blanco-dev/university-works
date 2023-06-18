Algoritmo sin_titulo
	///Escribir un programa que solicite la carga de números por teclado y que permita obtener el 
	///promedio de todos los números ingresados. Finalizar la carga de valores cuando se cargue el valor 0.
	Definir op,acumulador,num,promedio Como Real
	
	op = 1
	Escribir "Ingrese la cantidad de veces que desea ingresar valores"
	leer acumulador 
	//Dependiendo el valor que se ingrese, esta variable guardará el numero que defina el final del bucle 
	Repetir
		contador = contador + 1 
		//Contador (si el contador equipara el valor que se le asigno a acumulador, este frenará el bucle)
		Escribir "Ingrese los valores (numericos) que desea sacar el promedio"
		leer num  
		//Variable para almacenar los valores numericos que desea ingresar el usuario.
		suma = suma + num
		//Acumulador (Suma) de todos los valores ingresados a la variable num
		
	Hasta Que contador == acumulador
	//Cuando el contador llegue al valor de acumulador, se frenará el bucle.
	promedio = suma / acumulador
	//Operación para sacar promedio, almacenada a una variable llamada PROMEDIO
	Escribir "El promedio de tus numeros ingresados es: ",promedio
	
FinAlgoritmo
