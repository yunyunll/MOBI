package Inheritance;

public class UniversityUser extends User {
    private String university;

    public UniversityUser(String name, String email, String password,String university){
        super(name, email, password);
        this.university = university;
    }

    public void login(){
        System.out.println("Checking name email password university");
        System.out.println("Hello " + this.name);
    }

    public void enterPage(){
        System.out.println("Enter the " + this.university + " University");
    }
}
