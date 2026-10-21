Design a small payroll model using an Employee base class and a Manager subclass.

Employee: private fields
                empId (int) Cannot be changed after creation,
                name (String),
                baseSalary (double);
          a constructor;
          getters for all three;
          a setter ONLY for baseSalary that rejects negative values;
          a method calculateSalary() that returns baseSalary.


Manager (extends Employee):
          an extra private field teamSize (int);
          a constructor that calls super(...) then sets teamSize;
          OVERRIDES calculateSalary() to return baseSalary + (teamSize * 500) as a team-management bonus.


Main: create one Employee and one Manager,
      print both salaries using calculateSalary(),
      and demonstrate that an invalid negative salary is rejected by the setter.
