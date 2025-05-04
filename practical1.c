CREATE TABLE Students ( 
student_id INT PRIMARY KEY, 
f
 irst_name VARCHAR(50), 
last_name VARCHAR(50), 
department VARCHAR(50), 
age INT 
); 
INSERT INTO Students (student_id, first_name, last_name, department, age) 
VALUES 
(1, 'John', 'Doe', 'Computer Science', 21), 
(2, 'Jane', 'Smith', 'Engineering', 23), 
(3, 'Alice', 'Johnson', 'Mathematics', 20), 
(4, 'Bob', 'Williams', 'Physics', 22), 
(5, 'Emma', 'Brown', 'Biology', 19); 
delimiter // 
CREATE PROCEDURE GetStudentsByDepartment( 
IN p_department VARCHAR(50) 
) 
BEGIN 
SELECT * from students 
where department = p_department; 
end// 
delimiter ; 
CALL GetStudentsByDepartment('Computer Science');