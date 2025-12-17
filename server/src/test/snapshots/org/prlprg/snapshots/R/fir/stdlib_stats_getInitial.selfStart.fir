fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner24150463;
    st `getInitial.selfStart` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner24150463(object, data, mCall, LHS, `...`) {
  (reg object:*, reg data:*, reg mCall:*, reg LHS:*, reg ddd:dots) -+> V { var object:*, var data:*, var mCall:*, var LHS:*, reg LHS_isMissing:L, reg LHS_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg attr:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg formals:cls, reg iniFn:*, reg iniFn1:V, reg p:p(V +), reg r6:V, reg length:cls, reg r7:V, reg r8:V, reg c:L, reg iniFn2:cls, reg mCall1:*, reg mCall2:V, reg p1:p(V +), reg data1:*, reg data2:V, reg p2:p(V +), reg LHS1:*, reg LHS2:V, reg p3:p(V +), reg ddd1:dots?, reg r12:V, reg _Deprecated:cls, reg r13:V, reg iniFn3:cls, reg mCall3:*, reg mCall4:V, reg p4:p(V +), reg data3:*, reg data4:V, reg p5:p(V +), reg LHS3:*, reg LHS4:V, reg p6:p(V +), reg r17:V |
    mkenv;
    st object = object;
    st data = data;
    st mCall = mCall;
    LHS_isMissing = missing.0(LHS);
    if LHS_isMissing then L0(NULL) else L0(LHS);
  L0(LHS_orDefault):
    st LHS = LHS_orDefault;
    st `...` = ddd;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L1(r1):
    st iniFn = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L4():
    object1 = ld object;
    check L6() else D0();
  L5():
    r = dyn base(<sym object>, "initial");
    goto L1(r);
  D0():
    deopt 2 [object1];
  L2(r4):
    r8 = `>`(r4, 3);
    c = `as.logical`(r8);
    if c then L13() else L3();
  L6():
    object2 = force? object1;
    checkMissing(object2);
    attr = ldf attr in base;
    r2 = dyn attr(object2, "initial");
    check L7() else D1();
  L8():
    formals = ldf formals;
    check L10() else D2();
  L9():
    r3 = dyn base1(<lang formals(iniFn)>);
    goto L2(r3);
  D1():
    deopt 6 [r2];
  D2():
    deopt 11 [];
  L3():
    _Deprecated = ldf `.Deprecated`;
    check L17() else D7();
  L7():
    goto L1(r2);
  L10():
    p = prom<V +>{
      iniFn = ld iniFn;
      iniFn1 = force? iniFn;
      checkMissing(iniFn1);
      return iniFn1;
    };
    r6 = dyn formals(p);
    check L11() else D3();
  L13():
    iniFn2 = ldf iniFn;
    check L14() else D5();
  D3():
    deopt 13 [r6];
  D5():
    deopt 19 [];
  D7():
    deopt 29 [];
  L11():
    length = ldf length in base;
    r7 = dyn length(r6);
    check L12() else D4();
  L14():
    p1 = prom<V +>{
      mCall1 = ld mCall;
      mCall2 = force? mCall1;
      checkMissing(mCall2);
      return mCall2;
    };
    p2 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    p3 = prom<V +>{
      LHS1 = ld LHS;
      LHS2 = force? LHS1;
      checkMissing(LHS2);
      return LHS2;
    };
    ddd1 = ld `...`;
    r12 = dyn iniFn2[mCall, data, LHS, `...`](p1, p2, p3, ddd1);
    check L15() else D6();
  L17():
    r13 = dyn _Deprecated[msg]("selfStart initializing functions should have a final '...' argument since R 4.1.0");
    check L18() else D8();
  D4():
    deopt 15 [r7];
  D6():
    deopt 27 [r12];
  D8():
    deopt 32 [r13];
  L12():
    goto L2(r7);
  L15():
    popenv;
    return r12;
  L18():
    iniFn3 = ldf iniFn;
    check L19() else D9();
  D9():
    deopt 34 [];
  L19():
    p4 = prom<V +>{
      mCall3 = ld mCall;
      mCall4 = force? mCall3;
      checkMissing(mCall4);
      return mCall4;
    };
    p5 = prom<V +>{
      data3 = ld data;
      data4 = force? data3;
      checkMissing(data4);
      return data4;
    };
    p6 = prom<V +>{
      LHS3 = ld LHS;
      LHS4 = force? LHS3;
      checkMissing(LHS4);
      return LHS4;
    };
    r17 = dyn iniFn3[mCall, data, LHS](p4, p5, p6);
    check L20() else D10();
  D10():
    deopt 41 [r17];
  L20():
    popenv;
    return r17;
  }
}