# Write your MySQL query statement below
-- SELECT DISTINCT salary as SecondHighestSalary
-- FROM employee
-- ORDER BY salary DESC
-- LIMIT 1 OFFSET 1;
SELECT MAX(salary) as SecondHighestSalary
FROM employee
WHERE salary < (
    SELECT MAX(salary)
    FROM employee
);