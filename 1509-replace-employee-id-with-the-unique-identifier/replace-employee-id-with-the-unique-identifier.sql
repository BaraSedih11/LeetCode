SELECT e2.unique_id, e1.name
FROM employees as e1
LEFT JOIN employeeUNI AS e2
USING (id);