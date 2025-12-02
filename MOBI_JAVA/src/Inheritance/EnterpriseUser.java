package Inheritance;

public class EnterpriseUser extends User {
    public String company;
    private int temporaryValue;
    public EnterpriseUser(){
        // super(); 자동
        System.out.println("Enterprise User");
    }

    public EnterpriseUser(String name, String email, String password,String company){
        super(name, email, password);
        this.company = company;
    }

    public void printEnterpriseInfo(){
        super.printUserInfo();
        System.out.println(" - Company: " + this.company);
    }

    public  EnterpriseUser(int parentTemp, int myTemp){
        super.temporaryValue = parentTemp;
        this.temporaryValue = myTemp;
    }

    public void printTemporaryInfo(){
        System.out.println(" - Parent Value: " + super.temporaryValue);
        System.out.println(" - My Value: " + this.temporaryValue);
    }
    public void login(){
        System.out.println("Checking name email password company");
        System.out.println("Hello " + this.name);
    }
    public void enterPage(){
        System.out.println("Enter the " + this.company + " Company");
    }
}
