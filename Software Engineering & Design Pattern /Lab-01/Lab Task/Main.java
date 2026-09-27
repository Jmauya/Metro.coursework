// Main.java

public class Main {
    public static void main(String[] args) {
        
        Student student1 = new Student(" Aisha ", 20, 'A');
         Student student2 = new Student(" Nisha ", 21, 'B');

        GraduateStudent gradStudent = new GraduateStudent("Saima", 24, 'A', "Artificial Intelligence");

        System.out.println(" Student Information");
        student1.displayInfo();
        student2.displayInfo();
        gradStudent.displayInfo();

        System.out.println("\n Updating Information ");
        
        student1.setGrade('A');
        student2.setAge(22);
        student2.setName(" Asha ");

       
        gradStudent.setResearchTopic(" Algorithms ");

        System.out.println("\n Updated Student Information ");
        
        System.out.println("Student 1 (Updated): ID=" + student1.getStudentId() + 
        ", Name=" + student1.getName() + 
        ", Age=" + student1.getAge() + 
        ", Grade=" + student1.getGrade());

        System.out.println("Student 2 (Updated): ID=" + student2.getStudentId() + 
        ", Name=" + student2.getName() + 
        ", Age=" + student2.getAge() + 
        ", Grade=" + student2.getGrade());

        System.out.println("Graduate Student (Updated): ID=" + gradStudent.getStudentId() + 
       ", Name=" + gradStudent.getName() + 
        ", Age=" + gradStudent.getAge() + 
          ", Grade=" + gradStudent.getGrade() + 
       ", Topic=" + gradStudent.getResearchTopic());
    }
}
