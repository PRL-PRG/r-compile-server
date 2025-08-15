fun main {
  () --> v(I)f { reg rv:v(I)o |
    rv = [1, 2, 3];
    cast< v(I)b --> V >(rv);
    return use rv;
  }
}

fun cast {
  (reg r:v(I)b) --> I { reg v:v(I)o, reg r1:I |
    # type-error: Stupid cast: r {:v(I)b} as v(I)o will always fail
    # type-error: Can't assign it to v: can't assign v(I)o to v(I)o
    v = r as v(I)o;
    r1 = v[0] = 4;
    return r1;
  }
}
