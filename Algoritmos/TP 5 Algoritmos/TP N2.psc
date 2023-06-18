
/// Calcular el promedio de un alumno que tiene 7 calificaciones en la materia de Formalización de Algoritmos.

Algoritmo promediar
	Definir promedio, suma, elFinal, dato Como Real
	elFinal = 7
	Para  i = 1 Hasta elFinal Con Paso 1 Hacer
		Escribir 'Ingrese la nota de Formalizacion de Algoritmos: '
		Leer notas
		datos = datos + notas
	FinPara
	promedio = datos / elFinal
	Escribir 'Tu promedio es: ', promedio
FinAlgoritmo