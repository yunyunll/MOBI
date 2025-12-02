package Set;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Arrays;


// grace 와 steve 가 시청한 코스 중 중복되는 코스 추출

public class Set {
    public static void set1() {
        // NewTube 추천 코스 정보 생성
        HashSet<String> recommendCourse = new HashSet<>(
                Arrays.asList("1111","2222","3333","4444","5555","6666"));

        System.out.println(recommendCourse);

        // grace 가 시청한 코스 이력에서 고유한 코스 정보 추출

        User grace = new User("Grace","grace@codepresso.kr","qwe123");

        grace.viewCourse("1111");
        grace.viewCourse("2222");
        grace.viewCourse("3333");
        grace.viewCourse("1111");
        grace.viewCourse("3333");

        System.out.println(grace.viewHistory);

        // grace 가 시청한 코스 이력에서 고유한 코스 정보 추출

        HashSet<String> graceViewCourse = new HashSet<>(grace.viewHistory);
        System.out.println(graceViewCourse);

        // grace 가 시청하지 않은 추천 코스 코스 추출

        recommendCourse.removeAll(graceViewCourse); // 차집합
        System.out.println(recommendCourse);

        User steve = new User("Steve","steve@codepresso.kr","asd123");

        steve.viewCourse("2222");
        steve.viewCourse("4444");
        steve.viewCourse("6666");
        steve.viewCourse("1111");
        steve.viewCourse("2222");
        System.out.println(steve.viewHistory);

        // grace 와 steve 가 시청한 코스 중 중복되는 코스 추출

        HashSet<String> steveViewCourse = new HashSet<>(steve.viewHistory);
        System.out.println(steveViewCourse);

        steveViewCourse.retainAll(graceViewCourse);
        System.out.println(steveViewCourse);

        System.out.println("------------");
        steveViewCourse.removeAll(recommendCourse);
        System.out.println(steveViewCourse);



    }
}
