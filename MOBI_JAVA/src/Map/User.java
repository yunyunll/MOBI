package Map;

// 1. 순차적으로 저장
// 2. 순차적 데이터는 중복
// 3. 한 건의 데이터가 여러 개의 속성정보 저장
// - id = "1111"
// - name =
// - level =
// - runtime =
//

import java.util.ArrayList;
import java.util.HashMap;

public class User {
    protected String name;
    protected String email;
    protected String password;
    private HashMap<String,String> validCourseDetail;
    private ArrayList<HashMap> viewHistoryDetail;


    public User(){

    }

    public User(String name, String email, String password){
        this.name = name;
        this.email = email;
        this.password = password;
        this.validCourseDetail = new HashMap<>();
        validCourseDetail.put("id",null);
        validCourseDetail.put("name",null);
        validCourseDetail.put("level",null);
        validCourseDetail.put("runtime",null);
        this.viewHistoryDetail = new ArrayList<>();

    }

    public void login(){
        System.out.println("Checking email and password");
        System.out.println("Hello " + this.name);
    }

    public void enterPage(){
        System.out.println("Enter the default Page");
    }

    public void viewCourse(HashMap<String,String> courseDetail){
        this.viewHistoryDetail.add(courseDetail);
        this.showViewHistoryInfo();
    }

    public void showViewHistoryInfo(){
        System.out.println(this.viewHistoryDetail);
        System.out.println("course view count : " + this.viewHistoryDetail.size());
        System.out.println();
    }

    public void checkValidCourse(HashMap<String,String> courseDetail){
        this.checkCourseKey(courseDetail);
        this.checkCourseValue(courseDetail);
    }

    public void checkCourseKey(HashMap<String,String> courseDetail){
        ArrayList<String> courseKeys = new ArrayList<>(courseDetail.keySet());
        ArrayList<String> vaildCourseKeys = new ArrayList<>(this.validCourseDetail.keySet());

        boolean isValid = courseKeys.equals(vaildCourseKeys);
        if(!isValid){
            System.out.println("entered keys : " + courseKeys);
            System.out.println("vaild keys : " + vaildCourseKeys);
        }
    }


    public void checkCourseValue(HashMap<String,String> courseDetail){
        ArrayList<String> courseKeys = new ArrayList<>(courseDetail.keySet());
        for(String key :courseKeys){
            if(courseDetail.get(key) == null){
                System.out.println("'" + key + "'" + " key is null");
            }
        }

    }


}



