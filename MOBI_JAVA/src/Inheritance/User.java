package Inheritance;

public class User {
    protected String name;
    protected String email;
    protected String password;
    protected int temporaryValue;

    public void login(){
        System.out.println("Checking name email password");
        System.out.println("Hello " + this.name);
        System.out.println("Login Succeed");
    }

    public User(String name, String email, String password){
        System.out.println("3 Init User");
        this.name = name;
        this.email = email;
        this.password = password;
    }

    public void printUserInfo(){
        System.out.println(" - Name: " + this.name);
        System.out.println(" - Email: " + this.email);
        System.out.println(" - Passwoerd: " + this.password);
    }
    public User(){
        System.out.println("User");
    }

    public void enterPage(){
        System.out.println("Enter the default Page");
    }

}



