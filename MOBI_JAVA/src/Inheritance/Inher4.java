package Inheritance;

public class Inher4 {
    public static void Inher4() {
        LoginManagerImproved loginManager = new LoginManagerImproved();

        User user = new User("green","green@gmail.com","Green123");
        loginManager.processLogin(user);
        System.out.println(" ------------ ");

        User luke = new PaidUser("luke","luke@gmail.com","Luke123","Gold");
        loginManager.processLogin(luke);
        System.out.println(" ------------ ");

        User jin = new Administrator("jin","jin@gmail.com","Jin123","Good");
        loginManager.processLogin(jin);
        System.out.println(" ------------ ");

        User amy = new EnterpriseUser("Amy","amy@gmail.com","Amy123","cola");
        loginManager.processLogin(amy);

        User hole = new UniversityUser("Hole","hole@gmail.com","Hole123","seoul");
        loginManager.processLogin(hole);

    }
}
