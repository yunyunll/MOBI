package Inheritance;

public class Administrator extends User {
    public String adminLevel;
    public Administrator(String name, String email, String password,String adminLevel){
        super(name, email, password);
        this.adminLevel = adminLevel;
    }
    public void login(){
        System.out.println("Checking name email password AdminLevel");
        System.out.println("Hello " + this.name);
    }
    public void enterPage(){
        System.out.println("Enter the " + this.adminLevel + " AdminLV");
    }

}
