Algoritmo punto11
	
	Definir capital, interes_anual, plazo, ratio, cuota_mensual, total_pagado, amortizacion, intereses como reales
	
	Escribir "Ingrese el capital prestado: "
	Leer capital
	
	Escribir "Ingrese el inter�s anual: "
	Leer interes_anual
	
	Escribir "Ingrese el n�mero de a�os del pr�stamo: "
	Leer plazo
	
	ratio = interes_anual / 12
	plazo = plazo * 12
	
	cuota_mensual = (capital * ratio) / (100 * (1 - (1 + (ratio / 100 - plazo))))
	
	total_pagado = cuota_mensual * plazo
	amortizacion = capital
	intereses = total_pagado - amortizacion
	
	Escribir "Su deuda mensual a pagar es: ", cuota_mensual
	Escribir "Total pagado al finalizar el pr�stamo: ", total_pagado
	Escribir "Cantidad de amortizaci�n: ", amortizacion
	Escribir "Cantidad de intereses: ", intereses
	
FinAlgoritmo
