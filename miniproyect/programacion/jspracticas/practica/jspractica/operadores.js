function resultadosOperacion(){
	let numUno =parseInt(document.getElementById("numeroUno").value);
	let numDos =parseInt(document.getElementById("numeroDos").value);
	let resultado = numUno + numDos;//este se puede numUno+=numDos y abajo resultado,pongo numUno y da el mismo result

	document.getElementById("resultado").value = resultado;
}//puede sumar restar etc..,lo que quiera

function incrementar(){

let numUno =parseInt(document.getElementById("numeroUno").value);
numUno++;
document.getElementById("numeroUno").value = numUno;

}

function decrementar(){
let numDos =parseInt(document.getElementById("numeroDos").value);
numDos--;
document.getElementById("numeroDos").value = numDos;
}

function comparacion(){
	let numUno =parseInt(document.getElementById("numeroUno").value);
	let numDos =parseInt(document.getElementById("numeroDos").value);

	let respuesta= numUno==numDos ? "son iguales" : "diferentes";

	document.getElementById("respuesta").value=respuesta;
}