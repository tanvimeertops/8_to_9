use se_batch;

create table demotable(
student_id int,
student_name varchar(255),
student_admisn_date date);

desc demotable;

insert into demotable(
student_id,student_name,student_admisn_date)values
(3,'david','2019-05-21');

select * from demotable;