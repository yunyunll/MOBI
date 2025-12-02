package ArrayList.Collection;
import java.util.ArrayList;
import java.util.Arrays;

public class Collec6 {
    public static void Collec6(String[] args) {
        String[] data = {"steve" ,"bill","larry","coke"};
        ArrayList<String> engineers = new ArrayList<>(Arrays.asList(data));
        ArrayList<String> engineer = new ArrayList<>(Arrays.asList("steve" ,"bill","larry"));

        System.out.println(engineers);
        System.out.println(engineer);







    }
}