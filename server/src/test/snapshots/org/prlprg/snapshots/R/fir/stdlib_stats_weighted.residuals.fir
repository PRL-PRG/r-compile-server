fun main() {
  () -+> V { reg r:cls, reg __:cls, reg r1:V, reg r2:cls, reg r3:V, reg all_equal:cls, reg weighted_residuals:cls, reg lm_D9:*, reg lm_D10:V, reg p:p(V +), reg r5:V, reg p1:p(V +), reg residuals:cls, reg lm_D11:*, reg lm_D12:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg r10:V, reg rnorm:cls, reg x:*, reg x1:V, reg p4:p(V +), reg r12:V, reg weighted_residuals1:cls, reg lm:cls, reg __1:cls, reg r13:V, reg p5:p(V +), reg w:*, reg w1:V, reg p6:p(V +), reg r16:V, reg p7:p(V +), reg r18:V, reg weighted_residuals2:cls, reg lmxy:*, reg lmxy1:V, reg p8:p(V +), reg r20:V |
    mkenv;
    r = clos inner3750512369;
    st `weighted.residuals` = r;
    __ = ldf `::`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn __("utils", "example");
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    checkFun.0(r1);
    r2 = r1 as cls;
    r3 = dyn r2[, echo]("lm", FALSE);
    check L2() else D2();
  D2():
    deopt 12 [r3];
  L2():
    all_equal = ldf `all.equal`;
    check L3() else D3();
  D3():
    deopt 14 [];
  L3():
    p1 = prom<V +>{
      weighted_residuals = ldf `weighted.residuals`;
      p = prom<V +>{
        lm_D9 = ld `lm.D9`;
        lm_D10 = force? lm_D9;
        checkMissing(lm_D10);
        return lm_D10;
      };
      r5 = dyn weighted_residuals(p);
      return r5;
    };
    p3 = prom<V +>{
      residuals = ldf residuals;
      p2 = prom<V +>{
        lm_D11 = ld `lm.D9`;
        lm_D12 = force? lm_D11;
        checkMissing(lm_D12);
        return lm_D12;
      };
      r8 = dyn residuals(p2);
      return r8;
    };
    r10 = dyn all_equal(p1, p3);
    check L4() else D4();
  D4():
    deopt 17 [r10];
  L4():
    st x = <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    st w = <int 0, 1, 2, 3, 4, 5, 6, 7, 8, 9>;
    rnorm = ldf rnorm;
    check L5() else D5();
  D5():
    deopt 25 [];
  L5():
    p4 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r12 = dyn rnorm(p4);
    check L6() else D6();
  D6():
    deopt 27 [r12];
  L6():
    st y = r12;
    weighted_residuals1 = ldf `weighted.residuals`;
    check L7() else D7();
  D7():
    deopt 30 [];
  L7():
    p7 = prom<V +>{
      lm = ldf lm;
      p5 = prom<V +>{
        __1 = ldf `~` in base;
        r13 = dyn __1(<sym y>, <sym x>);
        return r13;
      };
      p6 = prom<V +>{
        w = ld w;
        w1 = force? w;
        checkMissing(w1);
        return w1;
      };
      r16 = dyn lm[, weights](p5, p6);
      st lmxy = r16;
      invisible.0();
      return r16;
    };
    r18 = dyn weighted_residuals1(p7);
    check L8() else D8();
  D8():
    deopt 32 [r18];
  L8():
    weighted_residuals2 = ldf `weighted.residuals`;
    check L9() else D9();
  D9():
    deopt 34 [];
  L9():
    p8 = prom<V +>{
      lmxy = ld lmxy;
      lmxy1 = force? lmxy;
      checkMissing(lmxy1);
      return lmxy1;
    };
    r20 = dyn weighted_residuals2[, drop0](p8, FALSE);
    check L10() else D10();
  D10():
    deopt 38 [r20];
  L10():
    popenv;
    return r20;
  }
}
fun inner3750512369(obj, drop0) {
  (reg obj:*, reg drop0:*) -+> V { var obj:*, var drop0:*, reg drop0_isMissing:L, reg drop0_orDefault:*, reg weights:cls, reg obj1:*, reg obj2:V, reg p:p(V +), reg r1:V, reg residuals:cls, reg obj3:*, reg obj4:V, reg p1:p(V +), reg r3:V, reg drop1:*, reg drop2:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg c5:L, reg r5:V, reg w:*, reg w1:V, reg c6:V, reg r6:V, reg c7:L, reg c8:V, reg c10:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg r9:*, reg r10:V, reg is_matrix:cls, reg r11:V, reg c11:L, reg r12:*, reg r13:V, reg c12:L, reg r15:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg w2:*, reg w3:V, reg r16:V, reg __:cls, reg r17:V, reg r18:*, reg r19:V, reg c13:L, reg r21:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg w4:*, reg w5:V, reg r22:V, reg __1:cls, reg r23:V, reg r24:*, reg r25:V |
    mkenv;
    st obj = obj;
    drop0_isMissing = missing.0(drop0);
    if drop0_isMissing then L0(TRUE) else L0(drop0);
  L0(drop0_orDefault):
    st drop0 = drop0_orDefault;
    weights = ldf weights;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      obj1 = ld obj;
      obj2 = force? obj1;
      checkMissing(obj2);
      return obj2;
    };
    r1 = dyn weights(p);
    check L9() else D1();
  D1():
    deopt 3 [r1];
  L9():
    st w = r1;
    residuals = ldf residuals;
    check L10() else D2();
  D2():
    deopt 6 [];
  L10():
    p1 = prom<V +>{
      obj3 = ld obj;
      obj4 = force? obj3;
      checkMissing(obj4);
      return obj4;
    };
    r3 = dyn residuals[, type](p1, "deviance");
    check L11() else D3();
  D3():
    deopt 10 [r3];
  L11():
    st r = r3;
    drop1 = ld drop0;
    check L12() else D4();
  D4():
    deopt 12 [drop1];
  L12():
    drop2 = force? drop1;
    checkMissing(drop2);
    c = `as.logical`(drop2);
    if c then L13() else L1(c);
  L1(c2):
    c10 = `as.logical`(c2);
    if c10 then L18() else L3();
  L13():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L2(c5, r5):
    r6 = `!`(r5);
    c7 = `as.logical`(r6);
    c8 = `&&`(c5, c7);
    goto L1(c8);
  L3():
    r24 = ld r;
    check L36() else D12();
  L14():
    w = ld w;
    check L16() else D5();
  L15():
    r4 = dyn base(<sym w>);
    goto L2(c, r4);
  L18():
    sym1 = ldf `is.matrix`;
    base1 = ldf `is.matrix` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  D5():
    deopt 15 [c, w];
  D12():
    deopt 44 [r24];
  L4(r8):
    c11 = `as.logical`(r8);
    if c11 then L23() else L5();
  L16():
    w1 = force? w;
    checkMissing(w1);
    c6 = `==`(w1, NULL);
    goto L2(c, c6);
  L19():
    r9 = ld r;
    check L21() else D6();
  L20():
    r7 = dyn base1(<sym r>);
    goto L4(r7);
  L36():
    r25 = force? r24;
    checkMissing(r25);
    popenv;
    return r25;
  D6():
    deopt 22 [r9];
  L5():
    r18 = ld r;
    check L30() else D10();
  L21():
    r10 = force? r9;
    checkMissing(r10);
    is_matrix = ldf `is.matrix` in base;
    r11 = dyn is_matrix(r10);
    check L22() else D7();
  L23():
    r12 = ld r;
    check L24() else D8();
  D7():
    deopt 25 [r11];
  D8():
    deopt 26 [r12];
  D10():
    deopt 37 [r18];
  L22():
    goto L4(r11);
  L24():
    r13 = force? r12;
    checkMissing(r13);
    c12 = `is.object`(r13);
    if c12 then L25() else L26(r13);
  L30():
    r19 = force? r18;
    checkMissing(r19);
    c13 = `is.object`(r19);
    if c13 then L31() else L32(r19);
  L6(dx1):
    popenv;
    return dx1;
  L7(dx3):
    popenv;
    return dx3;
  L25():
    dr = tryDispatchBuiltin.1("[", r13);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(dr);
  L26(r15):
    w2 = ld w;
    check L28() else D9();
  L31():
    dr2 = tryDispatchBuiltin.1("[", r19);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L33() else L32(dr2);
  L32(r21):
    w4 = ld w;
    check L34() else D11();
  D9():
    deopt 28 [r15, w2];
  D11():
    deopt 39 [r21, w4];
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L28():
    w3 = force? w2;
    checkMissing(w3);
    r16 = `!=`(w3, 0.0);
    __ = ldf `[` in base;
    r17 = dyn __(r13, r16, <missing>, FALSE);
    goto L6(r17);
  L33():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  L34():
    w5 = force? w4;
    checkMissing(w5);
    r22 = `!=`(w5, 0.0);
    __1 = ldf `[` in base;
    r23 = dyn __1(r21, r22);
    goto L7(r23);
  }
}