Algoritmo valoresTy
	Definir valores Como Entero
	Definir num1 Como Entero
	valores = 1
	Repetir
		Escribir 'Ingrese un numero entre 0 y 999'
		Leer num1
		Si num1 >= 0 y num <= 9 Entonces
			Escribir 'Tu numero es de 1 digito'
		SiNo 
			si num1 >= 10 y num1 <= 99 Entonces
				Escribir 'Tu numero es de 2 digitos'
			Sino 
				Si num1 >= 100 y num1 <= 999 Entonces
					Escribir 'Tu numero ingresado es de 3 digitos'
				FinSi
			FinSi
		FinSi
		Escribir 'Ingrese 1 para continuar o 0 para abandonar'
		Leer valores
	Hasta Que valores == 0
FinAlgoritmo