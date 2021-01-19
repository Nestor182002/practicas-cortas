function animales(altura, peso, color, animal) { //clase 1
	this.altura = altura;
	this.peso = peso;
	this.color = color;
	this.animal = animal;
	console.log("caracteristicas"); 

	this.getanimal = function() {
		return "el " + animal + " mide " + altura + " y el peso " + peso + " color " + color; //metodo
	}


}

/*animales.prototype.getanimal=function(){//prototype  clase1
		return this.animal +" es un animal "+ this.color;
	}
	
animales.prototype.getsuma=function(){//clase1
const year=this.altura+this.peso;
return this.animal+ "tiene" +year +"años";	
}*/

const perro = new animales("1.30", "60", "negro", "perro"); //objeto
console.log(perro); //objeto llamado
console.log(perro.getanimal()); //el metodo llamado

//console.log(perro.getsuma())//del prototype getsuma clase1

const gato = new animales("0.40", "20", "blanco", "gato"); //objeto
console.log(gato);
console.log(gato.getanimal());

function persona(altura,peso,color,persona){//otra clase,usando de la otra clase
	animales.call(this,altura,peso,color);
	this.persona=persona;
}
//herencia del prototype
persona.prototype=Object.create(animales.prototype);
const persona1= new persona("1.30","70","azul","juan");
persona.prototype.constructor=persona;
console.log(persona1);