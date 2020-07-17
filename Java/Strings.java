package Java;

/**
 * Strings
 */
public class Strings {

    public static void main(String[] args) {
        String someStr = "Hello World";
        String ptr = someStr;
        System.out.println(someStr);
        // concatenation actually creates new string.
        someStr += "!";
        System.out.println("changed string: " + someStr);
        System.out.println("ptr string: " + ptr);
        // below index accessor can't be used on left hand side for assignment
        // someStr.charAt(1) = "a";
        ptr = someStr;
        someStr = "Mutated??";
        System.out.println("changed string: " + someStr);
        System.out.println("ptr string: " + ptr);

        // "create" a new string
        String newString = "Hello World!";
        System.out.println("ptr == newString? " + (ptr == newString));
        System.out.println("ptr.equals(newString)? " + ptr.equals(newString));

    }
    
}