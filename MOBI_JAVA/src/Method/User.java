package Method;

// JAVA.User.java 선언
public class User {
    public String name;
    public String email;
    public String password;
    public int age;

    public void printInfo(){
        System.out.println("User Info\n" +
                "name : " + name +
                "\nemail : " + email +
                "\npassword : " + password +
                "\nage : " + age);
    }
    public void isOver20(){
        if(age <= 20) {
            System.out.println(name + " is under 20");
        }
        else if(age >20) {
            System.out.println(name + " is over 20");
        }
    }
    public boolean isUnder20(){
        return age <= 20;
    }
}
