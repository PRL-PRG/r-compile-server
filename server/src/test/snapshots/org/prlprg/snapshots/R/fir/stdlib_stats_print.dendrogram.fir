fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1591825523;
    st `print.dendrogram` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1591825523(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg cat:cls, reg r2:V, reg is_leaf:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r4:V, reg c:L, reg cat1:cls, reg format:cls, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg x3:*, reg x4:V, reg attr:cls, reg r7:V, reg p2:p(V +), reg digits1:*, reg digits2:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg r12:V, reg cat2:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg x5:*, reg x6:V, reg length:cls, reg r16:V, reg p5:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg x7:*, reg x8:V, reg attr1:cls, reg r20:V, reg p6:p(V +), reg r22:V, reg cat3:cls, reg format1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg x9:*, reg x10:V, reg attr2:cls, reg r25:V, reg p7:p(V +), reg digits3:*, reg digits4:V, reg p8:p(V +), reg r28:V, reg p9:p(V +), reg r30:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg x11:*, reg x12:V, reg invisible:cls, reg r33:V |
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
    r2 = dyn cat("'dendrogram' ");
    check L6() else D1();
  D1():
    deopt 3 [r2];
  L6():
    is_leaf = ldf `is.leaf`;
    check L7() else D2();
  D2():
    deopt 5 [];
  L7():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r4 = dyn is_leaf(p1);
    check L8() else D3();
  D3():
    deopt 7 [r4];
  L8():
    c = `as.logical`(r4);
    if c then L9() else L2();
  L2():
    cat2 = ldf cat;
    check L13() else D6();
  L3():
    cat3 = ldf cat;
    check L15() else D8();
  L9():
    cat1 = ldf cat;
    check L10() else D4();
  D4():
    deopt 9 [];
  D6():
    deopt 17 [];
  D8():
    deopt 25 [];
  L10():
    p4 = prom<V +>{
      format = ldf format;
      p2 = prom<V +>{
        sym = ldf attr;
        base = ldf attr in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r6):
        return r6;
      L1():
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        attr = ldf attr in base;
        r7 = dyn attr(x4, "label");
        goto L0(r7);
      L2():
        r5 = dyn base(<sym x>, "label");
        goto L0(r5);
      };
      p3 = prom<V +>{
        digits1 = ld digits;
        digits2 = force? digits1;
        checkMissing(digits2);
        return digits2;
      };
      r10 = dyn format[, digits](p2, p3);
      return r10;
    };
    r12 = dyn cat1[, , , sep]("leaf '", p4, "'", "");
    check L11() else D5();
  L13():
    p5 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      length = ldf length in base;
      r16 = dyn length(x6);
      goto L0(r16);
    L2():
      r14 = dyn base1(<sym x>);
      goto L0(r14);
    };
    p6 = prom<V +>{
      sym2 = ldf attr;
      base2 = ldf attr in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      attr1 = ldf attr in base;
      r20 = dyn attr1(x8, "members");
      goto L0(r20);
    L2():
      r18 = dyn base2(<sym x>, "members");
      goto L0(r18);
    };
    r22 = dyn cat2("with", p5, "branches and", p6, "members total");
    check L14() else D7();
  L15():
    p9 = prom<V +>{
      format1 = ldf format;
      p7 = prom<V +>{
        sym3 = ldf attr;
        base3 = ldf attr in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r24):
        return r24;
      L1():
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        attr2 = ldf attr in base;
        r25 = dyn attr2(x10, "height");
        goto L0(r25);
      L2():
        r23 = dyn base3(<sym x>, "height");
        goto L0(r23);
      };
      p8 = prom<V +>{
        digits3 = ld digits;
        digits4 = force? digits3;
        checkMissing(digits4);
        return digits4;
      };
      r28 = dyn format1[, digits](p7, p8);
      return r28;
    };
    r30 = dyn cat3(", at height", p9, "\n");
    check L16() else D9();
  D5():
    deopt 15 [r12];
  D7():
    deopt 23 [r22];
  D9():
    deopt 29 [r30];
  L11():
    goto L3();
  L14():
    goto L3();
  L16():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L17() else L18();
  L4(r32):
    popenv;
    return r32;
  L17():
    x11 = ld x;
    check L19() else D10();
  L18():
    r31 = dyn base4(<sym x>);
    goto L4(r31);
  D10():
    deopt 32 [x11];
  L19():
    x12 = force? x11;
    checkMissing(x12);
    invisible = ldf invisible in base;
    r33 = dyn invisible(x12);
    check L20() else D11();
  D11():
    deopt 35 [r33];
  L20():
    goto L4(r33);
  }
}