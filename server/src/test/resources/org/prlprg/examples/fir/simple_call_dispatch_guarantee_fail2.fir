fun main() {
  () --> v(I)f { reg r1:v(I)o |
    # type-and-effect-error: Can't assign it to r1: can't assign I to v(I)o
    r1 = g();
    return use r1;
  }
}

fun g() {
  () --> I { |
    return 42;
  }
}
