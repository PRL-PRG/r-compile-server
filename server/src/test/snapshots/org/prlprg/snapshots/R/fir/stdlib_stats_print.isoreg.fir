fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1591825523;
    st `print.isoreg` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1591825523(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg cat:cls, reg deparse:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg r6:V, reg cat1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r9:V, reg length:cls, reg r10:V, reg p3:p(V +), reg x9:*, reg x10:V, reg c2:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r12:V, reg p4:p(V +), reg r14:V, reg x13:*, reg x14:V, reg c3:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r15:V, reg c4:L, reg cat2:cls, reg r16:V, reg cat3:cls, reg r18:V, reg str:cls, reg x17:*, reg x18:V, reg c5:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r19:V, reg p5:p(V +), reg r21:V, reg cat4:cls, reg r22:V, reg str1:cls, reg x21:*, reg x22:V, reg c6:L, reg x24:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __:cls, reg r23:V, reg p6:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r27:V, reg r28:I, reg r29:V, reg digits1:*, reg digits2:V, reg r30:V, reg max:cls, reg r31:V, reg r32:V, reg p7:p(V +), reg r34:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r35:V, reg r36:V, reg x25:*, reg x26:V, reg invisible:cls, reg r37:V |
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
    cat = ldf cat;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p2 = prom<V +>{
      deparse = ldf deparse;
      p1 = prom<V +>{
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
        r2 = `$`(x4, <sym call>);
        goto L0(r2);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r4 = dyn deparse(p1);
      return r4;
    };
    r6 = dyn cat[, , , sep]("Isotonic regression from ", p2, ",\n", "");
    check L6() else D1();
  D1():
    deopt 7 [r6];
  L6():
    cat1 = ldf cat;
    check L7() else D2();
  D2():
    deopt 9 [];
  L7():
    p3 = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r8):
      return r8;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c1 = `is.object`(x6);
      if c1 then L4() else L5(x6);
    L2():
      r7 = dyn base(<lang `$`(x, iKnots)>);
      goto L0(r7);
    L3(dx3):
      length = ldf length in base;
      r10 = dyn length(dx3);
      goto L0(r10);
    L4():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(x8):
      r9 = `$`(x8, <sym iKnots>);
      goto L3(r9);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L3(dx2);
    };
    p4 = prom<V +>{
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
      r12 = `$`(x12, <sym iKnots>);
      goto L0(r12);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r14 = dyn cat1("  with", p3, "knots / breaks at obs.nr.", p4, ";\n");
    check L8() else D3();
  D3():
    deopt 15 [r14];
  L8():
    x13 = ld x;
    check L9() else D4();
  D4():
    deopt 16 [x13];
  L9():
    x14 = force? x13;
    checkMissing(x14);
    c3 = `is.object`(x14);
    if c3 then L11() else L12(x14);
  L10(dx7):
    c4 = `as.logical`(dx7);
    if c4 then L14() else L2();
  L11():
    dr6 = tryDispatchBuiltin.1("$", x14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L13() else L12(dr6);
  L12(x16):
    r15 = `$`(x16, <sym isOrd>);
    goto L10(r15);
  L2():
    cat3 = ldf cat;
    check L18() else D7();
  L3():
    cat4 = ldf cat;
    check L22() else D11();
  L13():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L10(dx6);
  L14():
    cat2 = ldf cat;
    check L15() else D5();
  D5():
    deopt 20 [];
  D7():
    deopt 24 [];
  D11():
    deopt 32 [];
  L15():
    r16 = dyn cat2("  initially ordered 'x'\n");
    check L16() else D6();
  L18():
    r18 = dyn cat3("  (x,y) ordering:");
    check L19() else D8();
  L22():
    r22 = dyn cat4("  and further components ");
    check L23() else D12();
  D6():
    deopt 22 [r16];
  D8():
    deopt 26 [r18];
  D12():
    deopt 34 [r22];
  L16():
    goto L3();
  L19():
    str = ldf str;
    check L20() else D9();
  L23():
    str1 = ldf str;
    check L24() else D13();
  D9():
    deopt 28 [];
  D13():
    deopt 36 [];
  L20():
    p5 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c5 = `is.object`(x18);
      if c5 then L1() else L2(x18);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", x18);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(x20):
      r19 = `$`(x20, <sym ord>);
      goto L0(r19);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r21 = dyn str(p5);
    check L21() else D10();
  L24():
    p6 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c6 = `is.object`(x22);
      if c6 then L1() else L2(x22);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", x22);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(x24):
      __ = ldf `[` in base;
      r23 = dyn __(x24, <int 1, 2, 3, 4>);
      goto L0(r23);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p7 = prom<V +>{
      sym1 = ldf max;
      base1 = ldf max in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r28, r29):
      r32 = `+`(r28, r29);
      return r32;
    L1():
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      r30 = `-`(digits2, 7);
      max = ldf max in base;
      r31 = dyn max(0, r30);
      goto L0(3, r31);
    L2():
      r27 = dyn base1(0, <lang `-`(digits, 7)>);
      goto L0(3, r27);
    };
    r34 = dyn str1[, `digits.d`](p6, p7);
    check L25() else D14();
  D10():
    deopt 30 [r21];
  D14():
    deopt 40 [r34];
  L21():
    goto L3();
  L25():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  L4(r36):
    popenv;
    return r36;
  L26():
    x25 = ld x;
    check L28() else D15();
  L27():
    r35 = dyn base2(<sym x>);
    goto L4(r35);
  D15():
    deopt 43 [x25];
  L28():
    x26 = force? x25;
    checkMissing(x26);
    invisible = ldf invisible in base;
    r37 = dyn invisible(x26);
    check L29() else D16();
  D16():
    deopt 46 [r37];
  L29():
    goto L4(r37);
  }
}