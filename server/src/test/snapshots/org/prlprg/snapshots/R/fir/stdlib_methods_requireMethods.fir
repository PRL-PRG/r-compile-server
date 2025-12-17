fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner654493804;
    st requireMethods = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner654493804(functions, signature, message, where) {
  (reg functions:*, reg signature:*, reg message:*, reg where:*) -+> V { var functions:*, var signature:*, var message:*, reg message_isMissing:L, reg message_orDefault:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg functions1:*, reg functions2:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg getMethod:cls, reg f:*, reg f1:V, reg p2:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg i7:I, reg r7:V, reg method:*, reg method1:V, reg is_function:cls, reg r8:V, reg r9:V, reg c1:L, reg getGeneric:cls, reg f2:*, reg f3:V, reg p3:p(V +), reg where1:*, reg where2:V, reg p4:p(V +), reg r12:V, reg i10:I, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg i13:I, reg r15:V, reg substitute:cls, reg r16:V, reg l1:*, reg body__:cls, reg r17:V, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg l2:*, reg environment__:cls, reg r18:V, reg setMethod:cls, reg f4:*, reg f5:V, reg p5:p(V +), reg signature1:*, reg signature2:V, reg p6:p(V +), reg method2:*, reg method3:V, reg p7:p(V +), reg where3:*, reg where4:V, reg p8:p(V +), reg r23:V |
    mkenv;
    st functions = functions;
    st signature = signature;
    message_isMissing = missing.0(message);
    if message_isMissing then L0("") else L0(message);
  L0(message_orDefault):
    st message = message_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L1() else L2(where);
  L1():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r = dyn parent_frame();
        return r;
      };
      r2 = dyn topenv(p);
      return r2;
    };
    goto L2(p1);
  L2(where_orDefault):
    st where = where_orDefault;
    functions1 = ld functions;
    check L9() else D0();
  D0():
    deopt 0 [functions1];
  L9():
    functions2 = force? functions1;
    checkMissing(functions2);
    s = toForSeq(functions2);
    l = length(s);
    i = 0;
    goto L3(i);
  L3(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L10() else L8();
  L8():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    getMethod = ldf getMethod;
    check L11() else D1();
  L10():
    popenv;
    return NULL;
  D1():
    deopt 3 [i2];
  L11():
    p2 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r5 = dyn getMethod[, optional](p2, TRUE);
    check L12() else D2();
  D2():
    deopt 7 [i2, r5];
  L12():
    st method = r5;
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L4(i7, r7):
    r9 = `!`(r7);
    c1 = `as.logical`(r9);
    if c1 then L17() else L5();
  L13():
    method = ld method;
    check L15() else D3();
  L14():
    r6 = dyn base(<sym method>);
    goto L4(i2, r6);
  D3():
    deopt 11 [i2, method];
  L5():
    goto L6(i7);
  L6(i10):
    sym1 = ldf substitute;
    base1 = ldf substitute in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L15():
    method1 = force? method;
    checkMissing(method1);
    is_function = ldf `is.function` in base;
    r8 = dyn is_function(method1);
    check L16() else D4();
  L17():
    getGeneric = ldf getGeneric;
    check L18() else D5();
  D4():
    deopt 14 [i2, r8];
  D5():
    deopt 17 [i7];
  L7(i13, r15):
    l1 = ld method;
    body__ = ldf `body<-`;
    check L23() else D7();
  L16():
    goto L4(i2, r8);
  L18():
    p3 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    p4 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r12 = dyn getGeneric[, where](p3, p4);
    check L19() else D6();
  L21():
    substitute = ldf substitute in base;
    r16 = dyn substitute(<lang stop(`:::`(methods, .missingMethod)(FF, MESSAGE, if(exists(".Method"), .Method)), domain=NA_LGL)>, <lang list(FF=f, MESSAGE=message)>);
    goto L7(i10, r16);
  L22():
    r14 = dyn base1(<lang stop(`:::`(methods, .missingMethod)(FF, MESSAGE, if(exists(".Method"), .Method)), domain=NA_LGL)>, <lang list(FF=f, MESSAGE=message)>);
    goto L7(i10, r14);
  D6():
    deopt 21 [i7, r12];
  D7():
    deopt 29 [i13, r15, l1, r15];
  L19():
    st method = r12;
    goto L6(i7);
  L23():
    r17 = dyn body__(l1, NULL, r15);
    check L24() else D8();
  D8():
    deopt 31 [i13, r15, r17];
  L24():
    st method = r17;
    _GlobalEnv = ld `.GlobalEnv`;
    check L25() else D9();
  D9():
    deopt 33 [i13, _GlobalEnv];
  L25():
    _GlobalEnv1 = force? _GlobalEnv;
    checkMissing(_GlobalEnv1);
    l2 = ld method;
    environment__ = ldf `environment<-`;
    check L26() else D10();
  D10():
    deopt 36 [i13, _GlobalEnv1, l2, _GlobalEnv1];
  L26():
    r18 = dyn environment__(l2, NULL, _GlobalEnv1);
    check L27() else D11();
  D11():
    deopt 38 [i13, _GlobalEnv1, r18];
  L27():
    st method = r18;
    setMethod = ldf setMethod;
    check L28() else D12();
  D12():
    deopt 41 [i13];
  L28():
    p5 = prom<V +>{
      f4 = ld f;
      f5 = force? f4;
      checkMissing(f5);
      return f5;
    };
    p6 = prom<V +>{
      signature1 = ld signature;
      signature2 = force? signature1;
      checkMissing(signature2);
      return signature2;
    };
    p7 = prom<V +>{
      method2 = ld method;
      method3 = force? method2;
      checkMissing(method3);
      return method3;
    };
    p8 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r23 = dyn setMethod[, , , where](p5, p6, p7, p8);
    check L29() else D13();
  D13():
    deopt 47 [i13, r23];
  L29():
    goto L3(i13);
  }
}