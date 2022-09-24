-- create database
create database SE_batch;

-- use database
use se_batch;

-- create table
create table 8_june_batch(
roll_no int,
name varchar(255),
coarse varchar(255));

-- describe table
desc 8_june_batch;

-- insert
insert into 8_june_batch(
roll_no,name,coarse)values
(4,'ASHWINI','SE');

-- dql (to check the table)
select * from 8_june_batch;
