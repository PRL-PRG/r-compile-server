fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner586443352;
    st `qr.Q` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner586443352(qr, complete, Dvec) {
  (reg qr:*, reg complete:*, reg Dvec:*) -+> V { var qr:*, var complete:*, reg complete_isMissing:L, reg complete_orDefault:*, var Dvec:*, reg is_qr:cls, reg qr1:*, reg qr2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg stop:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg qr3:*, reg qr4:V, reg c1:L, reg qr6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg dim:cls, reg r8:V, reg dqr:*, reg dqr1:V, reg c2:L, reg dqr3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r9:V, reg mode:cls, reg qr7:*, reg qr8:V, reg c3:L, reg qr10:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r10:V, reg p1:p(V +), reg r12:V, reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg missing:cls, reg r16:V, reg c4:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg cmplx:*, reg cmplx1:V, reg c5:L, reg r19:V, reg complete1:*, reg complete2:V, reg c6:L, reg n:*, reg n1:V, reg n2:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg dqr4:*, reg dqr5:V, reg min:cls, reg r21:V, reg rep_int:cls, reg r22:V, reg complete3:*, reg complete4:V, reg c7:L, reg diag:cls, reg Dvec1:*, reg Dvec2:V, reg p2:p(V +), reg n3:*, reg n4:V, reg p3:p(V +), reg r26:V, reg r27:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg dqr6:*, reg dqr7:V, reg min1:cls, reg r30:V, reg diag1:cls, reg Dvec3:*, reg Dvec4:V, reg c8:L, reg Dvec6:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg Dvec9:V, reg r32:V, reg ncols:*, reg ncols1:V, reg r33:I, reg __1:cls, reg r34:V, reg p4:p(V +), reg n5:*, reg n6:V, reg p5:p(V +), reg ncols2:*, reg ncols3:V, reg p6:p(V +), reg r38:V, reg qr_qy:cls, reg qr11:*, reg qr12:V, reg p7:p(V +), reg D:*, reg D1:V, reg p8:p(V +), reg r41:V |
    mkenv;
    st qr = qr;
    complete_isMissing = missing.0(complete);
    if complete_isMissing then L0(FALSE) else L0(complete);
  L0(complete_orDefault):
    st complete = complete_orDefault;
    st Dvec = Dvec;
    is_qr = ldf `is.qr`;
    check L16() else D0();
  D0():
    deopt 1 [];
  L16():
    p = prom<V +>{
      qr1 = ld qr;
      qr2 = force? qr1;
      checkMissing(qr2);
      return qr2;
    };
    r1 = dyn is_qr(p);
    check L17() else D1();
  D1():
    deopt 3 [r1];
  L17():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L18() else L1();
  L1():
    goto L2();
  L2():
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L18():
    stop = ldf stop;
    check L19() else D2();
  D2():
    deopt 6 [];
  L3(r6):
    st dqr = r6;
    dqr = ld dqr;
    check L30() else D6();
  L19():
    r3 = dyn stop("argument is not a QR decomposition");
    check L20() else D3();
  L22():
    qr3 = ld qr;
    check L24() else D4();
  L23():
    r5 = dyn base(<lang `$`(qr, qr)>);
    goto L3(r5);
  D3():
    deopt 8 [r3];
  D4():
    deopt 13 [qr3];
  D6():
    deopt 19 [dqr];
  L20():
    goto L2();
  L24():
    qr4 = force? qr3;
    checkMissing(qr4);
    c1 = `is.object`(qr4);
    if c1 then L26() else L27(qr4);
  L30():
    dqr1 = force? dqr;
    checkMissing(dqr1);
    c2 = `is.object`(dqr1);
    if c2 then L31() else L32(dqr1);
  L4(dx3):
    st n = dx3;
    mode = ldf mode;
    check L34() else D7();
  L25(dx1):
    dim = ldf dim in base;
    r8 = dyn dim(dx1);
    check L29() else D5();
  L26():
    dr = tryDispatchBuiltin.1("$", qr4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L28() else L27(dr);
  L27(qr6):
    r7 = `$`(qr6, <sym qr>);
    goto L25(r7);
  L31():
    dr2 = tryDispatchBuiltin.1("[", dqr1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L33() else L32(dr2);
  L32(dqr3):
    __ = ldf `[` in base;
    r9 = dyn __(dqr3, 1);
    goto L4(r9);
  D5():
    deopt 17 [r8];
  D7():
    deopt 26 [];
  L28():
    dx = getTryDispatchBuiltinValue(dr);
    goto L25(dx);
  L29():
    goto L3(r8);
  L33():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L34():
    p1 = prom<V +>{
      qr7 = ld qr;
      qr8 = force? qr7;
      checkMissing(qr8);
      c3 = `is.object`(qr8);
      if c3 then L1() else L2(qr8);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", qr8);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(qr10):
      r10 = `$`(qr10, <sym qr>);
      goto L0(r10);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r12 = dyn mode(p1);
    check L35() else D8();
  D8():
    deopt 28 [r12];
  L35():
    r13 = `==`(r12, "complex");
    st cmplx = r13;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L36() else L37();
  L5(r15):
    c4 = `as.logical`(r15);
    if c4 then L38() else L6();
  L36():
    missing = ldf missing in base;
    r16 = dyn missing(<sym Dvec>);
    goto L5(r16);
  L37():
    r14 = dyn base1(<sym Dvec>);
    goto L5(r14);
  L6():
    goto L12();
  L12():
    complete3 = ld complete;
    check L54() else D15();
  L38():
    sym2 = ldf `rep.int`;
    base2 = ldf `rep.int` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  D15():
    deopt 58 [complete3];
  L7(r18):
    st Dvec = r18;
    goto L12();
  L39():
    cmplx = ld cmplx;
    check L41() else D9();
  L40():
    r17 = dyn base2(<lang if(cmplx, `+`(1.0, `(`(`+`(0.0, 0.0i))), 1.0)>, <lang if(complete, n, min(dqr))>);
    goto L7(r17);
  L54():
    complete4 = force? complete3;
    checkMissing(complete4);
    c7 = `as.logical`(complete4);
    if c7 then L55() else L13();
  D9():
    deopt 37 [cmplx];
  L13():
    sym4 = ldf min;
    base4 = ldf min in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L59() else L60();
  L14(r27):
    st D = r27;
    qr_qy = ldf `qr.qy`;
    check L65() else D22();
  L41():
    cmplx1 = force? cmplx;
    checkMissing(cmplx1);
    c5 = `as.logical`(cmplx1);
    if c5 then L42() else L8();
  L55():
    diag = ldf diag;
    check L56() else D16();
  D16():
    deopt 61 [];
  D22():
    deopt 82 [];
  L8():
    goto L9(1.0);
  L9(r19):
    complete1 = ld complete;
    check L44() else D10();
  L15(r29):
    st ncols = r29;
    diag1 = ldf diag;
    check L63() else D20();
  L42():
    goto L9(1.0+0.0i);
  L56():
    p2 = prom<V +>{
      Dvec1 = ld Dvec;
      Dvec2 = force? Dvec1;
      checkMissing(Dvec2);
      return Dvec2;
    };
    p3 = prom<V +>{
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      return n4;
    };
    r26 = dyn diag(p2, p3);
    check L57() else D17();
  L59():
    dqr6 = ld dqr;
    check L61() else D18();
  L60():
    r28 = dyn base4(<sym dqr>);
    goto L15(r28);
  L65():
    p7 = prom<V +>{
      qr11 = ld qr;
      qr12 = force? qr11;
      checkMissing(qr12);
      return qr12;
    };
    p8 = prom<V +>{
      D = ld D;
      D1 = force? D;
      checkMissing(D1);
      return D1;
    };
    r41 = dyn qr_qy(p7, p8);
    check L66() else D23();
  D10():
    deopt 43 [complete1];
  D17():
    deopt 64 [r26];
  D18():
    deopt 67 [dqr6];
  D20():
    deopt 73 [];
  D23():
    deopt 85 [r41];
  L44():
    complete2 = force? complete1;
    checkMissing(complete2);
    c6 = `as.logical`(complete2);
    if c6 then L45() else L10();
  L57():
    goto L14(r26);
  L61():
    dqr7 = force? dqr6;
    checkMissing(dqr7);
    min1 = ldf min in base;
    r30 = dyn min1(dqr7);
    check L62() else D19();
  L63():
    p4 = prom<V +>{
      Dvec3 = ld Dvec;
      Dvec4 = force? Dvec3;
      checkMissing(Dvec4);
      c8 = `is.object`(Dvec4);
      if c8 then L2() else L3(Dvec4);
    L0(dx7):
      return dx7;
    L2():
      dr6 = tryDispatchBuiltin.1("[", Dvec4);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L4() else L3(dr6);
    L3(Dvec6):
      sym5 = ldf seq_len;
      base5 = ldf seq_len in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L5() else L6();
    L1(Dvec9, r32):
      __1 = ldf `[` in base;
      r34 = dyn __1(Dvec9, r32);
      goto L0(r34);
    L4():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    L5():
      ncols = ld ncols;
      ncols1 = force? ncols;
      checkMissing(ncols1);
      r33 = seq_len(ncols1);
      goto L1(Dvec6, r33);
    L6():
      r31 = dyn base5(<sym ncols>);
      goto L1(Dvec6, r31);
    };
    p5 = prom<V +>{
      n5 = ld n;
      n6 = force? n5;
      checkMissing(n6);
      return n6;
    };
    p6 = prom<V +>{
      ncols2 = ld ncols;
      ncols3 = force? ncols2;
      checkMissing(ncols3);
      return ncols3;
    };
    r38 = dyn diag1[, nrow, ncol](p4, p5, p6);
    check L64() else D21();
  L66():
    popenv;
    return r41;
  D19():
    deopt 70 [r30];
  D21():
    deopt 79 [r38];
  L10():
    sym3 = ldf min;
    base3 = ldf min in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  L11(n2):
    rep_int = ldf `rep.int` in base;
    r22 = dyn rep_int(r19, n2);
    check L52() else D14();
  L45():
    n = ld n;
    check L46() else D11();
  L62():
    goto L15(r30);
  L64():
    goto L14(r38);
  D11():
    deopt 45 [n];
  D14():
    deopt 54 [r22];
  L46():
    n1 = force? n;
    checkMissing(n1);
    goto L11(n1);
  L48():
    dqr4 = ld dqr;
    check L50() else D12();
  L49():
    r20 = dyn base3(<sym dqr>);
    goto L11(r20);
  L52():
    goto L7(r22);
  D12():
    deopt 49 [dqr4];
  L50():
    dqr5 = force? dqr4;
    checkMissing(dqr5);
    min = ldf min in base;
    r21 = dyn min(dqr5);
    check L51() else D13();
  D13():
    deopt 52 [r21];
  L51():
    goto L11(r21);
  }
}