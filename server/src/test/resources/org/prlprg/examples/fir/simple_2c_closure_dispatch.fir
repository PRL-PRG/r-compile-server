fun main() {
  () -+> V {
    outer: cls = outermost_f< --> cls >();
    inner: V = dyn outer();
    inner1: cls = inner as cls;
    ret: V = dyn inner1();
    return ret;
  }
}

fun outermost_f() {
  () --> cls {
    c: cls = clos outer_f;
    return c;
  }
}

fun outer_f() {
  () --> cls {
    c: cls = clos inner_f;
    return c;
  }
}

fun inner_f() {
  () --> V {
    return <int 42>;
  }
}
