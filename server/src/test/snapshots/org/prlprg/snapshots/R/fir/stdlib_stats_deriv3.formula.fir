fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2630366138;
    st `deriv3.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2630366138(expr, namevec, `function.arg`, tag, hessian, `...`) {
  (reg expr:*, reg namevec:*, reg function_arg:*, reg tag:*, reg hessian:*, reg ddd:dots) -+> V { var expr:*, var namevec:*, var `function.arg`:*, reg function_arg_isMissing:L, reg function_arg_orDefault:*, var tag:*, reg tag_isMissing:L, reg tag_orDefault:*, var hessian:*, reg hessian_isMissing:L, reg hessian_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg expr1:*, reg expr2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg C_deriv:*, reg C_deriv1:V, reg expr3:*, reg expr4:V, reg c1:L, reg expr6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg le:*, reg le1:V, reg __:cls, reg r6:V, reg namevec1:*, reg namevec2:V, reg function_arg1:*, reg function_arg2:V, reg tag1:*, reg tag2:V, reg hessian1:*, reg hessian2:V, reg _External:cls, reg r7:V, reg stop:cls, reg r8:V |
    mkenv;
    st expr = expr;
    st namevec = namevec;
    function_arg_isMissing = missing.0(function_arg);
    if function_arg_isMissing then L0(NULL) else L0(function_arg);
  L0(function_arg_orDefault):
    st `function.arg` = function_arg_orDefault;
    tag_isMissing = missing.0(tag);
    if tag_isMissing then L1(".expr") else L1(tag);
  L1(tag_orDefault):
    st tag = tag_orDefault;
    hessian_isMissing = missing.0(hessian);
    if hessian_isMissing then L2(TRUE) else L2(hessian);
  L2(hessian_orDefault):
    st hessian = hessian_orDefault;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L3(r1):
    st le = r1;
    r3 = `>`(r1, 1);
    c = `as.logical`(r3);
    if c then L11() else L4();
  L7():
    expr1 = ld expr;
    check L9() else D0();
  L8():
    r = dyn base(<sym expr>);
    goto L3(r);
  D0():
    deopt 2 [expr1];
  L4():
    stop = ldf stop;
    check L26() else D10();
  L9():
    expr2 = force? expr1;
    checkMissing(expr2);
    length = ldf length in base;
    r2 = dyn length(expr2);
    check L10() else D1();
  L11():
    sym1 = ldf `.External`;
    base1 = ldf `.External` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  D1():
    deopt 5 [r2];
  D10():
    deopt 29 [];
  L5(r5):
    popenv;
    return r5;
  L10():
    goto L3(r2);
  L12():
    C_deriv = ld C_deriv;
    check L14() else D2();
  L13():
    r4 = dyn base1(<sym C_deriv>, <lang `[[`(expr, le)>, <sym namevec>, <sym function.arg>, <sym tag>, <sym hessian>);
    goto L5(r4);
  L26():
    r8 = dyn stop("invalid formula in deriv");
    check L27() else D11();
  D2():
    deopt 11 [C_deriv];
  D11():
    deopt 31 [r8];
  L14():
    C_deriv1 = force? C_deriv;
    checkMissing(C_deriv1);
    expr3 = ld expr;
    check L15() else D3();
  L27():
    popenv;
    return r8;
  D3():
    deopt 13 [expr3];
  L15():
    expr4 = force? expr3;
    checkMissing(expr4);
    c1 = `is.object`(expr4);
    if c1 then L16() else L17(expr4);
  L6(dx1):
    namevec1 = ld namevec;
    check L20() else D5();
  L16():
    dr = tryDispatchBuiltin.1("[[", expr4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(dr);
  L17(expr6):
    le = ld le;
    check L19() else D4();
  D4():
    deopt 15 [expr6, le];
  D5():
    deopt 18 [namevec1];
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L19():
    le1 = force? le;
    __ = ldf `[[` in base;
    r6 = dyn __(expr6, le1);
    goto L6(r6);
  L20():
    namevec2 = force? namevec1;
    checkMissing(namevec2);
    function_arg1 = ld `function.arg`;
    check L21() else D6();
  D6():
    deopt 20 [function_arg1];
  L21():
    function_arg2 = force? function_arg1;
    checkMissing(function_arg2);
    tag1 = ld tag;
    check L22() else D7();
  D7():
    deopt 22 [tag1];
  L22():
    tag2 = force? tag1;
    checkMissing(tag2);
    hessian1 = ld hessian;
    check L23() else D8();
  D8():
    deopt 24 [hessian1];
  L23():
    hessian2 = force? hessian1;
    checkMissing(hessian2);
    _External = ldf `.External` in base;
    r7 = dyn _External(C_deriv1, dx1, namevec2, function_arg2, tag2, hessian2);
    check L24() else D9();
  D9():
    deopt 27 [r7];
  L24():
    goto L5(r7);
  }
}