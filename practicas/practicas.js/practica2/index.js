let buscadorData = document.getElementById('buscador');
let boton=document.getElementById('boton');
let datos=document.getElementsByClassName('datos');
let lista=document.getElementsByClassName('listData');
let contenedor=document.getElementsByClassName('contenedor');


function hola(){
	


	for (var i = datos.length - 1; i >= 0; i--) {

		
		let data=datos[i];
		
		 if (data.textContent.indexOf(buscadorData.value) > -1) {
			lista[i].style.display = 'block';

		 }else{

		 	lista[i].style.display = 'none';

	 			 }
		
	}


	
}


boton.addEventListener('click',(e)=>{
	
	hola()
	e.preventDefault()
})

buscadorData.addEventListener('keyup',hola)