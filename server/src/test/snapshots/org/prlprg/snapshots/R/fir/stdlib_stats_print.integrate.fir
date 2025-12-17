fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1591825523;
    st `print.integrate` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1591825523(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg r3:V, reg c1:L, reg cat:cls, reg format:cls, reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r4:V, reg p1:p(V +), reg digits1:*, reg digits2:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg format1:cls, reg x9:*, reg x10:V, reg c3:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r9:V, reg p4:p(V +), reg r11:V, reg p5:p(V +), reg r13:V, reg cat1:cls, reg sQuote:cls, reg x13:*, reg x14:V, reg c4:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r15:V, reg p6:p(V +), reg r17:V, reg p7:p(V +), reg r19:V, reg sym:cls, reg base:cls, reg guard:L, reg r20:V, reg r21:V, reg x17:*, reg x18:V, reg invisible:cls, reg r22:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0() else L1(digits);
  L0():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("digits");
      return r;
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    x1 = ld x;
    check L5() else D0();
  D0():
    deopt 0 [x1];
  L5():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L7() else L8(x2);
  L6(dx1):
    r3 = `==`(dx1, "OK");
    c1 = `as.logical`(r3);
    if c1 then L10() else L2();
  L7():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(x4):
    r2 = `$`(x4, <sym message>);
    goto L6(r2);
  L2():
    cat1 = ldf cat;
    check L14() else D3();
  L3():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L10():
    cat = ldf cat;
    check L11() else D1();
  D1():
    deopt 6 [];
  D3():
    deopt 15 [];
  L4(r21):
    popenv;
    return r21;
  L11():
    p3 = prom<V +>{
      format = ldf format;
      p1 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        c2 = `is.object`(x6);
        if c2 then L1() else L2(x6);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", x6);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(x8):
        r4 = `$`(x8, <sym value>);
        goto L0(r4);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      p2 = prom<V +>{
        digits1 = ld digits;
        digits2 = force? digits1;
        checkMissing(digits2);
        return digits2;
      };
      r7 = dyn format[, digits](p1, p2);
      return r7;
    };
    p5 = prom<V +>{
      format1 = ldf format;
      p4 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        c3 = `is.object`(x10);
        if c3 then L1() else L2(x10);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("$", x10);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(x12):
        r9 = `$`(x12, <sym abs.error>);
        goto L0(r9);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r11 = dyn format1[, digits](p4, 2);
      return r11;
    };
    r13 = dyn cat[, , , , sep](p3, " with absolute error < ", p5, "\n", "");
    check L12() else D2();
  L14():
    p7 = prom<V +>{
      sQuote = ldf sQuote;
      p6 = prom<V +>{
        x13 = ld x;
        x14 = force? x13;
        checkMissing(x14);
        c4 = `is.object`(x14);
        if c4 then L1() else L2(x14);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("$", x14);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(x16):
        r15 = `$`(x16, <sym message>);
        goto L0(r15);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r17 = dyn sQuote(p6);
      return r17;
    };
    r19 = dyn cat1[, , , sep]("failed with message ", p7, "\n", "");
    check L15() else D4();
  L16():
    x17 = ld x;
    check L18() else D5();
  L17():
    r20 = dyn base(<sym x>);
    goto L4(r20);
  D2():
    deopt 13 [r13];
  D4():
    deopt 21 [r19];
  D5():
    deopt 24 [x17];
  L12():
    goto L3();
  L15():
    goto L3();
  L18():
    x18 = force? x17;
    checkMissing(x18);
    invisible = ldf invisible in base;
    r22 = dyn invisible(x18);
    check L19() else D6();
  D6():
    deopt 27 [r22];
  L19():
    goto L4(r22);
  }
}