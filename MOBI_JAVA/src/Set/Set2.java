package Set;

import java.util.HashSet;

public class Set2 {
    public static void Set2() {
        HashSet<String> watchCourse = new HashSet<>();
        watchCourse.add("Web Service");
        watchCourse.add("Effective Java");

        System.out.println(watchCourse.contains("Web Service"));
        System.out.println(watchCourse.contains("Effective Python"));

        HashSet<String> sameCourse = new HashSet<>();
        sameCourse.add("Web Service");
        sameCourse.add("Effective Java");

        System.out.println(watchCourse.hashCode());
        System.out.println(sameCourse.hashCode());

        HashSet<String> newCourse = new HashSet<>();
        newCourse.add("Web Service");
        newCourse.add("Java Programming Basic");

        System.out.println(watchCourse.hashCode());
        System.out.println(newCourse.hashCode());

        System.out.println(watchCourse.size());
        System.out.println(newCourse.size());
        System.out.println(sameCourse.size());




    }
}
