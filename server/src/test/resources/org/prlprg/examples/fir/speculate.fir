fun main() {
  () --> I { reg r1:V, reg r2:V, reg r3:V, reg r4:V, reg r5:V |
    r1 = blackBox< V --> V >(1);
    r2 = blackBox< V --> V >(2);
    r3 = blackBox< V --> V >(3.0);
    r4 = blackBox< V --> V >(4.0);
    r5 = blackBox< V --> V >(5);

    # Optimized
    g< V,I --> I >(r1, 1);
    # Baseline
    g< V,V --> I >(r2, 2.0);
    # Optimized -> baseline
    g< V,I --> I >(r3, 3);
    # Baseline
    g< V,V --> I >(r4, 4.0);
    # Optimized
    g< V,I --> I >(r5, 5);

    require< V --> V >(1);
    require< V --> V >("bar");
    require< V --> V >(2);
    require< V --> V >("foo");
    require< V --> V >(3.0);
    require< V --> V >("foo");
    require< V --> V >(4.0);
    require< V --> V >("foo");
    require< V --> V >(5);
    require< V --> V >("bar");

    return 49;
  }
}

fun g(n, a) {
  (reg n:V, reg a:V) --> I { reg r:V, var x:* |
    mkenv;
    provide< V --> V >(n);
    r = 14;
    check BB1() else BB2();
  BB1():
    r ?= 14;
    provide< V --> V >("foo");
    popenv;
    return 42;
  BB2():
    st x = r;
    deopt 5 [r, n];
  }
  (reg n:V, reg a:I) --> I { reg r:I, reg r1:V, var x:* |
    provide< V --> V >(n);
    r1 = n;
    check BB1() else BB2();
  BB1():
    r = n ?: I;
    provide< V --> V >("bar");
    return 24;
  BB2():
    mkenv;
    deopt 5 [14, r1];
  }
}

# Asserts the last argument given to `provide`
fun require(x) {
  (reg x:V) --> V { ... }
}

fun provide(x) {
  (reg x:V) --> V { ... }
}

# Returns the argument as is, but marks the call as an optimization barrier
fun blackBox(x) {
  (reg x:V) --> V { ... }
}
