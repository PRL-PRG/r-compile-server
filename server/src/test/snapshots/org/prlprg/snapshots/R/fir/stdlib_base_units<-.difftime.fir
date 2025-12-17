fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner736444261;
    st `.difftime` = r;
    st units = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner736444261(x, value) {
  (reg x:*, reg value:*) -+> V { var x:*, var value:*, reg units:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg from:*, reg from1:V, reg value1:*, reg value2:V, reg r2:V, reg c:L, reg x3:*, reg x4:V, reg _in_:cls, reg value3:*, reg value4:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg p2:p(V +), reg r10:V, reg r11:V, reg c2:L, reg stop:cls, reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg c3:cls, reg r18:V, reg cumprod:cls, reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg x5:*, reg x6:V, reg unclass:cls, reg r22:V, reg as_vector:cls, reg sc:*, reg sc1:V, reg c4:L, reg sc3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg from2:*, reg from3:V, reg __:cls, reg r23:V, reg sc4:*, reg sc5:V, reg c5:L, reg dx3:V, reg sc7:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg value5:*, reg value6:V, reg __1:cls, reg r24:V, reg r25:V, reg p3:p(V +), reg r27:V, reg r28:V, reg _difftime:cls, reg newx:*, reg newx1:V, reg p4:p(V +), reg value7:*, reg value8:V, reg p5:p(V +), reg r31:V |
    mkenv;
    st x = x;
    st value = value;
    units = ldf units;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn units(p);
    check L8() else D1();
  D1():
    deopt 3 [r1];
  L8():
    st from = r1;
    from = ld from;
    check L9() else D2();
  D2():
    deopt 5 [from];
  L9():
    from1 = force? from;
    checkMissing(from1);
    value1 = ld value;
    check L10() else D3();
  D3():
    deopt 6 [from1, value1];
  L10():
    value2 = force? value1;
    checkMissing(value2);
    r2 = `==`(from1, value2);
    c = `as.logical`(r2);
    if c then L11() else L0();
  L0():
    _in_ = ldf `%in%`;
    check L15() else D5();
  L11():
    x3 = ld x;
    check L12() else D4();
  D4():
    deopt 9 [x3];
  D5():
    deopt 15 [];
  L12():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L15():
    p1 = prom<V +>{
      value3 = ld value;
      value4 = force? value3;
      checkMissing(value4);
      return value4;
    };
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r7):
      return r7;
    L1():
      c1 = ldf c in base;
      r8 = dyn c1("secs", "mins", "hours", "days", "weeks");
      goto L0(r8);
    L2():
      r6 = dyn base("secs", "mins", "hours", "days", "weeks");
      goto L0(r6);
    };
    r10 = dyn _in_(p1, p2);
    check L16() else D6();
  D6():
    deopt 18 [r10];
  L16():
    r11 = `!`(r10);
    c2 = `as.logical`(r11);
    if c2 then L17() else L2();
  L2():
    goto L3();
  L3():
    sym1 = ldf cumprod;
    base1 = ldf cumprod in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L17():
    stop = ldf stop;
    check L18() else D7();
  D7():
    deopt 21 [];
  L4(r15):
    st sc = r15;
    sym3 = ldf unclass;
    base3 = ldf unclass in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  L18():
    r12 = dyn stop("invalid units specified");
    check L19() else D8();
  L21():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L22():
    r14 = dyn base1(<lang c(secs=1.0, mins=60.0, hours=60.0, days=24.0, weeks=7.0)>);
    goto L4(r14);
  D8():
    deopt 23 [r12];
  L5(r17):
    cumprod = ldf cumprod in base;
    r19 = dyn cumprod(r17);
    check L26() else D10();
  L6(r21):
    as_vector = ldf `as.vector`;
    check L31() else D13();
  L19():
    goto L3();
  L23():
    c3 = ldf c in base;
    r18 = dyn c3(1.0, 60.0, 60.0, 24.0, 7.0);
    check L25() else D9();
  L24():
    r16 = dyn base2[secs, mins, hours, days, weeks](1.0, 60.0, 60.0, 24.0, 7.0);
    goto L5(r16);
  L27():
    x5 = ld x;
    check L29() else D11();
  L28():
    r20 = dyn base3(<sym x>);
    goto L6(r20);
  D9():
    deopt 41 [r18];
  D10():
    deopt 43 [r19];
  D11():
    deopt 47 [x5];
  D13():
    deopt 51 [r21];
  L25():
    goto L5(r18);
  L26():
    goto L4(r19);
  L29():
    x6 = force? x5;
    checkMissing(x6);
    unclass = ldf unclass in base;
    r22 = dyn unclass(x6);
    check L30() else D12();
  L31():
    p3 = prom<V +>{
      sc = ld sc;
      sc1 = force? sc;
      checkMissing(sc1);
      c4 = `is.object`(sc1);
      if c4 then L2() else L3(sc1);
    L0(dx1):
      sc4 = ld sc;
      sc5 = force? sc4;
      checkMissing(sc5);
      c5 = `is.object`(sc5);
      if c5 then L5() else L6(dx1, sc5);
    L2():
      dr = tryDispatchBuiltin.1("[", sc1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(sc3):
      from2 = ld from;
      from3 = force? from2;
      __ = ldf `[` in base;
      r23 = dyn __(sc3, from3);
      goto L0(r23);
    L1(dx6, dx7):
      r25 = `/`(dx6, dx7);
      return r25;
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      dr2 = tryDispatchBuiltin.1("[", sc5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dx1, dr2);
    L6(dx3, sc7):
      value5 = ld value;
      value6 = force? value5;
      __1 = ldf `[` in base;
      r24 = dyn __1(sc7, value6);
      goto L1(dx3, r24);
    L7():
      dx5 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx1, dx5);
    };
    r27 = dyn as_vector(p3);
    check L32() else D14();
  D12():
    deopt 50 [r22];
  D14():
    deopt 53 [r21, r27];
  L30():
    goto L6(r22);
  L32():
    r28 = `*`(r21, r27);
    st newx = r28;
    _difftime = ldf `.difftime`;
    check L33() else D15();
  D15():
    deopt 57 [];
  L33():
    p4 = prom<V +>{
      newx = ld newx;
      newx1 = force? newx;
      checkMissing(newx1);
      return newx1;
    };
    p5 = prom<V +>{
      value7 = ld value;
      value8 = force? value7;
      checkMissing(value8);
      return value8;
    };
    r31 = dyn _difftime(p4, p5);
    check L34() else D16();
  D16():
    deopt 60 [r31];
  L34():
    popenv;
    return r31;
  }
}