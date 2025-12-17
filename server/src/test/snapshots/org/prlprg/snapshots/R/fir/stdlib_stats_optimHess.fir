fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2337378497;
    st optimHess = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2337378497(par, fn, gr, `...`, control) {
  (reg par:*, reg fn:*, reg gr:*, reg ddd:dots, reg control:*) -+> V { var par:*, var fn:*, var gr:*, reg gr_isMissing:L, reg gr_orDefault:*, var `...`:dots?, var control:*, reg control_isMissing:L, reg control_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg p:p(V +), reg r4:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg gr1:*, reg gr2:V, reg c:V, reg r7:V, reg c1:L, reg r8:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg par1:*, reg par2:V, reg length:cls, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg npar:*, reg npar1:V, reg rep_int:cls, reg r17:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg r19:V, reg npar2:*, reg npar3:V, reg rep_int1:cls, reg r20:V, reg list1:cls, reg r21:V, reg control1:*, reg control2:V, reg l:*, reg c2:L, reg control4:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r22:V, reg control11:V, reg l5:*, reg control12:V, reg r23:V, reg control13:*, reg control14:V, reg names:cls, reg r24:V, reg ___:cls, reg r25:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r26:V, reg r27:V, reg C_optimhess:*, reg C_optimhess1:V, reg par3:*, reg par4:V, reg fn1:*, reg fn2:V, reg gr3:*, reg gr4:V, reg con:*, reg con1:V, reg _External2:cls, reg r28:V |
    mkenv;
    st par = par;
    st fn = fn;
    gr_isMissing = missing.0(gr);
    if gr_isMissing then L0(NULL) else L0(gr);
  L0(gr_orDefault):
    st gr = gr_orDefault;
    st `...` = ddd;
    control_isMissing = missing.0(control);
    if control_isMissing then L1() else L2(control);
  L1():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list in base;
      r2 = dyn list();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L2(p);
  L2(control_orDefault):
    st control = control_orDefault;
    r4 = clos inner3817890781;
    st fn1 = r4;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L3(r6):
    r7 = `!`(r6);
    c1 = `as.logical`(r7);
    if c1 then L16() else L4();
  L13():
    gr1 = ld gr;
    check L15() else D0();
  L14():
    r5 = dyn base1(<sym gr>);
    goto L3(r5);
  D0():
    deopt 4 [gr1];
  L4():
    goto L5(NULL);
  L5(r9):
    st gr1 = r9;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L15():
    gr2 = force? gr1;
    checkMissing(gr2);
    c = `==`(gr2, NULL);
    goto L3(c);
  L16():
    r8 = clos inner3817890781;
    goto L5(r8);
  L6(r11):
    st npar = r11;
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L18():
    par1 = ld par;
    check L20() else D1();
  L19():
    r10 = dyn base2(<sym par>);
    goto L6(r10);
  D1():
    deopt 15 [par1];
  L7(r14):
    st con = r14;
    control1 = ld control;
    check L33() else D8();
  L20():
    par2 = force? par1;
    checkMissing(par2);
    length = ldf length in base;
    r12 = dyn length(par2);
    check L21() else D2();
  L22():
    sym4 = ldf `rep.int`;
    base4 = ldf `rep.int` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L24() else L25();
  L23():
    r13 = dyn base3[fnscale, parscale, ndeps](1.0, <lang rep.int(1.0, npar)>, <lang rep.int(0.001, npar)>);
    goto L7(r13);
  D2():
    deopt 18 [r12];
  D8():
    deopt 43 [control1];
  L8(r16):
    sym5 = ldf `rep.int`;
    base5 = ldf `rep.int` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L28() else L29();
  L21():
    goto L6(r12);
  L24():
    npar = ld npar;
    check L26() else D3();
  L25():
    r15 = dyn base4(1.0, <sym npar>);
    goto L8(r15);
  L33():
    control2 = force? control1;
    checkMissing(control2);
    l = ld con;
    c2 = `is.object`(l);
    if c2 then L34() else L35(control2, l);
  D3():
    deopt 27 [npar];
  L9(r19):
    list1 = ldf list in base;
    r21 = dyn list1(1.0, r16, r19);
    check L32() else D7();
  L10(dx1):
    st con = dx1;
    sym7 = ldf `.External2`;
    base7 = ldf `.External2` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L41() else L42();
  L26():
    npar1 = force? npar;
    checkMissing(npar1);
    rep_int = ldf `rep.int` in base;
    r17 = dyn rep_int(1.0, npar1);
    check L27() else D4();
  L28():
    npar2 = ld npar;
    check L30() else D5();
  L29():
    r18 = dyn base5(0.001, <sym npar>);
    goto L9(r18);
  L34():
    dr = tryDispatchBuiltin.0("[<-", l, control2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L36() else L35(control2, dr);
  L35(control4, l2):
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L37() else L38();
  D4():
    deopt 30 [r17];
  D5():
    deopt 35 [npar2];
  D7():
    deopt 41 [r21];
  L11(control11, l5, control12, r23):
    ___ = ldf `[<-` in base;
    r25 = dyn ___(l5, control12, r23);
    goto L10(r25);
  L12(r27):
    popenv;
    return r27;
  L27():
    goto L8(r17);
  L30():
    npar3 = force? npar2;
    checkMissing(npar3);
    rep_int1 = ldf `rep.int` in base;
    r20 = dyn rep_int1(0.001, npar3);
    check L31() else D6();
  L32():
    goto L7(r21);
  L36():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L37():
    control13 = ld control;
    check L39() else D9();
  L38():
    r22 = dyn base6(<sym control>);
    goto L11(control4, l2, control2, r22);
  L41():
    C_optimhess = ld C_optimhess;
    check L43() else D11();
  L42():
    r26 = dyn base7(<sym C_optimhess>, <sym par>, <sym fn1>, <sym gr1>, <sym con>);
    goto L12(r26);
  D6():
    deopt 38 [r20];
  D9():
    deopt 48 [control4, l2, control2, control13];
  D11():
    deopt 56 [C_optimhess];
  L31():
    goto L9(r20);
  L39():
    control14 = force? control13;
    checkMissing(control14);
    names = ldf names in base;
    r24 = dyn names(control14);
    check L40() else D10();
  L43():
    C_optimhess1 = force? C_optimhess;
    checkMissing(C_optimhess1);
    par3 = ld par;
    check L44() else D12();
  D10():
    deopt 51 [control4, l2, control2, r24];
  D12():
    deopt 58 [par3];
  L40():
    goto L11(control4, l2, control2, r24);
  L44():
    par4 = force? par3;
    checkMissing(par4);
    fn1 = ld fn1;
    check L45() else D13();
  D13():
    deopt 60 [fn1];
  L45():
    fn2 = force? fn1;
    checkMissing(fn2);
    gr3 = ld gr1;
    check L46() else D14();
  D14():
    deopt 62 [gr3];
  L46():
    gr4 = force? gr3;
    checkMissing(gr4);
    con = ld con;
    check L47() else D15();
  D15():
    deopt 64 [con];
  L47():
    con1 = force? con;
    checkMissing(con1);
    _External2 = ldf `.External2` in base;
    r28 = dyn _External2(C_optimhess1, par4, fn2, gr4, con1);
    check L48() else D16();
  D16():
    deopt 67 [r28];
  L48():
    goto L12(r28);
  }
}
fun inner3817890781(par) {
  (reg par:*) -+> V { var par:*, reg fn:cls, reg par1:*, reg par2:V, reg p:p(V +), reg ddd:*, reg r1:V |
    mkenv;
    st par = par;
    fn = ldf fn;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      par1 = ld par;
      par2 = force? par1;
      checkMissing(par2);
      return par2;
    };
    ddd = ld `...`;
    r1 = dyn fn[, `...`](p, ddd);
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    popenv;
    return r1;
  }
}