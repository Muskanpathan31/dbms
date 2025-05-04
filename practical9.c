CREATE TABLE customers ( 
id INT PRIMARY KEY, 
name VARCHAR(100), 
phone_number VARCHAR(15), 
city VARCHAR(50) 
); 
CREATE TABLE employees ( 
id INT PRIMARY KEY, 
name VARCHAR(100), 
city VARCHAR(50) 
); 
INSERT INTO customers (id, name, phone_number, city) 
VALUES 
(301, 'John Doe', '123-456-7890', 'Pune'), 
(302, 'Jane Smith', '987-654-3210', 'Mumbai'), 
(303, 'Alice Wonderland', '555-123-4567', 'Pune'), 
(304, 'Bob Builder', '777-888-9999', 'Pune'), 
(305, 'Charlie Chaplin', '444-555-6666', 'Pune'), 
(306, 'David Beckham', '111-222-3333', 'Delhi'); 
INSERT INTO employees (id, name, city) 
VALUES 
(101, 'Ashley Johnson', 'Pune'), 
(102, 'Michelle Sharma', 'Mumbai'), 
(103, 'Joshua Smith', 'Pune'), 
(104, 'Nisha Shah', 'Pune'), 
(105, 'Rajesh Patel', 'Mumbai'), 
(106, 'Rakesh Kumar', 'Pune'); 
SELECT * FROM customers 
WHERE id BETWEEN 303 AND 306; 
SELECT * FROM customers 
WHERE id > 300 AND city = 'Pune'; 
SELECT * FROM employees 
WHERE name LIKE '__sh%' AND city = 'Pune'; 