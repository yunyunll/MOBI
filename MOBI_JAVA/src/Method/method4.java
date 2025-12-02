package Method;

public class method4 {
    public static void method4 (String[] args) {
        User2 steve = new User2("Steve","steve@gmail.com","qwe123",21);

        steve.printInfo();
        if(steve.isAdult()){
            System.out.println("can pay");
        }else{
            System.out.println("cannot pay");
        }

        User2 amy = new User2("amy@gmail.com","asd123");

        amy.printInfo();
        if(amy.isAdult()){
            System.out.println("can pay");
        }else{
            System.out.println("cannot pay");
        }

        System.out.println(amy.isAdult());
        System.out.println(amy.isAdult(18));

        User2 grace = new User2();

        grace.printInfo();
        if(grace.isAdult()){
            System.out.println("can pay");
        }else{
            System.out.println("cannot pay");
        }




    }
}
