fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st makeEnvRefMethods = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg _envRefMethods:*, reg _envRefMethods1:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg methods:*, reg methods1:V, reg names:cls, reg r2:V, reg allMethods:*, reg allMethods1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg makeClassMethod:cls, reg methods2:*, reg methods3:V, reg c1:L, reg methods5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg method:*, reg method1:V, reg __:cls, reg r3:V, reg p:p(V +), reg method2:*, reg method3:V, reg p1:p(V +), reg allMethods2:*, reg allMethods3:V, reg p2:p(V +), reg r7:V, reg l1:*, reg c2:L, reg i6:I, reg r9:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i8:I, reg dx3:V, reg method4:*, reg method5:V, reg ____:cls, reg r12:V, reg _methodsNamespace:*, reg _methodsNamespace1:V, reg l4:*, reg c3:L, reg _methodsNamespace3:V, reg l6:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r13:V, reg l7:*, reg c4:L, reg r15:S, reg l9:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r18:V, reg methods6:*, reg methods7:V |
    mkenv;
    _envRefMethods = ld `.envRefMethods`;
    check L4() else D0();
  D0():
    deopt 0 [_envRefMethods];
  L4():
    _envRefMethods1 = force? _envRefMethods;
    checkMissing(_envRefMethods1);
    st methods = _envRefMethods1;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    st allMethods = r1;
    allMethods = ld allMethods;
    check L9() else D3();
  L5():
    methods = ld methods;
    check L7() else D1();
  L6():
    r = dyn base(<sym methods>);
    goto L0(r);
  D1():
    deopt 5 [methods];
  D3():
    deopt 10 [allMethods];
  L7():
    methods1 = force? methods;
    checkMissing(methods1);
    names = ldf names in base;
    r2 = dyn names(methods1);
    check L8() else D2();
  L9():
    allMethods1 = force? allMethods;
    checkMissing(allMethods1);
    s = toForSeq(allMethods1);
    l = length(s);
    i = 0;
    goto L1(i);
  D2():
    deopt 8 [r2];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L10() else L3();
  L8():
    goto L0(r2);
  L3():
    x = `[[`(s, i2, NULL, TRUE);
    st method = x;
    makeClassMethod = ldf makeClassMethod;
    check L11() else D4();
  L10():
    _methodsNamespace = ld `.methodsNamespace`;
    check L17() else D7();
  D4():
    deopt 13 [i2];
  D7():
    deopt 28 [_methodsNamespace];
  L11():
    p = prom<V +>{
      methods2 = ld methods;
      methods3 = force? methods2;
      checkMissing(methods3);
      c1 = `is.object`(methods3);
      if c1 then L1() else L2(methods3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", methods3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(methods5):
      method = ld method;
      method1 = force? method;
      __ = ldf `[[` in base;
      r3 = dyn __(methods5, method1);
      goto L0(r3);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      method2 = ld method;
      method3 = force? method2;
      checkMissing(method3);
      return method3;
    };
    p2 = prom<V +>{
      allMethods2 = ld allMethods;
      allMethods3 = force? allMethods2;
      checkMissing(allMethods3);
      return allMethods3;
    };
    r7 = dyn makeClassMethod(p, p1, "envRefClass", "", p2);
    check L12() else D5();
  L17():
    _methodsNamespace1 = force? _methodsNamespace;
    checkMissing(_methodsNamespace1);
    l4 = ld methods;
    c3 = `is.object`(l4);
    if c3 then L19() else L20(_methodsNamespace1, l4);
  D5():
    deopt 19 [i2, r7];
  L12():
    l1 = ld methods;
    c2 = `is.object`(l1);
    if c2 then L13() else L14(i2, r7, l1);
  L18(dx5):
    st methods = dx5;
    l7 = ld methods;
    c4 = `is.object`(l7);
    if c4 then L23() else L24("methods", l7);
  L19():
    dr4 = tryDispatchBuiltin.0("$<-", l4, _methodsNamespace1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L21() else L20(_methodsNamespace1, dr4);
  L20(_methodsNamespace3, l6):
    r13 = `$<-`(l6, <sym .objectParent>, _methodsNamespace1);
    goto L18(r13);
  L2(i8, dx3):
    st methods = dx3;
    goto L1(i8);
  L13():
    dr2 = tryDispatchBuiltin.0("[[<-", l1, r7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L15() else L14(i2, r7, dr2);
  L14(i6, r9, l3):
    method4 = ld method;
    check L16() else D6();
  L21():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L18(dx4);
  L22(dx7):
    st methods = dx7;
    methods6 = ld methods;
    check L26() else D8();
  L23():
    dr6 = tryDispatchBuiltin.0("$<-", l7, "methods");
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L25() else L24("methods", dr6);
  L24(r15, l9):
    r18 = `$<-`(l9, <sym .objectPackage>, "methods");
    goto L22(r18);
  D6():
    deopt 21 [i6, r9, l3, r7, method4];
  D8():
    deopt 38 [methods6];
  L15():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(i2, dx2);
  L16():
    method5 = force? method4;
    ____ = ldf `[[<-` in base;
    r12 = dyn ____(l3, r7, method5);
    goto L2(i6, r12);
  L25():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L22(dx6);
  L26():
    methods7 = force? methods6;
    checkMissing(methods7);
    popenv;
    return methods7;
  }
}