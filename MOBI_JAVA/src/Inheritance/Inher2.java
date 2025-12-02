package Inheritance;

public class Inher2 {
    public static void Inher2() {
        User green = new User("green","green@gmail.com","Green123");
        PaidUser luke = new PaidUser("luke","luke@gmail.com","Luke123","Gold");
        Administrator jin = new Administrator("jin","jin@gmail.com","Jin123","Good");
        EnterpriseUser amy = new EnterpriseUser("Amy","amy@gmail.com","Amy123","cola");


        green.login();

        System.out.println(" ------------ ");
        luke.login();

        System.out.println(" ------------ ");
        jin.login();

        System.out.println(" ------------ ");
        amy.login();


    }
}
