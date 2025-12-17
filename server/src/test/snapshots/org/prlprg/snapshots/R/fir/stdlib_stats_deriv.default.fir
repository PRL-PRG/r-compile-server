fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2076870501;
    st `deriv.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2076870501(expr, namevec, `function.arg`, tag, hessian, `...`) {
  (reg expr:*, reg namevec:*, reg function_arg:*, reg tag:*, reg hessian:*, reg ddd:dots) -+> V { var expr:*, var namevec:*, var `function.arg`:*, reg function_arg_isMissing:L, reg function_arg_orDefault:*, var tag:*, reg tag_isMissing:L, reg tag_orDefault:*, var hessian:*, reg hessian_isMissing:L, reg hessian_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_deriv:*, reg C_deriv1:V, reg expr1:*, reg expr2:V, reg namevec1:*, reg namevec2:V, reg function_arg1:*, reg function_arg2:V, reg tag1:*, reg tag2:V, reg hessian1:*, reg hessian2:V, reg _External:cls, reg r2:V |
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
    if hessian_isMissing then L2(FALSE) else L2(hessian);
  L2(hessian_orDefault):
    st hessian = hessian_orDefault;
    st `...` = ddd;
    sym = ldf `.External`;
    base = ldf `.External` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L3(r1):
    popenv;
    return r1;
  L4():
    C_deriv = ld C_deriv;
    check L6() else D0();
  L5():
    r = dyn base(<sym C_deriv>, <sym expr>, <sym namevec>, <sym function.arg>, <sym tag>, <sym hessian>);
    goto L3(r);
  D0():
    deopt 2 [C_deriv];
  L6():
    C_deriv1 = force? C_deriv;
    checkMissing(C_deriv1);
    expr1 = ld expr;
    check L7() else D1();
  D1():
    deopt 4 [expr1];
  L7():
    expr2 = force? expr1;
    checkMissing(expr2);
    namevec1 = ld namevec;
    check L8() else D2();
  D2():
    deopt 6 [namevec1];
  L8():
    namevec2 = force? namevec1;
    checkMissing(namevec2);
    function_arg1 = ld `function.arg`;
    check L9() else D3();
  D3():
    deopt 8 [function_arg1];
  L9():
    function_arg2 = force? function_arg1;
    checkMissing(function_arg2);
    tag1 = ld tag;
    check L10() else D4();
  D4():
    deopt 10 [tag1];
  L10():
    tag2 = force? tag1;
    checkMissing(tag2);
    hessian1 = ld hessian;
    check L11() else D5();
  D5():
    deopt 12 [hessian1];
  L11():
    hessian2 = force? hessian1;
    checkMissing(hessian2);
    _External = ldf `.External` in base;
    r2 = dyn _External(C_deriv1, expr2, namevec2, function_arg2, tag2, hessian2);
    check L12() else D6();
  D6():
    deopt 15 [r2];
  L12():
    goto L3(r2);
  }
}