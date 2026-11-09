# Write your MySQL query statement below
SELECT name as Employee  from Employee e
where salary > (
    SELECT salary from employee m
    where m.id = e.managerId
)