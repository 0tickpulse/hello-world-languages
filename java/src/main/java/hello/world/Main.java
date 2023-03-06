package hello.world;

/**
 * Java is primarily object oriented, so everything has to be inside a class,
 * even the main method; there aren't any top level statements unlike C#.
 */
public class Main {
    // The main method is the entry point of the program.
    // public means that it can be accessed from anywhere.
    // static means that it can be accessed without creating an instance of the class.
    // void means that it doesn't return anything.
    // String[] args is the command line arguments.
    public static void main(String[] args) {
        String value = "Hello, World!";
        System.out.println(value);
    }
}
