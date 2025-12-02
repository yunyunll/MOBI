package Method;

// JAVA.User.java 선언
public class User2 {
    private String name;
    private String email;
    private String password;
    private int age;

    public User2() {
        this.name = "default";
        this.email = "default@gmail.com";
        this.password = "1234";
        this.age = 20;
    }
    public User2(String email, String password) {
        this.email = email;
        this.password = password;
    }
    public User2(String name, String email, String password, int age) {
        this.name = name;
        this.email = email;
        this.password = password;
        this.age = age;
    }

    public void setEmail(String email) {
        this.email = email;
    }
    public String getEmail() {
        return email;
    }
    public void setName(String name) {
        this.name = name;
    }
    public String getName() {
        return name;
    }
    public void setPassword(String password) {
        this.password = password;
    }
    public String getPassword() {
        return password;
    }
    public void setAge(int age) {
        if(age < 0){
            this.age = 0;
        }
        else if(age > 100){
            this.age = 100;
        }
        this.age = age;
    }
    public int getAge() {
        return age;
    }

    public void printInfo(){
        System.out.println("User Info\n" +
                "name : " + name +
                "\nemail : " + email +
                "\npassword : " + password +
                "\nage : " + age);
    }
    public boolean isAdult(){
        return age >= 20;
    }
    public boolean isAdult(int age){
        return this.age >= age;
    }
}
