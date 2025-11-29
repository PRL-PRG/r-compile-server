fun main() {
  () --> I { reg r1:V, reg r2:V, reg r3:V, reg r4:V, reg r5:V |
    r1 = blackBox(1);
    r2 = blackBox(2);
    r3 = blackBox(3.0);
    r4 = blackBox(4.0);
    r5 = blackBox(5);

    # Optimized
    g.1(r1, 1);
    # Baseline
    g.0(r2, 2.0);
    # Optimized -> baseline
    g.1(r3, 3);
    # Baseline
    g.0(r4, 4.0);
    # Optimized
    g.1(r5, 5);

    require(1);
    require("bar");
    require(2);
    require("foo");
    require(3.0);
    require("foo");
    require(4.0);
    require("foo");
    require(5);
    require("bar");

    return 49;
  }
}

fun g(n, a) {
  (reg n:V, reg a:V) --> I { reg r:V, var x:* |
    mkenv;
    provide(n);
    r = 14;
    check BB1() else BB2();
  BB1():
    r ?= 14;
    provide("foo");
    popenv;
    return 42;
  BB2():
    st x = r;
    deopt 5 [r, n];
  }
  # cleanup: (reg n:V, reg a:I) --> I { reg r1:V, var x:* |
  (reg n:V, reg a:I) --> I { reg r:I, reg r1:V, var x:* |
    provide(n);
    r1 = n;
    check BB1() else BB2();
  BB1():
    # cleanup: n ?: I;
    r = n ?: I;
    provide("bar");
    return 24;
  BB2():
    mkenv;
    deopt 5 [14, r1];
  }
}

# Asserts the last argument given to `provide`
fun require(x) {
  (reg x:*) --> V { ... }
}

fun provide(x) {
  (reg x:*) --> V { ... }
}

# Returns the argument as is, but marks the call as an optimization barrier
fun blackBox(x) {
  (reg x:V) --> V { ... }
}
