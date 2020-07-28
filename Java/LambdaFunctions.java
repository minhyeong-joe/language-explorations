package Java;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

/**
 * LambdaFunctions
 */
public class LambdaFunctions {

    interface Lambda {
        // any lambda with (int, int) will implement this abstract function
        int abstractOpertaion(int a, int b);
    }

    private int operate(int a, int b, Lambda op) {
        return op.abstractOpertaion(a, b);
    }

    public static void main(String[] args) {
        // body `x + y;` is equivalent to `{ return x + y; }`
        Lambda add = (int x, int y) -> x + y;
        LambdaFunctions lambda = new LambdaFunctions();
        System.out.println("8 + 2 = " + lambda.operate(8, 2, add));
        // anonymous callback for subtraction
        System.out.println("8 - 2 = " + lambda.operate(8, 2, (int x, int y) -> {
            return x - y;
        }));

        // callback common use case
        ArrayList<Integer> arr = new ArrayList<>(Arrays.asList(1, 2, 3, 4, 5));
        arr.forEach(n-> System.out.print(n + " "));
        System.out.println();
        // filter with callback predicate
        List<Integer> filteredList = arr.stream().filter(value -> {return value % 2 == 0;}).collect(Collectors.toList());
        filteredList.forEach(n -> System.out.print(n + " "));
        System.out.println();
        // accumulate with callback increment
        int product = arr.stream().reduce(1, (a, b) -> a*b);
        System.out.println("Product = " + product);
    }
    
}