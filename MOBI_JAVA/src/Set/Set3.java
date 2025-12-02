package Set;
import java.util.HashSet;

public class Set3 {
    public static void Set3() {
        HashSet<String> watchCourse = new HashSet<>();
        watchCourse.add("Web Service");
        watchCourse.add("Effective Java");
        watchCourse.add("Java Programming Basic");

        // watchCourse.clear();
        // System.out.println(watchCourse);

        boolean result = watchCourse.remove("Web Service");
        System.out.println(result);
        System.out.println(watchCourse);

        HashSet<String> removeCourse = new HashSet<>();
        removeCourse.add("Web Service");
        removeCourse.add("Effective Java");

        boolean containresult = watchCourse.retainAll(removeCourse); // 교집합
        System.out.println(containresult);
        System.out.println(watchCourse);


        boolean removedresult = watchCourse.removeAll(removeCourse); // 차집합
        System.out.println(removedresult);
        System.out.println(watchCourse);

    }
}
