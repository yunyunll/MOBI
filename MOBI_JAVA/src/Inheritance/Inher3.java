package Inheritance;

public class Inher3 {
    public static void Inher3() {
        LoginManager loginManager = new LoginManager();

        User user = new User("green","green@gmail.com","Green123");
        user.login();
        System.out.println(" ------------ ");

        PaidUser luke = new PaidUser("luke","luke@gmail.com","Luke123","Gold");
        loginManager.processLogin(luke);
        System.out.println(" ------------ ");

        Administrator jin = new Administrator("jin","jin@gmail.com","Jin123","Good");
        loginManager.processLogin(jin);
        System.out.println(" ------------ ");

        EnterpriseUser amy = new EnterpriseUser("Amy","amy@gmail.com","Amy123","cola");
        loginManager.processLogin(amy);


    }
}
