fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3400273441;
    st `print.tskernel` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3400273441(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var `...`:dots?, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg m:*, reg m1:V, reg r7:V, reg m2:*, reg m3:V, reg r8:V, reg __:cls, reg r9:V, reg cat:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg x9:*, reg x10:V, reg attr:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg cat1:cls, reg paste0:cls, reg format:cls, reg i:*, reg i1:V, reg p2:p(V +), reg r16:V, reg p3:p(V +), reg format1:cls, reg y:*, reg y1:V, reg p4:p(V +), reg digits1:*, reg digits2:V, reg p5:p(V +), reg r20:V, reg p6:p(V +), reg r22:V, reg p7:p(V +), reg r24:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg x11:*, reg x12:V, reg invisible:cls, reg r27:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0() else L1(digits);
  L0():
    p = prom<V +>{
      sym = ldf max;
      base = ldf max in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      getOption = ldf getOption;
      r2 = dyn getOption("digits");
      r3 = `-`(r2, 3);
      max = ldf max in base;
      r4 = dyn max(3, r3);
      goto L0(r4);
    L2():
      r = dyn base(3, <lang `-`(getOption("digits"), 3)>);
      goto L0(r);
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    x1 = ld x;
    check L4() else D0();
  D0():
    deopt 0 [x1];
  L4():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L6() else L7(x2);
  L5(dx1):
    st m = dx1;
    x5 = ld x;
    check L9() else D1();
  L6():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(x4):
    r6 = `$`(x4, <sym m>);
    goto L5(r6);
  D1():
    deopt 4 [x5];
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L9():
    x6 = force? x5;
    checkMissing(x6);
    c1 = `is.object`(x6);
    if c1 then L10() else L11(x6);
  L2(dx3):
    st y = dx3;
    cat = ldf cat;
    check L15() else D4();
  L10():
    dr2 = tryDispatchBuiltin.1("[", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L12() else L11(dr2);
  L11(x8):
    m = ld m;
    check L13() else D2();
  D2():
    deopt 6 [x8, m];
  D4():
    deopt 15 [];
  L12():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L13():
    m1 = force? m;
    checkMissing(m1);
    r7 = `-`(<missing>, m1);
    m2 = ld m;
    check L14() else D3();
  L15():
    p1 = prom<V +>{
      sym1 = ldf attr;
      base1 = ldf attr in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      attr = ldf attr in base;
      r12 = dyn attr(x10, "name");
      goto L0(r12);
    L2():
      r10 = dyn base1(<sym x>, "name");
      goto L0(r10);
    };
    r14 = dyn cat(p1, "\n");
    check L16() else D5();
  D3():
    deopt 8 [x8, r7, m2];
  D5():
    deopt 18 [r14];
  L14():
    m3 = force? m2;
    checkMissing(m3);
    r8 = `:`(r7, m3);
    st i = r8;
    __ = ldf `[` in base;
    r9 = dyn __(x8, r8);
    goto L2(r9);
  L16():
    cat1 = ldf cat;
    check L17() else D6();
  D6():
    deopt 20 [];
  L17():
    p7 = prom<V +>{
      paste0 = ldf paste0;
      p3 = prom<V +>{
        format = ldf format;
        p2 = prom<V +>{
          i = ld i;
          i1 = force? i;
          checkMissing(i1);
          return i1;
        };
        r16 = dyn format(p2);
        return r16;
      };
      p6 = prom<V +>{
        format1 = ldf format;
        p4 = prom<V +>{
          y = ld y;
          y1 = force? y;
          checkMissing(y1);
          return y1;
        };
        p5 = prom<V +>{
          digits1 = ld digits;
          digits2 = force? digits1;
          checkMissing(digits2);
          return digits2;
        };
        r20 = dyn format1[, digits](p4, p5);
        return r20;
      };
      r22 = dyn paste0("coef[", p3, "] = ", p6);
      return r22;
    };
    r24 = dyn cat1[, sep](p7, "\n");
    check L18() else D7();
  D7():
    deopt 24 [r24];
  L18():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L3(r26):
    popenv;
    return r26;
  L19():
    x11 = ld x;
    check L21() else D8();
  L20():
    r25 = dyn base2(<sym x>);
    goto L3(r25);
  D8():
    deopt 27 [x11];
  L21():
    x12 = force? x11;
    checkMissing(x12);
    invisible = ldf invisible in base;
    r27 = dyn invisible(x12);
    check L22() else D9();
  D9():
    deopt 30 [r27];
  L22():
    goto L3(r27);
  }
}