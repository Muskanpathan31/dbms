CREATE TABLE S_customer ( name VARCHAR(50), credit_rating INT, sales_rep_id INT); 
INSERT INTO S_customer VALUES('Arun', 7, 4231), ('Atharva', 6, 4231); 
SELECT name, credit_rating, sales_rep_id 
FROM S_customer 
WHERE (credit_rating > 5 AND sales_rep_id = 4232);