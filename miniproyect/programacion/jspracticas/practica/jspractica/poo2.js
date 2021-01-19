class product {
	constructor(nombre, valor, año) {
		this.nombre = nombre;
		this.valor = valor;
		this.año = año;
	}

}

class UI {
	addDatos(productos) {
		const productslist = document.getElementById('contenedor-grupo');
		const element = document.createElement('div');
		element.innerHTML = `           
                <div class="card-body">
                    <strong>Product</strong>: ${productos.nombre} 
                    <strong>Price</strong>: ${productos.valor}  
                    <strong>Year</strong>: ${productos.año}
                    <a href="#"  name="delete">Delete</a>
                </div>     
        `;
        
		productslist.appendChild(element);

	}

	resetform(){
		document.getElementById("form").reset();
	}

	borrarDatos(element) {
		if (element.name==='delete') {
			element.parentElement.parentElement.remove();
			this.mensaje('producto eliminado');
		}

	}

	mensaje(mensajes){
		const div=document.createElement('div');
		div.className='alert';
		div.appendChild(document.createTextNode(mensajes));

		const contenedor=document.getElementById('contenedor');
		const form=document.getElementById('form');
		contenedor.insertBefore(div,form);//inserto el div antes del form
		setTimeout(function(){
			document.querySelector('.alert').remove();
		},3000);
	}
}

//dom events

document.getElementById('form')
	.addEventListener('submit', function(e) {
		const nombre = document.getElementById('nombre').value;
		const valor = document.getElementById("valor").value;
		const año = document.getElementById("año").value;


		const productos = new product(nombre, valor, año);

		
		const ui = new UI();
		ui.addDatos(productos);

		ui.resetform();

		ui.mensaje("que onda");

		if(nombre ==='' || valor ==='' || año ===''){
			return ui.mensaje("faltan datos por favor");
		}

		e.preventDefault();
	})

//dom events delete
document.getElementById("contenedor-grupo")
.addEventListener('click',function(e){

const ui=new UI();
ui.borrarDatos(e.target)

	})