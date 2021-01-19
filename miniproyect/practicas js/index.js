const date = document.getElementById('text').value.toLowerCase(); 
const formulario = document.getElementById('text'); 
const boton = document.getElementById('boton'); 
const insertar =document.getElementById('datos');

const products=[
	{nombre:'platano',valor:1000},
	{nombre:'yuca',valor:3000},
	{nombre:'ñame',valor:2000},
	{nombre:'uva',valor:500},
];
const filtrado =()=>{

	insertar.innerHTML='';

for (let product of products) {
	let name = product.nombre.toLowerCase();

	if (name.indexOf(date) !== -1) {
		insertar.innerHTML +=`
		<li >${product.nombre} - ${product.valor}</li>
		`
	
	}


}
if (insertar.innerHTML=='') {
		insertar.innerHTML+=`
		<li >producto no encontrado...</li>
		`
	}

	
}

boton.addEventListener('click', (e) => {


filtrado();
e.preventDefault()
})

// formulario.addEventListener('keyup', filtrado)