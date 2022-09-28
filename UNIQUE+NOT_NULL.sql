-- not null : it makes null zero.
-- unique(doesn't take duplicate)+not null
create table persons(
person_id int not null unique key,
person_name varchar(255));

insert into persons(
person_name)values
("nikhil");

select * from persons;