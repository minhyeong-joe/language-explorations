package Java;

import java.util.ArrayList;
import java.util.List;

/**
 * DynamicArray
 */
public class DynamicArray {

    public static void main(String[] args) {
        List<Integer> arr = new ArrayList<>();
        arr.add(0);
        arr.add(1);
        arr.add(2);
        System.out.println("Size: " + arr.size());
        System.out.println(arr.toString());
        System.out.println("Array has 1? " + arr.contains(1));
        List<Integer> arr2 = new ArrayList<>();
        arr2.add(1);
        arr2.add(2);
        System.out.println("Array has 1 AND 2? " + arr.containsAll(arr2));
        arr.removeIf(v -> v < 1);
        System.out.println(arr.toString());
    }

}