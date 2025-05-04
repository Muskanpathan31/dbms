CREATE TABLE IF NOT EXISTS age_difference_log ( 
student_id INT, 
old_age INT, 
new_age INT, 
age_difference INT, 
change_date TIMESTAMP DEFAULT CURRENT_TIMESTAMP 
); 
DELIMITER // 
CREATE TRIGGER student_age_difference 
BEFORE UPDATE ON students 
FOR EACH ROW 
BEGIN 
DECLARE prev_age INT; 
DECLARE age_difference INT; 
SELECT age INTO prev_age FROM students WHERE student_id = OLD.student_id; 
SET age_difference = NEW.age - prev_age; 
INSERT INTO age_difference_log (student_id, old_age, new_age, age_difference) 
VALUES (OLD.student_id, prev_age, NEW.age, age_difference); 
END // 
DELIMITER ; 
select * from age_difference_log;