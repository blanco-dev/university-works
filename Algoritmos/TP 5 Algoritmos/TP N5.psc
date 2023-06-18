Algoritmo cargarValores
	/// Realizar un algoritmo que permita cargar 10 valores por teclado y nos muestre posteriormente la suma de los valores ingresados y su promedio. 
	Definir valor1, num, suma, promedio Como Real
	Escribir 'Ingrese la cantidad de numeros a colocar: '
	Leer valor1
	Mientras contador < valor1
		contador = contador + 1
		Escribir 'Ingrese el valor ', contador
		Leer num
		suma = suma + num
	FinMientras
	promedio = suma / valor1
	Escribir 'La suma total es: ', suma
	Escribir 'El promedio total es: ', promedio
FinAlgoritmo