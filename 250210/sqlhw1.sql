create database temp;
use temp
create table students(
    id int(5) auto_increment primary key,
    name char(10) not null,
    age int(5) not null
);

insert into students(name, age) values('kim', 25);
insert into students(name, age) values('lee', 37);
insert into students(name, age) values('park', 26);
insert into students(name, age) values('choi', 35);
insert into students(name, age) values('jung', 34);

#1.
select count(*) from students;

#2. age Max min, 
select max(age), min(age) from students where age;
