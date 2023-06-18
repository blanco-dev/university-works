Algoritmo notaAlumnos
	Definir nota, alumnnos, elFinal Como Real
	elFinal = 10
	Para i = 1 Hasta elFinal Con Paso 1 Hacer
		Escribir 'Ingrese su nota: '
		Leer nota
		si nota >= 7 Entonces
			Escribir 'Aprobado: ', nota
		SiNo
			Escribir 'Desaprobado: ', nota
		FinSi
	FinPara
FinAlgoritmo
