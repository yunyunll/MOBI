package Set;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.Arrays;

public class User {
    protected String name;
    protected String email;
    protected String password;
    public ArrayList<String> viewHistory;


    public User(){

    }

    public User(String name, String email, String password){
        this.name = name;
        this.email = email;
        this.password = password;
        this.viewHistory = new ArrayList<>();
    }

    public void login(){
        System.out.println("Checking email and password");
        System.out.println("Hello " + this.name);
    }

    public void enterPage(){
        System.out.println("Enter the default Page");
    }

    public void viewCourse(String courseId){
        this.viewHistory.add(courseId);
        this.showViewHistoryInfo();

    }

    public void showViewHistoryInfo(){
        System.out.println(this.viewHistory);
        System.out.println("course view history count : " +  this.viewHistory.size());
        System.out.println();

    }

}




