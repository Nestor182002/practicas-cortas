
create table cargo(
idcargo int(3) AUTO_INCREMENT,
nomcargo varchar(50) NOT NULL,
primary key(idcargo)
)ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

insert into cargo values(NULL,'Jefe de Sistemas');
insert into cargo values(NULL,'Ingeniero de Sistemas');
insert into cargo values(NULL,'Tecnologo de Sistemas');
insert into cargo values(NULL,'Tecnico de Sistemas');	



create table empleado(
codemp varchar(14) NOT NULL,
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
cargo int(3),
primary key(codemp),
index(tipoid,cargo),
UNIQUE(numid), 
foreign key(tipoid) 
references identificacion(idident)
ON UPDATE CASCADE ON DELETE CASCADE,
foreign key(cargo) 
references cargo(idcargo)
ON UPDATE CASCADE ON DELETE CASCADE
)ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--insert into persona values('3805476',2,'carlos','jose','caceres','ochoa','1979/08/28',40,'3104506265','c_caceres@misena.edu.co','me gusta el estudiar mi carrera y enseñar');
--insert into persona values('38054761',2,'jose',NULL,'ochoa','hoyos','1979/08/28',40,'3104506265','c_caceres@misena.edu.co','me gusta el estudiar mi carrera y enseñar');





