fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2963885060;
    st `print.density` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2963885060(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, var `...`:dots?, reg cat:cls, reg deparse:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r4:V, reg p2:p(V +), reg x9:*, reg x10:V, reg c2:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r6:V, reg p3:p(V +), reg formatC:cls, reg x13:*, reg x14:V, reg c3:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r8:V, reg p4:p(V +), reg digits1:*, reg digits2:V, reg p5:p(V +), reg r11:V, reg p6:p(V +), reg r13:V, reg print:cls, reg summary:cls, reg as_data_frame:cls, reg x17:*, reg x18:V, reg c4:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sym:cls, reg base:cls, reg guard:L, reg r14:V, reg x23:V, reg r15:V, reg c5:cls, reg r16:V, reg __:cls, reg r17:V, reg p7:p(V +), reg r19:V, reg p8:p(V +), reg r21:V, reg p9:p(V +), reg digits3:*, reg digits4:V, reg p10:p(V +), reg ddd1:dots?, reg r24:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg r26:V, reg x24:*, reg x25:V, reg invisible:cls, reg r27:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0(NULL) else L0(digits);
  L0(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    cat = ldf cat;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p1 = prom<V +>{
      deparse = ldf deparse;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        c = `is.object`(x2);
        if c then L1() else L2(x2);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", x2);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(x4):
        r = `$`(x4, <sym call>);
        goto L0(r);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r2 = dyn deparse(p);
      return r2;
    };
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c1 = `is.object`(x6);
      if c1 then L1() else L2(x6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x8):
      r4 = `$`(x8, <sym data.name>);
      goto L0(r4);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p3 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c2 = `is.object`(x10);
      if c2 then L1() else L2(x10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", x10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x12):
      r6 = `$`(x12, <sym n>);
      goto L0(r6);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p6 = prom<V +>{
      formatC = ldf formatC;
      p4 = prom<V +>{
        x13 = ld x;
        x14 = force? x13;
        checkMissing(x14);
        c3 = `is.object`(x14);
        if c3 then L1() else L2(x14);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("$", x14);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(x16):
        r8 = `$`(x16, <sym bw>);
        goto L0(r8);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      p5 = prom<V +>{
        digits1 = ld digits;
        digits2 = force? digits1;
        checkMissing(digits2);
        return digits2;
      };
      r11 = dyn formatC[, digits](p4, p5);
      return r11;
    };
    r13 = dyn cat[, , , , , , , , , , sep]("\nCall:\n\t", p1, "\n\nData: ", p2, " (", p3, " obs.);", "\tBandwidth 'bw' = ", p6, "\n\n", "");
    check L3() else D1();
  D1():
    deopt 14 [r13];
  L3():
    print = ldf print;
    check L4() else D2();
  D2():
    deopt 16 [];
  L4():
    p9 = prom<V +>{
      summary = ldf summary;
      p8 = prom<V +>{
        as_data_frame = ldf `as.data.frame`;
        p7 = prom<V +>{
          x17 = ld x;
          x18 = force? x17;
          checkMissing(x18);
          c4 = `is.object`(x18);
          if c4 then L2() else L3(x18);
        L0(dx9):
          return dx9;
        L2():
          dr8 = tryDispatchBuiltin.1("[", x18);
          dc4 = getTryDispatchBuiltinDispatched(dr8);
          if dc4 then L4() else L3(dr8);
        L3(x20):
          sym = ldf c;
          base = ldf c in base;
          guard = `==`.4(sym, base);
          if guard then L5() else L6();
        L1(x23, r15):
          __ = ldf `[` in base;
          r17 = dyn __(x23, r15);
          goto L0(r17);
        L4():
          dx8 = getTryDispatchBuiltinValue(dr8);
          goto L0(dx8);
        L5():
          c5 = ldf c in base;
          r16 = dyn c5("x", "y");
          goto L1(x20, r16);
        L6():
          r14 = dyn base("x", "y");
          goto L1(x20, r14);
        };
        r19 = dyn as_data_frame(p7);
        return r19;
      };
      r21 = dyn summary(p8);
      return r21;
    };
    p10 = prom<V +>{
      digits3 = ld digits;
      digits4 = force? digits3;
      checkMissing(digits4);
      return digits4;
    };
    ddd1 = ld `...`;
    r24 = dyn print[, digits, `...`](p9, p10, ddd1);
    check L5() else D3();
  D3():
    deopt 21 [r24];
  L5():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L1(r26):
    popenv;
    return r26;
  L6():
    x24 = ld x;
    check L8() else D4();
  L7():
    r25 = dyn base1(<sym x>);
    goto L1(r25);
  D4():
    deopt 24 [x24];
  L8():
    x25 = force? x24;
    checkMissing(x25);
    invisible = ldf invisible in base;
    r27 = dyn invisible(x25);
    check L9() else D5();
  D5():
    deopt 27 [r27];
  L9():
    goto L1(r27);
  }
}