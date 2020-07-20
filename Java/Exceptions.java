package Java;

/**
 * Exceptions
 */
public class Exceptions {

    // user-defined custom exception, must extends some Exception object
    public static class MyException extends Exception {
        /**
         *
         */
        private static final long serialVersionUID = 1L;

        public MyException(String msg) {
            super(msg);
        }
    }

    public static void main(String[] args) {
        // can't throw any type
        // try {
        //     throw 10;
        // } catch (int e) {
        //     System.out.println(e);
        // }
        // handling built-in exceptions
        try {
            System.out.println(4/0);
        } catch (ArithmeticException e) {
            System.out.println(e.getMessage());
        }
        System.out.println("Program still running");
        // throw exception object
        try {
            throw new Exception("Exception");
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
        // finally runs whether execption is thrown or not
        int arr[] = {0, 1, 2};
        try {
            System.out.println(arr[1]);
        } catch (IndexOutOfBoundsException e) {
            System.out.println(e.getMessage());
        } finally {
            System.out.println("FINALLY");
        }
        try {
            System.out.println(arr[3]);
        } catch (IndexOutOfBoundsException e) {
            System.out.println(e.getMessage());
        } finally {
            System.out.println("FINALLY");
        }
        // using user-defined Exception
        try {
            throw new MyException("My Exception");
        } catch (MyException e) {
            System.out.println(e.getMessage());
        }
        // catch all by using Exception (base class), must be caught last or it will catch all exceptions (think of filtering system from top to bottom)
        try {
            throw new ArithmeticException("Arithmetic Exception");
        } catch (IndexOutOfBoundsException e) {
            System.out.println("Caught with IndexOutOfBounds: " + e.getMessage());
        } catch (Exception e) {
            System.out.println("Caught with Exception: " + e.getMessage());
        }
    }

}