fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner815072961;
    st finalDefaultMethod = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner815072961(method) {
  (reg method:*) -+> V { var method:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg method1:*, reg method2:V, reg is_function:cls, reg r2:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg method3:*, reg method4:V, reg c6:V, reg c7:L, reg c8:V, reg c10:L, reg is:cls, reg method5:*, reg method6:V, reg p:p(V +), reg r7:V, reg c11:L, reg _MlistDefunct:cls, reg r8:V, reg slot:cls, reg method7:*, reg method8:V, reg p1:p(V +), reg r10:V, reg c12:L, reg r12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r13:V, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg method9:*, reg method10:V, reg class:cls, reg r16:V, reg p2:p(V +), reg r18:V, reg p3:p(V +), reg r20:V, reg p4:p(V +), reg r22:V, reg method11:*, reg method12:V |
    mkenv;
    st method = method;
    goto L9();
  L9():
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r1):
    c = `as.logical`(r1);
    if c then L1(c) else L14();
  L10():
    method1 = ld method;
    check L12() else D0();
  L11():
    r = dyn base(<sym method>);
    goto L0(r);
  D0():
    deopt 2 [method1];
  L1(c1):
    c10 = `as.logical`(c1);
    if c10 then L19() else L3();
  L12():
    method2 = force? method1;
    checkMissing(method2);
    is_function = ldf `is.function` in base;
    r2 = dyn is_function(method2);
    check L13() else D1();
  L14():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  D1():
    deopt 5 [r2];
  L2(c5, r4):
    c7 = `as.logical`(r4);
    c8 = `||`(c5, c7);
    goto L1(c8);
  L3():
    is = ldf is;
    check L22() else D3();
  L13():
    goto L0(r2);
  L15():
    method3 = ld method;
    check L17() else D2();
  L16():
    r3 = dyn base1(<sym method>);
    goto L2(c, r3);
  L19():
    method11 = ld method;
    check L36() else D11();
  D2():
    deopt 7 [c, method3];
  D3():
    deopt 16 [];
  D11():
    deopt 41 [method11];
  L17():
    method4 = force? method3;
    checkMissing(method4);
    c6 = `==`(method4, NULL);
    goto L2(c, c6);
  L22():
    p = prom<V +>{
      method5 = ld method;
      method6 = force? method5;
      checkMissing(method6);
      return method6;
    };
    r7 = dyn is(p, "MethodsList");
    check L23() else D4();
  L36():
    method12 = force? method11;
    checkMissing(method12);
    popenv;
    return method12;
  D4():
    deopt 19 [r7];
  L23():
    c11 = `as.logical`(r7);
    if c11 then L24() else L6();
  L6():
    stop = ldf stop;
    check L33() else D9();
  L8():
    goto L9();
  L24():
    _MlistDefunct = ldf `.MlistDefunct`;
    check L25() else D5();
  D5():
    deopt 21 [];
  D9():
    deopt 33 [];
  L25():
    r8 = dyn _MlistDefunct();
    check L26() else D6();
  L33():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        dQuote = ldf dQuote;
        p2 = prom<V +>{
          sym2 = ldf class;
          base2 = ldf class in base;
          guard2 = `==`.4(sym2, base2);
          if guard2 then L1() else L2();
        L0(r15):
          return r15;
        L1():
          method9 = ld method;
          method10 = force? method9;
          checkMissing(method10);
          class = ldf class in base;
          r16 = dyn class(method10);
          goto L0(r16);
        L2():
          r14 = dyn base2(<sym method>);
          goto L0(r14);
        };
        r18 = dyn dQuote(p2);
        return r18;
      };
      r20 = dyn gettextf("default method must be a method definition, a primitive or NULL: got an object of class %s", p3);
      return r20;
    };
    r22 = dyn stop[, domain](p4, NA_LGL);
    check L34() else D10();
  D6():
    deopt 22 [r8];
  D10():
    deopt 37 [r22];
  L26():
    slot = ldf slot;
    check L27() else D7();
  L34():
    goto L8();
  D7():
    deopt 24 [];
  L27():
    p1 = prom<V +>{
      method7 = ld method;
      method8 = force? method7;
      checkMissing(method8);
      return method8;
    };
    r10 = dyn slot(p1, "methods");
    check L28() else D8();
  D8():
    deopt 27 [r10];
  L28():
    c12 = `is.object`(r10);
    if c12 then L29() else L30(r10);
  L7(dx1):
    st method = dx1;
    goto L8();
  L29():
    dr = tryDispatchBuiltin.1("[[", r10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L31() else L30(dr);
  L30(r12):
    __ = ldf `[[` in base;
    r13 = dyn __(r12, "ANY");
    goto L7(r13);
  L31():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  }
}