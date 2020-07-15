package Java;

// Arrays is not required to use Java's array
// imported to use .toString() for printing out
import java.util.Arrays;

/**
 * Array static size: size needed at compile time "items" must be of the same
 * type Throws ArrayIndexOutOfBoundsException when trying to access beyond
 * initial size java.util.Arrays provides array methods
 */
public class Array {

    public static void main(String[] args) {
        // initialize size
        int arrA[] = new int[5];
        // Java init values:
        // boolean: false
        // int: 0
        // double: 0.0
        // string: null
        // object: null
        System.out.println("Java initialize values to be default (not random):");
        System.out.println(Arrays.toString(arrA));
        // implicit size
        int arrB[] = { 5, 2, 7, 4 };
        System.out.println("Implicitly sized:");
        System.out.println(Arrays.toString(arrB));
        System.out.println("Length: " + arrB.length);
        // **below will not compile**
        // you can initialize, but cannot use this variable until "fully" initialized
        // int arrC[];
        // System.out.println(Arrays.toString(arrC));
        // System.out.println("Length: " + arrC.length);

        // Java throws ArrayIndexOutOfBounds
        try {
            System.out.println(arrB[2]);
            System.out.println(arrB[4]);
        } catch (Exception e) {
            System.err.println("Index " + e.getMessage() + " is out of bounds");
        }

        // Arrays methods
        Arrays.sort(arrB);
        System.out.println("Sorted:");
        System.out.println(Arrays.toString(arrB));
        int index = Arrays.binarySearch(arrB, 5);
        System.out.println("Binary Search for 5 at index: " + index);
    }

}