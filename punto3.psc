Algoritmo conversion_tiempo3

    Definir tiempo, horas, minutos, segundos como numerico

    Escribir "Digite los segundos transcurridos que desea convertir:"
    Leer tiempo
    
    horas= tiempo / 3600
	minutos= (tiempo % 3600) / 60
    segundos= (tiempo % 3600) % 60
  
    Escribir "Tiempo equivalente:"
    Escribir "Horas:", horas
    Escribir "Minutos:", minutos
    Escribir "Segundos:", segundos
	
FinAlgoritmo
