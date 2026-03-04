fun main() {
  # type-error: Function effects mismatch: + don't subset -
  () --> v(I)f { reg r1:v(I)o |
    # type-error: Can't assign it to r1: can't assign v(I) to v(I)o
    r1 = g(4);
    return use r1;
  }
}

fun g(x) {
  (reg x:*) -+> v(I) { reg r:v(I) |
    r = v(I)[1, 2];
    return r;
  }
  (reg x:I) --> v(I)f { reg r:v(I)o |
    r = v(I)[1, 2];
    return use r;
  }
}
