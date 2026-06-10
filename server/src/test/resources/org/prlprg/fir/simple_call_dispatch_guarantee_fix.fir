fun main() {
  () --> v(I)f { reg r1:v(I)o |
    r1 = g< I --> v(I)f >(42);
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
