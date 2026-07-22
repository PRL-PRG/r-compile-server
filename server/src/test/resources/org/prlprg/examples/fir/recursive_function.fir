fun main() {
  () --> V {
    r1: I = recursive< I,I --> I >(123, 0);
    r1b: v1(I) = box< I --> v1(I) >(r1);
    return r1b;
  }
}

fun recursive(rm, rn) {
  (reg rm:I, reg rn:I) --> I {
    rnb: v1(I) = box< I --> v1(I) >(rn);
    r1: p(v1(I) -) = prom<v1(I) ->{
      return rnb;
    };
    r2: p(v1(I) -) = prom<v1(I) ->{
      r3: I = `-`< I,I --> I >(rm, 1);
      r4: I = `+`< I,I --> I >(rm, rn);
      r5: I = recursive< I,I --> I >(r3, r4);
      r5b: v1(I) = box< I --> v1(I) >(r5);
      return r5b;
    };
    result: I = if0< I,p(v1(I) -),p(v1(I) -) --> I >(rm, r1, r2);
    return result;
  }
}

fun if0(rcond, rtrue, rfalse) {
  (reg rcond:I, reg rtruep:p(v1(I) -), reg rfalsep:p(v1(I) -)) --> I {
    rcondb: B = `==`< I,I --> B >(rcond, 0);
    if rcondb then BBEnd(rtruep) else BBEnd(rfalsep);
  BBEnd(rboxp: p(v1(I) -)):
    rbox: v1(I) = force rboxp;
    r: I = unbox< v1(I) --> I >(rbox);
    return r;
  }
}
