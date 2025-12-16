fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `print.summary.warnings` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg attr:cls, reg r5:V, reg n:*, reg n1:V, reg r6:V, reg c:L, reg cat:cls, reg r7:V, reg n2:*, reg n3:V, reg r9:V, reg c1:L, reg print_warnings:cls, reg x5:*, reg x6:V, reg p:p(V +), reg paste:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg cn:*, reg cn1:V, reg sum:cls, reg r13:V, reg p1:p(V +), reg r15:V, reg p2:p(V +), reg r17:V, reg print_warnings1:cls, reg x7:*, reg x8:V, reg p3:p(V +), reg paste1:cls, reg format:cls, reg cn2:*, reg cn3:V, reg p4:p(V +), reg r20:V, reg p5:p(V +), reg r22:V, reg p6:p(V +), reg gettextf:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg cn4:*, reg cn5:V, reg sum1:cls, reg r26:V, reg p7:p(V +), reg r28:V, reg p8:p(V +), reg r30:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg x9:*, reg x10:V, reg invisible:cls, reg r33:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    st n = r1;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r4):
    st cn = r4;
    n = ld n;
    check L14() else D4();
  L8():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L9() else D1();
  L10():
    x3 = ld x;
    check L12() else D2();
  L11():
    r3 = dyn base1(<sym x>, "counts");
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [x3];
  D4():
    deopt 15 [n];
  L9():
    goto L0(r2);
  L12():
    x4 = force? x3;
    checkMissing(x4);
    attr = ldf attr in base;
    r5 = dyn attr(x4, "counts");
    check L13() else D3();
  L14():
    n1 = force? n;
    checkMissing(n1);
    r6 = `==`(n1, 0.0);
    c = `as.logical`(r6);
    if c then L15() else L2();
  D3():
    deopt 13 [r5];
  L2():
    n2 = ld n;
    check L19() else D7();
  L3():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L26() else L27();
  L13():
    goto L1(r5);
  L15():
    cat = ldf cat;
    check L16() else D5();
  D5():
    deopt 20 [];
  D7():
    deopt 23 [n2];
  L5(r32):
    popenv;
    return r32;
  L16():
    r7 = dyn cat("No warnings\n");
    check L17() else D6();
  L19():
    n3 = force? n2;
    checkMissing(n3);
    r9 = `==`(n3, 1.0);
    c1 = `as.logical`(r9);
    if c1 then L20() else L4();
  L26():
    x9 = ld x;
    check L28() else D12();
  L27():
    r31 = dyn base4(<sym x>);
    goto L5(r31);
  D6():
    deopt 22 [r7];
  D12():
    deopt 43 [x9];
  L4():
    print_warnings1 = ldf `print.warnings`;
    check L24() else D10();
  L17():
    goto L3();
  L20():
    print_warnings = ldf `print.warnings`;
    check L21() else D8();
  L28():
    x10 = force? x9;
    checkMissing(x10);
    invisible = ldf invisible in base;
    r33 = dyn invisible(x10);
    check L29() else D13();
  D8():
    deopt 28 [];
  D10():
    deopt 34 [];
  D13():
    deopt 46 [r33];
  L21():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p2 = prom<V +>{
      paste = ldf paste;
      p1 = prom<V +>{
        sym2 = ldf sum;
        base2 = ldf sum in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r12):
        return r12;
      L1():
        cn = ld cn;
        cn1 = force? cn;
        checkMissing(cn1);
        sum = ldf sum in base;
        r13 = dyn sum(cn1);
        goto L0(r13);
      L2():
        r11 = dyn base2(<sym cn>);
        goto L0(r11);
      };
      r15 = dyn paste(p1, "identical warnings:\n");
      return r15;
    };
    r17 = dyn print_warnings[, header](p, p2);
    check L22() else D9();
  L24():
    p3 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p6 = prom<V +>{
      paste1 = ldf paste0;
      p5 = prom<V +>{
        format = ldf format;
        p4 = prom<V +>{
          cn2 = ld cn;
          cn3 = force? cn2;
          checkMissing(cn3);
          return cn3;
        };
        r20 = dyn format(p4);
        return r20;
      };
      r22 = dyn paste1(p5, "x : ");
      return r22;
    };
    p8 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        sym3 = ldf sum;
        base3 = ldf sum in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r25):
        return r25;
      L1():
        cn4 = ld cn;
        cn5 = force? cn4;
        checkMissing(cn5);
        sum1 = ldf sum in base;
        r26 = dyn sum1(cn5);
        goto L0(r26);
      L2():
        r24 = dyn base3(<sym cn>);
        goto L0(r24);
      };
      r28 = dyn gettextf("Summary of (a total of %d) warning messages:\n", p7);
      return r28;
    };
    r30 = dyn print_warnings1[, tags, header](p3, p6, p8);
    check L25() else D11();
  L29():
    goto L5(r33);
  D9():
    deopt 32 [r17];
  D11():
    deopt 40 [r30];
  L22():
    goto L3();
  L25():
    goto L3();
  }
}