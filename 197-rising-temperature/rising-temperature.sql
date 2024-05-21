SELECT DISTINCT
    CASE 
        WHEN w2.recordDate - w1.recordDate = 1 AND w2.temperature > w1.temperature THEN w2.id
        WHEN w1.recordDate - w2.recordDate = 1 AND w1.temperature > w2.temperature THEN w1.id
    END AS Id
FROM weather AS w1
JOIN weather AS w2
ON w1.id + 1 = w2.id AND ( w1.recordDate - w2.recordDate = 1 AND w1.temperature > w2.temperature )
OR ( w2.recordDate - w1.recordDate = 1 AND w2.temperature > w1.temperature );
