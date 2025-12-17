fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1384373858;
    st isS3stdGeneric = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg body:cls, reg __:cls, reg r:V, reg r1:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r3:V, reg c:L, reg __1:cls, reg r4:V, reg f3:*, reg f4:V, reg p1:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg bdexpr:*, reg bdexpr1:V, reg is_call:cls, reg r9:V, reg c1:L, reg c3:V, reg bdexpr2:*, reg bdexpr3:V, reg c4:L, reg c6:L, reg bdexpr5:V, reg dr:V, reg dc:L, reg dx:V, reg c8:L, reg dx1:V, reg __2:cls, reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg c11:L, reg dx4:V, reg r12:V, reg quote:cls, reg r13:V, reg r14:V, reg c12:L, reg c13:V, reg c15:L, reg bdexpr6:*, reg bdexpr7:V, reg c16:L, reg bdexpr9:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg __3:cls, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg bdexpr10:*, reg bdexpr11:V, reg is_call1:cls, reg r18:V, reg c17:L, reg c19:V, reg bdexpr12:*, reg bdexpr13:V, reg c20:L, reg c22:L, reg bdexpr15:V, reg dr4:V, reg dc2:L, reg dx7:V, reg c24:L, reg dx8:V, reg __4:cls, reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg c27:L, reg dx11:V, reg r21:V, reg quote1:cls, reg r22:V, reg r23:V, reg c28:L, reg c29:V, reg ret:*, reg ret1:V, reg c31:L, reg bdexpr16:*, reg bdexpr17:V, reg c32:L, reg bdexpr19:V, reg dr6:V, reg dc3:L, reg dx12:V, reg dx13:V, reg __5:cls, reg r24:V, reg l:*, reg names__:cls, reg r25:V, reg ret2:*, reg ret3:V |
    mkenv;
    st f = f;
    body = ldf body;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    p1 = prom<V +>{
      __ = ldf `::`;
      r = dyn __("methods", "is");
      checkFun.0(r);
      r1 = r as cls;
      p = prom<V +>{
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
      r3 = dyn r1(p, "traceable");
      c = `as.logical`(r3);
      if c then L1() else L0();
    L0():
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    L1():
      __1 = ldf `@` in base;
      r4 = dyn __1(<sym f>, <sym original>);
      return r4;
    };
    r6 = dyn body(p1);
    check L15() else D1();
  D1():
    deopt 3 [r6];
  L15():
    st bdexpr = r6;
    goto L6();
  L6():
    sym = ldf `is.call`;
    base = ldf `is.call` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r8):
    c1 = `as.logical`(r8);
    if c1 then L20() else L1(c1);
  L16():
    bdexpr = ld bdexpr;
    check L18() else D2();
  L17():
    r7 = dyn base(<sym bdexpr>);
    goto L0(r7);
  D2():
    deopt 7 [bdexpr];
  L1(c3):
    c15 = `as.logical`(c3);
    if c15 then L28() else L4();
  L18():
    bdexpr1 = force? bdexpr;
    checkMissing(bdexpr1);
    is_call = ldf `is.call` in base;
    r9 = dyn is_call(bdexpr1);
    check L19() else D3();
  L20():
    bdexpr2 = ld bdexpr;
    check L21() else D4();
  D3():
    deopt 10 [r9];
  D4():
    deopt 11 [c1, bdexpr2];
  L4():
    sym2 = ldf `is.call`;
    base2 = ldf `is.call` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L19():
    goto L0(r9);
  L21():
    bdexpr3 = force? bdexpr2;
    checkMissing(bdexpr3);
    c4 = `is.object`(bdexpr3);
    if c4 then L22() else L23(c1, bdexpr3);
  L28():
    bdexpr6 = ld bdexpr;
    check L29() else D5();
  D5():
    deopt 20 [bdexpr6];
  L2(c8, dx1):
    sym1 = ldf quote;
    base1 = ldf quote in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L7(r17):
    c17 = `as.logical`(r17);
    if c17 then L38() else L8(c17);
  L22():
    dr = tryDispatchBuiltin.1("[[", bdexpr3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(c1, dr);
  L23(c6, bdexpr5):
    __2 = ldf `[[` in base;
    r10 = dyn __2(bdexpr5, 1);
    goto L2(c6, r10);
  L29():
    bdexpr7 = force? bdexpr6;
    checkMissing(bdexpr7);
    c16 = `is.object`(bdexpr7);
    if c16 then L30() else L31(bdexpr7);
  L34():
    bdexpr10 = ld bdexpr;
    check L36() else D6();
  L35():
    r16 = dyn base2(<sym bdexpr>);
    goto L7(r16);
  D6():
    deopt 31 [bdexpr10];
  L3(c11, dx4, r12):
    r14 = `==`(dx4, r12);
    c12 = `as.logical`(r14);
    c13 = `&&`(c11, c12);
    goto L1(c13);
  L5(dx6):
    st bdexpr = dx6;
    goto L6();
  L8(c19):
    st ret = c19;
    ret = ld ret;
    check L46() else D9();
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(c1, dx);
  L25():
    quote = ldf quote in base;
    r13 = dyn quote(<sym `{`>);
    goto L3(c8, dx1, r13);
  L26():
    r11 = dyn base1(<sym `{`>);
    goto L3(c8, dx1, r11);
  L30():
    dr2 = tryDispatchBuiltin.1("[[", bdexpr7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L32() else L31(dr2);
  L31(bdexpr9):
    __3 = ldf `[[` in base;
    r15 = dyn __3(bdexpr9, 2);
    goto L5(r15);
  L36():
    bdexpr11 = force? bdexpr10;
    checkMissing(bdexpr11);
    is_call1 = ldf `is.call` in base;
    r18 = dyn is_call1(bdexpr11);
    check L37() else D7();
  L38():
    bdexpr12 = ld bdexpr;
    check L39() else D8();
  D7():
    deopt 34 [r18];
  D8():
    deopt 35 [c17, bdexpr12];
  D9():
    deopt 45 [ret];
  L32():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx5);
  L37():
    goto L7(r18);
  L39():
    bdexpr13 = force? bdexpr12;
    checkMissing(bdexpr13);
    c20 = `is.object`(bdexpr13);
    if c20 then L40() else L41(c17, bdexpr13);
  L46():
    ret1 = force? ret;
    checkMissing(ret1);
    c31 = `as.logical`(ret1);
    if c31 then L47() else L11();
  L9(c24, dx8):
    sym3 = ldf quote;
    base3 = ldf quote in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  L11():
    goto L13();
  L13():
    ret2 = ld ret;
    check L55() else D13();
  L40():
    dr4 = tryDispatchBuiltin.1("[[", bdexpr13);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L42() else L41(c17, dr4);
  L41(c22, bdexpr15):
    __4 = ldf `[[` in base;
    r19 = dyn __4(bdexpr15, 1);
    goto L9(c22, r19);
  L47():
    bdexpr16 = ld bdexpr;
    check L48() else D10();
  D10():
    deopt 47 [bdexpr16];
  D13():
    deopt 59 [ret2];
  L10(c27, dx11, r21):
    r23 = `==`(dx11, r21);
    c28 = `as.logical`(r23);
    c29 = `&&`(c27, c28);
    goto L8(c29);
  L42():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L9(c17, dx7);
  L43():
    quote1 = ldf quote in base;
    r22 = dyn quote1(<sym UseMethod>);
    goto L10(c24, dx8, r22);
  L44():
    r20 = dyn base3(<sym UseMethod>);
    goto L10(c24, dx8, r20);
  L48():
    bdexpr17 = force? bdexpr16;
    checkMissing(bdexpr17);
    c32 = `is.object`(bdexpr17);
    if c32 then L49() else L50(bdexpr17);
  L55():
    ret3 = force? ret2;
    checkMissing(ret3);
    popenv;
    return ret3;
  L12(dx13):
    l = ld ret;
    names__ = ldf `names<-`;
    check L52() else D11();
  L49():
    dr6 = tryDispatchBuiltin.1("[[", bdexpr17);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L51() else L50(dr6);
  L50(bdexpr19):
    __5 = ldf `[[` in base;
    r24 = dyn __5(bdexpr19, 2);
    goto L12(r24);
  D11():
    deopt 53 [dx13, l, dx13];
  L51():
    dx12 = getTryDispatchBuiltinValue(dr6);
    goto L12(dx12);
  L52():
    r25 = dyn names__(l, NULL, dx13);
    check L53() else D12();
  D12():
    deopt 55 [dx13, r25];
  L53():
    st ret = r25;
    goto L13();
  }
}