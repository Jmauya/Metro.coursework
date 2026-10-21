public class Manager extends Employee{
    private int teamSize;
    Manager(int empId, String name, double basesalry, int teamSize){
        super(empId,name,basesalry);
        this.teamSize = teamSize;
    }

    @Override
    public double calculateSalary() {
        return super.getBaseSalary() + (teamSize * 500);
    }
}
