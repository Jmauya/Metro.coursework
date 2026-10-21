import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int empID = sc.nextInt();
        sc.nextLine();
        String name = sc.nextLine();
        double baseSalary = sc.nextDouble();
        Employee emp = new Employee(empID,name,baseSalary);
      
        //emp.baseSalary = 394832;
        empID = sc.nextInt();
        name = sc.next();
        baseSalary = sc.nextDouble();

        int teamSize = sc.nextInt();
        Manager mgr = new Manager(empID,name,baseSalary,teamSize);

        System.out.println(emp.getName() + "'s salary: " + emp.calculateSalary());
        System.out.println(mgr.getName() + "'s salary: " + mgr.calculateSalary());
        double baseSalary1 = sc.nextDouble();
        emp.setBaseSalary(baseSalary1);
    }
}
