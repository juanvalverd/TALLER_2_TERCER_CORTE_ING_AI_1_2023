Algoritmo punto11
	
	Definir capital, interes_anual, plazo, ratio, cuota_mensual, total_pagado, amortizacion, intereses como reales
	
	Escribir "Ingrese el capital prestado: "
	Leer capital
	
	Escribir "Ingrese el interés anual: "
	Leer interes_anual
	
	Escribir "Ingrese el número de años del préstamo: "
	Leer plazo
	
	ratio = interes_anual / 12
	plazo = plazo * 12
	
	cuota_mensual = (capital * ratio) / (100 * (1 - (1 + (ratio / 100 - plazo))))
	
	total_pagado = cuota_mensual * plazo
	amortizacion = capital
	intereses = total_pagado - amortizacion
	
	Escribir "Su deuda mensual a pagar es: ", cuota_mensual
	Escribir "Total pagado al finalizar el préstamo: ", total_pagado
	Escribir "Cantidad de amortización: ", amortizacion
	Escribir "Cantidad de intereses: ", intereses
	
FinAlgoritmo
