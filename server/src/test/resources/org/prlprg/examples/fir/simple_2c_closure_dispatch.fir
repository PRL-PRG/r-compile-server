fun main() {
  () -+> I { reg closure:cls, reg result:V, reg ret:I |
    closure = make_closure< --> cls >();
    result = dyn closure();
    ret = result as I;
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
  () --> I { |
    return 42;
  }
}