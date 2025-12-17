fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3400273441;
    st `print.infl` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3400273441(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var `...`:dots?, reg cat:cls, reg deparse:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg apply:cls, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r11:V, reg p3:p(V +), reg any:*, reg any1:V, reg p4:p(V +), reg r14:V, reg print:cls, reg data_frame:cls, reg x9:*, reg x10:V, reg c2:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r15:V, reg p5:p(V +), reg ifelse:cls, reg is_star:*, reg is_star1:V, reg p6:p(V +), reg r18:V, reg p7:p(V +), reg r20:V, reg p8:p(V +), reg digits1:*, reg digits2:V, reg p9:p(V +), reg ddd1:dots?, reg r23:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r24:V, reg r25:V, reg x13:*, reg x14:V, reg invisible:cls, reg r26:V |
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
      r3 = `-`(r2, 4);
      max = ldf max in base;
      r4 = dyn max(3, r3);
      goto L0(r4);
    L2():
      r = dyn base(3, <lang `-`(getOption("digits"), 4)>);
      goto L0(r);
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    cat = ldf cat;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
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
        r6 = `$`(x4, <sym call>);
        goto L0(r6);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r8 = dyn deparse(p1);
      return r8;
    };
    r10 = dyn cat("Influence measures of\n\t", p2, ":\n\n");
    check L4() else D1();
  D1():
    deopt 5 [r10];
  L4():
    apply = ldf apply;
    check L5() else D2();
  D2():
    deopt 7 [];
  L5():
    p3 = prom<V +>{
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
      r11 = `$`(x8, <sym is.inf>);
      goto L0(r11);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p4 = prom<V +>{
      any = ld any;
      any1 = force? any;
      checkMissing(any1);
      return any1;
    };
    r14 = dyn apply[, , , `na.rm`](p3, 1, p4, TRUE);
    check L6() else D3();
  D3():
    deopt 13 [r14];
  L6():
    st `is.star` = r14;
    print = ldf print;
    check L7() else D4();
  D4():
    deopt 16 [];
  L7():
    p8 = prom<V +>{
      data_frame = ldf `data.frame`;
      p5 = prom<V +>{
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
        r15 = `$`(x12, <sym infmat>);
        goto L0(r15);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      p7 = prom<V +>{
        ifelse = ldf ifelse;
        p6 = prom<V +>{
          is_star = ld `is.star`;
          is_star1 = force? is_star;
          checkMissing(is_star1);
          return is_star1;
        };
        r18 = dyn ifelse(p6, "*", " ");
        return r18;
      };
      r20 = dyn data_frame[, inf](p5, p7);
      return r20;
    };
    p9 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    ddd1 = ld `...`;
    r23 = dyn print[, digits, `...`](p8, p9, ddd1);
    check L8() else D5();
  D5():
    deopt 21 [r23];
  L8():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L2(r25):
    popenv;
    return r25;
  L9():
    x13 = ld x;
    check L11() else D6();
  L10():
    r24 = dyn base1(<sym x>);
    goto L2(r24);
  D6():
    deopt 24 [x13];
  L11():
    x14 = force? x13;
    checkMissing(x14);
    invisible = ldf invisible in base;
    r26 = dyn invisible(x14);
    check L12() else D7();
  D7():
    deopt 27 [r26];
  L12():
    goto L2(r26);
  }
}