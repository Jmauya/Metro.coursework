// GraduateStudent.java

class GraduateStudent extends Student {
   
    private String researchTopic;

    public GraduateStudent(String name, int age, char grade, String researchTopic) {
        super(name, age, grade); 
        this.researchTopic = researchTopic;
    }

  
    public String getResearchTopic() {
        return researchTopic;
    }

    public void setResearchTopic(String researchTopic) {
        this.researchTopic = researchTopic;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Research Topic: " + researchTopic);
    }
}
