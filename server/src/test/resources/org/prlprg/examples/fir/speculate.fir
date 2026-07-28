#? noEval
fun main() {
  () -+> v1(I) {
    r1: V = blackBox< V --> V >(<int 1>);
    r2: V = blackBox< V --> V >(<int 2>);
    r3: V = blackBox< V --> V >(<real 3.0>);
    r4: V = blackBox< V --> V >(<real 4.0>);
    r5: V = blackBox< V --> V >(<int 5>);
    # Optimized
    g< V,I -+> V >(r1, 1);
    # Baseline
    g< V,V -+> V >(r2, <real 2.0>);
    # Optimized -> baseline
    g< V,I -+> V >(r3, 3);
    # Baseline
    g< V,V -+> V >(r4, <real 4.0>);
    # Optimized
    g< V,I -+> V >(r5, 5);
    require< V --> V >(<int 1>);
    require< V --> V >(<str "bar">);
    require< V --> V >(<int 2>);
    require< V --> V >(<str "foo">);
    require< V --> V >(<real 3.0>);
    require< V --> V >(<str "foo">);
    require< V --> V >(<real 4.0>);
    require< V --> V >(<str "foo">);
    require< V --> V >(<int 5>);
    require< V --> V >(<str "bar">);
    return <int 49>;
  }
}

fun g(n, a) {
  (reg n:V, reg a:V) -+> V {
    mkenv;
    provide< V --> V >(n);
    check BB1() else BB2();
  BB1():
    <int 14> ?= <int 14>;
    provide< V --> V >(<str "foo">);
    popenv;
    return <int 42>;
  BB2():
    st x = <int 14>;
    deopt 5 [<int 14>, n];
  }
  (reg n:V, reg a:I) -+> V {
    provide< V --> V >(n);
    check BB1() else BB2();
  BB1():
    r: v1(I) = n ?: v1(I);
    provide< V --> V >(<str "bar">);
    return <int 24>;
  BB2():
    mkenv;
    deopt 5 [<int 14>, n];
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
