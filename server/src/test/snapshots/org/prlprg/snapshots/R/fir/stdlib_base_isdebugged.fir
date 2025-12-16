fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner651660860;
    st isdebugged = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner651660860(fun, signature) {
  (reg fun:*, reg signature:*) -+> V { var fun:*, var signature:*, reg signature_isMissing:L, reg signature_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg signature1:*, reg signature2:V, reg c:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg fun1:*, reg fun2:V, reg isdebugged:cls, reg r4:V, reg requireNamespace:cls, reg r5:V, reg c2:L, reg ___:cls, reg r6:V, reg r7:cls, reg fun3:*, reg fun4:V, reg p:p(V +), reg signature3:*, reg signature4:V, reg p1:p(V +), reg r10:V, reg stop:cls, reg r11:V |
    mkenv;
    st fun = fun;
    signature_isMissing = missing.0(signature);
    if signature_isMissing then L0(NULL) else L0(signature);
  L0(signature_orDefault):
    st signature = signature_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L8() else L2();
  L5():
    signature1 = ld signature;
    check L7() else D0();
  L6():
    r = dyn base(<sym signature>);
    goto L1(r);
  D0():
    deopt 1 [signature1];
  L2():
    requireNamespace = ldf requireNamespace;
    check L14() else D3();
  L7():
    signature2 = force? signature1;
    checkMissing(signature2);
    c = `==`(signature2, NULL);
    goto L1(c);
  L8():
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  D3():
    deopt 11 [];
  L3(r3):
    popenv;
    return r3;
  L9():
    fun1 = ld fun;
    check L11() else D1();
  L10():
    r2 = dyn base1(<lang isdebugged(fun)>);
    goto L3(r2);
  L14():
    r5 = dyn requireNamespace("methods");
    check L15() else D4();
  D1():
    deopt 6 [fun1];
  D4():
    deopt 13 [r5];
  L11():
    fun2 = force? fun1;
    checkMissing(fun2);
    isdebugged = ldf isdebugged in base;
    r4 = dyn isdebugged(fun2);
    check L12() else D2();
  L15():
    c2 = `as.logical`(r5);
    if c2 then L16() else L4();
  D2():
    deopt 9 [r4];
  L4():
    stop = ldf stop;
    check L21() else D8();
  L12():
    goto L3(r4);
  L16():
    ___ = ldf `:::`;
    check L17() else D5();
  D5():
    deopt 15 [];
  D8():
    deopt 24 [];
  L17():
    r6 = dyn ___("methods", ".isMethodDebugged");
    check L18() else D6();
  L21():
    r11 = dyn stop("failed to load methods package for handling signature");
    check L22() else D9();
  D6():
    deopt 18 [r6];
  D9():
    deopt 26 [r11];
  L18():
    checkFun.0(r6);
    r7 = r6 as cls;
    p = prom<V +>{
      fun3 = ld fun;
      fun4 = force? fun3;
      checkMissing(fun4);
      return fun4;
    };
    p1 = prom<V +>{
      signature3 = ld signature;
      signature4 = force? signature3;
      checkMissing(signature4);
      return signature4;
    };
    r10 = dyn r7(p, p1);
    check L19() else D7();
  L22():
    popenv;
    return r11;
  D7():
    deopt 22 [r10];
  L19():
    popenv;
    return r10;
  }
}