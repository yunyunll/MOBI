package Map;
import java.util.ArrayList;
import java.util.HashMap;


public class Map1 {
    public static void Map1() {

        User grace = new User("grace","grace@codepresso.kr","grace123");
        HashMap<String, String> courseInfo = new HashMap<>();
        courseInfo.put("id","1111");
        courseInfo.put("name","Java Programming");
        courseInfo.put("level","Introduction");
        courseInfo.put("runtime","03:00:00");

        grace.viewCourse(courseInfo);

        courseInfo = new HashMap<>();
        courseInfo.put("id","2222");
        courseInfo.put("name","Web Services");
        courseInfo.put("level",null);
        courseInfo.put("runtime","02:00:00");

        grace.checkValidCourse(courseInfo);
        courseInfo.put("level","basic");
        grace.viewCourse(courseInfo);

        courseInfo = new HashMap<>();
        courseInfo.put("id","3333");
        courseInfo.put("name","SQL");
        courseInfo.put("level","Basic");
        courseInfo.put("runtime","04:00:00");

        courseInfo.put("rating","04:00:00");
        grace.checkCourseKey(courseInfo);
        grace.viewCourse(courseInfo);

        courseInfo.remove("rating");
        grace.checkCourseKey(courseInfo);
        grace.viewCourse(courseInfo);


    }
}
