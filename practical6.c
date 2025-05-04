CREATE TABLE Employee ( 
    E_id INT PRIMARY KEY, 
    E_name VARCHAR(50), 
    E_dept INT, 
    E_salary DECIMAL(10, 2) 
); 
INSERT INTO Employee (E_id, E_name, E_dept, E_salary) 
VALUES 
    (1, 'John Doe', 40, 50000.00), 
    (2, 'Jane Smith', 90, 60000.00), 
    (3, 'Mike Johnson', 110, 55000.00), 
    (4, 'Emily Davis', 30, 45000.00), 
    (5, 'Chris Brown', 40, 48000.00), 
    (6, 'Emma Watson', 90, 62000.00); 
select * from Employee; 
 
UPDATE Employee 
SET E_salary =  
    CASE  
        WHEN E_dept = 40 THEN E_salary * 1.25 
        WHEN E_dept = 90 THEN E_salary * 1.15 
        WHEN E_dept = 110 THEN E_salary * 1.10 
        ELSE E_salary 
    END 
WHERE E_dept IN (40, 90, 110); 
select * from Employee; 