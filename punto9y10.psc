Algoritmo triangulo
	
	pii= 3.141592
	
    Definir lado1, lado2, angulo, area, radianes como Real
	
    Escribir "Ingrese el valor del primer lado: "
    Leer lado1
	
    Escribir "Ingrese el valor del segundo lado: "
    Leer lado2
	
    Escribir "Ingrese el valor del angulo en grados: "
    Leer angulo
	
	//AreaTrianguloCalculo(lado1, lado2, angulo)
   
    radianes= angulo * PI / 180.0
    area = 0.5 * lado1 * lado2 * sen(radianes)
    Escribir "El area del triangulo es: ", area
	
	
FinAlgoritmo

