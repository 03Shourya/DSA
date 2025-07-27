# Write your MySQL query statement below
-- SELECT v.customer_id, COUNT(t.transaction_id) as count_no_trans
-- from Visits as v join Transactions as t on v.visit_id=t.visit_id;
SELECT DISTINCT v.customer_id, COUNT(*) as count_no_trans
FROM Visits v
LEFT JOIN Transactions t
ON v.visit_id = t.visit_id
WHERE t.transaction_id IS NULL
group by v.customer_id;