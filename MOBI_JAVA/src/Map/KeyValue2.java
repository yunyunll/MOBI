package Map;
import java.util.HashMap;

public class KeyValue2{
    public static void KeyValue2() {
        HashMap<String, String> steve = new HashMap<>();
        steve.put("email", "steve@codepresso.kr");
        steve.put("name", "Steve");
        steve.put("password", "qwe123");

        // steve.clear();
        String removed1 =  steve.remove("email");
        //System.out.println(steve.remove("name"));
        System.out.println(removed1);
        System.out.println(steve);

        Boolean removed2 =  steve.remove("name","Steve"); // pair 모두 일치
        //System.out.println(steve.remove("name"));
        System.out.println(removed2);
        System.out.println(steve);



    }
}