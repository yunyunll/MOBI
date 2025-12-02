package ArrayList.Collection;

import java.util.ArrayList;

public class Collec3 {
    public static void Collec3() {
        ArrayList<User> engineers = new ArrayList<>();
        User steve = new User();
        User bill = new User();
        User larry = new User();

        engineers.add(steve);
        engineers.add(bill);
        engineers.add(larry);

        System.out.println(engineers);

    }
}

