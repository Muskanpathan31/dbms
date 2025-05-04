CREATE TABLE student ( 
student_id INT PRIMARY KEY, 
student_name VARCHAR(100), 
math_marks INT, 
attendance INT, 
dbms_marks INT 
); 
INSERT INTO student (student_id, student_name, math_marks, attendance, dbms_marks) 
VALUES 
(1, 'John Doe', 95, 90, 85), 
(2, 'Jane Smith', 85, 92, 88), 
(3, 'Mike Johnson', 90, 85, 90), 
(4, 'Emily Davis', 88, 95, 92), 
(5, 'Chris Brown', 92, 80, 87); 
SELECT * 
FROM student 
WHERE math_marks = (SELECT MAX(math_marks) FROM student); 
SELECT * 
FROM student 
WHERE attendance = (SELECT MIN(attendance) FROM student); 
SELECT COUNT(*) AS total_students 
FROM student; 
SELECT AVG(dbms_marks) AS avg_dbms_marks 
FROM student; 