Algoritmo grupoEstudiantes
	Definir hombres, alumnos, porcent_var, porcent_mujer Como Real
	Escribir 'Ingrese la cantidad de alumnos hombres en el salon'
	Leer hombres
	Escribir 'Ingrese la cantidad de alumnos en total del salon'
	Leer alumnos
	porcent_var <- hombres * 100 / alumnos
	porcent_mujer <- 100 - porcent_var
	Escribir 'Porcentaje de varones: ', porcent_var, '%'
	Escribir 'Porcentaje de mujeres: ', porcent_mujer, '%'
FinAlgoritmo
