package ArrayList.Collection;
import java.util.ArrayList;

public class Collec2 {
    public static void Collec2(String[] args) {
        ArrayList<String> watchHistory = new ArrayList<>();
        boolean result = watchHistory.add("Java Programming Basic!");

        ArrayList<String> newHistory = new ArrayList<>();
        newHistory.add("Effective Java");
        newHistory.add(0,"Web Service"); // 숫자를 붙이면 원하는 곳에 들어감

        watchHistory.addAll(newHistory); // index 정보를 줄 수 있음
        watchHistory.addAll(0,newHistory); // collection 객체여야함
        System.out.println(watchHistory);

        System.out.println(watchHistory.get(4));
        System.out.println(watchHistory.indexOf("Java Programming Basic!"));
        System.out.println(watchHistory.contains("Java Programming Basic!"));
        System.out.println(watchHistory.contains("Programming Basic!"));
        System.out.println(watchHistory.size());

        System.out.println(watchHistory);


    }
}
