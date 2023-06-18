Algoritmo alumnos
	Definir cantidadAlumnos, promedio, acumulador Como Real
	Escribir 'Ingrese la cantidad de alumnos que hay: '
	Leer cantidadAlumnos
	Repetir
		Escribir 'Ingrese la nota del parcial: '
		Leer notasParcial
		acumulador = acumulador + 1
		suma = suma + notasParcial
		promedio = suma / cantidadAlumnos
	Hasta Que acumulador == cantidadAlumnos
	Escribir 'El promedio general es: ', promedio
FinAlgoritmo
