fun main() {
  () --> v(I)f {
    r1_shared: * = v(I)[1, 2, 3];
    r_owned: v(I)o = v(I)[4, 5];
    r1_owned: v(I)o = v(I)[6, 7];
    r1: I = contextual< *,* --> I >(<int 42>, <int 42>);
    r2: I = contextual< *,* --> I >(<int 42>, r1_shared);
    r3: I = contextual< v(I)o,* --> I >(consume r_owned, <int 42>);
    r4: I = contextual< v(I)o,* --> I >(consume r1_owned, r1_shared);
    r5: v(I)o = v(I)[r1, r2, r3, r4];
    return consume r5;
  }
}

fun contextual(r, r1) {
  (reg r:*, reg r1:*) --> I {
    return 42;
  }
  (reg r:*, reg r1:v(I)) --> I {
    return 42;
  }
  (reg r:v(I)o, reg r1:*) --> I {
    return 42;
  }
  (reg r:v(I)o, reg r1:v(I)) --> I {
    return 42;
  }
}
