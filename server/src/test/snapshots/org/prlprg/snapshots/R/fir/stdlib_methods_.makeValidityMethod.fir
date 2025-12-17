fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4097787770;
    st `.makeValidityMethod` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4097787770(Class, validity) {
  (reg Class:*, reg validity:*) -+> V { var Class:*, var validity:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg validity1:*, reg validity2:V, reg c:V, reg r2:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg validity3:*, reg validity4:V, reg is_function:cls, reg r5:V, reg r6:V, reg c2:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg validity5:*, reg validity6:V, reg class:cls, reg r9:V, reg p:p(V +), reg r11:V, reg p1:p(V +), reg r13:V, reg p2:p(V +), reg r15:V, reg substituteFunctionArgs:cls, reg validity7:*, reg validity8:V, reg p3:p(V +), reg sprintf:cls, reg Class1:*, reg Class2:V, reg p4:p(V +), reg r19:V, reg p5:p(V +), reg r21:V, reg validity9:*, reg validity10:V |
    mkenv;
    st Class = Class;
    st validity = validity;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L9() else L1();
  L6():
    validity1 = ld validity;
    check L8() else D0();
  L7():
    r = dyn base(<sym validity>);
    goto L0(r);
  D0():
    deopt 1 [validity1];
  L1():
    goto L5();
  L5():
    validity9 = ld validity;
    check L21() else D7();
  L8():
    validity2 = force? validity1;
    checkMissing(validity2);
    c = `==`(validity2, NULL);
    goto L0(c);
  L9():
    sym1 = ldf `is.function`;
    base1 = ldf `is.function` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  D7():
    deopt 30 [validity9];
  L2(r4):
    r6 = `!`(r4);
    c2 = `as.logical`(r6);
    if c2 then L14() else L3();
  L10():
    validity3 = ld validity;
    check L12() else D1();
  L11():
    r3 = dyn base1(<sym validity>);
    goto L2(r3);
  L21():
    validity10 = force? validity9;
    checkMissing(validity10);
    popenv;
    return validity10;
  D1():
    deopt 7 [validity3];
  L3():
    goto L4();
  L4():
    substituteFunctionArgs = ldf substituteFunctionArgs;
    check L18() else D5();
  L12():
    validity4 = force? validity3;
    checkMissing(validity4);
    is_function = ldf `is.function` in base;
    r5 = dyn is_function(validity4);
    check L13() else D2();
  L14():
    stop = ldf stop;
    check L15() else D3();
  D2():
    deopt 10 [r5];
  D3():
    deopt 13 [];
  D5():
    deopt 21 [];
  L13():
    goto L2(r5);
  L15():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        dQuote = ldf dQuote;
        p = prom<V +>{
          sym2 = ldf class;
          base2 = ldf class in base;
          guard2 = `==`.4(sym2, base2);
          if guard2 then L1() else L2();
        L0(r8):
          return r8;
        L1():
          validity5 = ld validity;
          validity6 = force? validity5;
          checkMissing(validity6);
          class = ldf class in base;
          r9 = dyn class(validity6);
          goto L0(r9);
        L2():
          r7 = dyn base2(<sym validity>);
          goto L0(r7);
        };
        r11 = dyn dQuote(p);
        return r11;
      };
      r13 = dyn gettextf("a validity method must be a function of one argument, got an object of class %s", p1);
      return r13;
    };
    r15 = dyn stop[, domain](p2, NA_LGL);
    check L16() else D4();
  L18():
    p3 = prom<V +>{
      validity7 = ld validity;
      validity8 = force? validity7;
      checkMissing(validity8);
      return validity8;
    };
    p5 = prom<V +>{
      sprintf = ldf sprintf;
      p4 = prom<V +>{
        Class1 = ld Class;
        Class2 = force? Class1;
        checkMissing(Class2);
        return Class2;
      };
      r19 = dyn sprintf("validity method for class '%s'", p4);
      return r19;
    };
    r21 = dyn substituteFunctionArgs[, , functionName](p3, "object", p5);
    check L19() else D6();
  D4():
    deopt 17 [r15];
  D6():
    deopt 26 [r21];
  L16():
    goto L4();
  L19():
    st validity = r21;
    goto L5();
  }
}