# Write your MySQL query statement below
SELECT w1.id FROM weather AS w1, weather AS w2 WHERE w1.temperature > w2.temperature AND 
DATEDIFF(w1.recordDate, w2.recordDate) = 1;
