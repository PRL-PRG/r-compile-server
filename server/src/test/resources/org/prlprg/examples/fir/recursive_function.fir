fun main() {
  () --> V { reg r1:I, reg r1b:v1(I) |
    r1 = recursive< I,I --> I >(123, 0);
    r1b = box<I --> v1(I)>(r1);
    return r1b;
  }
}

fun recursive(rm, rn) {
  (reg rm:I, reg rn:I) --> I { reg result:I, reg rnb:v1(I), reg r1:p(v1(I) -), reg r2:p(v1(I) -), reg r3:I, reg r4:I, reg r5:I, reg r5b:v1(I), reg rmb:v1(I) |
    rnb = box<I --> v1(I)>(rn);
    r1 = prom<v1(I) ->{ return rnb; };
    r2 = prom<v1(I) ->{
      r3 = dec< I --> I >(rm);
      r4 = add< I,I --> I >(rm, rn);
      r5 = recursive< I,I --> I >(r3, r4);
      r5b = box<I --> v1(I)>(r5);
      return r5b;
    };
    rmb = box<I --> v1(I)>(rm);
    result = if0< V,p(v1(I) -),p(v1(I) -) --> I >(rmb, r1, r2);
    return result;
  }
}

fun if0(rcond, rtrue, rfalse) {
  (reg rcond:*, reg rtrue:*, reg rfalse:*) --> I { ... }
  (reg rcond:V, reg rtrue:p(v1(I) -), reg rfalse:p(v1(I) -)) --> I { ... }
}

fun dec(r) {
  (reg r:I) --> I { ... }
}

fun add(r0, r1) {
  (reg r0:I, reg r1:I) --> I { ... }
}
