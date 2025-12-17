fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2091946271;
    st `fitted.kmeans` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2091946271(object, method, `...`) {
  (reg object:*, reg method:*, reg ddd:dots) -+> V { var object:*, var method:*, reg method_isMissing:L, reg method_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var `...`:dots?, reg match_arg:cls, reg method1:*, reg method2:V, reg p1:p(V +), reg r5:V, reg method3:*, reg method4:V, reg r6:V, reg c1:L, reg object1:*, reg object2:V, reg c2:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg c3:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg object5:*, reg object6:V, reg c4:L, reg dx7:V, reg object8:V, reg dr4:V, reg dc2:L, reg dx9:V, reg dx11:V, reg r8:V, reg __:cls, reg r9:V, reg object9:*, reg object10:V, reg c5:L, reg object12:V, reg dr6:V, reg dc3:L, reg dx12:V, reg dx13:V, reg r10:V |
    mkenv;
    st object = object;
    method_isMissing = missing.0(method);
    if method_isMissing then L0() else L1(method);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("centers", "classes");
      goto L0(r2);
    L2():
      r = dyn base("centers", "classes");
      goto L0(r);
    };
    goto L1(p);
  L1(method_orDefault):
    st method = method_orDefault;
    st `...` = ddd;
    match_arg = ldf `match.arg`;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p1 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r5 = dyn match_arg(p1);
    check L5() else D1();
  D1():
    deopt 3 [r5];
  L5():
    st method = r5;
    method3 = ld method;
    check L6() else D2();
  D2():
    deopt 5 [method3];
  L6():
    method4 = force? method3;
    checkMissing(method4);
    r6 = `==`(method4, "centers");
    c1 = `as.logical`(r6);
    if c1 then L7() else L2();
  L2():
    object9 = ld object;
    check L22() else D5();
  L7():
    object1 = ld object;
    check L8() else D3();
  D3():
    deopt 9 [object1];
  D5():
    deopt 20 [object9];
  L8():
    object2 = force? object1;
    checkMissing(object2);
    c2 = `is.object`(object2);
    if c2 then L10() else L11(object2);
  L22():
    object10 = force? object9;
    checkMissing(object10);
    c5 = `is.object`(object10);
    if c5 then L24() else L25(object10);
  L9(dx1):
    c3 = `is.object`(dx1);
    if c3 then L13() else L14(dx1);
  L10():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(object4):
    r7 = `$`(object4, <sym centers>);
    goto L9(r7);
  L23(dx13):
    popenv;
    return dx13;
  L24():
    dr6 = tryDispatchBuiltin.1("$", object10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L26() else L25(dr6);
  L25(object12):
    r10 = `$`(object12, <sym cluster>);
    goto L23(r10);
  L3(dx5):
    popenv;
    return dx5;
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L13():
    dr2 = tryDispatchBuiltin.1("[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L15() else L14(dr2);
  L14(dx3):
    object5 = ld object;
    check L16() else D4();
  L26():
    dx12 = getTryDispatchBuiltinValue(dr6);
    goto L23(dx12);
  D4():
    deopt 12 [dx3, object5];
  L15():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx4);
  L16():
    object6 = force? object5;
    checkMissing(object6);
    c4 = `is.object`(object6);
    if c4 then L18() else L19(dx3, object6);
  L17(dx11):
    __ = ldf `[` in base;
    r9 = dyn __(dx1, dx11, <missing>, FALSE);
    goto L3(r9);
  L18():
    dr4 = tryDispatchBuiltin.1("$", object6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L20() else L19(dx3, dr4);
  L19(dx7, object8):
    r8 = `$`(object8, <sym cluster>);
    goto L17(r8);
  L20():
    dx9 = getTryDispatchBuiltinValue(dr4);
    goto L17(dx9);
  }
}