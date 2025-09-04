SELECT (
    SELECT DISTINCT Salary
    FROM Employee
    ORDER BY Salary DESC
    OFFSET 1
    LIMIT 1
) AS SecondHighestSalary;