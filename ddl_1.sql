SELECT * FROM se_4_30_to_6.student_tops;
-- ddl (data defination language)
-- create :table, data base
--  alter : table
--  drop 

-- record: row/tuple
-- attribute: column  

alter table student
add column phone_no bigint;

alter table student
add constraint unique key(phone_no);
 
 desc  student;

alter table student
modify column marks float;

alter table student
drop column marks;

alter table student
change marks stu_mark float;

drop table exam;
-- it removes the whole table including the table structure

drop	database db;





