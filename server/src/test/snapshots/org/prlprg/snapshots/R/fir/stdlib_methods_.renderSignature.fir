fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2233438014;
    st `.renderSignature` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2233438014(f, signature) {
  (reg f:*, reg signature:*) -+> V { var f:*, var signature:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg signature1:*, reg signature2:V, reg names:cls, reg r2:V, reg paste0:cls, reg nm:*, reg nm1:V, reg c:L, reg nm3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg nm6:V, reg r4:V, reg nm7:*, reg nm8:V, reg nzchar:cls, reg r5:V, reg __:cls, reg r6:V, reg p:p(V +), reg r8:V, reg l:*, reg c1:L, reg r10:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg l5:*, reg r19:V, reg r20:V, reg nm9:*, reg nm10:V, reg nzchar1:cls, reg r21:V, reg ___:cls, reg r22:V, reg paste1:cls, reg nm11:*, reg nm12:V, reg p1:p(V +), reg as_vector:cls, reg signature3:*, reg signature4:V, reg p2:p(V +), reg r25:V, reg p3:p(V +), reg r27:V, reg paste2:cls, reg msig:*, reg msig1:V, reg p4:p(V +), reg r29:V, reg gettextf:cls, reg sQuote:cls, reg f1:*, reg f2:V, reg p5:p(V +), reg r31:V, reg p6:p(V +), reg sQuote1:cls, reg msig2:*, reg msig3:V, reg p7:p(V +), reg r34:V, reg p8:p(V +), reg r36:V |
    mkenv;
    st f = f;
    st signature = signature;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    st nm = r1;
    paste0 = ldf paste0;
    check L7() else D2();
  L3():
    signature1 = ld signature;
    check L5() else D0();
  L4():
    r = dyn base(<sym signature>);
    goto L0(r);
  D0():
    deopt 2 [signature1];
  D2():
    deopt 8 [];
  L5():
    signature2 = force? signature1;
    checkMissing(signature2);
    names = ldf names in base;
    r2 = dyn names(signature2);
    check L6() else D1();
  L7():
    p = prom<V +>{
      nm = ld nm;
      nm1 = force? nm;
      checkMissing(nm1);
      c = `is.object`(nm1);
      if c then L2() else L3(nm1);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", nm1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(nm3):
      sym1 = ldf nzchar;
      base1 = ldf nzchar in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L5() else L6();
    L1(nm6, r4):
      __ = ldf `[` in base;
      r6 = dyn __(nm6, r4);
      goto L0(r6);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      nm7 = ld nm;
      nm8 = force? nm7;
      checkMissing(nm8);
      nzchar = ldf nzchar in base;
      r5 = dyn nzchar(nm8);
      goto L1(nm3, r5);
    L6():
      r3 = dyn base1(<sym nm>);
      goto L1(nm3, r3);
    };
    r8 = dyn paste0(p, "=");
    check L8() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 11 [r8];
  L6():
    goto L0(r2);
  L8():
    l = ld nm;
    c1 = `is.object`(l);
    if c1 then L9() else L10(r8, l);
  L1(dx3):
    st nm = dx3;
    paste1 = ldf paste0;
    check L16() else D6();
  L9():
    dr2 = tryDispatchBuiltin.0("[<-", l, r8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L11() else L10(r8, dr2);
  L10(r10, l2):
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  D6():
    deopt 22 [];
  L2(r18, l5, r19, r20):
    ___ = ldf `[<-` in base;
    r22 = dyn ___(l5, r19, r20);
    goto L1(r22);
  L11():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx2);
  L12():
    nm9 = ld nm;
    check L14() else D4();
  L13():
    r17 = dyn base2(<sym nm>);
    goto L2(r10, l2, r8, r17);
  L16():
    p1 = prom<V +>{
      nm11 = ld nm;
      nm12 = force? nm11;
      checkMissing(nm12);
      return nm12;
    };
    p3 = prom<V +>{
      as_vector = ldf `as.vector`;
      p2 = prom<V +>{
        signature3 = ld signature;
        signature4 = force? signature3;
        checkMissing(signature4);
        return signature4;
      };
      r25 = dyn as_vector(p2);
      return r25;
    };
    r27 = dyn paste1(p1, "\"", p3, "\"");
    check L17() else D7();
  D4():
    deopt 15 [r10, l2, r8, nm9];
  D7():
    deopt 27 [r27];
  L14():
    nm10 = force? nm9;
    checkMissing(nm10);
    nzchar1 = ldf nzchar in base;
    r21 = dyn nzchar1(nm10);
    check L15() else D5();
  L17():
    st msig = r27;
    paste2 = ldf paste;
    check L18() else D8();
  D5():
    deopt 18 [r10, l2, r8, r21];
  D8():
    deopt 30 [];
  L15():
    goto L2(r10, l2, r8, r21);
  L18():
    p4 = prom<V +>{
      msig = ld msig;
      msig1 = force? msig;
      checkMissing(msig1);
      return msig1;
    };
    r29 = dyn paste2[, collapse](p4, ",");
    check L19() else D9();
  D9():
    deopt 34 [r29];
  L19():
    st msig = r29;
    gettextf = ldf gettextf;
    check L20() else D10();
  D10():
    deopt 37 [];
  L20():
    p6 = prom<V +>{
      sQuote = ldf sQuote;
      p5 = prom<V +>{
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
      r31 = dyn sQuote(p5);
      return r31;
    };
    p8 = prom<V +>{
      sQuote1 = ldf sQuote;
      p7 = prom<V +>{
        msig2 = ld msig;
        msig3 = force? msig2;
        checkMissing(msig3);
        return msig3;
      };
      r34 = dyn sQuote1(p7);
      return r34;
    };
    r36 = dyn gettextf("in method for %s with signature %s: ", p6, p8);
    check L21() else D11();
  D11():
    deopt 41 [r36];
  L21():
    popenv;
    return r36;
  }
}