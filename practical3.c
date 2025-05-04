CREATE TABLE IF NOT EXISTS employee_details ( 
employee_id INT AUTO_INCREMENT PRIMARY KEY, 
f
 irst_name VARCHAR(50), 
last_name VARCHAR(50), 
department VARCHAR(50), 
age INT 
); 
DELIMITER // 
CREATE PROCEDURE InsertEmployeeDetails( 
IN emp_first_name VARCHAR(50), 
IN emp_last_name VARCHAR(50), 
IN emp_department VARCHAR(50), 
IN emp_age INT 
) 
BEGIN 
INSERT INTO employee_details (first_name, last_name, department, age) 
VALUES (emp_first_name, emp_last_name, emp_department, emp_age); 
END // 
DELIMITER ; 
CALL InsertEmployeeDetails('John', 'Doe', 'IT', 30); 
select * from employee_details; 