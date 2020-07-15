package Java;

import java.util.Arrays;

/**
 * for-loops
 */
public class ForLoops {

    public static void main(String[] args) {
        char[] arr = { 'a', 'b', 'c', 'd' };
        System.out.println(Arrays.toString(arr));

        // counter for-loop
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();

        // range-based loop
        for (char c : arr) {
            System.out.print(c + " ");
        }
        System.out.println();
    }

}

// output:

// [a, b, c, d]
// a b c d
// a b c d