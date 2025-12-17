fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1306553995;
    st `Summary.roman` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1306553995(x, `...`, `na.rm`) {
  (reg x:*, reg ddd:dots, reg na_rm:*) -+> V { var x:*, var `...`:dots?, var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, reg _in_:cls, reg _Generic:*, reg _Generic1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg c1:L, reg NextMethod:cls, reg _Generic2:*, reg _Generic3:V, reg p2:p(V +), reg r7:V, reg as_roman:cls, reg NextMethod1:cls, reg _Generic4:*, reg _Generic5:V, reg p3:p(V +), reg r9:V, reg p4:p(V +), reg r11:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    na_rm_isMissing = missing.0(na_rm);
    if na_rm_isMissing then L0(TRUE) else L0(na_rm);
  L0(na_rm_orDefault):
    st `na.rm` = na_rm_orDefault;
    _in_ = ldf `%in%`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
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
      r3 = dyn c("any", "all");
      goto L0(r3);
    L2():
      r1 = dyn base("any", "all");
      goto L0(r1);
    };
    r5 = dyn _in_(p, p1);
    check L3() else D1();
  D1():
    deopt 4 [r5];
  L3():
    c1 = `as.logical`(r5);
    if c1 then L4() else L1();
  L1():
    as_roman = ldf `as.roman`;
    check L8() else D4();
  L4():
    NextMethod = ldf NextMethod;
    check L5() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 10 [];
  L5():
    p2 = prom<V +>{
      _Generic2 = ld `.Generic`;
      _Generic3 = force? _Generic2;
      checkMissing(_Generic3);
      return _Generic3;
    };
    r7 = dyn NextMethod(p2);
    check L6() else D3();
  L8():
    p4 = prom<V +>{
      NextMethod1 = ldf NextMethod;
      p3 = prom<V +>{
        _Generic4 = ld `.Generic`;
        _Generic5 = force? _Generic4;
        checkMissing(_Generic5);
        return _Generic5;
      };
      r9 = dyn NextMethod1(p3);
      return r9;
    };
    r11 = dyn as_roman(p4);
    check L9() else D5();
  D3():
    deopt 8 [r7];
  D5():
    deopt 12 [r11];
  L6():
    popenv;
    return r7;
  L9():
    popenv;
    return r11;
  }
}