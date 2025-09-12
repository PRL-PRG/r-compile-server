fun main(...) {
  () --> I { reg r:I |
    external(1, 2, 3);
    r = identity.0(42);
    return r;
  }
}

fun external(...) { --> I }

fun identity(...) {
  (reg x:I) --> I { |
    return x;
  }
}