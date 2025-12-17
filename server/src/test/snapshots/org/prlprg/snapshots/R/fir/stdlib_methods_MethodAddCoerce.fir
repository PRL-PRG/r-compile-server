fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3891360485;
    st MethodAddCoerce = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3891360485(method, argName, thisClass, methodClass) {
  (reg method:*, reg argName:*, reg thisClass:*, reg methodClass:*) -+> V { var method:*, var argName:*, var thisClass:*, var methodClass:*, reg _identC:cls, reg thisClass1:*, reg thisClass2:V, reg p:p(V +), reg methodClass1:*, reg methodClass2:V, reg p1:p(V +), reg r2:V, reg c:L, reg method1:*, reg method2:V, reg possibleExtends:cls, reg thisClass3:*, reg thisClass4:V, reg p2:p(V +), reg methodClass3:*, reg methodClass4:V, reg p3:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg ext:*, reg ext1:V, reg c1:L, reg c2:L, reg c3:V, reg __:cls, reg r10:V, reg c5:L, reg c6:V, reg c8:L, reg method3:*, reg method4:V, reg r13:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg substitute:cls, reg r16:V, reg methodInsert:cls, reg method5:*, reg method6:V, reg p4:p(V +), reg addExpr:*, reg addExpr1:V, reg p5:p(V +), reg r19:V |
    mkenv;
    st method = method;
    st argName = argName;
    st thisClass = thisClass;
    st methodClass = methodClass;
    _identC = ldf `.identC`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      thisClass1 = ld thisClass;
      thisClass2 = force? thisClass1;
      checkMissing(thisClass2);
      return thisClass2;
    };
    p1 = prom<V +>{
      methodClass1 = ld methodClass;
      methodClass2 = force? methodClass1;
      checkMissing(methodClass2);
      return methodClass2;
    };
    r2 = dyn _identC(p, p1);
    check L8() else D1();
  D1():
    deopt 4 [r2];
  L8():
    c = `as.logical`(r2);
    if c then L9() else L0();
  L0():
    possibleExtends = ldf possibleExtends;
    check L13() else D3();
  L9():
    method1 = ld method;
    check L10() else D2();
  D2():
    deopt 5 [method1];
  D3():
    deopt 11 [];
  L10():
    method2 = force? method1;
    checkMissing(method2);
    popenv;
    return method2;
  L13():
    p2 = prom<V +>{
      thisClass3 = ld thisClass;
      thisClass4 = force? thisClass3;
      checkMissing(thisClass4);
      return thisClass4;
    };
    p3 = prom<V +>{
      methodClass3 = ld methodClass;
      methodClass4 = force? methodClass3;
      checkMissing(methodClass4);
      return methodClass4;
    };
    r7 = dyn possibleExtends(p2, p3);
    check L14() else D4();
  D4():
    deopt 14 [r7];
  L14():
    st ext = r7;
    sym = ldf `is.logical`;
    base = ldf `is.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L2(r9):
    c2 = `as.logical`(r9);
    if c2 then L3(c2) else L18();
  L15():
    ext = ld ext;
    check L17() else D5();
  L16():
    r8 = dyn base(<sym ext>);
    goto L2(r8);
  D5():
    deopt 17 [ext];
  L3(c3):
    c8 = `as.logical`(c3);
    if c8 then L20() else L4();
  L17():
    ext1 = force? ext;
    checkMissing(ext1);
    c1 = `is.logical`(ext1);
    goto L2(c1);
  L18():
    __ = ldf `@` in base;
    r10 = dyn __(<sym ext>, <sym simple>);
    c5 = `as.logical`(r10);
    c6 = `||`(c2, c5);
    goto L3(c6);
  L4():
    r13 = clos inner1083154621;
    st methodInsert = r13;
    sym1 = ldf substitute;
    base1 = ldf substitute in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L20():
    method3 = ld method;
    check L21() else D6();
  D6():
    deopt 23 [method3];
  L6(r15):
    st addExpr = r15;
    methodInsert = ldf methodInsert;
    check L26() else D7();
  L21():
    method4 = force? method3;
    checkMissing(method4);
    popenv;
    return method4;
  L24():
    substitute = ldf substitute in base;
    r16 = dyn substitute(<lang `<-`(XXX, as(XXX, CLASS))>, <lang list(XXX=argName, CLASS=methodClass)>);
    goto L6(r16);
  L25():
    r14 = dyn base1(<lang `<-`(XXX, as(XXX, CLASS))>, <lang list(XXX=argName, CLASS=methodClass)>);
    goto L6(r14);
  D7():
    deopt 36 [];
  L26():
    p4 = prom<V +>{
      method5 = ld method;
      method6 = force? method5;
      checkMissing(method6);
      return method6;
    };
    p5 = prom<V +>{
      addExpr = ld addExpr;
      addExpr1 = force? addExpr;
      checkMissing(addExpr1);
      return addExpr1;
    };
    r19 = dyn methodInsert(p4, p5);
    check L27() else D8();
  D8():
    deopt 39 [r19];
  L27():
    popenv;
    return r19;
  }
}
fun inner1083154621(method, addExpr) {
  (reg method:*, reg addExpr:*) -+> V { var method:*, var addExpr:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg method1:*, reg method2:V, reg is_function:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg substitute:cls, reg r5:V, reg newBody:*, reg newBody1:V, reg l:*, reg body__:cls, reg environment:cls, reg method3:*, reg method4:V, reg p:p(V +), reg r7:V, reg p1:p(V +), reg r9:V, reg is:cls, reg method5:*, reg method6:V, reg p2:p(V +), reg r11:V, reg c1:L, reg _MlistDefunct:cls, reg r12:V, reg __:cls, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg methods:*, reg methods1:V, reg r16:I, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg Recall:cls, reg methods2:*, reg methods3:V, reg c3:L, reg methods5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __1:cls, reg r17:V, reg p3:p(V +), reg addExpr1:*, reg addExpr2:V, reg p4:p(V +), reg r20:V, reg l2:*, reg c4:L, reg i8:I, reg r22:V, reg l4:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i10:I, reg dx3:V, reg i11:*, reg i12:V, reg ____:cls, reg r25:V, reg methods6:*, reg methods7:V, reg l5:*, reg ___:cls, reg r26:V, reg method7:*, reg method8:V |
    mkenv;
    st method = method;
    st addExpr = addExpr;
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r1):
    c = `as.logical`(r1);
    if c then L13() else L1();
  L9():
    method1 = ld method;
    check L11() else D0();
  L10():
    r = dyn base(<sym method>);
    goto L0(r);
  D0():
    deopt 2 [method1];
  L1():
    is = ldf is;
    check L20() else D5();
  L3():
    method7 = ld method;
    check L39() else D16();
  L11():
    method2 = force? method1;
    checkMissing(method2);
    is_function = ldf `is.function` in base;
    r2 = dyn is_function(method2);
    check L12() else D1();
  L13():
    sym1 = ldf substitute;
    base1 = ldf substitute in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  D1():
    deopt 5 [r2];
  D5():
    deopt 20 [];
  D16():
    deopt 57 [method7];
  L2(r4):
    st newBody = r4;
    newBody = ld newBody;
    check L16() else D2();
  L12():
    goto L0(r2);
  L14():
    substitute = ldf substitute in base;
    r5 = dyn substitute(<lang {
      firstExpr;
      secondExpr
    }>, <lang list(firstExpr=addExpr, secondExpr=body(method))>);
    goto L2(r5);
  L15():
    r3 = dyn base1(<lang {
      firstExpr;
      secondExpr
    }>, <lang list(firstExpr=addExpr, secondExpr=body(method))>);
    goto L2(r3);
  L20():
    p2 = prom<V +>{
      method5 = ld method;
      method6 = force? method5;
      checkMissing(method6);
      return method6;
    };
    r11 = dyn is(p2, "MethodsList");
    check L21() else D6();
  L39():
    method8 = force? method7;
    checkMissing(method8);
    popenv;
    return method8;
  D2():
    deopt 10 [newBody];
  D6():
    deopt 23 [r11];
  L16():
    newBody1 = force? newBody;
    checkMissing(newBody1);
    l = ld method;
    body__ = ldf `body<-`;
    check L17() else D3();
  L21():
    c1 = `as.logical`(r11);
    if c1 then L22() else L4();
  D3():
    deopt 13 [newBody1, l, newBody1];
  L4():
    goto L3();
  L17():
    p1 = prom<V +>{
      environment = ldf environment;
      p = prom<V +>{
        method3 = ld method;
        method4 = force? method3;
        checkMissing(method4);
        return method4;
      };
      r7 = dyn environment(p);
      return r7;
    };
    r9 = dyn body__[, , envir, ](l, NULL, p1, newBody1);
    check L18() else D4();
  L22():
    _MlistDefunct = ldf `.MlistDefunct`;
    check L23() else D7();
  D4():
    deopt 17 [newBody1, r9];
  D7():
    deopt 25 [];
  L18():
    st method = r9;
    goto L3();
  L23():
    r12 = dyn _MlistDefunct();
    check L24() else D8();
  D8():
    deopt 26 [r12];
  L24():
    __ = ldf `@` in base;
    r13 = dyn __(<sym method>, <sym allMethods>);
    st methods = r13;
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L5(r15):
    s = toForSeq(r15);
    l1 = length(s);
    i = 0;
    goto L6(i);
  L25():
    methods = ld methods;
    check L27() else D9();
  L26():
    r14 = dyn base2(<sym methods>);
    goto L5(r14);
  D9():
    deopt 31 [methods];
  L6(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l1, i2);
    if c2 then L28() else L8();
  L27():
    methods1 = force? methods;
    checkMissing(methods1);
    r16 = seq_along(methods1);
    goto L5(r16);
  L8():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    Recall = ldf Recall;
    check L29() else D10();
  L28():
    methods6 = ld methods;
    check L35() else D13();
  D10():
    deopt 35 [i2];
  D13():
    deopt 47 [methods6];
  L29():
    p3 = prom<V +>{
      methods2 = ld methods;
      methods3 = force? methods2;
      checkMissing(methods3);
      c3 = `is.object`(methods3);
      if c3 then L1() else L2(methods3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", methods3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(methods5):
      i5 = ld i;
      i6 = force? i5;
      __1 = ldf `[[` in base;
      r17 = dyn __1(methods5, i6);
      goto L0(r17);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p4 = prom<V +>{
      addExpr1 = ld addExpr;
      addExpr2 = force? addExpr1;
      checkMissing(addExpr2);
      return addExpr2;
    };
    r20 = dyn Recall(p3, p4);
    check L30() else D11();
  L35():
    methods7 = force? methods6;
    checkMissing(methods7);
    l5 = ld method;
    ___ = ldf `@<-`;
    check L36() else D14();
  D11():
    deopt 38 [i2, r20];
  D14():
    deopt 50 [methods7, l5, methods7];
  L30():
    l2 = ld methods;
    c4 = `is.object`(l2);
    if c4 then L31() else L32(i2, r20, l2);
  L36():
    r26 = dyn ___(l5, NULL, "allMethods", methods7);
    check L37() else D15();
  D15():
    deopt 53 [methods7, r26];
  L7(i10, dx3):
    st methods = dx3;
    goto L6(i10);
  L31():
    dr2 = tryDispatchBuiltin.0("[[<-", l2, r20);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L33() else L32(i2, r20, dr2);
  L32(i8, r22, l4):
    i11 = ld i;
    check L34() else D12();
  L37():
    st method = r26;
    goto L3();
  D12():
    deopt 40 [i8, r22, l4, r20, i11];
  L33():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(i2, dx2);
  L34():
    i12 = force? i11;
    ____ = ldf `[[<-` in base;
    r25 = dyn ____(l4, r20, i12);
    goto L7(i8, r25);
  }
}