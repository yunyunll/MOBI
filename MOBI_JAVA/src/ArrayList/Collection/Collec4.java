package ArrayList.Collection;
import java.util.ArrayList;

public class Collec4 {
    public static void Collec4(String[] args) {
        ArrayList<String> watchHistory = new ArrayList<>();
        boolean result = watchHistory.add("Java Programming Basic!");

        ArrayList<String> newHistory = new ArrayList<>();
        newHistory.add("Effective Java");
        newHistory.add(0,"Web Service"); // 숫자를 붙이면 원하는 곳에 들어감

        // watchHistory.addAll(newHistory); // index 정보를 줄 수 있음
        watchHistory.addAll(0,newHistory); // collection 객체여야함
        System.out.println(watchHistory);

        // watchHistory.clear(); 전체 지우기
        //System.out.println("-----------");
        //watchHistory.remove("Effective Java");
        //System.out.println(watchHistory);
        // System.out.println("-----------");
        String removed = watchHistory.remove(1);
        System.out.println(removed);

        boolean reslut = watchHistory.remove("Web Service");
        System.out.println(reslut);




    }
}