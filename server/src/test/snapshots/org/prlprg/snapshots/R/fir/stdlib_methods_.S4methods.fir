fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4097787089;
    st `.S4methods` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4097787089(`generic.function`, class) {
  (reg generic_function:*, reg class:*) -+> V { var `generic.function`:*, var class:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg _S4methodsForGeneric:cls, reg generic_function1:*, reg generic_function2:V, reg p:p(V +), reg class1:*, reg class2:V, reg p1:p(V +), reg r6:V, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg missing1:cls, reg r10:V, reg r11:V, reg c1:L, reg _S4methodsForClass:cls, reg generic_function3:*, reg generic_function4:V, reg p2:p(V +), reg class3:*, reg class4:V, reg p3:p(V +), reg r14:V, reg stop:cls, reg r15:V, reg structure:cls, reg rownames:cls, reg info:*, reg info1:V, reg p4:p(V +), reg r17:V, reg p5:p(V +), reg info2:*, reg info3:V, reg p6:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg missing2:cls, reg r22:V, reg p7:p(V +), reg r24:V |
    mkenv;
    st `generic.function` = generic_function;
    st class = class;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L7() else L1();
  L5():
    missing = ldf missing in base;
    r2 = dyn missing(<sym generic.function>);
    goto L0(r2);
  L6():
    r = dyn base(<sym generic.function>);
    goto L0(r);
  L1():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L2(r7):
    st info = r7;
    structure = ldf structure;
    check L19() else D6();
  L7():
    _S4methodsForGeneric = ldf `.S4methodsForGeneric`;
    check L8() else D0();
  D0():
    deopt 5 [];
  D6():
    deopt 24 [];
  L3(r9):
    r11 = `!`(r9);
    c1 = `as.logical`(r11);
    if c1 then L13() else L4();
  L8():
    p = prom<V +>{
      generic_function1 = ld `generic.function`;
      generic_function2 = force? generic_function1;
      checkMissing(generic_function2);
      return generic_function2;
    };
    p1 = prom<V +>{
      class1 = ld class;
      class2 = force? class1;
      checkMissing(class2);
      return class2;
    };
    r6 = dyn _S4methodsForGeneric(p, p1);
    check L9() else D1();
  L11():
    missing1 = ldf missing in base;
    r10 = dyn missing1(<sym class>);
    goto L3(r10);
  L12():
    r8 = dyn base1(<sym class>);
    goto L3(r8);
  L19():
    p5 = prom<V +>{
      rownames = ldf rownames;
      p4 = prom<V +>{
        info = ld info;
        info1 = force? info;
        checkMissing(info1);
        return info1;
      };
      r17 = dyn rownames(p4);
      return r17;
    };
    p6 = prom<V +>{
      info2 = ld info;
      info3 = force? info2;
      checkMissing(info3);
      return info3;
    };
    p7 = prom<V +>{
      sym2 = ldf missing;
      base2 = ldf missing in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      missing2 = ldf missing in base;
      r22 = dyn missing2(<sym generic.function>);
      goto L0(r22);
    L2():
      r20 = dyn base2(<sym generic.function>);
      goto L0(r20);
    };
    r24 = dyn structure[, info, byclass, class](p5, p6, p7, "MethodsFunction");
    check L20() else D7();
  D1():
    deopt 8 [r6];
  D7():
    deopt 32 [r24];
  L4():
    stop = ldf stop;
    check L17() else D4();
  L9():
    goto L2(r6);
  L13():
    _S4methodsForClass = ldf `.S4methodsForClass`;
    check L14() else D2();
  L20():
    popenv;
    return r24;
  D2():
    deopt 14 [];
  D4():
    deopt 19 [];
  L14():
    p2 = prom<V +>{
      generic_function3 = ld `generic.function`;
      generic_function4 = force? generic_function3;
      checkMissing(generic_function4);
      return generic_function4;
    };
    p3 = prom<V +>{
      class3 = ld class;
      class4 = force? class3;
      checkMissing(class4);
      return class4;
    };
    r14 = dyn _S4methodsForClass(p2, p3);
    check L15() else D3();
  L17():
    r15 = dyn stop("must supply 'generic.function' or 'class'");
    check L18() else D5();
  D3():
    deopt 17 [r14];
  D5():
    deopt 21 [r15];
  L15():
    goto L2(r14);
  L18():
    goto L2(r15);
  }
}