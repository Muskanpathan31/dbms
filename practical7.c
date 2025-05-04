CREATE TABLE EMPLOYEE ( 
E_id INT PRIMARY KEY, 
E_name VARCHAR(50), 
E_dept VARCHAR(50), 
E_salary DECIMAL(10, 2), 
E_pno INT, 
E_city VARCHAR(50) 
); 
INSERT INTO EMPLOYEE (E_id, E_name, E_dept, E_salary, E_pno, E_city) 
VALUES  
(1, 'John Doe', 'Engineering', 60000.00, 101, 'New York'), 
(2, 'Jane Smith', 'HR', 50000.00, 102, 'Los Angeles'), 
(3, 'Mike Johnson', 'Marketing', 55000.00, 103, 'Chicago'); 
CREATE VIEW EmployeeView AS 
SELECT E_id, E_name, E_dept, E_salary 
FROM EMPLOYEE; 
CREATE TABLE EmployeeDetails ( 
E_id INT PRIMARY KEY, 
E_age INT, 
E_address VARCHAR(100), 
E_phone VARCHAR(15) 
); 
INSERT INTO EmployeeDetails (E_id, E_age, E_address, E_phone) 
VALUES 
(1, 30, '123 Main St, New York', '555-1234'), 
(2, 35, '456 Elm St, Los Angeles', '555-5678'), 
(3, 28, '789 Oak St, Chicago', '555-9012'); 
CREATE VIEW CombinedEmployee AS 
SELECT E.E_id, E.E_name, E.E_dept, E.E_salary, ED.E_age, ED.E_address, ED.E_phone 
FROM EMPLOYEE E 
JOIN EmployeeDetails ED ON E.E_id = ED.E_id; 
SELECT * FROM EmployeeView; 
SELECT * FROM CombinedEmployee; 