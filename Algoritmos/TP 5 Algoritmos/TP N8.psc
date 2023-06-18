Algoritmo promedioalumnoNnotasMayoryMenor
	definir notas ,promedio,contador,suma,nota, notaMayor, notaMenor Como Real
	
	notaMenor = 0
	notaMayor = 0
	suma = 0
	contador = 0
	
	Escribir "Ingrese la cantidad de notas para calcular su promedio"
	leer notas
	Para i = 1 Hasta notas Con Paso 1 Hacer
		Escribir "Ingrese la nota de su alumno"
		leer nota
		si nota > notamayor Entonces
			notamayor = nota
		FinSi
		
		si notaMenor == 0 Entonces
			notaMenor = nota
		sino si nota < notaMenor Entonces
				notaMenor = nota
			FinSi
		FinSi
	Fin Para
	promedio = suma / notas
	Escribir promedio
	Escribir notaMenor ," ", notamayor
FinAlgoritmo
