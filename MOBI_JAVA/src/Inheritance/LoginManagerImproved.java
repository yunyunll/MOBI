package Inheritance;

public class LoginManagerImproved {
    public void processLogin(User user){
        System.out.println("Processing something before Login");
        user.login();
        user.enterPage();
        System.out.println("Processing something after Login\n");
    }
}
