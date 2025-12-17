fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1438292104`;
    st `[<-.POSIXct` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1438292104`(x, `...`, value) {
  (reg x:*, reg ddd:dots, reg value:*) -+> V { var x:*, var `...`:dots?, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg value1:*, reg value2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg x1:*, reg x2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg as_POSIXct:cls, reg value3:*, reg value4:V, reg p:p(V +), reg r9:V, reg unclass:cls, reg r10:V, reg _POSIXct:cls, reg NextMethod:cls, reg _Generic:*, reg _Generic1:V, reg p1:p(V +), reg r12:V, reg p2:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg x3:*, reg x4:V, reg attr:cls, reg r16:V, reg p3:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg x5:*, reg x6:V, reg oldClass:cls, reg r20:V, reg p4:p(V +), reg r22:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    st value = value;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L8() else L1();
  L4():
    value1 = ld value;
    check L6() else D0();
  L5():
    r = dyn base(<sym value>);
    goto L0(r);
  D0():
    deopt 2 [value1];
  L1():
    sym1 = ldf unclass;
    base1 = ldf unclass in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L6():
    value2 = force? value1;
    checkMissing(value2);
    length = ldf length in base;
    r2 = dyn length(value2);
    check L7() else D1();
  L8():
    x1 = ld x;
    check L9() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [x1];
  L3(r7):
    st value = r7;
    _POSIXct = ldf `.POSIXct`;
    check L17() else D6();
  L7():
    goto L0(r2);
  L9():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  L12():
    as_POSIXct = ldf `as.POSIXct`;
    check L14() else D3();
  L13():
    r6 = dyn base1(<lang as.POSIXct(value)>);
    goto L3(r6);
  D3():
    deopt 15 [];
  D6():
    deopt 22 [];
  L14():
    p = prom<V +>{
      value3 = ld value;
      value4 = force? value3;
      checkMissing(value4);
      return value4;
    };
    r9 = dyn as_POSIXct(p);
    check L15() else D4();
  L17():
    p2 = prom<V +>{
      NextMethod = ldf NextMethod;
      p1 = prom<V +>{
        _Generic = ld `.Generic`;
        _Generic1 = force? _Generic;
        checkMissing(_Generic1);
        return _Generic1;
      };
      r12 = dyn NextMethod(p1);
      return r12;
    };
    p3 = prom<V +>{
      sym2 = ldf attr;
      base2 = ldf attr in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      attr = ldf attr in base;
      r16 = dyn attr(x4, "tzone");
      goto L0(r16);
    L2():
      r14 = dyn base2(<sym x>, "tzone");
      goto L0(r14);
    };
    p4 = prom<V +>{
      sym3 = ldf oldClass;
      base3 = ldf oldClass in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      oldClass = ldf oldClass in base;
      r20 = dyn oldClass(x6);
      goto L0(r20);
    L2():
      r18 = dyn base3(<sym x>);
      goto L0(r18);
    };
    r22 = dyn _POSIXct(p2, p3, p4);
    check L18() else D7();
  D4():
    deopt 17 [r9];
  D7():
    deopt 26 [r22];
  L15():
    unclass = ldf unclass in base;
    r10 = dyn unclass(r9);
    check L16() else D5();
  L18():
    popenv;
    return r22;
  D5():
    deopt 19 [r10];
  L16():
    goto L3(r10);
  }
}