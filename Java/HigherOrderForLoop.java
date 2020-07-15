package Java;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

/**
 * HigherOrderForLoop map, filter, reduce
 * 
 * general syntax:
 * list.stream().higherOrder().andChaining().collect(Collectors.toList())
 * stream(): converts List to Stream .collect(Collectors.toList()): converts
 * Stream back to List.
 */
public class HigherOrderForLoop {

    public static void main(String[] args) {
        List<Integer> list = new ArrayList<Integer>();
        list.add(2);
        list.add(5);
        list.add(3);
        list.add(12);

        System.out.println("Original List: " + list.toString());

        // map
        List<Integer> mappedList = list.stream().map(value -> value * 2).collect(Collectors.toList());

        System.out.println("After mapping: " + mappedList.toString());

        // filter
        List<Integer> filteredList = list.stream().filter(value -> value > 3).collect(Collectors.toList());

        System.out.println("After filtering: " + filteredList.toString());

        // reduce
        int acc = list.stream().reduce(1, (a, b) -> a * b);

        System.out.println("Product: " + acc);

        // Chaining
        // map => [5, 8, 6, 15] (add 3)
        // filter => [8, 6] (divisible by 2)
        // count() => 2
        long chained = list.stream().map(value -> value + 3).filter(value -> value % 2 == 0).count();

        System.out.println("Chained Count: " + chained);
    }

}