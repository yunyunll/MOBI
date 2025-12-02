package Inheritance;

public class PaidUser extends User {
    public String membership;
    public PaidUser(String name, String email, String password,String membership){
        super(name, email, password);
        this.membership = membership;
    }

    public void setUserInfo(){
        name = "";
        email = "";
        password = "sdsd";
    }
    public void login(){
        System.out.println("Checking name email password membership");
        System.out.println("Hello " + this.name);
    }

    public void enterPage(){
        System.out.println("Enter the " + this.membership + " Page");
    }
}