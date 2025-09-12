fun main(...) {
  () --> v(I)f { reg r1:v(I)o |
    # type-error: Can't assign it to r1: can't assign I to v(I)o
    # runtime-error: Type mismatch in return: 42 {:I} isn't a(n) v(I)
    r1 = g();
    return use r1;
  }
}

fun g(...) {
  () --> I { |
    return 42;
  }
  --> I
}
