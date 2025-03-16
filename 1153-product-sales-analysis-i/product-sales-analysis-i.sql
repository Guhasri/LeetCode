# Write your MySQL query statement below
select p.product_name, a.year,a.price from Sales a inner join Product p on p.product_id=a.product_id