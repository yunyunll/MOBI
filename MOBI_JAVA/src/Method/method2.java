package Method;

public class method2 {
    public static void method2(String[] args) {
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

        steve.printInfo();
        steve.isOver20();

        amy.printInfo();
        amy.isOver20();


    }
}
