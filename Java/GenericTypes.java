package Java;
// generic type class: Java/Node.java

public class GenericTypes {

    public static void main(String[] args) {
        // user-defined generic class with different datatypes
        Node<Integer> intNode = new Node<>(3);
        System.out.println(intNode.data());
        Node<Boolean> boolNode = new Node<>(true);
        System.out.println(boolNode.data());
        // generic type function
        double a = 2.4;
        double b = 2.39;
        System.out.println(findSmaller(a, b));
        String strA = "abc";
        String strB = "cde";
        System.out.println(findSmaller(strA, strB));
    }

    // This will not compile, because type T does not have "<=" operator
    // public static <T> T findSmaller(T a, T b) {
    //     if (a <= b) {
    //         return a;
    //     } 
    //     return b;
    // } 
    
    // This compiles, using Comparable's compareTo method
    public static <T extends Comparable<T>> T findSmaller(T a, T b) {
        if (a.compareTo(b) <= 0) {
            return a;
        } 
        return b;
    }    
    
}