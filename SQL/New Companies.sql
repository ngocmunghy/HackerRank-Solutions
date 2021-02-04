SELECT DISTINCT
       a.COMPANY_CODE
      ,b.FOUNDER
      ,COUNT(DISTINCT a.lead_manager_code)   AS lead_manager_ct
      ,COUNT(DISTINCT a.senior_manager_code) AS senior_manager_ct
      ,COUNT(DISTINCT a.manager_code)        AS manager_ct
      ,COUNT(DISTINCT a.employee_code)       AS employee_ct
       
  FROM Employee     AS a
  LEFT JOIN Company AS b ON a.COMPANY_CODE = b.COMPANY_CODE
  
 GROUP BY a.COMPANY_CODE, b.FOUNDER
 ORDER BY a.COMPANY_CODE ASC
