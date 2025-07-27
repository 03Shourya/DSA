# Write your MySQL query statement below
SELECT e.unique_id, o.name
FROM Employees as o left join EmployeeUNI as e on o.id=e.id;