let usuario={
	nombre:"nestor david",
	email:"nestor@aja",
	edad:20,
	telefono:"1232132"
};

document.getElementById("datos").innerHTML = usuario["telefono"];//llamar

usuario.telefono="421124";
document.getElementById("datos2").innerHTML=usuario.telefono;


let texto ='{"empleados":['+
'{"nombre":"nestor","edad":"20"},'+
 '{"nombre":"jose","edad":"20"}'+
'{"nombre":"conce","edad":"20"}]}';

var obj= JSON.parse(texto);

document.getElementById('datos').innerHTML=obj;
console.log(obj);