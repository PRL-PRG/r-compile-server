fun main() {
  () -+> V { reg r:cls, reg nls_control:cls, reg p:p(V +), reg r2:V |
    mkenv;
    r = clos inner1517694136;
    st `nls.control` = r;
    nls_control = ldf `nls.control`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      return 4.8828125E-4;
    };
    r2 = dyn nls_control[minFactor](p);
    check L1() else D1();
  D1():
    deopt 7 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner1517694136(maxiter, tol, minFactor, printEval, warnOnly, scaleOffset, nDcentral) {
  (reg maxiter:*, reg tol:*, reg minFactor:*, reg printEval:*, reg warnOnly:*, reg scaleOffset:*, reg nDcentral:*) -+> V { var maxiter:*, reg maxiter_isMissing:L, reg maxiter_orDefault:*, var tol:*, reg tol_isMissing:L, reg tol_orDefault:*, var minFactor:*, reg minFactor_isMissing:L, reg minFactor_orDefault:*, reg p:p(V +), var printEval:*, reg printEval_isMissing:L, reg printEval_orDefault:*, var warnOnly:*, reg warnOnly_isMissing:L, reg warnOnly_orDefault:*, var scaleOffset:*, reg scaleOffset_isMissing:L, reg scaleOffset_orDefault:*, var nDcentral:*, reg nDcentral_isMissing:L, reg nDcentral_orDefault:*, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg tol1:*, reg tol2:V, reg is_numeric:cls, reg r3:V, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg tol3:*, reg tol4:V, reg length:cls, reg r7:V, reg r8:V, reg p2:p(V +), reg tol5:*, reg tol6:V, reg r10:V, reg p3:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg minFactor1:*, reg minFactor2:V, reg is_numeric1:cls, reg r14:V, reg p4:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg minFactor3:*, reg minFactor4:V, reg length1:cls, reg r18:V, reg r19:V, reg p5:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg scaleOffset1:*, reg scaleOffset2:V, reg is_numeric2:cls, reg r23:V, reg p6:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg scaleOffset3:*, reg scaleOffset4:V, reg length2:cls, reg r27:V, reg r28:V, reg p7:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg r31:V, reg nDcentral1:*, reg nDcentral2:V, reg c:L, reg p8:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg r34:V, reg nDcentral3:*, reg nDcentral4:V, reg length3:cls, reg r35:V, reg r36:V, reg p9:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r38:V, reg r39:V, reg nDcentral5:*, reg nDcentral6:V, reg is_na:cls, reg r40:V, reg r41:V, reg p10:p(V +), reg r43:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r44:V, reg r45:V, reg maxiter1:*, reg maxiter2:V, reg tol7:*, reg tol8:V, reg minFactor5:*, reg minFactor6:V, reg printEval1:*, reg printEval2:V, reg warnOnly1:*, reg warnOnly2:V, reg scaleOffset5:*, reg scaleOffset6:V, reg nDcentral7:*, reg nDcentral8:V, reg list:cls, reg r46:V |
    mkenv;
    maxiter_isMissing = missing.0(maxiter);
    if maxiter_isMissing then L0(50.0) else L0(maxiter);
  L0(maxiter_orDefault):
    st maxiter = maxiter_orDefault;
    tol_isMissing = missing.0(tol);
    if tol_isMissing then L1(1.0E-5) else L1(tol);
  L1(tol_orDefault):
    st tol = tol_orDefault;
    minFactor_isMissing = missing.0(minFactor);
    if minFactor_isMissing then L2() else L3(minFactor);
  L2():
    p = prom<V +>{
      return 9.765625E-4;
    };
    goto L3(p);
  L3(minFactor_orDefault):
    st minFactor = minFactor_orDefault;
    printEval_isMissing = missing.0(printEval);
    if printEval_isMissing then L4(FALSE) else L4(printEval);
  L4(printEval_orDefault):
    st printEval = printEval_orDefault;
    warnOnly_isMissing = missing.0(warnOnly);
    if warnOnly_isMissing then L5(FALSE) else L5(warnOnly);
  L5(warnOnly_orDefault):
    st warnOnly = warnOnly_orDefault;
    scaleOffset_isMissing = missing.0(scaleOffset);
    if scaleOffset_isMissing then L6(0.0) else L6(scaleOffset);
  L6(scaleOffset_orDefault):
    st scaleOffset = scaleOffset_orDefault;
    nDcentral_isMissing = missing.0(nDcentral);
    if nDcentral_isMissing then L7(FALSE) else L7(nDcentral);
  L7(nDcentral_orDefault):
    st nDcentral = nDcentral_orDefault;
    stopifnot = ldf stopifnot;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p1 = prom<V +>{
      sym = ldf `is.numeric`;
      base = ldf `is.numeric` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      tol1 = ld tol;
      tol2 = force? tol1;
      checkMissing(tol2);
      is_numeric = ldf `is.numeric` in base;
      r3 = dyn is_numeric(tol2);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym tol>);
      goto L0(r1);
    };
    p2 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      r8 = `==`(r6, 1);
      return r8;
    L1():
      tol3 = ld tol;
      tol4 = force? tol3;
      checkMissing(tol4);
      length = ldf length in base;
      r7 = dyn length(tol4);
      goto L0(r7);
    L2():
      r5 = dyn base1(<sym tol>);
      goto L0(r5);
    };
    p3 = prom<V +>{
      tol5 = ld tol;
      tol6 = force? tol5;
      checkMissing(tol6);
      r10 = `>`(tol6, 0.0);
      return r10;
    };
    p4 = prom<V +>{
      sym2 = ldf `is.numeric`;
      base2 = ldf `is.numeric` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      minFactor1 = ld minFactor;
      minFactor2 = force? minFactor1;
      checkMissing(minFactor2);
      is_numeric1 = ldf `is.numeric` in base;
      r14 = dyn is_numeric1(minFactor2);
      goto L0(r14);
    L2():
      r12 = dyn base2(<sym minFactor>);
      goto L0(r12);
    };
    p5 = prom<V +>{
      sym3 = ldf length;
      base3 = ldf length in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r17):
      r19 = `==`(r17, 1);
      return r19;
    L1():
      minFactor3 = ld minFactor;
      minFactor4 = force? minFactor3;
      checkMissing(minFactor4);
      length1 = ldf length in base;
      r18 = dyn length1(minFactor4);
      goto L0(r18);
    L2():
      r16 = dyn base3(<sym minFactor>);
      goto L0(r16);
    };
    p6 = prom<V +>{
      sym4 = ldf `is.numeric`;
      base4 = ldf `is.numeric` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      scaleOffset1 = ld scaleOffset;
      scaleOffset2 = force? scaleOffset1;
      checkMissing(scaleOffset2);
      is_numeric2 = ldf `is.numeric` in base;
      r23 = dyn is_numeric2(scaleOffset2);
      goto L0(r23);
    L2():
      r21 = dyn base4(<sym scaleOffset>);
      goto L0(r21);
    };
    p7 = prom<V +>{
      sym5 = ldf length;
      base5 = ldf length in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r26):
      r28 = `==`(r26, 1);
      return r28;
    L1():
      scaleOffset3 = ld scaleOffset;
      scaleOffset4 = force? scaleOffset3;
      checkMissing(scaleOffset4);
      length2 = ldf length in base;
      r27 = dyn length2(scaleOffset4);
      goto L0(r27);
    L2():
      r25 = dyn base5(<sym scaleOffset>);
      goto L0(r25);
    };
    p8 = prom<V +>{
      sym6 = ldf `is.logical`;
      base6 = ldf `is.logical` in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      nDcentral1 = ld nDcentral;
      nDcentral2 = force? nDcentral1;
      checkMissing(nDcentral2);
      c = `is.logical`(nDcentral2);
      goto L0(c);
    L2():
      r30 = dyn base6(<sym nDcentral>);
      goto L0(r30);
    };
    p9 = prom<V +>{
      sym7 = ldf length;
      base7 = ldf length in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r34):
      r36 = `==`(r34, 1);
      return r36;
    L1():
      nDcentral3 = ld nDcentral;
      nDcentral4 = force? nDcentral3;
      checkMissing(nDcentral4);
      length3 = ldf length in base;
      r35 = dyn length3(nDcentral4);
      goto L0(r35);
    L2():
      r33 = dyn base7(<sym nDcentral>);
      goto L0(r33);
    };
    p10 = prom<V +>{
      sym8 = ldf `is.na`;
      base8 = ldf `is.na` in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r39):
      r41 = `!`(r39);
      return r41;
    L1():
      nDcentral5 = ld nDcentral;
      nDcentral6 = force? nDcentral5;
      checkMissing(nDcentral6);
      is_na = ldf `is.na` in base;
      r40 = dyn is_na(nDcentral6);
      goto L0(r40);
    L2():
      r38 = dyn base8(<sym nDcentral>);
      goto L0(r38);
    };
    r43 = dyn stopifnot(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
    check L10() else D1();
  D1():
    deopt 12 [r43];
  L10():
    sym9 = ldf list;
    base9 = ldf list in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L11() else L12();
  L8(r45):
    popenv;
    return r45;
  L11():
    maxiter1 = ld maxiter;
    check L13() else D2();
  L12():
    r44 = dyn base9[maxiter, tol, minFactor, printEval, warnOnly, scaleOffset, nDcentral](<sym maxiter>, <sym tol>, <sym minFactor>, <sym printEval>, <sym warnOnly>, <sym scaleOffset>, <sym nDcentral>);
    goto L8(r44);
  D2():
    deopt 15 [maxiter1];
  L13():
    maxiter2 = force? maxiter1;
    checkMissing(maxiter2);
    tol7 = ld tol;
    check L14() else D3();
  D3():
    deopt 18 [tol7];
  L14():
    tol8 = force? tol7;
    checkMissing(tol8);
    minFactor5 = ld minFactor;
    check L15() else D4();
  D4():
    deopt 21 [minFactor5];
  L15():
    minFactor6 = force? minFactor5;
    checkMissing(minFactor6);
    printEval1 = ld printEval;
    check L16() else D5();
  D5():
    deopt 24 [printEval1];
  L16():
    printEval2 = force? printEval1;
    checkMissing(printEval2);
    warnOnly1 = ld warnOnly;
    check L17() else D6();
  D6():
    deopt 27 [warnOnly1];
  L17():
    warnOnly2 = force? warnOnly1;
    checkMissing(warnOnly2);
    scaleOffset5 = ld scaleOffset;
    check L18() else D7();
  D7():
    deopt 30 [scaleOffset5];
  L18():
    scaleOffset6 = force? scaleOffset5;
    checkMissing(scaleOffset6);
    nDcentral7 = ld nDcentral;
    check L19() else D8();
  D8():
    deopt 33 [nDcentral7];
  L19():
    nDcentral8 = force? nDcentral7;
    checkMissing(nDcentral8);
    list = ldf list in base;
    r46 = dyn list(maxiter2, tol8, minFactor6, printEval2, warnOnly2, scaleOffset6, nDcentral8);
    check L20() else D9();
  D9():
    deopt 37 [r46];
  L20():
    goto L8(r46);
  }
}