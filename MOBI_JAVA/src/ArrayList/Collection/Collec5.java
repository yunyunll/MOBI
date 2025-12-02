package ArrayList.Collection;
import java.util.ArrayList;

public class Collec5 {
    public static void Collec5(String[] args) {
        ArrayList<String> watchHistory = new ArrayList<>();
        watchHistory.add("Effective Java");
        watchHistory.add("Java Programming Basic!");
        watchHistory.add("Web Service");

        ArrayList<String> removedHistory = new ArrayList<>();
        removedHistory.add("Effective Java");
        removedHistory.add("Web Service");

        boolean resut = watchHistory.removeAll(removedHistory);
        System.out.println(resut);
        System.out.println(watchHistory);

        watchHistory.add("Effective Java");
        watchHistory.add("Web Service");
        System.out.println(watchHistory);

        String modifiedHistory = watchHistory.set(2,"SQL");
        System.out.println(modifiedHistory);
        System.out.println(watchHistory);






    }
}