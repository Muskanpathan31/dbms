CREATE TABLE Employee ( 
E_id INT PRIMARY KEY, 
E_name VARCHAR(50), 
E_dept INT, 
E_salary DECIMAL(10, 2), 
job_title VARCHAR(50) 
); 
INSERT INTO Employee (E_id, E_name, E_dept, E_salary, job_title) 
VALUES 
(105, 'John Doe', 40, 4500.00, 'Manager'), 
(118, 'Jane Smith', 30, 5200.00, 'Clerk'), 
(119, 'Mike Johnson', 110, 6000.00, 'SH_MANAGER'), 
(120, 'Emily Davis', 30, 4800.00, 'Sales Assistant'); 
select * from Employee; 
UPDATE Employee 
SET E_salary = 8000 
WHERE E_id = 105 AND E_salary < 5000; 
select * from Employee; 
UPDATE Employee 
SET job_title = 'SH_CLERK' 
WHERE E_id = 118 AND E_dept = 30 AND NOT job_title LIKE 'SH%'; 
select * from Employee;