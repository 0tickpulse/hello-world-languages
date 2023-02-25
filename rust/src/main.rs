fn main() {
    let value = "Hello, World!".to_string();
    print(value);
    // due to the borrow-checker, you can no longer use `value` here

    let value2 = "Hello, World!".to_string();
    do_something(&value2);
    // in print2, you pass a reference to value2 instead of the value itself
    // this means that you can still use `value2` here
}

fn print(value: String) {
    println!("{value}");
}

fn do_something(value: &String) {
}
