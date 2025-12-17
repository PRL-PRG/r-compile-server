fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner278417591;
    st `print.summary.aov` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner278417591(x, digits, `symbolic.cor`, `signif.stars`, `...`) {
  (reg x:*, reg digits:*, reg symbolic_cor:*, reg signif_stars:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var `symbolic.cor`:*, reg symbolic_cor_isMissing:L, reg symbolic_cor_orDefault:*, var `signif.stars`:*, reg signif_stars_isMissing:L, reg signif_stars_orDefault:*, reg getOption1:cls, reg r6:V, reg p1:p(V +), var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg x1:*, reg x2:V, reg length:cls, reg r10:V, reg r11:V, reg c:L, reg print:cls, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r12:V, reg p2:p(V +), reg digits1:*, reg digits2:V, reg p3:p(V +), reg symbolic_cor1:*, reg symbolic_cor2:V, reg p4:p(V +), reg signif_stars1:*, reg signif_stars2:V, reg p5:p(V +), reg r17:V, reg NextMethod:cls, reg r19:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg naprint:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg x7:*, reg x8:V, reg attr:cls, reg r24:V, reg p6:p(V +), reg r26:V, reg nzchar:cls, reg r27:V, reg c2:L, reg cat:cls, reg mess:*, reg mess1:V, reg p7:p(V +), reg r29:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg x9:*, reg x10:V, reg invisible:cls, reg r33:V |
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
    symbolic_cor_isMissing = missing.0(symbolic_cor);
    if symbolic_cor_isMissing then L2(FALSE) else L2(symbolic_cor);
  L2(symbolic_cor_orDefault):
    st `symbolic.cor` = symbolic_cor_orDefault;
    signif_stars_isMissing = missing.0(signif_stars);
    if signif_stars_isMissing then L3() else L4(signif_stars);
  L3():
    p1 = prom<V +>{
      getOption1 = ldf getOption;
      r6 = dyn getOption1("show.signif.stars");
      return r6;
    };
    goto L4(p1);
  L4(signif_stars_orDefault):
    st `signif.stars` = signif_stars_orDefault;
    st `...` = ddd;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L5(r9):
    r11 = `==`(r9, 1);
    c = `as.logical`(r11);
    if c then L16() else L6();
  L12():
    x1 = ld x;
    check L14() else D0();
  L13():
    r8 = dyn base1(<sym x>);
    goto L5(r8);
  D0():
    deopt 2 [x1];
  L6():
    NextMethod = ldf NextMethod;
    check L20() else D4();
  L7():
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L14():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r10 = dyn length(x2);
    check L15() else D1();
  L16():
    print = ldf print;
    check L17() else D2();
  D1():
    deopt 5 [r10];
  D2():
    deopt 9 [];
  D4():
    deopt 19 [];
  L8(r21):
    c2 = `as.logical`(r21);
    if c2 then L27() else L9();
  L15():
    goto L5(r10);
  L17():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      c1 = `is.object`(x4);
      if c1 then L1() else L2(x4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", x4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x6):
      __ = ldf `[[` in base;
      r12 = dyn __(x6, 1);
      goto L0(r12);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p3 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    p4 = prom<V +>{
      symbolic_cor1 = ld `symbolic.cor`;
      symbolic_cor2 = force? symbolic_cor1;
      checkMissing(symbolic_cor2);
      return symbolic_cor2;
    };
    p5 = prom<V +>{
      signif_stars1 = ld `signif.stars`;
      signif_stars2 = force? signif_stars1;
      checkMissing(signif_stars2);
      return signif_stars2;
    };
    r17 = dyn print[, digits, `symbolic.cor`, `signif.stars`](p2, p3, p4, p5);
    check L18() else D3();
  L20():
    r19 = dyn NextMethod();
    check L21() else D5();
  L22():
    naprint = ldf naprint;
    check L24() else D6();
  L23():
    r20 = dyn base2(<lang `<-`(mess, naprint(attr(x, "na.action")))>);
    goto L8(r20);
  D3():
    deopt 17 [r17];
  D5():
    deopt 20 [r19];
  D6():
    deopt 24 [];
  L9():
    goto L10();
  L10():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L31() else L32();
  L18():
    goto L7();
  L21():
    goto L7();
  L24():
    p6 = prom<V +>{
      sym3 = ldf attr;
      base3 = ldf attr in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      attr = ldf attr in base;
      r24 = dyn attr(x8, "na.action");
      goto L0(r24);
    L2():
      r22 = dyn base3(<sym x>, "na.action");
      goto L0(r22);
    };
    r26 = dyn naprint(p6);
    check L25() else D7();
  L27():
    cat = ldf cat;
    check L28() else D9();
  D7():
    deopt 26 [r26];
  D9():
    deopt 31 [];
  L11(r32):
    popenv;
    return r32;
  L25():
    st mess = r26;
    nzchar = ldf nzchar in base;
    r27 = dyn nzchar(r26);
    check L26() else D8();
  L28():
    p7 = prom<V +>{
      mess = ld mess;
      mess1 = force? mess;
      checkMissing(mess1);
      return mess1;
    };
    r29 = dyn cat[, , sep](p7, "\n", "");
    check L29() else D10();
  L31():
    x9 = ld x;
    check L33() else D11();
  L32():
    r31 = dyn base4(<sym x>);
    goto L11(r31);
  D8():
    deopt 29 [r27];
  D10():
    deopt 36 [r29];
  D11():
    deopt 41 [x9];
  L26():
    goto L8(r27);
  L29():
    goto L10();
  L33():
    x10 = force? x9;
    checkMissing(x10);
    invisible = ldf invisible in base;
    r33 = dyn invisible(x10);
    check L34() else D12();
  D12():
    deopt 44 [r33];
  L34():
    goto L11(r33);
  }
}