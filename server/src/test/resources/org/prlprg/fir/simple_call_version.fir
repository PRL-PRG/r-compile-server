fun main() {
  () --> I { reg r1:I |
    r1 = g.1(0);
    return r1;
  }
}

fun g(`...`) {
  () --> I { |
    return 0;
  }
  (reg r0:I) --> I { |
    return 1;
  }
  (reg r0:I, reg r1:I) --> I { |
    return 2;
  }
  (reg r0:I, reg r1:I, reg r2:I) --> I { |
    return 3;
  }
  (reg r0:I, reg r1:I, reg r2:I, reg r3:I) --> I { |
    return 3;
  }
}
