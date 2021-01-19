let contenedor= document.getElementById("contenedor")



function hola(e){
	let productos = document.getElementsByClassName('productos');
	let filtros=e.target.attributes.name.textContent;
	console.log(productos)

	for (var i = productos.length - 1; i >= 0; i--) {
	
	if (filtros == productos[i].textContent) {
			productos[i].style.display = 'flex';
			
		}else{
			productos[i].style.display = 'none';
			
		}

	}

		
		

}



contenedor.addEventListener('click',(e)=>{
	hola(e)
})