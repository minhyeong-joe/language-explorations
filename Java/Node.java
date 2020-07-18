package Java;

// generic type class
public class Node<T> {
    private T data;
    Node(T data) {
        this.data = data;
    }
    public T data() {
        return this.data;
    }
    public void data(T data) {
        this.data = data;
    }
}