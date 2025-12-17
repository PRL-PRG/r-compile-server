fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3608096339;
    st `.asFromReplace` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3608096339(fromClass, toClass, ClassDef, where) {
  (reg fromClass:*, reg toClass:*, reg ClassDef:*, reg where:*) -+> V { var fromClass:*, var toClass:*, var ClassDef:*, var where:*, reg __:cls, reg r:V, reg c:L, reg r2:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg fromClass1:*, reg fromClass2:V, reg __1:cls, reg r3:V, reg is:cls, reg replaceMethod:*, reg replaceMethod1:V, reg p:p(V +), reg r5:V, reg c1:L, reg c3:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg c6:L, reg r7:V, reg as:cls, reg __2:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg _ErrorReplace:*, reg _ErrorReplace1:V, reg identical:cls, reg r11:V, reg r12:V, reg c7:L, reg c8:V, reg c10:L, reg r13:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg substitute:cls, reg r16:V, reg l:*, reg body__:cls, reg where1:*, reg where2:V, reg p2:p(V +), reg r18:V, reg f:*, reg f1:V |
    mkenv;
    st fromClass = fromClass;
    st toClass = toClass;
    st ClassDef = ClassDef;
    st where = where;
    __ = ldf `@` in base;
    r = dyn __(<sym ClassDef>, <sym contains>);
    c = `is.object`(r);
    if c then L5() else L6(r);
  L0(dx1):
    st replaceMethod = dx1;
    is = ldf is;
    check L9() else D1();
  L5():
    dr = tryDispatchBuiltin.1("[[", r);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(r2):
    fromClass1 = ld fromClass;
    check L8() else D0();
  D0():
    deopt 2 [r2, fromClass1];
  D1():
    deopt 7 [];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L8():
    fromClass2 = force? fromClass1;
    __1 = ldf `[[` in base;
    r3 = dyn __1(r2, fromClass2);
    goto L0(r3);
  L9():
    p = prom<V +>{
      replaceMethod = ld replaceMethod;
      replaceMethod1 = force? replaceMethod;
      checkMissing(replaceMethod1);
      return replaceMethod1;
    };
    r5 = dyn is(p, "SClassExtension");
    check L10() else D2();
  D2():
    deopt 10 [r5];
  L10():
    c1 = `as.logical`(r5);
    if c1 then L11() else L1(c1);
  L1(c3):
    c10 = `as.logical`(c3);
    if c10 then L19() else L3();
  L11():
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L2(c6, r7):
    r12 = `!`(r7);
    c7 = `as.logical`(r12);
    c8 = `&&`(c6, c7);
    goto L1(c8);
  L3():
    popenv;
    return NULL;
  L12():
    as = ldf as;
    check L14() else D3();
  L13():
    r6 = dyn base(<lang as(`@`(replaceMethod, replace), "function")>, <sym .ErrorReplace>);
    goto L2(c1, r6);
  L19():
    r13 = clos inner838351097;
    st f = r13;
    sym1 = ldf substitute;
    base1 = ldf substitute in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  D3():
    deopt 14 [c1];
  L4(r15):
    l = ld f;
    body__ = ldf `body<-`;
    check L22() else D7();
  L14():
    p1 = prom<V +>{
      __2 = ldf `@` in base;
      r8 = dyn __2(<sym replaceMethod>, <sym replace>);
      return r8;
    };
    r10 = dyn as(p1, "function");
    check L15() else D4();
  L20():
    substitute = ldf substitute in base;
    r16 = dyn substitute(<lang {
      `<-`(obj, new(TOCLASS));
      `<-`(as(obj, FROMCLASS), from);
      obj
    }>, <lang list(FROMCLASS=fromClass, TOCLASS=toClass)>);
    goto L4(r16);
  L21():
    r14 = dyn base1(<lang {
      `<-`(obj, new(TOCLASS));
      `<-`(as(obj, FROMCLASS), from);
      obj
    }>, <lang list(FROMCLASS=fromClass, TOCLASS=toClass)>);
    goto L4(r14);
  D4():
    deopt 17 [c1, r10];
  D7():
    deopt 38 [r15, l, r15];
  L15():
    _ErrorReplace = ld `.ErrorReplace`;
    check L16() else D5();
  L22():
    p2 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r18 = dyn body__[, , envir, ](l, NULL, p2, r15);
    check L23() else D8();
  D5():
    deopt 18 [c1, _ErrorReplace];
  D8():
    deopt 42 [r15, r18];
  L16():
    _ErrorReplace1 = force? _ErrorReplace;
    checkMissing(_ErrorReplace1);
    identical = ldf identical in base;
    r11 = dyn identical(r10, _ErrorReplace1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L17() else D6();
  L23():
    st f = r18;
    f = ld f;
    check L24() else D9();
  D6():
    deopt 28 [c1, r11];
  D9():
    deopt 44 [f];
  L17():
    goto L2(c1, r11);
  L24():
    f1 = force? f;
    checkMissing(f1);
    popenv;
    return f1;
  }
}
fun inner838351097(from, to) {
  (reg from:*, reg to:*) -+> V { var from:*, var to:* |
    mkenv;
    st from = from;
    st to = to;
    popenv;
    return NULL;
  }
}