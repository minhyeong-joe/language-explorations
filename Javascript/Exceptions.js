// any datatypes
try {
    throw "Exception Occurred!";
} catch (err) {
    console.error(err);
}

try {
    throw new Error("Generic Error");
} catch (err) {
    console.error(err.toString());
} 

// user-defined Exception ()
class MyException extends Error {
    constructor(msg) {
        super();
        // Maintains proper stack trace for where our error was thrown (only available on V8)
        if (Error.captureStackTrace) {
            Error.captureStackTrace(this, MyException);
        }
        this.name = "MyException";
        this.message = msg;
        this.code = 405;
    }
}

try {
    throw new MyException("My Exception");
} catch (err) {
    console.error(`${err.name} (${err.code}): ${err.message}`);
} finally {
    console.log("FINALLY");
}

// handling Exception types
try {
    throw new TypeError("Type does not match");
} catch (err) {
    if (err instanceof RangeError) {
        console.error("RangeError:", err.message);
    } else if (err instanceof EvalError) {
        console.error("EvalError:", err.message);
    } else if (err instanceof TypeError) {
        console.error("TypeError:", err.message);
    } else {
        // catch all
        console.error("Other Errors:", err.message);
    }
}

console.log("Program is still running");