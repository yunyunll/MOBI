package Inheritance;

public class LoginManager {
    public void processLogin(PaidUser paidUser){
        System.out.println("Processing something before Login");
        paidUser.login();
        paidUser.enterPage();
        System.out.println("Processing something after Login\n");
    }

    public void processLogin(EnterpriseUser enterpriseUser){
        System.out.println("Processing something before Login");
        enterpriseUser.login();
        enterpriseUser.enterPage();
        System.out.println("Processing something after Login\n");
    }

    public void processLogin(Administrator administrator){
        System.out.println("Processing something before Login");
        administrator.login();
        administrator.enterPage();
        System.out.println("Processing something after Login\n");
    }

}
