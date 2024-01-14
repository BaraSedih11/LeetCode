# Write your MySQL query statement below
SELECT employeeUNI.unique_id as unique_id, employees.name as name FROM employees left join employeeUNI on employees.id = employeeUNI.id;