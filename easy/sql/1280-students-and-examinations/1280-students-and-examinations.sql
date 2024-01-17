# Write your MySQL query statement below
SELECT s.student_id, s.student_name, sub.subject_name, COUNT(e.subject_name) AS attended_exams
FROM students s JOIN subjects sub LEFT JOIN examinations e 
ON sub.subject_name = e.subject_name AND s.student_id = e.student_id
GROUP BY s.student_id, sub.subject_name
ORDER BY s.student_id, sub.subject_name;
