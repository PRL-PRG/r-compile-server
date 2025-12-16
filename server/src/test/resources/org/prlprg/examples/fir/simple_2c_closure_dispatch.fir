fun main() {
  () -+> I { reg clos:cls, reg result:V, reg ret:I |
    clos = make_closure();
    result = dyn clos();
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