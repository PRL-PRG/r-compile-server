fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2848483284;
    st D = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2848483284(expr, name) {
  (reg expr:*, reg name:*) -+> V { var expr:*, var name:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_doD:*, reg C_doD1:V, reg expr1:*, reg expr2:V, reg name1:*, reg name2:V, reg _External:cls, reg r2:V |
    mkenv;
    st expr = expr;
    st name = name;
    sym = ldf `.External`;
    base = ldf `.External` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    C_doD = ld C_doD;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_doD>, <sym expr>, <sym name>);
    goto L0(r);
  D0():
    deopt 2 [C_doD];
  L3():
    C_doD1 = force? C_doD;
    checkMissing(C_doD1);
    expr1 = ld expr;
    check L4() else D1();
  D1():
    deopt 4 [expr1];
  L4():
    expr2 = force? expr1;
    checkMissing(expr2);
    name1 = ld name;
    check L5() else D2();
  D2():
    deopt 6 [name1];
  L5():
    name2 = force? name1;
    checkMissing(name2);
    _External = ldf `.External` in base;
    r2 = dyn _External(C_doD1, expr2, name2);
    check L6() else D3();
  D3():
    deopt 9 [r2];
  L6():
    goto L0(r2);
  }
}