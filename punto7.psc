Algoritmo nomina_empleado7
    Definir sueldoBase, complementoDestino, complementoCargo, sueldoBruto, impuestos, sueldoNeto como reales
    Definir horasExtra, numHijos, numMayores como enteros
    
    Escribir "Ingrese el sueldo base: "
    Leer sueldoBase
	
    Escribir "Ingrese complemento de destino: "
    Leer complementoDestino
	
    Escribir "Ingrese complemento de cargo academico: "
    Leer complementoCargo
	
    Escribir "Digite las horas extra realizadas: "
    Leer horasExtra
	
    Escribir "Numero de hijos: "
    Leer numHijos
	
    Escribir "Numero de mayores dependientes: "
    Leer numMayores
	
    sueldoBruto = sueldoBase + complementoDestino + complementoCargo + (horasExtra * 23)
    
    Definir porcentajeImpuestos como entero
    porcentajeImpuestos = 24 - (2 * numHijos) - numMayores
    
    impuestos = (sueldoBruto * porcentajeImpuestos) / 100
	
    sueldoNeto = sueldoBruto - impuestos
	
    
    Escribir "Calculo de la nomina:"
    Escribir "Sueldo base: " sueldoBase  " $"
    Escribir "Complemento de destino: "  complementoDestino  " $"
    Escribir "Complemento de cargo academico: "  complementoCargo  " $"
    Escribir "Horas extra realizadas: "  horasExtra
    Escribir "Hijos: "  numHijos
    Escribir "Mayores: "  numMayores
    Escribir "Sueldo bruto: "  sueldoBruto  " $"
    Escribir "Porcentaje de IRPF: "  porcentajeImpuestos  "%"
    Escribir "Retencion por IRPF: "  impuestos  " $"
    Escribir "Sueldo neto: "  sueldoNeto  " $"
	
FinAlgoritmo
