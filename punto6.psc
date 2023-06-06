Algoritmo punto6
    Definir x Como Entero
    Definir sigma Como Real
//la letra y la reemplace por z
    Definir z Como Entero
    Definir lambda Como Real
    Definir alfa Como Real
    Definir f Como Real
	
    x <- 12
    sigma <- 2.1836
    z = 3
    lambda <- 1.11695
    alfa <- 328.67
	
    f <- 3 * (x + sigma * z / (x * x - z * z)) - lambda * (alfa - 13.7)
	
    Escribir "El valor de f es: ", f
FinAlgoritmo
