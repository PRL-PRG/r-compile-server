fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4029812677;
    st `.undebugMethod` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4029812677(fun, signature) {
  (reg fun:*, reg signature:*) -+> V { var fun:*, var signature:*, reg isdebugged:cls, reg fun1:*, reg fun2:V, reg p:p(V +), reg signature1:*, reg signature2:V, reg p1:p(V +), reg r2:V, reg r3:V, reg c:L, reg warning:cls, reg r4:V, reg is_primitive:cls, reg fun3:*, reg fun4:V, reg p2:p(V +), reg r6:V, reg c1:L, reg getGeneric:cls, reg fun5:*, reg fun6:V, reg p3:p(V +), reg r8:V, reg untrace:cls, reg fun7:*, reg fun8:V, reg p4:p(V +), reg signature3:*, reg signature4:V, reg p5:p(V +), reg r12:V |
    mkenv;
    st fun = fun;
    st signature = signature;
    isdebugged = ldf isdebugged;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      fun1 = ld fun;
      fun2 = force? fun1;
      checkMissing(fun2);
      return fun2;
    };
    p1 = prom<V +>{
      signature1 = ld signature;
      signature2 = force? signature1;
      checkMissing(signature2);
      return signature2;
    };
    r2 = dyn isdebugged(p, p1);
    check L4() else D1();
  D1():
    deopt 4 [r2];
  L4():
    r3 = `!`(r2);
    c = `as.logical`(r3);
    if c then L5() else L0();
  L0():
    is_primitive = ldf `is.primitive`;
    check L9() else D4();
  L5():
    warning = ldf warning;
    check L6() else D2();
  D2():
    deopt 7 [];
  D4():
    deopt 11 [];
  L6():
    r4 = dyn warning("method is not being debugged");
    check L7() else D3();
  L9():
    p2 = prom<V +>{
      fun3 = ld fun;
      fun4 = force? fun3;
      checkMissing(fun4);
      return fun4;
    };
    r6 = dyn is_primitive(p2);
    check L10() else D5();
  D3():
    deopt 9 [r4];
  D5():
    deopt 13 [r6];
  L7():
    popenv;
    return r4;
  L10():
    c1 = `as.logical`(r6);
    if c1 then L11() else L1();
  L1():
    goto L2();
  L2():
    untrace = ldf untrace;
    check L15() else D8();
  L11():
    getGeneric = ldf getGeneric;
    check L12() else D6();
  D6():
    deopt 15 [];
  D8():
    deopt 22 [];
  L12():
    p3 = prom<V +>{
      fun5 = ld fun;
      fun6 = force? fun5;
      checkMissing(fun6);
      return fun6;
    };
    r8 = dyn getGeneric(p3);
    check L13() else D7();
  L15():
    p4 = prom<V +>{
      fun7 = ld fun;
      fun8 = force? fun7;
      checkMissing(fun8);
      return fun8;
    };
    p5 = prom<V +>{
      signature3 = ld signature;
      signature4 = force? signature3;
      checkMissing(signature4);
      return signature4;
    };
    r12 = dyn untrace[, signature](p4, p5);
    check L16() else D9();
  D7():
    deopt 17 [r8];
  D9():
    deopt 26 [r12];
  L13():
    st fun = r8;
    goto L2();
  L16():
    popenv;
    return r12;
  }
}