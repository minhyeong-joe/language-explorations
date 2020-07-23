package Java;

import java.util.Map;
import java.util.TreeMap;
import java.util.HashMap;
import java.util.LinkedHashMap;

/**
 * MapExample
 */
public class MapExample {

    public static void main(String[] args) {
        // HashMap
        Map<String, Integer> hm = new HashMap<>();
        hm.put("Hello", 1);
        hm.put("World", 2);
        hm.put("Java", 3);
        // iterate
        for (Map.Entry<String, Integer> pair: hm.entrySet()) {
            System.out.println(pair.getKey() + ": " + pair.getValue());
        }
        System.out.println();
        // access
        System.out.println("Value of Key Hello: " + hm.get("Hello"));
        System.out.println();
        // remove
        hm.remove("Hello");
        System.out.println("Value of Key Hello: " + hm.get("Hello"));
        System.out.println();
        // LinkedHashMap
        Map<String, Integer> lhm = new LinkedHashMap<>();
        lhm.put("Hello", 1);
        lhm.put("World", 2);
        lhm.put("Java", 3);
        // iterate
        for (Map.Entry<String, Integer> pair: lhm.entrySet()) {
            System.out.println(pair.getKey() + ": " + pair.getValue());
        }
        System.out.println();
        // TreeMap
        Map<String, Integer> tm = new TreeMap<>();
        tm.put("Hello", 1);
        tm.put("World", 2);
        tm.put("Java", 3);
        // iterate
        for (Map.Entry<String, Integer> pair: tm.entrySet()) {
            System.out.println(pair.getKey() + ": " + pair.getValue());
        }
    }

}