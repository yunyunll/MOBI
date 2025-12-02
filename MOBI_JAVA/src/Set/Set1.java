package Set;
import  java.util.HashSet;

public class Set1 {
    public static void Set1(String[] args) {
        HashSet<String> watchCourse = new HashSet<>();

        watchCourse.add("Web Service");
        watchCourse.add("Effective Java");
        watchCourse.add("Java Programming Basic");

        boolean dupResult = watchCourse.add("Java Programming Basic");

        System.out.println(dupResult);
        System.out.println(watchCourse);

        HashSet<String> newCourse = new HashSet<>();
        newCourse.add("Web Service");
        newCourse.add("Funny Java");
        newCourse.add("Java Programming Super");

        boolean result = watchCourse.addAll(newCourse); // 합집합

        System.out.println(result);
        System.out.println(watchCourse);







    }
}
