fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1189558076;
    st casefold = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1189558076(x, upper) {
  (reg x:*, reg upper:*) -+> V { var x:*, var upper:*, reg upper_isMissing:L, reg upper_orDefault:*, reg upper1:*, reg upper2:V, reg c:L, reg toupper:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg tolower:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st x = x;
    upper_isMissing = missing.0(upper);
    if upper_isMissing then L0(FALSE) else L0(upper);
  L0(upper_orDefault):
    st upper = upper_orDefault;
    upper1 = ld upper;
    check L2() else D0();
  D0():
    deopt 0 [upper1];
  L2():
    upper2 = force? upper1;
    checkMissing(upper2);
    c = `as.logical`(upper2);
    if c then L3() else L1();
  L1():
    tolower = ldf tolower;
    check L7() else D3();
  L3():
    toupper = ldf toupper;
    check L4() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 7 [];
  L4():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn toupper(p);
    check L5() else D2();
  L7():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn tolower(p1);
    check L8() else D4();
  D2():
    deopt 5 [r1];
  D4():
    deopt 9 [r3];
  L5():
    popenv;
    return r1;
  L8():
    popenv;
    return r3;
  }
}