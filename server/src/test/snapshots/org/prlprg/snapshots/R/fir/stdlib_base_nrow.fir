fun main() {
  () -+> V { reg r:cls, reg matrix:cls, reg r1:V, reg p:p(V +), reg r3:V, reg nrow:cls, reg ma:*, reg ma1:V, reg p1:p(V +), reg r5:V, reg ncol:cls, reg ma2:*, reg ma3:V, reg p2:p(V +), reg r7:V, reg ncol1:cls, reg array:cls, reg r8:V, reg p3:p(V +), reg p4:p(V +), reg r11:V, reg p5:p(V +), reg r13:V, reg NCOL:cls, reg r14:V, reg p6:p(V +), reg r16:V, reg NROW:cls, reg r17:V, reg p7:p(V +), reg r19:V, reg sym:cls, reg base:cls, reg guard:L, reg r20:V, reg as_matrix:cls, reg numeric:cls, reg r22:V, reg p8:p(V +), reg r24:V, reg dim:cls, reg r25:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r26:V, reg cbind:cls, reg numeric1:cls, reg r28:V, reg p9:p(V +), reg r30:V, reg dim1:cls, reg r31:V, reg NCOL1:cls, reg numeric2:cls, reg r32:V, reg p10:p(V +), reg r34:V, reg NCOL2:cls, reg r35:V |
    mkenv;
    r = clos inner2501545716;
    st nrow = r;
    matrix = ldf matrix;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    p = prom<V +>{
      r1 = `:`(1.0, 12.0);
      return r1;
    };
    r3 = dyn matrix(p, 3.0, 4.0);
    check L3() else D1();
  D1():
    deopt 8 [r3];
  L3():
    st ma = r3;
    nrow = ldf nrow;
    check L4() else D2();
  D2():
    deopt 11 [];
  L4():
    p1 = prom<V +>{
      ma = ld ma;
      ma1 = force? ma;
      checkMissing(ma1);
      return ma1;
    };
    r5 = dyn nrow(p1);
    check L5() else D3();
  D3():
    deopt 13 [r5];
  L5():
    ncol = ldf ncol;
    check L6() else D4();
  D4():
    deopt 15 [];
  L6():
    p2 = prom<V +>{
      ma2 = ld ma;
      ma3 = force? ma2;
      checkMissing(ma3);
      return ma3;
    };
    r7 = dyn ncol(p2);
    check L7() else D5();
  D5():
    deopt 17 [r7];
  L7():
    ncol1 = ldf ncol;
    check L8() else D6();
  D6():
    deopt 19 [];
  L8():
    p5 = prom<V +>{
      array = ldf array;
      p3 = prom<V +>{
        r8 = `:`(1.0, 24.0);
        return r8;
      };
      p4 = prom<V +>{
        return <int 2, 3, 4>;
      };
      r11 = dyn array[, dim](p3, p4);
      return r11;
    };
    r13 = dyn ncol1(p5);
    check L9() else D7();
  D7():
    deopt 21 [r13];
  L9():
    NCOL = ldf NCOL;
    check L10() else D8();
  D8():
    deopt 23 [];
  L10():
    p6 = prom<V +>{
      r14 = `:`(1.0, 12.0);
      return r14;
    };
    r16 = dyn NCOL(p6);
    check L11() else D9();
  D9():
    deopt 25 [r16];
  L11():
    NROW = ldf NROW;
    check L12() else D10();
  D10():
    deopt 27 [];
  L12():
    p7 = prom<V +>{
      r17 = `:`(1.0, 12.0);
      return r17;
    };
    r19 = dyn NROW(p7);
    check L13() else D11();
  D11():
    deopt 29 [r19];
  L13():
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0():
    sym1 = ldf dim;
    base1 = ldf dim in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L14():
    as_matrix = ldf `as.matrix`;
    check L16() else D12();
  L15():
    r20 = dyn base(<lang as.matrix(numeric())>);
    goto L0();
  D12():
    deopt 33 [];
  L1():
    NCOL1 = ldf NCOL;
    check L24() else D18();
  L16():
    p8 = prom<V +>{
      numeric = ldf numeric;
      r22 = dyn numeric();
      return r22;
    };
    r24 = dyn as_matrix(p8);
    check L17() else D13();
  L19():
    cbind = ldf cbind;
    check L21() else D15();
  L20():
    r26 = dyn base1(<lang cbind(numeric())>);
    goto L1();
  D13():
    deopt 35 [r24];
  D15():
    deopt 41 [];
  D18():
    deopt 47 [];
  L17():
    dim = ldf dim in base;
    r25 = dyn dim(r24);
    check L18() else D14();
  L21():
    p9 = prom<V +>{
      numeric1 = ldf numeric;
      r28 = dyn numeric1();
      return r28;
    };
    r30 = dyn cbind(p9);
    check L22() else D16();
  L24():
    p10 = prom<V +>{
      numeric2 = ldf numeric;
      r32 = dyn numeric2();
      return r32;
    };
    r34 = dyn NCOL1(p10);
    check L25() else D19();
  D14():
    deopt 37 [r25];
  D16():
    deopt 43 [r30];
  D19():
    deopt 49 [r34];
  L18():
    goto L0();
  L22():
    dim1 = ldf dim in base;
    r31 = dyn dim1(r30);
    check L23() else D17();
  L25():
    NCOL2 = ldf NCOL;
    check L26() else D20();
  D17():
    deopt 45 [r31];
  D20():
    deopt 51 [];
  L23():
    goto L1();
  L26():
    r35 = dyn NCOL2(NULL);
    check L27() else D21();
  D21():
    deopt 53 [r35];
  L27():
    popenv;
    return r35;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg dim:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V |
    mkenv;
    st x = x;
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `is.object`(r1);
    if c then L6() else L7(r1);
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(dx1):
    popenv;
    return dx1;
  L4():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r2 = dyn dim(x2);
    check L5() else D1();
  L6():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(r4):
    __ = ldf `[` in base;
    r5 = dyn __(r4, 1);
    goto L1(r5);
  D1():
    deopt 5 [r2];
  L5():
    goto L0(r2);
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  }
}