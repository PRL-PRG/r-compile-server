fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1191979753;
    st `tsdiag.StructTS` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1191979753(object, `gof.lag`, `...`) {
  (reg object:*, reg gof_lag:*, reg ddd:dots) -+> V { var object:*, var `gof.lag`:*, reg gof_lag_isMissing:L, reg gof_lag_orDefault:*, var `...`:dots?, reg par:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg on_exit:cls, reg r7:V, reg object1:*, reg object2:V, reg c1:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r8:V, reg rs:*, reg rs1:V, reg plot:cls, reg stdres:*, reg stdres1:V, reg p1:p(V +), reg r10:V, reg abline:cls, reg r11:V, reg acf:cls, reg object5:*, reg object6:V, reg c2:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r12:V, reg p2:p(V +), reg na_pass:*, reg na_pass1:V, reg p3:p(V +), reg r15:V, reg gof_lag1:*, reg gof_lag2:V, reg numeric:cls, reg nlag:*, reg nlag1:V, reg p4:p(V +), reg r17:V, reg nlag2:*, reg nlag3:V, reg r18:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x:V, reg Box_test:cls, reg rs2:*, reg rs3:V, reg p5:p(V +), reg i5:*, reg i6:V, reg p6:p(V +), reg r21:V, reg c4:L, reg i8:I, reg r23:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i10:I, reg dx5:V, reg r24:V, reg l1:*, reg c5:L, reg i12:I, reg dx7:V, reg l3:*, reg dr6:V, reg dc3:L, reg dx9:V, reg i14:I, reg dx11:V, reg i15:*, reg i16:V, reg ___:cls, reg r25:V, reg plot1:cls, reg nlag4:*, reg nlag5:V, reg r26:V, reg p7:p(V +), reg pval:*, reg pval1:V, reg p8:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg r30:V, reg c6:cls, reg r31:V, reg p9:p(V +), reg r33:V, reg abline1:cls, reg r34:V |
    mkenv;
    st object = object;
    gof_lag_isMissing = missing.0(gof_lag);
    if gof_lag_isMissing then L0(10) else L0(gof_lag);
  L0(gof_lag_orDefault):
    st `gof.lag` = gof_lag_orDefault;
    st `...` = ddd;
    par = ldf par;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c(3.0, 1.0);
      goto L0(r2);
    L2():
      r = dyn base(3.0, 1.0);
      goto L0(r);
    };
    r4 = dyn par[mfrow](p);
    check L6() else D1();
  D1():
    deopt 4 [r4];
  L6():
    st oldpar = r4;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L1():
    object1 = ld object;
    check L9() else D2();
  L7():
    on_exit = ldf `on.exit` in base;
    r7 = dyn on_exit(<lang par(oldpar)>);
    goto L1();
  L8():
    r5 = dyn base1(<lang par(oldpar)>);
    goto L1();
  D2():
    deopt 9 [object1];
  L9():
    object2 = force? object1;
    checkMissing(object2);
    c1 = `is.object`(object2);
    if c1 then L11() else L12(object2);
  L10(dx1):
    st rs = dx1;
    rs = ld rs;
    check L14() else D3();
  L11():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(dr);
  L12(object4):
    r8 = `$`(object4, <sym residuals>);
    goto L10(r8);
  D3():
    deopt 13 [rs];
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L14():
    rs1 = force? rs;
    checkMissing(rs1);
    st stdres = rs1;
    plot = ldf plot;
    check L15() else D4();
  D4():
    deopt 17 [];
  L15():
    p1 = prom<V +>{
      stdres = ld stdres;
      stdres1 = force? stdres;
      checkMissing(stdres1);
      return stdres1;
    };
    r10 = dyn plot[, type, main, ylab](p1, "h", "Standardized Residuals", "");
    check L16() else D5();
  D5():
    deopt 25 [r10];
  L16():
    abline = ldf abline;
    check L17() else D6();
  D6():
    deopt 27 [];
  L17():
    r11 = dyn abline[h](0.0);
    check L18() else D7();
  D7():
    deopt 30 [r11];
  L18():
    acf = ldf acf;
    check L19() else D8();
  D8():
    deopt 32 [];
  L19():
    p2 = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      c2 = `is.object`(object6);
      if c2 then L1() else L2(object6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", object6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(object8):
      r12 = `$`(object8, <sym residuals>);
      goto L0(r12);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p3 = prom<V +>{
      na_pass = ld `na.pass`;
      na_pass1 = force? na_pass;
      checkMissing(na_pass1);
      return na_pass1;
    };
    r15 = dyn acf[, plot, main, `na.action`](p2, TRUE, "ACF of Residuals", p3);
    check L20() else D9();
  D9():
    deopt 40 [r15];
  L20():
    gof_lag1 = ld `gof.lag`;
    check L21() else D10();
  D10():
    deopt 41 [gof_lag1];
  L21():
    gof_lag2 = force? gof_lag1;
    checkMissing(gof_lag2);
    st nlag = gof_lag2;
    numeric = ldf numeric;
    check L22() else D11();
  D11():
    deopt 45 [];
  L22():
    p4 = prom<V +>{
      nlag = ld nlag;
      nlag1 = force? nlag;
      checkMissing(nlag1);
      return nlag1;
    };
    r17 = dyn numeric(p4);
    check L23() else D12();
  D12():
    deopt 47 [r17];
  L23():
    st pval = r17;
    nlag2 = ld nlag;
    check L24() else D13();
  D13():
    deopt 50 [1, nlag2];
  L24():
    nlag3 = force? nlag2;
    checkMissing(nlag3);
    r18 = `:`(1, nlag3);
    s = toForSeq(r18);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l, i2);
    if c3 then L25() else L4();
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    Box_test = ldf `Box.test`;
    check L26() else D14();
  L25():
    plot1 = ldf plot;
    check L36() else D17();
  D14():
    deopt 54 [i2];
  D17():
    deopt 70 [];
  L26():
    p5 = prom<V +>{
      rs2 = ld rs;
      rs3 = force? rs2;
      checkMissing(rs3);
      return rs3;
    };
    p6 = prom<V +>{
      i5 = ld i;
      i6 = force? i5;
      checkMissing(i6);
      return i6;
    };
    r21 = dyn Box_test[, , type](p5, p6, "Ljung-Box");
    check L27() else D15();
  L36():
    p7 = prom<V +>{
      nlag4 = ld nlag;
      nlag5 = force? nlag4;
      checkMissing(nlag5);
      r26 = `:`(1, nlag5);
      return r26;
    };
    p8 = prom<V +>{
      pval = ld pval;
      pval1 = force? pval;
      checkMissing(pval1);
      return pval1;
    };
    p9 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      c6 = ldf c in base;
      r31 = dyn c6(0.0, 1.0);
      goto L0(r31);
    L2():
      r29 = dyn base2(0.0, 1.0);
      goto L0(r29);
    };
    r33 = dyn plot1[, , xlab, ylab, ylim, main](p7, p8, "lag", "p value", p9, "p values for Ljung-Box statistic");
    check L37() else D18();
  D15():
    deopt 59 [i2, r21];
  D18():
    deopt 81 [r33];
  L27():
    c4 = `is.object`(r21);
    if c4 then L29() else L30(i2, r21);
  L37():
    abline1 = ldf abline;
    check L38() else D19();
  D19():
    deopt 83 [];
  L28(i10, dx5):
    l1 = ld pval;
    c5 = `is.object`(l1);
    if c5 then L32() else L33(i10, dx5, l1);
  L29():
    dr4 = tryDispatchBuiltin.1("$", r21);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L31() else L30(i2, dr4);
  L30(i8, r23):
    r24 = `$`(r23, <sym p.value>);
    goto L28(i8, r24);
  L38():
    r34 = dyn abline1[h, lty, col](0.05, 2, "blue");
    check L39() else D20();
  D20():
    deopt 90 [r34];
  L3(i14, dx11):
    st pval = dx11;
    goto L2(i14);
  L31():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L28(i2, dx4);
  L32():
    dr6 = tryDispatchBuiltin.0("[<-", l1, dx5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L34() else L33(i10, dx5, dr6);
  L33(i12, dx7, l3):
    i15 = ld i;
    check L35() else D16();
  L39():
    popenv;
    return r34;
  D16():
    deopt 62 [i12, dx7, l3, dx5, i15];
  L34():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L3(i10, dx9);
  L35():
    i16 = force? i15;
    ___ = ldf `[<-` in base;
    r25 = dyn ___(l3, dx5, i16);
    goto L3(i12, r25);
  }
}