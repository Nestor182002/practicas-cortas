function validarEdad(){

let numero= parseInt(document.getElementById('edad').value)

if (numero>=18) {
	document.getElementById('respuesta').innerHTML="es mayor";
}
else{
	document.getElementById('respuesta').innerHTML="es menor";
}

}

function Dia(dia){

let numDia=parseInt(dia);

switch(numDia){
	case 1:
	return "domingo";
	break;
	case 2:
	return "lunes";
	break;
	case 3:
	return "martes";
	break;
	case 4:
	return "miercoles";
	break;
	case 5:
	return "jueves";
	break;
	case 6:
	return "viernes";
	break;
	case 7:
	return "sabado";
	break;

	default: return "no valido";
	
}
}

function respuestaDia(dia){
	document.getElementById('respuesta').innerHTML=Dia(dia);
}