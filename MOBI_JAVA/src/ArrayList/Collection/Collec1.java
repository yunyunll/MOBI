package ArrayList.Collection;

public class Collec1 {
    public static void Collec1() {
        MyGeneric<Integer> myIntGen = new MyGeneric<>();
        myIntGen.setMember(1);
        int addResult1 = 1 + myIntGen.getMember();
        System.out.println(myIntGen.getMember());
        System.out.println(addResult1);

        MyGeneric<String> myStrGen = new MyGeneric<>();
        myStrGen.setMember("Hello");
        System.out.println(myStrGen.getMember());

        NonGeneric myNonGen1 = new NonGeneric();
        myNonGen1.setMember(1);
        int addResult2 = 1 + (int)myNonGen1.getMember();
        System.out.println(myNonGen1.getMember());
        System.out.println(addResult2);

        NonGeneric myNonGen2 = new NonGeneric();
        myNonGen2.setMember("One");
        System.out.println(myNonGen2.getMember());
    }
}
