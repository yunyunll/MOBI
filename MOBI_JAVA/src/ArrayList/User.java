package ArrayList;
import java.util.ArrayList;
public class User {
    protected String name;
    protected String email;
    protected String password;
    private ArrayList<String> viewHistory;

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
        viewHistory.add(courseId);
        this.showviewHistroyInfo();
    }

    public void showviewHistroyInfo(){
        System.out.println(this.viewHistory);
        System.out.println("view History count : " + this.viewHistory.size());
        System.out.println();
    }

    public void removeViewHistory(String courseId){
        boolean result = this.viewHistory.remove(courseId);
        if(result){
            System.out.println(courseId + " removed successfully ");
        }
        else{
            System.out.println(courseId + " is not in history ");
        }
        this.showviewHistroyInfo();
    }

    public void removeViewHistory(int viewIndex){
        String removedCourseId = this.viewHistory.remove(viewIndex);
        System.out.println(removedCourseId + " removed successfully ");
        this.showviewHistroyInfo();
    }

    public void clearViewHistory(){
        this.viewHistory.clear();
        // this.viewHistory = new ArrayList<>();
        this.showviewHistroyInfo();
    }


}



