class mascota{

	constructor(nombre,altura,peso){
		this.nombre=nombre;
		this.altura=altura;
		this.peso=peso;
	}

	saludar(){
		return"el perro "+this.nombre+" pesa "+this.peso;
	}

}

var perro=new mascota("luis",1.60,60);

console.log(perro.saludar());