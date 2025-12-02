package Map;
import java.util.HashMap;

public class KeyValue1{
    public static void KeyValue1() {
        HashMap<String, String> steve = new HashMap<>();
        steve.put("email", "steve@codepresso.kr");
        HashMap<String, String> otherInfo = new HashMap<>();
        otherInfo.put("name", "null");
        otherInfo.put("password", "qwe123");

        steve.putAll(otherInfo);
        System.out.println(steve);
        System.out.println(steve.get("email"));

        System.out.println(steve.get("age"));
        System.out.println(steve.getOrDefault("age", "UnKnown"));

        System.out.println(steve.containsKey("age"));
        System.out.println(steve.containsKey("email"));

        System.out.println(steve.containsValue("qwe123"));
        System.out.println(steve.containsValue("asd123"));

        System.out.println(steve.values());
        System.out.println(steve.keySet());

        System.out.println(steve.size());




    }
}