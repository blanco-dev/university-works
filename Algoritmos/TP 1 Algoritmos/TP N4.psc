Algoritmo inversion
	Definir capital Como Entero // En esta linea declaramos la variable del primer numero
	Definir porcentaje, meses Como Real // En esta linea declaramos la variable del segundo numero
	Mostrar 'Ingrese el capital a invertir'
	Leer capital
	Mostrar 'Ingrese los meses que desea invertir el dinero'
	Leer meses
	meses <- meses * 0.02
	porcentaje <- capital * meses
	Mostrar 'Tu ganancia en total será de: ', porcentaje  // En esta linea colocamos un string, para que el usuario tenga indicado la suma
FinAlgoritmo