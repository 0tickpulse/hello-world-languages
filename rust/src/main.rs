/// This is the main entry point of the program.
fn main() {
    let value = "Hello, World!";
    print(value);
}

fn print(value: &str) {
    println!("{value}");
}
