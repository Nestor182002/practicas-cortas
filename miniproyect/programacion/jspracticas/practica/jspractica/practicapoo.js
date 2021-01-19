class Notas {
	constructor(nombre) {
		this.nombre = nombre;
	}
}

class UInterfaz {

	AgregarProducto(producto) {
		const lista=document.getElementById("contenedor-grupo");
		const element = document.createElement('div');
		element.innerHTML = `
		<div id="body" name="body">
		<strong>tu nota es: </strong>: ${producto.nombre} 
		<a href="#" id="delete" name="delete">Delete</a>

		</div>

`
lista.appendChild(element);
	}


	DeleteDatos(element) {
		if (element.name==="delete") {
			element.parentElement.remove();
		}

	}



	ResetDatos(){
		document.getElementById("form").reset();
	}

	
}

//eventos del dom
//para agregar y resetear
document.getElementById('form')
.addEventListener("submit",function(e){
const nombre=document.getElementById("nombre")
.value;

const producto= new Notas(nombre);

const ui=new UInterfaz();
ui.AgregarProducto(producto);

ui.ResetDatos();

e.preventDefault();
})
//delete
document.getElementById("contenedor-grupo")
.addEventListener("click",function(e){

const ui=new UInterfaz();
ui.DeleteDatos(e.target);

})