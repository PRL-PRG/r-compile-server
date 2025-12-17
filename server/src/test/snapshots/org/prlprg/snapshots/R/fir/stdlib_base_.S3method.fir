fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4164685122;
    st `.S3method` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner4164685122(generic, class, method) {
  (reg generic:*, reg class:*, reg method:*) -+> V { var generic:*, var class:*, var method:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg paste:cls, reg generic1:*, reg generic2:V, reg p:p(V +), reg class1:*, reg class2:V, reg p1:p(V +), reg r5:V, reg match_fun:cls, reg method1:*, reg method2:V, reg p2:p(V +), reg r8:V, reg registerS3method:cls, reg generic3:*, reg generic4:V, reg p3:p(V +), reg class3:*, reg class4:V, reg p4:p(V +), reg method3:*, reg method4:V, reg p5:p(V +), reg parent_frame:cls, reg r12:V, reg p6:p(V +), reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg invisible:cls, reg r17:V |
    mkenv;
    st generic = generic;
    st class = class;
    st method = method;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    c = `as.logical`(r1);
    if c then L6() else L1();
  L4():
    missing = ldf missing in base;
    r2 = dyn missing(<sym method>);
    goto L0(r2);
  L5():
    r = dyn base(<sym method>);
    goto L0(r);
  L1():
    goto L2();
  L2():
    match_fun = ldf `match.fun`;
    check L10() else D2();
  L6():
    paste = ldf paste;
    check L7() else D0();
  D0():
    deopt 4 [];
  D2():
    deopt 14 [];
  L7():
    p = prom<V +>{
      generic1 = ld generic;
      generic2 = force? generic1;
      checkMissing(generic2);
      return generic2;
    };
    p1 = prom<V +>{
      class1 = ld class;
      class2 = force? class1;
      checkMissing(class2);
      return class2;
    };
    r5 = dyn paste[, , sep](p, p1, ".");
    check L8() else D1();
  L10():
    p2 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r8 = dyn match_fun(p2);
    check L11() else D3();
  D1():
    deopt 9 [r5];
  D3():
    deopt 16 [r8];
  L8():
    st method = r5;
    goto L2();
  L11():
    st method = r8;
    registerS3method = ldf registerS3method;
    check L12() else D4();
  D4():
    deopt 19 [];
  L12():
    p3 = prom<V +>{
      generic3 = ld generic;
      generic4 = force? generic3;
      checkMissing(generic4);
      return generic4;
    };
    p4 = prom<V +>{
      class3 = ld class;
      class4 = force? class3;
      checkMissing(class4);
      return class4;
    };
    p5 = prom<V +>{
      method3 = ld method;
      method4 = force? method3;
      checkMissing(method4);
      return method4;
    };
    p6 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r12 = dyn parent_frame();
      return r12;
    };
    r14 = dyn registerS3method[, , , envir](p3, p4, p5, p6);
    check L13() else D5();
  D5():
    deopt 25 [r14];
  L13():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L3(r16):
    popenv;
    return r16;
  L14():
    invisible = ldf invisible in base;
    r17 = dyn invisible(NULL);
    check L16() else D6();
  L15():
    r15 = dyn base1(NULL);
    goto L3(r15);
  D6():
    deopt 30 [r17];
  L16():
    goto L3(r17);
  }
}