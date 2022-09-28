create database tops;

use tops;

-- constraints(key): 
-- unique key : it does not allow duplicate value : multiple column

create table student(
roll_no int unique key,
name varchar(255),
course varchar(255),
phone int unique key);

desc student;

insert into student(
roll_no,name,course)values
(3,"namrata","full stack");

select * from student;