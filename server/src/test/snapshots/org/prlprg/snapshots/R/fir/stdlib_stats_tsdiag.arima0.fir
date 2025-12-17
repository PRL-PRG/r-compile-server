fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1571354023;
    st `tsdiag.arima0` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1571354023(object, `gof.lag`, `...`) {
  (reg object:*, reg gof_lag:*, reg ddd:dots) -+> V { var object:*, var `gof.lag`:*, reg gof_lag_isMissing:L, reg gof_lag_orDefault:*, var `...`:dots?, reg par:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg on_exit:cls, reg r7:V, reg object1:*, reg object2:V, reg c1:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r8:V, reg rs:*, reg rs1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg rs4:V, reg r10:V, reg object5:*, reg object6:V, reg c2:L, reg rs6:V, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg rs8:V, reg dx3:V, reg r11:V, reg r12:V, reg r13:V, reg plot:cls, reg stdres:*, reg stdres1:V, reg p1:p(V +), reg r15:V, reg abline:cls, reg r16:V, reg acf:cls, reg object9:*, reg object10:V, reg c3:L, reg object12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r17:V, reg p2:p(V +), reg na_pass:*, reg na_pass1:V, reg p3:p(V +), reg r20:V, reg gof_lag1:*, reg gof_lag2:V, reg numeric:cls, reg nlag:*, reg nlag1:V, reg p4:p(V +), reg r22:V, reg nlag2:*, reg nlag3:V, reg r23:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c4:L, reg x:V, reg Box_test:cls, reg rs9:*, reg rs10:V, reg p5:p(V +), reg i5:*, reg i6:V, reg p6:p(V +), reg r26:V, reg c5:L, reg i8:I, reg r28:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i10:I, reg dx7:V, reg r29:V, reg l1:*, reg c6:L, reg i12:I, reg dx9:V, reg l3:*, reg dr8:V, reg dc4:L, reg dx11:V, reg i14:I, reg dx13:V, reg i15:*, reg i16:V, reg ___:cls, reg r30:V, reg plot1:cls, reg nlag4:*, reg nlag5:V, reg r31:V, reg p7:p(V +), reg pval:*, reg pval1:V, reg p8:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r34:V, reg r35:V, reg c7:cls, reg r36:V, reg p9:p(V +), reg r38:V, reg abline1:cls, reg r39:V |
    mkenv;
    st object = object;
    gof_lag_isMissing = missing.0(gof_lag);
    if gof_lag_isMissing then L0(10.0) else L0(gof_lag);
  L0(gof_lag_orDefault):
    st `gof.lag` = gof_lag_orDefault;
    st `...` = ddd;
    par = ldf par;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
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
    check L7() else D1();
  D1():
    deopt 4 [r4];
  L7():
    st oldpar = r4;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L1():
    object1 = ld object;
    check L10() else D2();
  L8():
    on_exit = ldf `on.exit` in base;
    r7 = dyn on_exit(<lang par(oldpar)>);
    goto L1();
  L9():
    r5 = dyn base1(<lang par(oldpar)>);
    goto L1();
  D2():
    deopt 9 [object1];
  L10():
    object2 = force? object1;
    checkMissing(object2);
    c1 = `is.object`(object2);
    if c1 then L12() else L13(object2);
  L11(dx1):
    st rs = dx1;
    rs = ld rs;
    check L15() else D3();
  L12():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(dr);
  L13(object4):
    r8 = `$`(object4, <sym residuals>);
    goto L11(r8);
  D3():
    deopt 13 [rs];
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L15():
    rs1 = force? rs;
    checkMissing(rs1);
    sym2 = ldf sqrt;
    base2 = ldf sqrt in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L2(rs4, r10):
    r13 = `/`(rs4, r10);
    st stdres = r13;
    plot = ldf plot;
    check L23() else D5();
  L16():
    object5 = ld object;
    check L18() else D4();
  L17():
    r9 = dyn base2(<lang `$`(object, sigma2)>);
    goto L2(rs1, r9);
  D4():
    deopt 15 [rs1, object5];
  D5():
    deopt 22 [];
  L18():
    object6 = force? object5;
    checkMissing(object6);
    c2 = `is.object`(object6);
    if c2 then L20() else L21(rs1, object6);
  L23():
    p1 = prom<V +>{
      stdres = ld stdres;
      stdres1 = force? stdres;
      checkMissing(stdres1);
      return stdres1;
    };
    r15 = dyn plot[, type, main, ylab](p1, "h", "Standardized Residuals", "");
    check L24() else D6();
  D6():
    deopt 30 [r15];
  L19(rs8, dx3):
    r12 = sqrt(dx3);
    goto L2(rs8, r12);
  L20():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L22() else L21(rs1, dr2);
  L21(rs6, object8):
    r11 = `$`(object8, <sym sigma2>);
    goto L19(rs6, r11);
  L24():
    abline = ldf abline;
    check L25() else D7();
  D7():
    deopt 32 [];
  L22():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L19(rs1, dx2);
  L25():
    r16 = dyn abline[h](0.0);
    check L26() else D8();
  D8():
    deopt 35 [r16];
  L26():
    acf = ldf acf;
    check L27() else D9();
  D9():
    deopt 37 [];
  L27():
    p2 = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      c3 = `is.object`(object10);
      if c3 then L1() else L2(object10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", object10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(object12):
      r17 = `$`(object12, <sym residuals>);
      goto L0(r17);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p3 = prom<V +>{
      na_pass = ld `na.pass`;
      na_pass1 = force? na_pass;
      checkMissing(na_pass1);
      return na_pass1;
    };
    r20 = dyn acf[, plot, main, `na.action`](p2, TRUE, "ACF of Residuals", p3);
    check L28() else D10();
  D10():
    deopt 45 [r20];
  L28():
    gof_lag1 = ld `gof.lag`;
    check L29() else D11();
  D11():
    deopt 46 [gof_lag1];
  L29():
    gof_lag2 = force? gof_lag1;
    checkMissing(gof_lag2);
    st nlag = gof_lag2;
    numeric = ldf numeric;
    check L30() else D12();
  D12():
    deopt 50 [];
  L30():
    p4 = prom<V +>{
      nlag = ld nlag;
      nlag1 = force? nlag;
      checkMissing(nlag1);
      return nlag1;
    };
    r22 = dyn numeric(p4);
    check L31() else D13();
  D13():
    deopt 52 [r22];
  L31():
    st pval = r22;
    nlag2 = ld nlag;
    check L32() else D14();
  D14():
    deopt 55 [1, nlag2];
  L32():
    nlag3 = force? nlag2;
    checkMissing(nlag3);
    r23 = `:`(1, nlag3);
    s = toForSeq(r23);
    l = length(s);
    i = 0;
    goto L3(i);
  L3(i1):
    i2 = `+`.1(i1, 1);
    c4 = `<`.1(l, i2);
    if c4 then L33() else L5();
  L5():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    Box_test = ldf `Box.test`;
    check L34() else D15();
  L33():
    plot1 = ldf plot;
    check L44() else D18();
  D15():
    deopt 59 [i2];
  D18():
    deopt 75 [];
  L34():
    p5 = prom<V +>{
      rs9 = ld rs;
      rs10 = force? rs9;
      checkMissing(rs10);
      return rs10;
    };
    p6 = prom<V +>{
      i5 = ld i;
      i6 = force? i5;
      checkMissing(i6);
      return i6;
    };
    r26 = dyn Box_test[, , type](p5, p6, "Ljung-Box");
    check L35() else D16();
  L44():
    p7 = prom<V +>{
      nlag4 = ld nlag;
      nlag5 = force? nlag4;
      checkMissing(nlag5);
      r31 = `:`(1, nlag5);
      return r31;
    };
    p8 = prom<V +>{
      pval = ld pval;
      pval1 = force? pval;
      checkMissing(pval1);
      return pval1;
    };
    p9 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r35):
      return r35;
    L1():
      c7 = ldf c in base;
      r36 = dyn c7(0.0, 1.0);
      goto L0(r36);
    L2():
      r34 = dyn base3(0.0, 1.0);
      goto L0(r34);
    };
    r38 = dyn plot1[, , xlab, ylab, ylim, main](p7, p8, "lag", "p value", p9, "p values for Ljung-Box statistic");
    check L45() else D19();
  D16():
    deopt 64 [i2, r26];
  D19():
    deopt 86 [r38];
  L35():
    c5 = `is.object`(r26);
    if c5 then L37() else L38(i2, r26);
  L45():
    abline1 = ldf abline;
    check L46() else D20();
  D20():
    deopt 88 [];
  L36(i10, dx7):
    l1 = ld pval;
    c6 = `is.object`(l1);
    if c6 then L40() else L41(i10, dx7, l1);
  L37():
    dr6 = tryDispatchBuiltin.1("$", r26);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L39() else L38(i2, dr6);
  L38(i8, r28):
    r29 = `$`(r28, <sym p.value>);
    goto L36(i8, r29);
  L46():
    r39 = dyn abline1[h, lty, col](0.05, 2.0, "blue");
    check L47() else D21();
  D21():
    deopt 95 [r39];
  L4(i14, dx13):
    st pval = dx13;
    goto L3(i14);
  L39():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L36(i2, dx6);
  L40():
    dr8 = tryDispatchBuiltin.0("[<-", l1, dx7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L42() else L41(i10, dx7, dr8);
  L41(i12, dx9, l3):
    i15 = ld i;
    check L43() else D17();
  L47():
    popenv;
    return r39;
  D17():
    deopt 67 [i12, dx9, l3, dx7, i15];
  L42():
    dx11 = getTryDispatchBuiltinValue(dr8);
    goto L4(i10, dx11);
  L43():
    i16 = force? i15;
    ___ = ldf `[<-` in base;
    r30 = dyn ___(l3, dx7, i16);
    goto L4(i12, r30);
  }
}