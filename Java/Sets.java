package Java;

import java.util.*;

/**
 * Set
 */
public class Sets {

    public static void main(String[] args) {
        // comparison: HashSet vs LinkedHashSet vs TreeSet
        List<String> animals = new ArrayList<>(Arrays.asList(new String[] {"Dog", "Cat", "Elephant", "Dog", "Lion", "Dog", "Cat", "Mouse", "Elephant"}));
        
        Set<String> hashSet = new HashSet<>(animals);
        Set<String> linkedHashSet = new LinkedHashSet<>(animals);
        Set<String> treeSet = new TreeSet<>(animals);

        System.out.println("Original Array: " + animals.toString());
        System.out.println("HashSet: " + hashSet.toString());
        System.out.println("LinkedHashSet: " + linkedHashSet.toString());
        System.out.println("TreeSet: " + treeSet.toString());
        
        System.out.println();
        // use cases other than removing duplicates
        // Set Intersection, Union, and Difference
        Set<Integer> setA = new HashSet<>(Arrays.asList(new Integer[] {0, 2, 4, 6, 8}));
        Set<Integer> setB = new HashSet<>(Arrays.asList(new Integer[] {0, 3, 6, 9}));
        System.out.println("Set A: " + setA.toString());
        System.out.println("Set B: " + setB.toString());

        // Intersection
        Set<Integer> intersection = new HashSet<>(setA);
        intersection.retainAll(setB);
        System.out.println("Intersection: " + intersection.toString());

        // Union
        Set<Integer> union = new HashSet<>(setA);
        union.addAll(setB);
        System.out.println("Union: " + union.toString());

        // Difference
        Set<Integer> difference = new HashSet<>(setA);
        difference.removeAll(setB);
        System.out.println("Difference: " + difference.toString());
    }

}