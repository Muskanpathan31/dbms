
CREATE TABLE EmployeeDetails ( 
EmpId INT PRIMARY KEY, 
FullName VARCHAR(100), 
ManagerId INT, 
DateOfJoining DATE, 
City VARCHAR(50) 
); 
INSERT INTO EmployeeDetails (EmpId, FullName, ManagerId, DateOfJoining, City) 
VALUES 
(121, 'Snow John', 321, '2019-01-31', 'Toronto'), 
(321, 'White Walter', 986, '2020-01-30', 'California'), 
(421, 'Rana Kuldeep', 876, '2021-11-27', 'DelhiNew'); 
SELECT EmpId, FullName 
FROM EmployeeDetails 
WHERE ManagerId = '986'; 
SELECT FullName 
FROM EmployeeDetails 
WHERE FullName LIKE 'hn%'; 
SELECT REPLACE(FullName, ' ', '_') AS ModifiedFullName 
FROM EmployeeDetails; 