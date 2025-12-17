fun main() {
  () -+> V { reg r:cls, reg body:cls, reg body1:*, reg body2:V, reg p:p(V +), reg r2:V, reg r3:cls, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg quote:cls, reg r6:V, reg l:*, reg body__:cls, reg r7:V, reg f:cls, reg r8:V, reg body3:cls, reg f1:*, reg f2:V, reg p1:p(V +), reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg expression:cls, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg as_name:cls, reg r18:V, reg e:*, reg e1:V, reg c:cls, reg r19:V, reg as_call:cls, reg r20:V, reg l1:*, reg body__1:cls, reg r21:V, reg f3:*, reg f4:V, reg f5:cls, reg r22:V, reg stopifnot:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg body4:cls, reg f6:*, reg f7:V, reg p2:p(V +), reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg substitute:cls, reg r29:V, reg identical:cls, reg r30:V, reg p3:p(V +), reg r32:V |
    mkenv;
    r = clos inner1648403756;
    st body = r;
    body = ldf body;
    check L4() else D0();
  D0():
    deopt 4 [];
  L4():
    p = prom<V +>{
      body1 = ld body;
      body2 = force? body1;
      checkMissing(body2);
      return body2;
    };
    r2 = dyn body(p);
    check L5() else D1();
  D1():
    deopt 6 [r2];
  L5():
    r3 = clos inner2501545716;
    st f = r3;
    sym = ldf quote;
    base = ldf quote in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r5):
    l = ld f;
    body__ = ldf `body<-`;
    check L8() else D2();
  L6():
    quote = ldf quote in base;
    r6 = dyn quote(<lang `^`(5.0, x)>);
    goto L0(r6);
  L7():
    r4 = dyn base(<lang `^`(5.0, x)>);
    goto L0(r4);
  D2():
    deopt 14 [r5, l, r5];
  L8():
    r7 = dyn body__(l, NULL, r5);
    check L9() else D3();
  D3():
    deopt 16 [r5, r7];
  L9():
    st f = r7;
    f = ldf f;
    check L10() else D4();
  D4():
    deopt 19 [];
  L10():
    r8 = dyn f(3.0);
    check L11() else D5();
  D5():
    deopt 21 [r8];
  L11():
    body3 = ldf body;
    check L12() else D6();
  D6():
    deopt 23 [];
  L12():
    p1 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r10 = dyn body3(p1);
    check L13() else D7();
  D7():
    deopt 25 [r10];
  L13():
    sym1 = ldf expression;
    base1 = ldf expression in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L1(r12):
    st e = r12;
    sym2 = ldf `as.call`;
    base2 = ldf `as.call` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L14():
    expression = ldf expression in base;
    r13 = dyn expression(<lang `<-`(y, `^`(x, 2.0))>, <lang return(y)>);
    goto L1(r13);
  L15():
    r11 = dyn base1(<lang `<-`(y, `^`(x, 2.0))>, <lang return(y)>);
    goto L1(r11);
  L2(r15):
    l1 = ld f;
    body__1 = ldf `body<-`;
    check L25() else D13();
  L16():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L18() else L19();
  L17():
    r14 = dyn base2(<lang c(as.name("{"), e)>);
    goto L2(r14);
  D13():
    deopt 45 [r15, l1, r15];
  L3(r17):
    as_call = ldf `as.call` in base;
    r20 = dyn as_call(r17);
    check L24() else D12();
  L18():
    as_name = ldf `as.name`;
    check L20() else D8();
  L19():
    r16 = dyn base3(<lang as.name("{")>, <sym e>);
    goto L3(r16);
  L25():
    r21 = dyn body__1(l1, NULL, r15);
    check L26() else D14();
  D8():
    deopt 35 [];
  D12():
    deopt 43 [r20];
  D14():
    deopt 47 [r15, r21];
  L20():
    r18 = dyn as_name("{");
    check L21() else D9();
  L24():
    goto L2(r20);
  L26():
    st f = r21;
    f3 = ld f;
    check L27() else D15();
  D9():
    deopt 37 [r18];
  D15():
    deopt 49 [f3];
  L21():
    e = ld e;
    check L22() else D10();
  L27():
    f4 = force? f3;
    checkMissing(f4);
    f5 = ldf f;
    check L28() else D16();
  D10():
    deopt 38 [e];
  D16():
    deopt 52 [];
  L22():
    e1 = force? e;
    checkMissing(e1);
    c = ldf c in base;
    r19 = dyn c(r18, e1);
    check L23() else D11();
  L28():
    r22 = dyn f5(8.0);
    check L29() else D17();
  D11():
    deopt 41 [r19];
  D17():
    deopt 54 [r22];
  L23():
    goto L3(r19);
  L29():
    stopifnot = ldf stopifnot;
    check L30() else D18();
  D18():
    deopt 56 [];
  L30():
    p3 = prom<V +>{
      sym4 = ldf identical;
      base4 = ldf identical in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r24):
      return r24;
    L2():
      body4 = ldf body;
      p2 = prom<V +>{
        f6 = ld f;
        f7 = force? f6;
        checkMissing(f7);
        return f7;
      };
      r26 = dyn body4(p2);
      sym5 = ldf substitute;
      base5 = ldf substitute in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L4() else L5();
    L3():
      r23 = dyn base4(<lang body(f)>, <lang substitute({
          `<-`(y, `^`(x, 2.0));
          return(y)
        })>);
      goto L0(r23);
    L1(r28):
      identical = ldf identical in base;
      r30 = dyn identical(r26, r28, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r30);
    L4():
      substitute = ldf substitute in base;
      r29 = dyn substitute(<lang {
        `<-`(y, `^`(x, 2.0));
        return(y)
      }>);
      goto L1(r29);
    L5():
      r27 = dyn base5(<lang {
        `<-`(y, `^`(x, 2.0));
        return(y)
      }>);
      goto L1(r27);
    };
    r32 = dyn stopifnot(p3);
    check L31() else D19();
  D19():
    deopt 58 [r32];
  L31():
    popenv;
    return r32;
  }
}
fun inner1648403756(fun) {
  (reg fun:*) -+> V { var fun:*, reg fun_isMissing:L, reg fun_orDefault:*, reg sys_function:cls, reg sys_parent:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg fun1:*, reg fun2:V, reg c:L, reg c1:L, reg get:cls, reg fun3:*, reg fun4:V, reg p2:p(V +), reg parent_frame:cls, reg r7:V, reg p3:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg fun5:*, reg fun6:V, reg body:cls, reg r13:V |
    mkenv;
    fun_isMissing = missing.0(fun);
    if fun_isMissing then L0() else L1(fun);
  L0():
    p1 = prom<V +>{
      sys_function = ldf `sys.function`;
      p = prom<V +>{
        sys_parent = ldf `sys.parent`;
        r = dyn sys_parent();
        return r;
      };
      r2 = dyn sys_function(p);
      return r2;
    };
    goto L1(p1);
  L1(fun_orDefault):
    st fun = fun_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L2(r5):
    c1 = `as.logical`(r5);
    if c1 then L9() else L3();
  L6():
    fun1 = ld fun;
    check L8() else D0();
  L7():
    r4 = dyn base(<sym fun>);
    goto L2(r4);
  D0():
    deopt 1 [fun1];
  L3():
    goto L4();
  L4():
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L8():
    fun2 = force? fun1;
    checkMissing(fun2);
    c = `is.character`(fun2);
    goto L2(c);
  L9():
    get = ldf get;
    check L10() else D1();
  D1():
    deopt 5 [];
  L5(r12):
    popenv;
    return r12;
  L10():
    p2 = prom<V +>{
      fun3 = ld fun;
      fun4 = force? fun3;
      checkMissing(fun4);
      return fun4;
    };
    p3 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r7 = dyn parent_frame();
      return r7;
    };
    r9 = dyn get[, mode, envir](p2, "function", p3);
    check L11() else D2();
  L13():
    fun5 = ld fun;
    check L15() else D3();
  L14():
    r11 = dyn base1(<lang body(fun)>);
    goto L5(r11);
  D2():
    deopt 11 [r9];
  D3():
    deopt 17 [fun5];
  L11():
    st fun = r9;
    goto L4();
  L15():
    fun6 = force? fun5;
    checkMissing(fun6);
    body = ldf body in base;
    r13 = dyn body(fun6);
    check L16() else D4();
  D4():
    deopt 20 [r13];
  L16():
    goto L5(r13);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V, reg r:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L0() else D0();
  D0():
    deopt 0 [x1];
  L0():
    x2 = force? x1;
    checkMissing(x2);
    r = `^`(x2, 5.0);
    popenv;
    return r;
  }
}