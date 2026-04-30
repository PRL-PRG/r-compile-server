fun main() {
  () --> V { reg r1:I, reg r1b:v1(I) |
    r1 = recursive< I,I --> I >(123, 0);
    r1b = box<I --> v1(I)>(r1);
    return r1b;
  }
}

fun recursive(rm, rn) {
  (reg rm:I, reg rn:I) --> I { reg result:I, reg rnb:v1(I), reg r1:p(v1(I) -), reg r2:p(v1(I) -), reg r3:I, reg r4:I, reg r5:I, reg r5b:v1(I) |
    rnb = box<I --> v1(I)>(rn);
    r1 = prom<v1(I) ->{ return rnb; };
    r2 = prom<v1(I) ->{
      r3 = `-`< I,I --> I >(rm, 1);
      r4 = `+`< I,I --> I >(rm, rn);
      r5 = recursive< I,I --> I >(r3, r4);
      r5b = box<I --> v1(I)>(r5);
      return r5b;
    };
    result = if0< I,p(v1(I) -),p(v1(I) -) --> I >(rm, r1, r2);
    return result;
  }
}

fun if0(rcond, rtrue, rfalse) {
  (reg rcond:I, reg rtruep:p(v1(I) -), reg rfalsep:p(v1(I) -)) --> I { reg rcondb:B, reg rboxp:p(v1(I) -), reg rbox:v1(I), reg r:I |
    rcondb = `==`<I,I --> B>(rcond, 0);
    if rcondb then BBEnd(rtruep) else BBEnd(rfalsep);
  BBEnd(rboxp):
    rbox = force rboxp;
    r = unbox<v1(I) --> I>(rbox);
    return r;
  }
}