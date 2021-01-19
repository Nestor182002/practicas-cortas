
create table curso(
codcurso varchar(10) NOT NULL,
nomcurso varchar(50) NOT NULL,
primary key(codcurso)
)ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;



create table alumno(
codalumno varchar(14) NOT NULL,
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
primary key(codalumno),
index(tipoid),
UNIQUE(numid),
foreign key(tipoid) 
references identificacion(idident)
ON UPDATE CASCADE ON DELETE CASCADE
)ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;



create table matricula(
codmatricula varchar(10) NOT NULL,
alumno varchar(14) NOT NULL,
fechahoramat DATETIME NOT NULL,

primary key(codmatricula),
foreign key(alumno) 
references alumno(codalumno)
ON UPDATE CASCADE ON DELETE CASCADE

)ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;


--INSERT INTO matricula VALUES ('m201', '100', '2020-08-14 10:38:41');


create table asociarcurso(
alumno varchar(10) NOT NULL,
curso varchar(10) NOT NULL,
fechahora DATETIME NOT NULL,
primary key(alumno,curso),
foreign key(alumno) 
references alumno(codalumno)
ON UPDATE CASCADE ON DELETE CASCADE,
foreign key(curso) 
references curso(codcurso)
ON UPDATE CASCADE ON DELETE CASCADE
)ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;







