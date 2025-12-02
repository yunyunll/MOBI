package Method;

public class method3 {
    public static void method3 (String[] args) {
        User1 steve = new User1();
        steve.setName("Steve");
        steve.setAge(21);
        steve.setEmail("steve@gmail.com");
        steve.setPassword("qwe123");


        System.out.println(steve.getName());
        System.out.println(steve.getAge());
        System.out.println(steve.getEmail());
        System.out.println(steve.getPassword());

        if(steve.isOver20()){
            System.out.println("can pay");
        }else{
            System.out.println("cannot pay");
        }

        User1 amy = new User1();
        amy.setName("Amy");
        amy.setAge(18);
        amy.setEmail("amy@gmail.com");
        amy.setPassword("asd123");

        System.out.println(amy.getName());
        System.out.println(amy.getAge());
        System.out.println(amy.getEmail());
        System.out.println(amy.getPassword());
        if(amy.isOver20()){
            System.out.println("can pay");
        }else{
            System.out.println("cannot pay");
        }

    }
}
