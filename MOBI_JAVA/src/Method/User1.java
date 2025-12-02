package Method;

// JAVA.User.java 선언
public class User1 {
    private String name;
    private String email;
    private String password;
    private int age;

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
    public boolean isOver20(){
        return age >= 20;
    }
}
