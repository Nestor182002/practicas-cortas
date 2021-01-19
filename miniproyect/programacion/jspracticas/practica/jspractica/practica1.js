

function persona() {
	let nombre = document.getElementById('nombre').value;
	let seleccion = document.getElementById('seleccion');
	var select;
	
	if (seleccion.checked) {
		select = "SI";
	} else {
		select = "NO";
	}
	let alerta= document.getElementById('texto1').innerHTML=nombre;
	document.getElementById('texto2').innerHTML=select;
	alert("buenos dias "+nombre);
};


