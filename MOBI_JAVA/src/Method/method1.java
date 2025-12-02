package Method;

public class method1 {
    public static void method1(String[] args) {
        User steve = new User();
        steve.name = "Steve";
        steve.age = 21;
        steve.email = "steve@gmail.com";
        steve.password = "qwe123";

        User amy = new User();
        amy.name = "Amy";
        amy.age = 18;
        amy.email = "amy@gmail.com";
        amy.password = "asd123";

        System.out.println("User Info\n" +
                "name : " + steve.name +
                "\nemail : " + steve.email +
                "\npassword : " + steve.password +
                "\nage : " + steve.age);

        if(steve.age <= 20) {
            System.out.println(steve.name + " is under 20");
        }
        else if(steve.age >20) {
            System.out.println(steve.name + " is over 20");
        }

        System.out.println("\nUser Info\n" +
                "name : " + amy.name +
                "\nemail : " + amy.email +
                "\npassword : " + amy.password +
                "\nage : " + amy.age);

        if(amy.age <= 20) {
            System.out.println(amy.name + " is under 20");
        }
        else if(amy.age >20) {
            System.out.println(amy.name + " is over 20");
        }


    }
}
