SELECT * FROM se_8_to_9.student;
insert into course(
roll_no,student_corse)values
(4,"da");

create table students(
Rollno int primary key,
name varchar(255),
branch varchar(255));
desc students;

insert into students(
Rollno,name,branch)values
(1,"jay","computer science"),
(2,"suhani","electronic and comm"),
(3,"kriti","electronic and comm");

create table exam(
rollno int,
s_code varchar(255),
marks int,
p_code varchar(255),
foreign key(rollno) references students(rollno));

desc exam;

insert into exam(
rollno,s_code,marks,p_code)values
(14,"cs11",50,"cs");


select * from exam;

