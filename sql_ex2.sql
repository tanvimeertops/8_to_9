create database TOPS_SURAT;

USE  TOPS_SURAT;

CREATE table PERSONS(
ID INT ,
NAME VARCHAR(255),
SURNAME varchar(255),
age int);

desc persons;

insert into persons(
id,name,surname,age)values
(3,'grace','wheeler',18);

select * from persons;