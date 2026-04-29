fun main() {
  () -+> V { reg outer:cls, reg inner:V, reg inner1:cls, reg ret:V |
    outer = outermost_f< --> cls >();
    inner = dyn outer();
    inner1 = inner as cls;
    ret = dyn inner1();
    return ret;
  }
}

fun outermost_f() {
  () --> cls { reg c:cls |
    c = clos outer_f;
    return c;
  }
}

fun outer_f() {
  () --> cls { reg c:cls |
    c = clos inner_f;
    return c;
  }
}

fun inner_f() {
  () --> V { |
    return <int 42>;
  }
}