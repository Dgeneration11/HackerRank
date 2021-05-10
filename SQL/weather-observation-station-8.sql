select distinct city from station
where ((left(city, 1) IN ('a','e','i','o','u','A','E','I','O','U')) 
       AND 
       (right(city, 1) IN ('a','e','i','o','u','A','E','I','O','U')));