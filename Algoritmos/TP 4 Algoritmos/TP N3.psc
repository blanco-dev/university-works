Algoritmo sin_titulo
///   Realizar un programa que permita ingresar el peso (en kilogramos) de piezas. El proceso termina cuando ingresamos el valor 0. Se debe informar:
///	 a) Cuántas piezas tienen un peso entre 9.8 Kg. y 10.2 Kg.? ¿Cuántas con más de 10.2 Kg.? ¿Cuántas con menos de 9.8 Kg.?
	///  b) La cantidad total de piezas procesadas.
	Definir peso,op,piezas,contador, contador1, contador2 como real
	
	Escribir "Ingrese la cantidad de piezas"
	leer piezas
	op = 1
	Repetir 
		
		c = c + 1
		
		Escribir "Ingrese el peso en kg de piezas"
		leer peso
		
		si peso <= 9.8 Entonces
			contador1 = contador1 + 1
		SiNo
			si ((peso >= 9.8) y (peso <= 10.2)) Entonces
				contador2 = contador2 + 1
			SiNo
				si peso >= 10.2 Entonces
					contador3 = contador3 +1
				FinSi
			FinSi
		FinSi
		
	Hasta Que c >= piezas
	Escribir ""
	Esperar 1 segundo
	Escribir "Piezas con menos valor de 9.8kg son: ",contador1
	Escribir ""
	Esperar 1 segundo
	Escribir "Pieza con más valor de 10.2 son: " ,contador3
	Escribir ""
	Esperar 1 segundo
	Escribir "La/Las piezas entre 9.8kg y 10.2kg son: ",contador2
	Escribir ""
	Esperar 1 segundo
	Escribir "La cantidad de piezas procesadas son: ",piezas
	Escribir ""
	
	
FinAlgoritmo
