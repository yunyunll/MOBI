package ArrayList;

public class Array1 {
    public static void Array1() {
        User grace = new User("grace","grace@gmail.com","grace123");
        grace.viewCourse("1111");
        grace.viewCourse("2222");
        grace.viewCourse("3333");

        grace.removeViewHistory("1111");
        grace.removeViewHistory("4444");

        grace.removeViewHistory(0);
        grace.clearViewHistory();


    }
}
