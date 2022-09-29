create database se_8_to_9;

use se_8_to_9;

create table student(
roll_no int primary key,
name varchar(255));

desc student;

insert into student(
roll_no,name)values
(1,"nikhil"),
(2,"zaid"),
(3,"namrata");

select * from student;

create table course(
roll_no int,
student_corse varchar(255),
foreign key(roll_no) references student(roll_no));

desc course;

insert into course(
roll_no,student_corse)values
(1,"se");
