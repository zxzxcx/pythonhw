create database temp;
use temp
create table students(
    student_id int(5) auto_increment primary key,
    name char(10),
    age int(10),
    grade char(5)
);


insert into students(name, age, grade) values( 'Alice', 20, 'A');
insert into students(name, age, grade) values( 'Bob', 22, 'B');
insert into students(name, age, grade) values( 'Charlie', 21, 'A');
insert into students(name, age, grade) values( 'Dave', 23, 'C');


#1.
update students set age = 22 where name = 'Charlie';
select * from students;

#2.
select name, age from students where grade = 'A';

#3.
delete from students where name = 'Bob';
select * from students;

#4.
insert into students(name, age, grade) values( "Eve", 24, 'B');
select * from students;

