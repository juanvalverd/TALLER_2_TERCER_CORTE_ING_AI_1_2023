//primer punto 

#include <stdio.h>

#define PI 3.141592

float volumendelcono(float radio, float altura) {
    float volumen = (PI * radio * radio * altura) / 3;
 return volumen;
}

int main() {
   float radio, altura, volumen;

    radio = 14.5;
    altura = 26.79;
   
    volumen = volumendelcono(radio, altura);
    
    printf("El volumen del cono es: %.2f\n", volumen);

    return 0;
}

//segundo punto 

#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    
    printf("Ingrese los grados Fahrenheit que desea convertir: ");
    scanf("%f", &fahrenheit);
    
    // usando la formula ºC=5/9(ºF-32)
    celsius = (fahrenheit - 32) * 5 / 9 ;
    
    printf("La conversion a grados Celsius es: %.2f\n", celsius);
    
    return 0;
}

//tercer punto 

#include <stdio.h>

int main() {
    int tiempo, horas, minutos, segundos;

    printf("Digite los segundos transcurridos que desea convertir: ");
    scanf("%d", &tiempo);

    
    horas = tiempo / 3600;
    minutos = (tiempo % 3600) / 60;
    segundos = (tiempo % 3600) % 60;

    printf("La conversion del tiempo es: %d horas, %d minutos y %d segundos.\n", horas, minutos, segundos);

    return 0;
}

//cuarto punto

#include <stdio.h>

int main() {
    float examen1, examen2, examen_final, practicas, actividad_adicional, nota_final;

    
    printf("Ingrese la nota del primer examen: ");
    scanf("%f", &examen1);

    printf("Ingrese la nota del segundo examen: ");
    scanf("%f", &examen2);

    printf("Ingrese la nota del examen final: ");
    scanf("%f", &examen_final);

    printf("Ingrese la nota de las prácticas: ");
    scanf("%f", &practicas);

    printf("Ingrese la nota de la actividad adicional: ");
    scanf("%f", &actividad_adicional);

    
    nota_final = (examen1 + examen2 + examen_final + practicas + actividad_adicional) / 5;

  
    printf("Su nota final de la asignatura es: %.2f\n", nota_final);

    return 0;
}

//quinto punto 

#include <stdio.h>

int main() {
    float r, a, b, c, d;
    float resultado;

    printf("Defina el valor de r: ");
    scanf("%f", &r);

    printf("Defina el valor de a: ");
    scanf("%f", &a);

    printf("Defina el valor de b: ");
    scanf("%f", &b);

    printf("Defina el valor de c: ");
    scanf("%f", &c);

    printf("Defina el valor de d: ");
    scanf("%f", &d);

    resultado = 4 / 3 * (r+34) - 9 * (a+b*c) + 3 + d * (2 + a) / a + b * d;

    printf("El resultado es: %.2f\n", resultado);

    return 0;
}

//sexto punto 

#include <stdio.h>

int main() {
    int x = 12;
    float sigma = 2.1836;
    int y = 3;
    float lambda = 1.11695;
    float alfa = 328.67;
    float f;

    f = 3 * (x + sigma * y / (x * x - y * y)) - lambda * (alfa - 13.7);

    printf("El valor de f es: %f\n", f);

    return 0;
}

//septimo punto 

#include <stdio.h>

int main() {
    float sueldoBase, complementoDestino, complementoCargo, sueldoBruto, impuestos, sueldoNeto;
    int horasExtra, numHijos, numMayores;
    
    printf("Ingrese el suelo base: ");
    scanf("%f", &sueldoBase);

    printf("Ingrese complemento de destino: ");
    scanf("%f", &complementoDestino);

    printf("Ingrese complemento de cargo academico: ");
    scanf("%f", &complementoCargo);

    printf("Digite las horas extra realizadas: ");
    scanf("%d", &horasExtra);

    printf("Numero de hijos: ");
    scanf("%d", &numHijos);

    printf("Numero de mayores dependientes: ");
    scanf("%d", &numMayores);

    sueldoBruto = sueldoBase + complementoDestino + complementoCargo + (horasExtra * 23);
    
    int porcentajeImpuestos = 24 - (2 * numHijos) - numMayores;
    
    impuestos = (sueldoBruto * porcentajeImpuestos) / 100;
   
    sueldoNeto = sueldoBruto - impuestos;

    
    printf("\nCalculo de la nomina:\n");
    printf("Sueldo base: %.2f $\n", sueldoBase);
    printf("Complemento de destino: %.2f $\n", complementoDestino);
    printf("Complemento de cargo academico: %.2f $\n", complementoCargo);
    printf("Horas extra realizadas: %d\n", horasExtra);
    printf("Hijos: %d\n", numHijos);
    printf("Mayores: %d\n", numMayores);
    printf("Sueldo bruto: %.2f $\n", sueldoBruto);
    printf("Porcentaje de IRPF: %d%%\n", porcentajeImpuestos);
    printf("Retencion por IRPF: %.2f $\n", impuestos);
    printf("Sueldo neto: %.2f $\n", sueldoNeto);

    return 0;
}

//octavo punto 

#include <stdio.h>
#include <stdlib.h>
int main() {
 int a = 1;
 double d = 1.0;

    a = 46 % 9 + 4 * 4 - 2;
    printf("La expresion 1 da como resultado: %d\n", a);

    a = 45 + 43 % 5 * (23 * 3 % 2);
    printf("La expresion 2 da como resultado: %d\n", a);

    a = 45 + 45 * 50 % --a;
    printf("La expresion 3 da como resultado: %d\n", a);

    d = 1.5 * 3 + (++d);
    printf("La expresion 4 da como resultado: %.2f\n", d);

    d = 1.5 * 3 + d++;
    printf("La expresion 5 da como resultado: %.2f\n", d);

    a %= 3 / a + 3;
    printf("La expresion 6 da como resultado: %d\n", a);

    return 0;
}


//noveno y decimo punto 

#include <stdio.h>
#include <math.h>

#define PI 3.141592

double AreaTrianguloCalculo(double lado1, double lado2, double angulo);

int main() {
    double lado1, lado2, angulo, area;

    printf("Ingrese el valor del primer lado: ");
    scanf("%lf", &lado1);

    printf("Ingrese el valor del segundo lado: ");
    scanf("%lf", &lado2);

    printf("Ingrese el valor del angulo en grados: ");
    scanf("%lf", &angulo);

    area = AreaTrianguloCalculo(lado1, lado2, angulo);

    printf("El area del triangulo es: %.2lf\n", area);

    return 0;
}

double AreaTrianguloCalculo(double lado1, double lado2, double angulo) {
    double radianes = angulo * PI / 180.0;
    double area = 0.5 * lado1 * lado2 * sin(radianes);
    return area;
}

//punto once 

#include <stdio.h>
#include <math.h>

int main() {
    float capital, interes_anual, plazo;
    float ratio, cuota_mensual, total_pagado, amortizacion, intereses;

    printf("Ingrese el capital prestado: ");
    scanf("%f", &capital);

    printf("Ingrese el interes anual: ");
    scanf("%f", &interes_anual);

    printf("Ingrese el numero de años del prestamo: ");
    scanf("%f", &plazo);

    ratio = interes_anual / 12;
    plazo = plazo * 12;

    cuota_mensual = (capital * ratio) / (100 * (1-(1 + (ratio / 100 - plazo))));

    total_pagado = cuota_mensual * plazo;
    amortizacion = capital;
    intereses = total_pagado - amortizacion;


    printf("\n Su deuda mensual a pagar es: %.2f\n", cuota_mensual);
    printf("Total pagado al finalizar el préstamo: %.2f\n", total_pagado);
    printf("Cantidad de amortización: %.2f\n", amortizacion);
    printf("Cantidad de intereses: %.2f\n", intereses);

    return 0;
}




