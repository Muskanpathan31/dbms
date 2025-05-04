CREATE TABLE IF NOT EXISTS students_details ( 
student_id INT AUTO_INCREMENT, 

 first_name VARCHAR(50), 
last_name VARCHAR(50), 
department VARCHAR(50), 
age INT, 
PRIMARY KEY (student_id) -- Define the primary key after table creation 
); 
ALTER TABLE students_details 
ADD email VARCHAR(100); 
ALTER TABLE students_details 
MODIFY COLUMN age INT UNSIGNED; 
ALTER TABLE students_details 
DROP COLUMN email; 
ALTER TABLE students_details 
RENAME TO student_information; 
DROP TABLE IF EXISTS student_information;