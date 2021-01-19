//var colores=["rojo","azul","verde"];//formas de declarar

//console.log(colores[0]);

//var frutas= new Array();
//frutas[0]="sandia";
//console.log(frutas[0]);
//


//var frutasDos=new Array("manzana","pera","banano");

//frutas["uno"]=10;//puedo poner mis propios nombres
//console.log(typeof(frutas["uno"]));

var numero= new Array(5);//guardo 5 espacios en memoria
numero[0]=5;
numero[1]=4;
numero[2]=3;
numero[3]=2;
numero[4]=1;

let tamaño=numero.length;

for (var i = 0; i < tamaño; i++) {
	console.log(numero[i]);

}

var matrizfila=new Array();

for (var i = 0; i < 10; i++) {
	matrizfila[i]=new Array();
	for (var x = 0; x < 10; x++) {
		matrizfila[i][x]=i + ""+ x;
	}
}

for(let elemento in matrizfila){
	console.log(elemento +"="+matrizfila[elemento]);
}