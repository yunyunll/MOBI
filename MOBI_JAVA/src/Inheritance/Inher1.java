package Inheritance;

public class Inher1 {
    public static void Inher1() {
        // PaidUser luke = new PaidUser();
        UniversityUser loke = new UniversityUser("loke","loke@gmail.com","Loke123","loke");
        EnterpriseUser coke = new EnterpriseUser("coke","coke@gmail.com","Coke123","cola");
        EnterpriseUser vale = new EnterpriseUser(200,100);

//        luke.name = "Luke";
//        luke.email= "luke@gmail.com";
//        luke.password = "Luke123";
//        luke.membership = "Pro";

        //luke.login();
        System.out.println(" ------------ ");
        //luke.printUserInfo();
        System.out.println(" ------------ ");
        coke.printEnterpriseInfo();
        System.out.println(" ------------ ");
        vale.printTemporaryInfo();


    }
}
