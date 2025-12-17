fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4284372013;
    st `Ops.roman` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4284372013(e1, e2) {
  (reg e1:*, reg e2:*) -+> V { var e1:*, var e2:*, reg _in_:cls, reg _Generic:*, reg _Generic1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg c1:L, reg _as_roman:cls, reg e3:*, reg e4:V, reg p2:p(V +), reg r7:V, reg _as_roman1:cls, reg e5:*, reg e6:V, reg p3:p(V +), reg r9:V, reg as_roman:cls, reg NextMethod:cls, reg _Generic2:*, reg _Generic3:V, reg p4:p(V +), reg r11:V, reg p5:p(V +), reg r13:V, reg NextMethod1:cls, reg _Generic4:*, reg _Generic5:V, reg p6:p(V +), reg r15:V |
    mkenv;
    st e1 = e1;
    st e2 = e2;
    _in_ = ldf `%in%`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      _Generic = ld `.Generic`;
      _Generic1 = force? _Generic;
      checkMissing(_Generic1);
      return _Generic1;
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c("+", "-", "*", "^", "%%", "%/%", "/");
      goto L0(r3);
    L2():
      r1 = dyn base("+", "-", "*", "^", "%%", "%/%", "/");
      goto L0(r1);
    };
    r5 = dyn _in_(p, p1);
    check L2() else D1();
  D1():
    deopt 4 [r5];
  L2():
    c1 = `as.logical`(r5);
    if c1 then L3() else L0();
  L0():
    NextMethod1 = ldf NextMethod;
    check L11() else D8();
  L3():
    _as_roman = ldf `.as.roman`;
    check L4() else D2();
  D2():
    deopt 6 [];
  D8():
    deopt 24 [];
  L4():
    p2 = prom<V +>{
      e3 = ld e1;
      e4 = force? e3;
      checkMissing(e4);
      return e4;
    };
    r7 = dyn _as_roman[, `check.range`](p2, FALSE);
    check L5() else D3();
  L11():
    p6 = prom<V +>{
      _Generic4 = ld `.Generic`;
      _Generic5 = force? _Generic4;
      checkMissing(_Generic5);
      return _Generic5;
    };
    r15 = dyn NextMethod1(p6);
    check L12() else D9();
  D3():
    deopt 10 [r7];
  D9():
    deopt 26 [r15];
  L5():
    st e1 = r7;
    _as_roman1 = ldf `.as.roman`;
    check L6() else D4();
  L12():
    popenv;
    return r15;
  D4():
    deopt 13 [];
  L6():
    p3 = prom<V +>{
      e5 = ld e2;
      e6 = force? e5;
      checkMissing(e6);
      return e6;
    };
    r9 = dyn _as_roman1[, `check.range`](p3, FALSE);
    check L7() else D5();
  D5():
    deopt 17 [r9];
  L7():
    st e2 = r9;
    as_roman = ldf `as.roman`;
    check L8() else D6();
  D6():
    deopt 20 [];
  L8():
    p5 = prom<V +>{
      NextMethod = ldf NextMethod;
      p4 = prom<V +>{
        _Generic2 = ld `.Generic`;
        _Generic3 = force? _Generic2;
        checkMissing(_Generic3);
        return _Generic3;
      };
      r11 = dyn NextMethod(p4);
      return r11;
    };
    r13 = dyn as_roman(p5);
    check L9() else D7();
  D7():
    deopt 22 [r13];
  L9():
    popenv;
    return r13;
  }
}