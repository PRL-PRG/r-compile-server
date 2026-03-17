fun main() {
  () --> I { reg r1:I |
    r1 = g< I --> I >(0);
    return r1;
  }
}

fun g(r) {
  # type-error: Version has 0 parameters, but function has 1
  () --> I { |
    return 0;
  }
  (reg r0:I) --> I { |
    return 1;
  }
  # type-error: Version has 2 parameters, but function has 1
  (reg r0:I, reg r1:I) --> I { |
    return 2;
  }
  # type-error: Version has 3 parameters, but function has 1
  (reg r0:I, reg r1:I, reg r2:I) --> I { |
    return 3;
  }
  # type-error: Version has 4 parameters, but function has 1
  (reg r0:I, reg r1:I, reg r2:I, reg r3:I) --> I { |
    return 3;
  }
}
