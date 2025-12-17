fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3634822738;
    st `.getXlevels` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3634822738(Terms, m) {
  (reg Terms:*, reg m:*) -+> V { var Terms:*, var m:*, reg vapply:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg Terms1:*, reg Terms2:V, reg attr:cls, reg r2:V, reg p:p(V +), reg deparse2:*, reg deparse3:V, reg p1:p(V +), reg r5:V, reg c:L, reg r7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg Terms3:*, reg Terms4:V, reg attr1:cls, reg r11:V, reg r12:V, reg c1:L, reg xvars:*, reg xvars1:V, reg c2:L, reg xvars3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg yvar:*, reg yvar1:V, reg r13:V, reg __1:cls, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg xvars4:*, reg xvars5:V, reg length:cls, reg r17:V, reg c3:L, reg lapply:cls, reg m1:*, reg m2:V, reg c4:L, reg m4:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg xvars6:*, reg xvars7:V, reg __2:cls, reg r18:V, reg p2:p(V +), reg r20:cls, reg p3:p(V +), reg r22:V, reg xlev:*, reg xlev1:V, reg c5:L, reg xlev3:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg vapply1:cls, reg xlev4:*, reg xlev5:V, reg p4:p(V +), reg is_null:*, reg is_null1:V, reg p5:p(V +), reg r25:V, reg r26:V, reg __3:cls, reg r27:V |
    mkenv;
    st Terms = Terms;
    st m = m;
    vapply = ldf vapply;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      sym = ldf attr;
      base = ldf attr in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      Terms1 = ld Terms;
      Terms2 = force? Terms1;
      checkMissing(Terms2);
      attr = ldf attr in base;
      r2 = dyn attr(Terms2, "variables");
      goto L0(r2);
    L2():
      r = dyn base(<sym Terms>, "variables");
      goto L0(r);
    };
    p1 = prom<V +>{
      deparse2 = ld deparse2;
      deparse3 = force? deparse2;
      checkMissing(deparse3);
      return deparse3;
    };
    r5 = dyn vapply(p, p1, "");
    check L9() else D1();
  D1():
    deopt 5 [r5];
  L9():
    c = `is.object`(r5);
    if c then L10() else L11(r5);
  L0(dx1):
    st xvars = dx1;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L10():
    dr = tryDispatchBuiltin.1("[", r5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(r7):
    __ = ldf `[` in base;
    r8 = dyn __(r7, -1);
    goto L0(r8);
  L1(r10):
    st yvar = r10;
    r12 = `>`(r10, 0.0);
    c1 = `as.logical`(r12);
    if c1 then L17() else L2();
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L13():
    Terms3 = ld Terms;
    check L15() else D2();
  L14():
    r9 = dyn base1(<sym Terms>, "response");
    goto L1(r9);
  D2():
    deopt 12 [Terms3];
  L2():
    goto L4();
  L4():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L15():
    Terms4 = force? Terms3;
    checkMissing(Terms4);
    attr1 = ldf attr in base;
    r11 = dyn attr1(Terms4, "response");
    check L16() else D3();
  L17():
    xvars = ld xvars;
    check L18() else D4();
  D3():
    deopt 16 [r11];
  D4():
    deopt 20 [xvars];
  L5(r16):
    c3 = `as.logical`(r16);
    if c3 then L28() else L6();
  L16():
    goto L1(r11);
  L18():
    xvars1 = force? xvars;
    checkMissing(xvars1);
    c2 = `is.object`(xvars1);
    if c2 then L19() else L20(xvars1);
  L24():
    xvars4 = ld xvars;
    check L26() else D6();
  L25():
    r15 = dyn base2(<sym xvars>);
    goto L5(r15);
  D6():
    deopt 31 [xvars4];
  L3(dx3):
    st xvars = dx3;
    goto L4();
  L6():
    invisible.0();
    popenv;
    return NULL;
  L19():
    dr2 = tryDispatchBuiltin.1("[", xvars1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L21() else L20(dr2);
  L20(xvars3):
    yvar = ld yvar;
    check L22() else D5();
  L26():
    xvars5 = force? xvars4;
    checkMissing(xvars5);
    length = ldf length in base;
    r17 = dyn length(xvars5);
    check L27() else D7();
  L28():
    lapply = ldf lapply;
    check L29() else D8();
  D5():
    deopt 22 [xvars3, yvar];
  D7():
    deopt 34 [r17];
  D8():
    deopt 36 [];
  L21():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L22():
    yvar1 = force? yvar;
    checkMissing(yvar1);
    r13 = `-`(<missing>, yvar1);
    __1 = ldf `[` in base;
    r14 = dyn __1(xvars3, r13);
    goto L3(r14);
  L27():
    goto L5(r17);
  L29():
    p2 = prom<V +>{
      m1 = ld m;
      m2 = force? m1;
      checkMissing(m2);
      c4 = `is.object`(m2);
      if c4 then L1() else L2(m2);
    L0(dx6):
      return dx6;
    L1():
      dr4 = tryDispatchBuiltin.1("[", m2);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(m4):
      xvars6 = ld xvars;
      xvars7 = force? xvars6;
      __2 = ldf `[` in base;
      r18 = dyn __2(m4, xvars7);
      goto L0(r18);
    L3():
      dx5 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx5);
    };
    p3 = prom<V +>{
      r20 = clos inner2501545716;
      return r20;
    };
    r22 = dyn lapply(p2, p3);
    check L30() else D9();
  D9():
    deopt 39 [r22];
  L30():
    st xlev = r22;
    xlev = ld xlev;
    check L31() else D10();
  D10():
    deopt 41 [xlev];
  L31():
    xlev1 = force? xlev;
    checkMissing(xlev1);
    c5 = `is.object`(xlev1);
    if c5 then L32() else L33(xlev1);
  L7(dx8):
    popenv;
    return dx8;
  L32():
    dr6 = tryDispatchBuiltin.1("[", xlev1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L34() else L33(dr6);
  L33(xlev3):
    vapply1 = ldf vapply;
    check L35() else D11();
  D11():
    deopt 44 [xlev3];
  L34():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L7(dx7);
  L35():
    p4 = prom<V +>{
      xlev4 = ld xlev;
      xlev5 = force? xlev4;
      checkMissing(xlev5);
      return xlev5;
    };
    p5 = prom<V +>{
      is_null = ld `is.null`;
      is_null1 = force? is_null;
      checkMissing(is_null1);
      return is_null1;
    };
    r25 = dyn vapply1(p4, p5, NA_LGL);
    check L36() else D12();
  D12():
    deopt 48 [xlev3, r25];
  L36():
    r26 = `!`(r25);
    __3 = ldf `[` in base;
    r27 = dyn __3(xlev3, r26);
    goto L7(r27);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg is_factor:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg levels:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg x5:*, reg x6:V, reg c1:L, reg c2:L, reg levels1:cls, reg as_factor:cls, reg x7:*, reg x8:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg r9:V |
    mkenv;
    st x = x;
    is_factor = ldf `is.factor`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is_factor(p);
    check L4() else D1();
  D1():
    deopt 3 [r1];
  L4():
    c = `as.logical`(r1);
    if c then L5() else L0();
  L0():
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L5():
    levels = ldf levels;
    check L6() else D2();
  D2():
    deopt 5 [];
  L1(r5):
    c2 = `as.logical`(r5);
    if c2 then L12() else L2();
  L6():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn levels(p1);
    check L7() else D3();
  L9():
    x5 = ld x;
    check L11() else D4();
  L10():
    r4 = dyn base(<sym x>);
    goto L1(r4);
  D3():
    deopt 7 [r3];
  D4():
    deopt 9 [x5];
  L2():
    invisible.0();
    popenv;
    return NULL;
  L7():
    popenv;
    return r3;
  L11():
    x6 = force? x5;
    checkMissing(x6);
    c1 = `is.character`(x6);
    goto L1(c1);
  L12():
    levels1 = ldf levels;
    check L13() else D5();
  D5():
    deopt 13 [];
  L13():
    p3 = prom<V +>{
      as_factor = ldf `as.factor`;
      p2 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r7 = dyn as_factor(p2);
      return r7;
    };
    r9 = dyn levels1(p3);
    check L14() else D6();
  D6():
    deopt 15 [r9];
  L14():
    popenv;
    return r9;
  }
}