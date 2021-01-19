Algoritmo hola
escribir "diga los pies que desea convertir"
	leer pies
escribir "elija el numero que desea pasar de pies a:" 
escribir "1. yardas,2. pulgadas,3. centimetros,4. metros"
	leer seleccion
			si seleccion=1 Entonces
				m=pies*1
				D=m/3
				escribir "su resultado en yardas es ",d
			SiNo
			fin si
				
				si seleccion=2 Entonces
					m=pies*12
					d=m/1
					escribir"su resultado a pulgadas es ",d
			SiNo
				si seleccion=3 Entonces
					m=pies*30.48
					d=m/1
					
					escribir "su resultado a centimetros es ",d
			       
			SiNo
				si seleccion=4 entonces 
					m=pies*0.3048
					d=m/1
					escribir "su resultado a metros es ",d
						
					FinSi
				FinSi
			FinSi
FinAlgoritmo
