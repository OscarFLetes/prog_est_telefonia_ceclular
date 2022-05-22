/*Autor: Oscar Eduardo Fletes Ixta, realizado: 11/02/2022
	Programa que calcula y imprime la factura de una compañia de telefonia celular
	La compañia ofrece dos tipos de servicio: regular y premium
		-Servicio regular: $10.00 mas 50 primeros minutos gratis. El costo de esos 50 min
		es de $0.20 por minuto 
		-Servicio premium: $25.00 mas 
		a. Por llamadas echas de las 6:00 a las 18:00, los primeros 75 minutos son gratis;
		el costo por mas de 75 min es de $0.10 por min.
		b. Por llamadas echas de las 18:00 a las 6:00 del siguiente dia.
		Los primeros 100 min son gratis;el costo por mas de 100 min es de $0.05 por min.
	
	Programa en lenguaje c que pide el tipo de servicio telefonico y pide sus minutos utilizados y
	calcula el totoal a pagar por los minutos utilizados, con el uso de scanf, condiciones, y operaciones aritmeticas
	
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia: Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		* Declaracion de variables 
		* Variables del tipo float, int
		* Uso de scanf
		* Uso de condiciones 
		* Operaciones aritemticas
		* printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables de tipo float, int, uso del scanf, uso de condiciones, realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa  pide como entrada 2 variable del tipo int (numero de cuenta, opcion (regular o premium))
	El programa calcula y imprime la factura de una compañia de telefonia celular. La compañia ofrece dos tipos de servicio: regular y premium
	*/
	
#include<stdio.h>

int main(){
	//Variables 
	int nocuenta, minutos=0, op, mpd, mpn;//Variables enteras
	float total, total2, totaln,totald,mintotal;//Variables con decimal
	//Entrada 
	printf("Por favor introduce tu numero de cuenta: ");//imprime mensaje
	scanf ("%d",&nocuenta);//lee el numero insertado por el teclado
	printf("Por favor seleccione su tipo servicio porfavor: \n");//imprime mensaje
	printf("1.Regular\n");//imprime mensaje
	printf("2.Premium\n");//imprime mensaje
	printf("Ingrese su opcion:");//imprime mensaje
	scanf("%d",&op);//lee el numero insertado por el teclado
	
	//Proceso
	if(op==1){//condicion, si op es igual a 1
		printf("Ingrese sus minutos utilizados: ");//imprime mensaje
		scanf("%d", &minutos);//lee el numero insertado por el teclado
		if(minutos>50){//condicion, si minutos es mayor que 50 minutos
			total=(10.00)+0.20*minutos;//realiza el calculo para los minutos
		}else{//de lo contrario 
			total=10.00;//el total es de 10.00 pesos 
		}
		printf("Su monto a pagar es: $%.2f\t\n",total);//imprime la salida del total
		printf("Sus minutos utilizados fueron: %d\t\n",minutos);//imprime la salida de los minutos utilizados
		printf("Tu numero de cuenta es: %d\n",nocuenta);//imprime la salida del numero de cuenta
		printf("Tu tipo de servicio es: %d",op);//imprime la salida del tipo del servivicio
	}
	else if(op==2){//condicion, si op es igual a 2
		printf("Por favor introduce el numero de minutos que utilizo durante el dia(6:00 a las 18:00hrs): \n");//imprime mensaje
		scanf("%d",&mpd);//lee el numero insertado por el teclado
		printf("Por favor introduce el numero de minutos que utilizo durante la noche(18:00 a las 6:00hrs): \n");//imprime mensaje
		scanf("%d",&mpn);//lee el numero insertado por el teclado
		
		if(mpd>75){//si minutos por dia es mayor de 75 minutos
			totald=(25.00)+0.10*mpd;//se realiza el calculo necesario 
				
				if(mpn>100){//i minutos por noche es mayor de 100 minutos
					totaln=(25.00)+0.05*mpn;//se realiza el calculo necesario 
		}
			total2=totald+totaln;//calcula el total 		
		}else{//de lo contrario si no arrevasa los 75 min
			total2=25.00;//total a pagar 
		}
		//salida
		printf("Su monto a pagar es: $%.2f\t\n",total2);//imprime la salida del total
		mintotal=mpd+mpn;//calcula los minutos totales 
		printf("Sus minutos utilizados fueron: %.2f\t\n",mintotal);//imprime la salida de los minutos utilizados
		printf("Tu numero de cuenta es: %d\n",nocuenta);//imprime la salida del numero de cuenta
		printf("Tu tipo de servicio es: %d",op);//imprime la salida del tipo del servivicio	
	}else{
		printf("Valor invalido, las unicas opciones son, regular(1) y premium (2)");//valida que las unicas opciones sean regular o premium
	}
	
	return 0;
}
