# Hello world in JavaScript

JavaScript was a language originally created by Brendan Eich in 1995 for use on the web. It is a high-level interpreted, single-threaded programming language that runs on a non-blocking event loop. JavaScript is a multi-paradigm language, supporting object-oriented, imperative, and functional programming styles, and it has dynamic typing and **prototype-based inheritance** (originally inspired by Self). The language follows the [ECMAScript](https://www.ecma-international.org/publications/standards/Ecma-262.htm) specification.

In 2009, Node.js was created, which allowed JavaScript to be used outside of the web. For the first time, developers could use one language for the entire stack.

JavaScript is extremely popular - the internet is powered by it. In addition, due to how easy it is, many beginners choose it as their first language. JavaScript also has a very large community, with many libraries and frameworks being created every second.

> "Any application that can be written in JavaScript, will eventually be written in JavaScript." - Atwood's Law

While it is popular, it is also criticized. It has a lot of flaws such as its type coercion system, which can lead to unexpected behavior, having both `null` and `undefined`, and having a lot of inconsistencies such as `Map` iteration:

```js
const map = new Map([
    ["a", 1],
    ["b", 2],
    ["c", 3]
]);
for (const [key, value] of map) {
    console.log(key, value);
}
// a 1
// b 2
// c 3
map.forEach((value, key) => {
    console.log(key, value);
});
// a 1
// b 2
// c 3
```

*Notice how the order of the keys and values are different in the `for...of` loop and the `forEach` loop. This is because `for...of` loops iterate over the keys, while `forEach` loops iterate over the values. Inconsistent behavior like this is one of the reasons why JavaScript is criticized. Generally, JavaScript has a lot of unpredictable behavior that can lead to runtime bugs.*

JavaScript is also criticized for overall being messy. There's both CommonJS and ES Modules, which are two different module systems. There's also the `var` keyword, which is function-scoped, and the `let` and `const` keywords, which are block-scoped. This means that you can't use `let` and `const` in the global scope, and you can't use `var` in a block scope, etc.

The slow advent of WebAssembly, a binary instruction format that can be targeted by multiple languages such as C, C++, Rust, and Go, could undermine JavaScript's dominance in the future. However, WebAssembly is still in its infancy, and it is not yet mature enough to replace JavaScript.

Fortunately, many of these issues are getting fixed through things like TypeScript, which is a superset of JavaScript that adds static typing and other features.

## Prerequisites

- A browser or [Node.js](https://nodejs.org/) - A JavaScript runtime built on Chrome's V8 JavaScript engine.

## How to run

1. Run `node index.js` to run the program on the terminal.
2. To run it on your browser, create an HTML file in the same folder with the following contents:

    ```html
    <!DOCTYPE html>
    <html>
        <head>
            <meta charset="utf-8" />
            <title>Hello world</title>
        </head>
        <body>
            <script src="index.js"></script>
        </body>
    </html>
    ```

    Then open the HTML file in your browser.
