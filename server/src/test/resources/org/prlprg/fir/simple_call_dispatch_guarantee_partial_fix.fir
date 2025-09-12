fun main() {
  () --> v(I)f { reg r1:v(I)o |
    # type-error: Can't assign it to r1: can't assign v(I) to v(I)o
    r1 = g< I --> v(I) >(42);
    return use r1;
  }
}

fun g(...) {
  (reg x:*) -+> v(I) { reg r:v(I) |
    r = v(I)[1, 2];
    return r;
  }
  (reg x:V) --> v(I) { reg r:v(I) |
    r = v(I)[1, 2];
    return r;
  }
  (reg x:I) --> v(I)f { reg r:v(I)o |
    r = v(I)[1, 2];
    return use r;
  }
}
