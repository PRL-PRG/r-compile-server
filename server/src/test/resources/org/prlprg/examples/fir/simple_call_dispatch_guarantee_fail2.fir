fun main() {
  () --> v(I)f { reg r1:v(I)o |
    # type-error: Can't assign it to r1: can't assign v(I) to v(I)o
    r1 = g%< --> v(I) >();
    return consume r1;
  }
}

fun g() {
  () --> v(I) { |
    return <int 42>;
  }
}
