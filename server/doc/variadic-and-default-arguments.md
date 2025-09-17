# Variadic and default arguments

**Terminology:** `…` for elided text, `...` for literal ellipsis.

**Background:** every R function has a static list of parameter names and defaults (`FORMALS`). When a function is called from GNU-R, arguments are assigned to parameters via the "argument matching" algorithm [[R manual](https://cran.r-project.org/doc/manuals/r-release/R-lang.html#Argument-matching)]. Unassigned parameters are assigned their default or "missing"; if there are unassigned arguments, the function is not called and an error is raised.

**Idea:** If we've statically resolved a function, we can statically run the argument matching algorithm, because it only depends on argument names and count, *unless* one of the arguments is `...`.

- Add a new type, `dots`, and a new expression, `dots[…]`

- Add "parameter definitions" (language-agnostic `FORMALS`) to function definitions in FIŘ

  - Parameter definitions may be: `x` (no default), `x = { code }` (has default), or `...` (the dots parameter).
  - Every function's baseline version must have exactly one parameter for each parameter definition, and the parameter's type must be `dots` if it's corresponding definition is `...`, otherwise `*`
- When resolving a dynamic call:
  - If none of the arguments are `...`, run the argument matching algorithm to determine which argument indices are assigned to which parameters, which parameters have missing/default values, which argument indices are part of the dots parameter (if the callee has one), and whether there are extra arguments (if the callee has no dots parameter)
    - If there are extra arguments and no parameters, replace the entire call with a call to `fail` that gives the same message as GNU-R (`"Error in …, unused argument(s) (…)"`)
    - Otherwise, if there are missing/default parameters, lazily create a version in the callee that computes them and calls the baseline version
    - If the callee has a dots parameter, insert a statement `r = dots[…]` before the call and pass `r` to the call in the dots parameter's index
    - Replace the call with a static call to the version in the callee that has the exact parameters corresponding to the provided arguments, with the arguments in the correct indices according to the argument matching algorithm
  - If any of the arguments are `...`, don't convert into a static call. This prevents the baseline from being optimized, but we'll eventually create a specialized version of the caller that doesn't have a dots parameter, in which the argument isn't `...` so the call can be converted.
    - EDIT: alternatively, covert into a dynamically-dispatching call without a signature. Unlike a dynamically-dispatching call with a signature or a static call, this type of call runs the argument-matching algorithm at runtime. TBD whether we'll implement this.

## Example: call a function that has a dots parameter

R function

```R
f <- function() {
  cat(sep = "", "hello", append = TRUE, foo = "world")
}
```

Compile to FIŘ, unoptimized

```fir
fun f() {
  () -+> V { reg r0:cls, reg r1:V |
    r0 = ldf cat;  # ldf = lookup function
    r1 = dyn r0[sep, , append, foo]("", "hello", TRUE, "world");
    # dyn r0 = GNU-R call the closure in r0
    # the names of each argument are provided in [...]
    return r1;
  }
}
```

**Optimization goal:** convert `dyn r0[…](…)` into `cat(…)`. What is the signature of `cat` and what arguments do we provide?

---

GNU-R signature of `cat`, defined by its `FORMALS`

```R
cat(..., file = "", sep = " ", fill = FALSE, labels = NULL, append = FALSE)
```

Definition of `cat` in FIŘ

```fir
fun cat(
  # These are cat's parameter definitions
  ...,
  file = { | return "" },
  sep = { | return " "; },
  fill = { | return FALSE; },
  labels = { | return NULL; },
  append = { | return FALSE; }
) {
  (reg ddd:dots, reg file:*, reg sep:*, reg fill:*, reg labels:*, reg append:*) -+> V { ... }
}
```

---

Run the argument matching algorithm with `cat`'s parameters (`[…, file, sep, fill, labels, append]`) and the argument names and count provided above (`[sep, , append, foo]`)

```
... = (#2, foo = #4)
file = default
sep = #1
fill = default
labels = default
append = #3
```

Lazily create a version for `cat` which computes default arguments and calls the baseline version (lazy to prevent exponential blowup, since we only add a version if there's a call that uses it)

```fir
fun cat(
  ...,
  file = { | return "" },
  sep = { | return " "; },
  fill = { | return FALSE; },
  labels = { | return NULL; },
  append = { | return FALSE; }
) {
  …
  (reg ddd:dots, reg sep:*, reg append:*) -+> V { r0:V |
    r0 = cat.0(ddd, "", sep, FALSE, NULL, append);
    return r0;
  }
}
```

Optimize `f` by statically resolving `cat` (assume speculation always succeeds)

```fir
fun f() {
  () -+> V { reg r0:dots, reg r1:V |
    r0 = dots["hello", foo = "world"];  # t[…] creates a list or vector of type t
    # Old: r1 = dyn r0[sep, , append, foo]("", "hello", TRUE, "world");
    r1 = cat.1(r0, "", TRUE);
    return r1;
  }
}
```

## Example: call a function with a dots argument

R functions

```R
h <- function(a, b) { b }
i <- function(...) { h(...) }
```

Compile to FIŘ, unoptimized

```fir
fun h(a, b) {
  (reg a:*, reg b:*) -+> V { reg r0:V |
    r0 = force b;
    return r0;
  }
}
fun i(...) {
  (reg ddd:dots) -+> V { reg r0:cls; reg r1:V |
    r0 = ldf h;
    r1 = dyn r0[`...`](ddd);
    # The argument name `...` indicates that ... is in that index
    return r1;
  }
}
```

Since we pass `...`, we can't statically resolve the call in `i`'s baseline version/

However, we'll eventually create a specialized version of `i` if we repeatedly call `i(b = <integer>)`

```fir
fun i(...) {
  …
  (reg b:I) -+> V { reg r0:cls; reg r1:V |
    r0 = ldf h;
    r1 = dyn r0[b](b);
    return r1;
  }
}
```

In this version we've replaced `...` with static arguments, so statically run argument matching

```
a = default
b = #1
```

Lazily crate a version for `h`

```fir
fun h(a, b) {
  …
  (reg b:*) -+> V { reg r0:V |
    r0 = h.0(<missing>, b);
    return r0;
  }
}
```

Optimize `i.1` by statically resolving `h` (assume speculation always succeeds)

```fir
fun i(...) {
  …
  (reg b:I) -+> V { reg r1:V |
    r1 = h.1(b);
    return r1;
  }
}
```

## More details

Syntax changes

```bnf
fun  ::= fun f(pdef*) { abs+ }   # add "parameter definitions" (pdef*)
pdef ::= x | x = { code } | ...
t  ::= … | dots    # add dots type
e  ::= … | t[ve*]  # support dots and different types of vectors
ve ::= a | x = a   # `x = a` in a vector constructor is forbidden
# subscript syntax is unchanged, but now works on dots (for `..n`)
```
