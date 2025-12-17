fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner595534768;
    st `.insertExpr` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner595534768(expr, el) {
  (reg expr:*, reg el:*) -+> V { var expr:*, var el:*, reg is:cls, reg expr1:*, reg expr2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg substitute:cls, reg r5:V, reg expr3:*, reg expr4:V, reg c1:L, reg expr6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg expr9:V, reg r10:I, reg r11:V, reg expr10:*, reg expr11:V, reg length:cls, reg r12:V, reg r13:V, reg __:cls, reg r14:V, reg l:*, reg c2:L, reg dx3:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx5:V, reg dx7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg dx12:V, reg l5:*, reg dx13:V, reg r18:I, reg r19:V, reg expr12:*, reg expr13:V, reg length1:cls, reg r20:V, reg r21:V, reg r22:V, reg ___:cls, reg r23:V, reg el1:*, reg el2:V, reg l6:*, reg c3:L, reg el4:V, reg l8:*, reg dr4:V, reg dc2:L, reg dx14:V, reg dx15:V, reg ____:cls, reg r24:V, reg expr14:*, reg expr15:V |
    mkenv;
    st expr = expr;
    st el = el;
    is = ldf is;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      expr1 = ld expr;
      expr2 = force? expr1;
      checkMissing(expr2);
      return expr2;
    };
    r1 = dyn is(p, "{");
    check L9() else D1();
  D1():
    deopt 4 [r1];
  L9():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L10() else L0();
  L0():
    goto L2();
  L2():
    expr3 = ld expr;
    check L14() else D2();
  L10():
    sym = ldf substitute;
    base = ldf substitute in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  D2():
    deopt 12 [expr3];
  L1(r4):
    st expr = r4;
    goto L2();
  L11():
    substitute = ldf substitute in base;
    r5 = dyn substitute(<lang {
      EXPR
    }>, <lang list(EXPR=expr)>);
    goto L1(r5);
  L12():
    r3 = dyn base(<lang {
      EXPR
    }>, <lang list(EXPR=expr)>);
    goto L1(r3);
  L14():
    expr4 = force? expr3;
    checkMissing(expr4);
    c1 = `is.object`(expr4);
    if c1 then L15() else L16(expr4);
  L3(dx1):
    l = ld expr;
    c2 = `is.object`(l);
    if c2 then L22() else L23(dx1, l);
  L15():
    dr = tryDispatchBuiltin.1("[", expr4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(dr);
  L16(expr6):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L4(expr9, r10, r11):
    r13 = `:`(r10, r11);
    __ = ldf `[` in base;
    r14 = dyn __(expr9, r13);
    goto L3(r14);
  L5(dx7):
    st expr = dx7;
    el1 = ld el;
    check L29() else D7();
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L18():
    expr10 = ld expr;
    check L20() else D3();
  L19():
    r9 = dyn base1(<sym expr>);
    goto L4(expr6, 2, r9);
  L22():
    dr2 = tryDispatchBuiltin.0("[<-", l, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L24() else L23(dx1, dr2);
  L23(dx3, l2):
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  D3():
    deopt 17 [expr6, 2, expr10];
  D7():
    deopt 36 [el1];
  L6(dx12, l5, dx13, r18, r19):
    r21 = `+`(r19, 1.0);
    r22 = `:`(r18, r21);
    ___ = ldf `[<-` in base;
    r23 = dyn ___(l5, dx13, r22);
    goto L5(r23);
  L20():
    expr11 = force? expr10;
    checkMissing(expr11);
    length = ldf length in base;
    r12 = dyn length(expr11);
    check L21() else D4();
  L24():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx5);
  L25():
    expr12 = ld expr;
    check L27() else D5();
  L26():
    r17 = dyn base2(<sym expr>);
    goto L6(dx3, l2, dx1, 3, r17);
  L29():
    el2 = force? el1;
    checkMissing(el2);
    l6 = ld expr;
    c3 = `is.object`(l6);
    if c3 then L30() else L31(el2, l6);
  D4():
    deopt 20 [expr6, 2, r12];
  D5():
    deopt 27 [dx3, l2, dx1, 3, expr12];
  L7(dx15):
    st expr = dx15;
    expr14 = ld expr;
    check L33() else D8();
  L21():
    goto L4(expr6, 2, r12);
  L27():
    expr13 = force? expr12;
    checkMissing(expr13);
    length1 = ldf length in base;
    r20 = dyn length1(expr13);
    check L28() else D6();
  L30():
    dr4 = tryDispatchBuiltin.0("[[<-", l6, el2);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L32() else L31(el2, dr4);
  L31(el4, l8):
    ____ = ldf `[[<-` in base;
    r24 = dyn ____(l8, el2, 2);
    goto L7(r24);
  D6():
    deopt 30 [dx3, l2, dx1, 3, r20];
  D8():
    deopt 43 [expr14];
  L28():
    goto L6(dx3, l2, dx1, 3, r20);
  L32():
    dx14 = getTryDispatchBuiltinValue(dr4);
    goto L7(dx14);
  L33():
    expr15 = force? expr14;
    checkMissing(expr15);
    popenv;
    return expr15;
  }
}