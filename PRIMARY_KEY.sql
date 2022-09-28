use test;
-- primary key: no duplicate value,
--  one primary key/table.
create table student(
rollno int primary key,
name varchar(255),
branch varchar(255));

insert into student(
rollno,name,branch)values
(3,"kriti","electronic and comm");

select * from student;