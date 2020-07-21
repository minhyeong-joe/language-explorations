package Java;

import java.util.Stack;

/**
 * StackExample
 */
public class StackExample {

    public static void main(String[] args) {
        Stack<Integer> myStack = new Stack<>();
        myStack.push(1);
        myStack.push(2);
        myStack.push(3);
        System.out.println(myStack.peek());
        while (!myStack.isEmpty()) {
            System.out.println(myStack.pop());
        }
        try {
            System.out.println(myStack.peek());     // throws java.util.EmptyStackException
        } catch (Exception e) {
            e.printStackTrace();
        }
        System.out.println(myStack.size());
    }

}