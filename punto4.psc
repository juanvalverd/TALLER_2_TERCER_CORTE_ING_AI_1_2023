Algoritmo notas_asignatura4
    Definir examen1, examen2, examen_final, practicas, actividad_adicional, nota_final como real
	
    Escribir("Ingrese la nota del primer examen: ")
    Leer examen1
	
    Escribir("Ingrese la nota del segundo examen: ")
    Leer examen2
	
    Escribir("Ingrese la nota del examen final: ")
    Leer examen_final
	
    Escribir("Ingrese la nota de las prácticas: ")
    Leer practicas
	
    Escribir("Ingrese la nota de la actividad adicional: ")
    Leer actividad_adicional
	
    nota_final = (examen1 + examen2 + examen_final + practicas + actividad_adicional) / 5
	
    Escribir "Su nota final de la asignatura es: ", nota_final
	
FinAlgoritmo
