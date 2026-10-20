public class Employee {
    private final int empId;
    private String name;
    private double baseSalary;

    public Employee(int empId,  double baseSalary) {
        this.empId = empId;
        //this.name = name;
        setBaseSalary(baseSalary);
    }
    public Employee(int empId,String name, double baseSalary) {
        this.empId = empId;
        this.name = name;
        setBaseSalary(baseSalary);
    }

    public int getEmpId() { return empId; }
    public String getName() { return name; }
    public double getBaseSalary() { return baseSalary; }

    public void setBaseSalary(double baseSalary) {
        if (baseSalary < 0) {
            System.out.println("salary can't be negative.");
            return;
        }
        this.baseSalary = baseSalary;
    }

    public double calculateSalary() {
        return baseSalary;
    }
}
