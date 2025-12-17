fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4106666089;
    st `.makeAsMethod` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4106666089(expr, simple, Class, ClassDef, where) {
  (reg expr:*, reg simple:*, reg Class:*, reg ClassDef:*, reg where:*) -+> V { var expr:*, var simple:*, var Class:*, var ClassDef:*, var where:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg expr1:*, reg expr2:V, reg is_function:cls, reg r2:V, reg c:L, reg environment:cls, reg expr3:*, reg expr4:V, reg p:p(V +), reg r4:V, reg formalArgs:cls, reg expr5:*, reg expr6:V, reg p1:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg args:*, reg args1:V, reg identical:cls, reg r9:V, reg r10:V, reg c1:L, reg _ChangeFormals:cls, reg expr7:*, reg expr8:V, reg p2:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg args2:*, reg args3:V, reg length:cls, reg r14:V, reg r15:V, reg c2:L, reg _simpleExtCoerce:*, reg _simpleExtCoerce1:V, reg _simpleIsCoerce:*, reg _simpleIsCoerce1:V, reg p3:p(V +), reg r17:V, reg body:cls, reg expr9:*, reg expr10:V, reg p4:p(V +), reg r20:V, reg expr11:*, reg expr12:V, reg simple1:*, reg simple2:V, reg c3:L, reg c5:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg c8:L, reg r23:V, reg expr13:*, reg expr14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg c11:L, reg r25:V, reg quote:cls, reg r26:V, reg identical1:cls, reg r27:V, reg r28:V, reg c12:L, reg c13:V, reg c15:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg substitute:cls, reg r31:V, reg _simpleExtCoerce2:*, reg _simpleExtCoerce3:V, reg value:*, reg value1:V, reg l:*, reg body__:cls, reg where1:*, reg where2:V, reg p5:p(V +), reg r34:V, reg f:*, reg f1:V |
    mkenv;
    st expr = expr;
    st simple = simple;
    st Class = Class;
    st ClassDef = ClassDef;
    st where = where;
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0(r1):
    c = `as.logical`(r1);
    if c then L16() else L1();
  L12():
    expr1 = ld expr;
    check L14() else D0();
  L13():
    r = dyn base(<sym expr>);
    goto L0(r);
  D0():
    deopt 2 [expr1];
  L1():
    goto L5();
  L5():
    expr11 = ld expr;
    check L32() else D12();
  L14():
    expr2 = force? expr1;
    checkMissing(expr2);
    is_function = ldf `is.function` in base;
    r2 = dyn is_function(expr2);
    check L15() else D1();
  L16():
    environment = ldf environment;
    check L17() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  D12():
    deopt 46 [expr11];
  L15():
    goto L0(r2);
  L17():
    p = prom<V +>{
      expr3 = ld expr;
      expr4 = force? expr3;
      checkMissing(expr4);
      return expr4;
    };
    r4 = dyn environment(p);
    check L18() else D3();
  L32():
    expr12 = force? expr11;
    checkMissing(expr12);
    st value = expr12;
    simple1 = ld simple;
    check L33() else D13();
  D3():
    deopt 9 [r4];
  D13():
    deopt 49 [simple1];
  L18():
    st where = r4;
    formalArgs = ldf formalArgs;
    check L19() else D4();
  L33():
    simple2 = force? simple1;
    checkMissing(simple2);
    c3 = `as.logical`(simple2);
    if c3 then L34() else L6(c3);
  D4():
    deopt 12 [];
  L6(c5):
    c15 = `as.logical`(c5);
    if c15 then L42() else L9();
  L19():
    p1 = prom<V +>{
      expr5 = ld expr;
      expr6 = force? expr5;
      checkMissing(expr6);
      return expr6;
    };
    r6 = dyn formalArgs(p1);
    check L20() else D5();
  L34():
    sym3 = ldf identical;
    base3 = ldf identical in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L35() else L36();
  D5():
    deopt 14 [r6];
  L7(c8, r23):
    r28 = `!`(r23);
    c12 = `as.logical`(r28);
    c13 = `&&`(c8, c12);
    goto L6(c13);
  L9():
    goto L11();
  L11():
    _simpleExtCoerce2 = ld `.simpleExtCoerce`;
    check L46() else D16();
  L20():
    st args = r6;
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L35():
    expr13 = ld expr;
    check L37() else D14();
  L36():
    r22 = dyn base3(<sym expr>, <lang quote(from)>);
    goto L7(c3, r22);
  L42():
    sym5 = ldf substitute;
    base5 = ldf substitute in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L43() else L44();
  D14():
    deopt 53 [c3, expr13];
  D16():
    deopt 75 [_simpleExtCoerce2];
  L2(r8):
    r10 = `!`(r8);
    c1 = `as.logical`(r10);
    if c1 then L25() else L3();
  L10(r30):
    st value = r30;
    goto L11();
  L21():
    args = ld args;
    check L23() else D6();
  L22():
    r7 = dyn base1(<sym args>, "from");
    goto L2(r7);
  L37():
    expr14 = force? expr13;
    checkMissing(expr14);
    sym4 = ldf quote;
    base4 = ldf quote in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L38() else L39();
  L43():
    substitute = ldf substitute in base;
    r31 = dyn substitute(<lang if(strict, EXPR, from)>, <lang list(EXPR=expr)>);
    goto L10(r31);
  L44():
    r29 = dyn base5(<lang if(strict, EXPR, from)>, <lang list(EXPR=expr)>);
    goto L10(r29);
  L46():
    _simpleExtCoerce3 = force? _simpleExtCoerce2;
    checkMissing(_simpleExtCoerce3);
    st f = _simpleExtCoerce3;
    value = ld value;
    check L47() else D17();
  D6():
    deopt 18 [args];
  D17():
    deopt 78 [value];
  L3():
    goto L4();
  L4():
    body = ldf body;
    check L29() else D10();
  L8(c11, r25):
    identical1 = ldf identical in base;
    r27 = dyn identical1(expr14, r25, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L40() else D15();
  L23():
    args1 = force? args;
    checkMissing(args1);
    identical = ldf identical in base;
    r9 = dyn identical(args1, "from", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L24() else D7();
  L25():
    _ChangeFormals = ldf `.ChangeFormals`;
    check L26() else D8();
  L38():
    quote = ldf quote in base;
    r26 = dyn quote(<sym from>);
    goto L8(c3, r26);
  L39():
    r24 = dyn base4(<sym from>);
    goto L8(c3, r24);
  L47():
    value1 = force? value;
    checkMissing(value1);
    l = ld f;
    body__ = ldf `body<-`;
    check L48() else D18();
  D7():
    deopt 29 [r9];
  D8():
    deopt 32 [];
  D10():
    deopt 40 [];
  D15():
    deopt 66 [c11, r27];
  D18():
    deopt 81 [value1, l, value1];
  L24():
    goto L2(r9);
  L26():
    p2 = prom<V +>{
      expr7 = ld expr;
      expr8 = force? expr7;
      checkMissing(expr8);
      return expr8;
    };
    p3 = prom<V +>{
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r13):
      r15 = `>`(r13, 1.0);
      c2 = `as.logical`(r15);
      if c2 then L4() else L1();
    L2():
      args2 = ld args;
      args3 = force? args2;
      checkMissing(args3);
      length = ldf length in base;
      r14 = dyn length(args3);
      goto L0(r14);
    L3():
      r12 = dyn base2(<sym args>);
      goto L0(r12);
    L1():
      _simpleIsCoerce = ld `.simpleIsCoerce`;
      _simpleIsCoerce1 = force? _simpleIsCoerce;
      checkMissing(_simpleIsCoerce1);
      return _simpleIsCoerce1;
    L4():
      _simpleExtCoerce = ld `.simpleExtCoerce`;
      _simpleExtCoerce1 = force? _simpleExtCoerce;
      checkMissing(_simpleExtCoerce1);
      return _simpleExtCoerce1;
    };
    r17 = dyn _ChangeFormals(p2, p3);
    check L27() else D9();
  L29():
    p4 = prom<V +>{
      expr9 = ld expr;
      expr10 = force? expr9;
      checkMissing(expr10);
      return expr10;
    };
    r20 = dyn body(p4);
    check L30() else D11();
  L40():
    goto L7(c11, r27);
  L48():
    p5 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r34 = dyn body__[, , envir, ](l, NULL, p5, value1);
    check L49() else D19();
  D9():
    deopt 35 [r17];
  D11():
    deopt 42 [r20];
  D19():
    deopt 85 [value1, r34];
  L27():
    st expr = r17;
    goto L4();
  L30():
    st expr = r20;
    goto L5();
  L49():
    st f = r34;
    f = ld f;
    check L50() else D20();
  D20():
    deopt 87 [f];
  L50():
    f1 = force? f;
    checkMissing(f1);
    popenv;
    return f1;
  }
}