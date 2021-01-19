create database basedatossena;
--entrar a la base de datos



create table identificacion(
idident int(2) NOT NULL AUTO_INCREMENT,
nomident varchar(25) NOT NULL,
primary key(idident)
)ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;


ALTER TABLE identificacion AUTO_INCREMENT = 1;
insert into identificacion values(NULL,'Registro Civil');
insert into identificacion values(NULL,'Cedula de Ciudadania');




create table persona(
numid varchar(14) NOT NULL,
tipoid int(2) NOT NULL,
primnom varchar(20) NOT NULL,
segnom varchar(20) NULL DEFAULT NULL,
primapel varchar(20) NOT NULL,
segpael varchar(20) NOT NULL,
fechanacimiento date NOT NULL,
edad int(2) NOT NULL,
telefono varchar(10),
email varchar(255),
personalidad text,
primary key(numid),
index(tipoid),
foreign key(tipoid) 
references identificacion(idident)
ON UPDATE CASCADE ON DELETE CASCADE
)ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

insert into persona values('3805476',2,'carlos','jose','caceres','ochoa','1979/08/28',40,'3104506265','c_caceres@misena.edu.co','me gusta el estudiar mi carrera y enseñar');
insert into persona values('38054761',2,'jose',NULL,'ochoa','hoyos','1979/08/28',40,'3104506265','c_caceres@misena.edu.co','me gusta el estudiar mi carrera y enseñar');


ALTER TABLE persona ADD direccion TEXT NOT NULL AFTER personalidad;
ALTER TABLE persona DROP direccion;


