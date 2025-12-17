fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.is_ISO_8859` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg as_raw:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg as_raw1:cls, reg r5:V, reg vapply:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg x1:*, reg x2:V, reg as_character:cls, reg r8:V, reg p:p(V +), reg r10:cls, reg p1:p(V +), reg r12:V |
    mkenv;
    st x = x;
    sym = ldf `as.raw`;
    base = ldf `as.raw` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    st raw_ub = r1;
    sym1 = ldf `as.raw`;
    base1 = ldf `as.raw` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L2():
    as_raw = ldf `as.raw` in base;
    r2 = dyn as_raw(127.0);
    check L4() else D0();
  L3():
    r = dyn base(127.0);
    goto L0(r);
  D0():
    deopt 4 [r2];
  L1(r4):
    st raw_lb = r4;
    vapply = ldf vapply;
    check L8() else D2();
  L4():
    goto L0(r2);
  L5():
    as_raw1 = ldf `as.raw` in base;
    r5 = dyn as_raw1(160.0);
    check L7() else D1();
  L6():
    r3 = dyn base1(160.0);
    goto L1(r3);
  D1():
    deopt 10 [r5];
  D2():
    deopt 13 [];
  L7():
    goto L1(r5);
  L8():
    p = prom<V +>{
      sym2 = ldf `as.character`;
      base2 = ldf `as.character` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      as_character = ldf `as.character` in base;
      r8 = dyn as_character(x2);
      goto L0(r8);
    L2():
      r6 = dyn base2(<sym x>);
      goto L0(r6);
    };
    p1 = prom<V +>{
      r10 = clos inner4259292012;
      return r10;
    };
    r12 = dyn vapply(p, p1, NA_LGL);
    check L9() else D3();
  D3():
    deopt 17 [r12];
  L9():
    popenv;
    return r12;
  }
}
fun inner4259292012(txt) {
  (reg txt:*) -+> V { var txt:*, reg charToRaw:cls, reg txt1:*, reg txt2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg raw:*, reg raw1:V, reg raw_ub:*, reg raw_ub1:V, reg r4:V, reg raw2:*, reg raw3:V, reg raw_lb:*, reg raw_lb1:V, reg r5:V, reg r6:V, reg all:cls, reg r7:V |
    mkenv;
    st txt = txt;
    charToRaw = ldf charToRaw;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      txt1 = ld txt;
      txt2 = force? txt1;
      checkMissing(txt2);
      return txt2;
    };
    r1 = dyn charToRaw(p);
    check L2() else D1();
  D1():
    deopt 3 [r1];
  L2():
    st raw = r1;
    sym = ldf all;
    base = ldf all in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r3):
    popenv;
    return r3;
  L3():
    raw = ld raw;
    check L5() else D2();
  L4():
    r2 = dyn base(<lang `|`(`<=`(raw, raw_ub), `>=`(raw, raw_lb))>);
    goto L0(r2);
  D2():
    deopt 7 [raw];
  L5():
    raw1 = force? raw;
    checkMissing(raw1);
    raw_ub = ld raw_ub;
    check L6() else D3();
  D3():
    deopt 8 [raw1, raw_ub];
  L6():
    raw_ub1 = force? raw_ub;
    checkMissing(raw_ub1);
    r4 = `<=`(raw1, raw_ub1);
    raw2 = ld raw;
    check L7() else D4();
  D4():
    deopt 10 [r4, raw2];
  L7():
    raw3 = force? raw2;
    checkMissing(raw3);
    raw_lb = ld raw_lb;
    check L8() else D5();
  D5():
    deopt 11 [r4, raw3, raw_lb];
  L8():
    raw_lb1 = force? raw_lb;
    checkMissing(raw_lb1);
    r5 = `>=`(raw3, raw_lb1);
    r6 = `||`(r4, r5);
    all = ldf all in base;
    r7 = dyn all(r6);
    check L9() else D6();
  D6():
    deopt 16 [r7];
  L9():
    goto L0(r7);
  }
}