fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.is_ASCII` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg vapply:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg as_character:cls, reg r2:V, reg p:p(V +), reg r4:cls, reg p1:p(V +), reg r6:V |
    mkenv;
    st x = x;
    vapply = ldf vapply;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf `as.character`;
      base = ldf `as.character` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      as_character = ldf `as.character` in base;
      r2 = dyn as_character(x2);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    p1 = prom<V +>{
      r4 = clos inner4259292012;
      return r4;
    };
    r6 = dyn vapply(p, p1, NA_LGL);
    check L1() else D1();
  D1():
    deopt 5 [r6];
  L1():
    popenv;
    return r6;
  }
}
fun inner4259292012(txt) {
  (reg txt:*) -+> V { var txt:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg charToRaw:cls, reg txt1:*, reg txt2:V, reg p:p(V +), reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg r8:V, reg as_raw:cls, reg r9:V, reg r10:V, reg all:cls, reg r11:V |
    mkenv;
    st txt = txt;
    sym = ldf all;
    base = ldf all in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    charToRaw = ldf charToRaw;
    check L4() else D0();
  L3():
    r = dyn base(<lang `<=`(charToRaw(txt), as.raw(127.0))>);
    goto L0(r);
  D0():
    deopt 3 [];
  L4():
    p = prom<V +>{
      txt1 = ld txt;
      txt2 = force? txt1;
      checkMissing(txt2);
      return txt2;
    };
    r3 = dyn charToRaw(p);
    check L5() else D1();
  D1():
    deopt 5 [r3];
  L5():
    sym1 = ldf `as.raw`;
    base1 = ldf `as.raw` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L1(r7, r8):
    r10 = `<=`(r7, r8);
    all = ldf all in base;
    r11 = dyn all(r10);
    check L9() else D3();
  L6():
    as_raw = ldf `as.raw` in base;
    r9 = dyn as_raw(127.0);
    check L8() else D2();
  L7():
    r6 = dyn base1(127.0);
    goto L1(r3, r6);
  D2():
    deopt 9 [r3, r9];
  D3():
    deopt 12 [r11];
  L8():
    goto L1(r3, r9);
  L9():
    goto L0(r11);
  }
}