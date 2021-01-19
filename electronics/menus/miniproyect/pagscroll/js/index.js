var btnMenu = document.querySelector('.btn-menu');
let menu = document.querySelector('.list-container');
let containerMenu = document.querySelector('.menu');
let gotop=document.querySelector('.go-top')
let activador = true;

//click para mostrar elementos
btnMenu.addEventListener('click',() =>{
	btnMenu.classList.toggle('fa-times');

	if (activador) {

		menu.style.left = '0';
		menu.style.transition = '0.5s';
		activador=false;
	}
	else{
		activador=false;
		menu.style.left = '-100%';
		menu.style.transition = '0.5s';
		activador = true;
	}
	
})
//click para mostrar elementos


//mostrar o quitar barra btn menu
let afterscroll=window.pageYOffset;
	
	window.onscroll= () =>{
		let beforescroll=window.pageYOffset;

		if (afterscroll>beforescroll) {

			containerMenu.style.top= '0';
			containerMenu.style.transition = '0.5s';
		}
		else {
			containerMenu.style.top= '-60px';
			containerMenu.style.transition = '0.5s';
		}

		afterscroll=beforescroll;

		//mostrar o quitar barra btn menu


		//desaparecer flecha
		let top=window.pageYOffset;

		if (top <=600) {
			gotop.style.right = '-60px'; 
			gotop.style.transition = '0,5s';
			containerMenu.style.borderBottom = '2px solid red';
		}
		else{
			gotop.style.right = '0px';
			containerMenu.style.borderBottom = 'none';
		}

	}



