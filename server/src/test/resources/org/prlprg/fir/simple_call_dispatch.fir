fun main {
  () --> I { reg r1:I |
    r1 = g();
    return r1;
  }
}

fun g {
  () --> I { |
    return 1;
  }
}
