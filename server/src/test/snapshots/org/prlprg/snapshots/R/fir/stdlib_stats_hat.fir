fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2012961393;
    st hat = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2012961393(x, intercept) {
  (reg x:*, reg intercept:*) -+> V { var x:*, var intercept:*, reg intercept_isMissing:L, reg intercept_orDefault:*, reg is_qr:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg nrow:cls, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg p1:p(V +), reg r4:V, reg intercept1:*, reg intercept2:V, reg c2:L, reg cbind:cls, reg x7:*, reg x8:V, reg p2:p(V +), reg r7:V, reg nrow1:cls, reg x9:*, reg x10:V, reg p3:p(V +), reg r10:V, reg qr:cls, reg x11:*, reg x12:V, reg p4:p(V +), reg r12:V, reg rowSums:cls, reg qr_qy:cls, reg x13:*, reg x14:V, reg p5:p(V +), reg diag:cls, reg n:*, reg n1:V, reg p6:p(V +), reg x15:*, reg x16:V, reg c3:L, reg x18:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r15:V, reg p7:p(V +), reg r17:V, reg p8:p(V +), reg r19:V, reg r20:V, reg p9:p(V +), reg r22:V |
    mkenv;
    st x = x;
    intercept_isMissing = missing.0(intercept);
    if intercept_isMissing then L0(TRUE) else L0(intercept);
  L0(intercept_orDefault):
    st intercept = intercept_orDefault;
    is_qr = ldf `is.qr`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is_qr(p);
    check L6() else D1();
  D1():
    deopt 3 [r1];
  L6():
    c = `as.logical`(r1);
    if c then L7() else L1();
  L1():
    intercept1 = ld intercept;
    check L11() else D4();
  L2():
    rowSums = ldf rowSums;
    check L20() else D11();
  L7():
    nrow = ldf nrow;
    check L8() else D2();
  D2():
    deopt 5 [];
  D4():
    deopt 9 [intercept1];
  D11():
    deopt 30 [];
  L8():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      c1 = `is.object`(x4);
      if c1 then L1() else L2(x4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", x4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x6):
      r2 = `$`(x6, <sym qr>);
      goto L0(r2);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r4 = dyn nrow(p1);
    check L9() else D3();
  L11():
    intercept2 = force? intercept1;
    checkMissing(intercept2);
    c2 = `as.logical`(intercept2);
    if c2 then L12() else L3();
  L20():
    p9 = prom<V +>{
      qr_qy = ldf `qr.qy`;
      p5 = prom<V +>{
        x13 = ld x;
        x14 = force? x13;
        checkMissing(x14);
        return x14;
      };
      p8 = prom<V +>{
        diag = ldf diag;
        p6 = prom<V +>{
          n = ld n;
          n1 = force? n;
          checkMissing(n1);
          return n1;
        };
        p7 = prom<V +>{
          x15 = ld x;
          x16 = force? x15;
          checkMissing(x16);
          c3 = `is.object`(x16);
          if c3 then L1() else L2(x16);
        L0(dx3):
          return dx3;
        L1():
          dr2 = tryDispatchBuiltin.1("$", x16);
          dc1 = getTryDispatchBuiltinDispatched(dr2);
          if dc1 then L3() else L2(dr2);
        L2(x18):
          r15 = `$`(x18, <sym rank>);
          goto L0(r15);
        L3():
          dx2 = getTryDispatchBuiltinValue(dr2);
          goto L0(dx2);
        };
        r17 = dyn diag[, nrow, ncol](1.0, p6, p7);
        return r17;
      };
      r19 = dyn qr_qy(p5, p8);
      r20 = `^`(r19, 2.0);
      return r20;
    };
    r22 = dyn rowSums(p9);
    check L21() else D12();
  D3():
    deopt 7 [r4];
  D12():
    deopt 32 [r22];
  L3():
    goto L4();
  L4():
    nrow1 = ldf nrow;
    check L16() else D7();
  L9():
    st n = r4;
    goto L2();
  L12():
    cbind = ldf cbind;
    check L13() else D5();
  L21():
    popenv;
    return r22;
  D5():
    deopt 12 [];
  D7():
    deopt 20 [];
  L13():
    p2 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r7 = dyn cbind(1.0, p2);
    check L14() else D6();
  L16():
    p3 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r10 = dyn nrow1(p3);
    check L17() else D8();
  D6():
    deopt 15 [r7];
  D8():
    deopt 22 [r10];
  L14():
    st x = r7;
    goto L4();
  L17():
    st n = r10;
    qr = ldf qr;
    check L18() else D9();
  D9():
    deopt 25 [];
  L18():
    p4 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r12 = dyn qr(p4);
    check L19() else D10();
  D10():
    deopt 27 [r12];
  L19():
    st x = r12;
    goto L2();
  }
}