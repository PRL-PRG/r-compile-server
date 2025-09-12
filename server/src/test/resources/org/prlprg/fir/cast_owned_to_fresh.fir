fun main() {
  () --> v(I)f { reg rv:v(I)o |
    rv = v(I)[1, 2, 3];
    cast< v(I)b --> V >(rv);
    return use rv;
  }
}

fun cast(...) {
  (reg r:v(I)b) --> I { reg rv:v(I)o, reg r1:I |
    # type-error: Can't assign it to rv: can't assign v(I)o to v(I)o
    rv = r as v(I)o;
    r1 = rv[0] = 4;
    return r1;
  }
}
