package Map;
import java.util.HashMap;

public class KeyValue{
    public static void KeyValue() {
        HashMap<String,String> steve = new HashMap<>();
        System.out.println(steve);
        steve.put("age","23");
        steve.put("password","qwe123");
        steve.put("email","Unknown");

        String modifiedValue = steve.put("email","steve@codepresso.kr");
        System.out.println(modifiedValue);
        System.out.println(steve);


        HashMap<String,User> grace = new HashMap<>();
        String userID = "1111";
        User userInfo = new User("grace","grace@codepresso.kr","grace123");
        grace.put(userID,userInfo);

        System.out.println(grace);



    }
}
