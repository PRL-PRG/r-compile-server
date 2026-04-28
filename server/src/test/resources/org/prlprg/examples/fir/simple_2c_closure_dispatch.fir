fun main() {
  () -+> V { reg outer:cls, reg inner:V, reg inner1:cls, reg ret:V |
    outer = make_closure< --> cls >();
    inner = dyn outer();
    inner1 = inner as cls;
    ret = dyn inner1();
    return ret;
  }
}

fun make_closure() {
  () --> cls { reg c:cls |
    c = clos produce;
    return c;
  }
}

fun produce() {
  () --> V { |
    return <int 42>;
  }
}