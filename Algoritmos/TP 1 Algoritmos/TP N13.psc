Algoritmo precioConDescuento
	Definir precioProducto Como Entero
	Definir porcentaje Como Entero
	Definir calculoProducto Como Real
	Escribir 'Ingrese el precio del producto: '
	Leer precioProducto 
	Escribir 'Ingrese el descuento a aplicar: (Sin el %) '
	Leer porcentaje
	calculoProducto = precioProducto * porcentaje / 100
	precioProducto = precioProducto - calculoProducto
	Escribir 'El precio final es de: ', precioProducto
FinAlgoritmo
