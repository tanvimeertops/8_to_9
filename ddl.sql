 -- ddl
 -- alter
		-- add (column,constraints(key)
        -- modify (change datatype)
        -- change(rename)
        -- drop column (delete column)
 -- create 
 -- drop 
		-- delete database and table
 alter table course
 add column name varchar(255);
  
  desc student;
  alter table student
 add constraint unique key(name);

  alter table student
 modify stu_mark int;
 
 alter table student
 change name `student name` varchar(255);
 
 desc student;