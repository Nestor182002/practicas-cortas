function generarTabla(numero){

let num=parseInt(numero);
let tabla=document.getElementById('tabla');

for (let contador=1;contador<=10;contador++)  {
	let resultado=contador*num;

	let fila=tabla.insertRow(contador-1);
	let celda=fila.insertCell(0);
	celda.innerHTML=contador + "*" + num + "+" + resultado;
}


}

