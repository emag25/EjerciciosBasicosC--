Algoritmo PuntajeVideojuego
	
	Definir p Como Real
	Definir nom Como Caracter
	
	Escribir "  NOMBRE DEL JUGADOR:";
	Leer nom;
	
	Escribir "  PUNTAJE";
	Leer p;
	
	Si p <= 4 Entonces
		Escribir "  ",nom ", PUNTAJE BAJO";
	SiNo
		Si p>4 Y p<=6 Entonces
			Escribir "  ",nom ", DEBERÍAS MEJORAR";
		SiNo
			Si p>=7 Y p<=10 Entonces
				Escribir "  ",nom ", ERES UN EXPERTO";
			FinSi
		FinSi
	FinSi
	
FinAlgoritmo 