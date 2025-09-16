fun main() {
  () --> I { |
    # Optimized
    g.1(1, 1);
    # Baseline
    g.0(2, 2.0);
    # Optimized -> baseline
    g.1(3.0, 3);
    # Baseline
    g.0(4.0, 4.0);
    # Optimized
    g.1(5, 5);

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
    provide(n);
    r = 14;
    check BB1() else BB2();
  BB1():
    # cleanup:
    r ?= 14;
    provide("foo");
    return 42;
  BB2():
    mkenv;
    st x = r;
    deopt 5 [r, n];
  }
  # cleanup: (reg n:V, reg a:I) --> I { reg r1:V, var x:* |
  (reg n:V, reg a:I) --> I { reg r:I, reg r1:V, var x:* |
    provide(n);
    r1 = n;
    check BB1() else BB2();
  BB1():
    # cleanup:
    r = n ?: I;
    provide("bar");
    return 24;
  BB2():
    mkenv;
    deopt 5 [14, r1];
  }
}

# Asserts the last argument given to `provide`
fun require(...) {
  (reg x:*) --> V { ... }
}

fun provide(...) {
  (reg x:*) --> V { ... }
}
