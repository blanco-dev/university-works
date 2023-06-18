Algoritmo promedioParciales
	Definir primerParcial Como Entero 									// En esta linea declaramos la variable del primer parcial
	Definir segundoParcial Como Entero 									// En esta linea declaramos la variable del segundo parcial
	Definir tercerParcial Como Entero 									// En esta linea declaramos la variable del tercer parcial
	Definir promedio Como Real 											// En esta linea declaramos la variable promedio Como Real, ya que utilizaremos numeros y letras en la asignación de la misma
	Mostrar 'Ingrese que nota se sacó en el primer parcial' 				// En esta linea colocamos un string, para que el usuario tenga indicado que realizar posteriormente
	Leer primerParcial 														// En esta linea habilitamos al usuario a escribir en consola, un valor que será guardado en la variable primerParcial
	Mostrar 'Ingrese que nota se sacó en el segundo parcial' 				// En esta linea colocamos un string, para que el usuario tenga indicado que realizar posteriormente
	Leer segundoParcial 													// En esta linea habilitamos al usuario a escribir en consola, un valor que será guardado en la variable segundoParcial
	Mostrar 'Ingrese que nota se sacó en el tercer parcial' 				// En esta linea colocamos un string, para que el usuario tenga indicado que realizar posteriormente
	Leer tercerParcial 														// En esta linea habilitamos al usuario a escribir en consola, un valor que será guardado en la variable tercerParcial
	promedio <- (primerParcial + segundoParcial + tercerParcial) / 3  		// En esta linea asignamos los valores de la variable promedio 
	Mostrar 'El promedio de estos numeros es:', promedio 					// En esta linea colocamos un string, para que el usuario sepa el promedio de sus notas
FinAlgoritmo