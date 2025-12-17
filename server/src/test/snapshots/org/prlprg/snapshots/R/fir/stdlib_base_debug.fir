fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner346659450;
    st debug = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner346659450(fun, text, condition, signature) {
  (reg fun:*, reg text:*, reg condition:*, reg signature:*) -+> V { var fun:*, var text:*, reg text_isMissing:L, reg text_orDefault:*, var condition:*, reg condition_isMissing:L, reg condition_orDefault:*, var signature:*, reg signature_isMissing:L, reg signature_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg signature1:*, reg signature2:V, reg c:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg fun1:*, reg fun2:V, reg text1:*, reg text2:V, reg condition1:*, reg condition2:V, reg debug:cls, reg r4:V, reg requireNamespace:cls, reg r5:V, reg c2:L, reg ___:cls, reg r6:V, reg r7:cls, reg fun3:*, reg fun4:V, reg p:p(V +), reg text3:*, reg text4:V, reg p1:p(V +), reg condition3:*, reg condition4:V, reg p2:p(V +), reg signature3:*, reg signature4:V, reg p3:p(V +), reg r12:V, reg stop:cls, reg r13:V |
    mkenv;
    st fun = fun;
    text_isMissing = missing.0(text);
    if text_isMissing then L0("") else L0(text);
  L0(text_orDefault):
    st text = text_orDefault;
    condition_isMissing = missing.0(condition);
    if condition_isMissing then L1(NULL) else L1(condition);
  L1(condition_orDefault):
    st condition = condition_orDefault;
    signature_isMissing = missing.0(signature);
    if signature_isMissing then L2(NULL) else L2(signature);
  L2(signature_orDefault):
    st signature = signature_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L3(r1):
    c1 = `as.logical`(r1);
    if c1 then L10() else L4();
  L7():
    signature1 = ld signature;
    check L9() else D0();
  L8():
    r = dyn base(<sym signature>);
    goto L3(r);
  D0():
    deopt 1 [signature1];
  L4():
    requireNamespace = ldf requireNamespace;
    check L18() else D5();
  L9():
    signature2 = force? signature1;
    checkMissing(signature2);
    c = `==`(signature2, NULL);
    goto L3(c);
  L10():
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  D5():
    deopt 15 [];
  L5(r3):
    popenv;
    return r3;
  L11():
    fun1 = ld fun;
    check L13() else D1();
  L12():
    r2 = dyn base1(<lang debug(fun, text, condition)>);
    goto L5(r2);
  L18():
    r5 = dyn requireNamespace("methods");
    check L19() else D6();
  D1():
    deopt 6 [fun1];
  D6():
    deopt 17 [r5];
  L13():
    fun2 = force? fun1;
    checkMissing(fun2);
    text1 = ld text;
    check L14() else D2();
  L19():
    c2 = `as.logical`(r5);
    if c2 then L20() else L6();
  D2():
    deopt 8 [text1];
  L6():
    stop = ldf stop;
    check L25() else D10();
  L14():
    text2 = force? text1;
    checkMissing(text2);
    condition1 = ld condition;
    check L15() else D3();
  L20():
    ___ = ldf `:::`;
    check L21() else D7();
  D3():
    deopt 10 [condition1];
  D7():
    deopt 19 [];
  D10():
    deopt 32 [];
  L15():
    condition2 = force? condition1;
    checkMissing(condition2);
    debug = ldf debug in base;
    r4 = dyn debug(fun2, text2, condition2);
    check L16() else D4();
  L21():
    r6 = dyn ___("methods", ".debugMethod");
    check L22() else D8();
  L25():
    r13 = dyn stop("failed to load the methods package for debugging by signature");
    check L26() else D11();
  D4():
    deopt 13 [r4];
  D8():
    deopt 22 [r6];
  D11():
    deopt 34 [r13];
  L16():
    goto L5(r4);
  L22():
    checkFun.0(r6);
    r7 = r6 as cls;
    p = prom<V +>{
      fun3 = ld fun;
      fun4 = force? fun3;
      checkMissing(fun4);
      return fun4;
    };
    p1 = prom<V +>{
      text3 = ld text;
      text4 = force? text3;
      checkMissing(text4);
      return text4;
    };
    p2 = prom<V +>{
      condition3 = ld condition;
      condition4 = force? condition3;
      checkMissing(condition4);
      return condition4;
    };
    p3 = prom<V +>{
      signature3 = ld signature;
      signature4 = force? signature3;
      checkMissing(signature4);
      return signature4;
    };
    r12 = dyn r7[, , , , once](p, p1, p2, p3, FALSE);
    check L23() else D9();
  L26():
    popenv;
    return r13;
  D9():
    deopt 30 [r12];
  L23():
    popenv;
    return r12;
  }
}