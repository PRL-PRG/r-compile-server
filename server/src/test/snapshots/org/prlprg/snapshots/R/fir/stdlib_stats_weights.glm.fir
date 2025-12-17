fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner251066887;
    st `weights.glm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner251066887(object, type, `...`) {
  (reg object:*, reg type:*, reg ddd:dots) -+> V { var object:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var `...`:dots?, reg match_arg:cls, reg type1:*, reg type2:V, reg p1:p(V +), reg r5:V, reg type3:*, reg type4:V, reg r6:V, reg c1:L, reg object1:*, reg object2:V, reg c2:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg dx2:V, reg object5:*, reg object6:V, reg c3:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg object9:*, reg object10:V, reg c4:L, reg object12:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r11:V, reg c5:V, reg c6:L, reg res:*, reg res1:V, reg naresid:cls, reg object13:*, reg object14:V, reg c7:L, reg object16:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg r12:V, reg p2:p(V +), reg res2:*, reg res3:V, reg p3:p(V +), reg r15:V |
    mkenv;
    st object = object;
    type_isMissing = missing.0(type);
    if type_isMissing then L0() else L1(type);
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
      r2 = dyn c("prior", "working");
      goto L0(r2);
    L2():
      r = dyn base("prior", "working");
      goto L0(r);
    };
    goto L1(p);
  L1(type_orDefault):
    st type = type_orDefault;
    st `...` = ddd;
    match_arg = ldf `match.arg`;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p1 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r5 = dyn match_arg(p1);
    check L7() else D1();
  D1():
    deopt 3 [r5];
  L7():
    st type = r5;
    type3 = ld type;
    check L8() else D2();
  D2():
    deopt 5 [type3];
  L8():
    type4 = force? type3;
    checkMissing(type4);
    r6 = `==`(type4, "prior");
    c1 = `as.logical`(r6);
    if c1 then L9() else L2();
  L2():
    object5 = ld object;
    check L16() else D4();
  L3(dx2):
    st res = dx2;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L9():
    object1 = ld object;
    check L10() else D3();
  D3():
    deopt 9 [object1];
  D4():
    deopt 12 [object5];
  L4(r10):
    c6 = `as.logical`(r10);
    if c6 then L28() else L5();
  L10():
    object2 = force? object1;
    checkMissing(object2);
    c2 = `is.object`(object2);
    if c2 then L12() else L13(object2);
  L16():
    object6 = force? object5;
    checkMissing(object6);
    c3 = `is.object`(object6);
    if c3 then L18() else L19(object6);
  L21():
    object9 = ld object;
    check L23() else D5();
  L22():
    r9 = dyn base1(<lang `$`(object, na.action)>);
    goto L4(r9);
  D5():
    deopt 17 [object9];
  L5():
    naresid = ldf naresid;
    check L31() else D7();
  L11(dx1):
    goto L3(dx1);
  L12():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(dr);
  L13(object4):
    r7 = `$`(object4, <sym prior.weights>);
    goto L11(r7);
  L17(dx4):
    goto L3(dx4);
  L18():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L20() else L19(dr2);
  L19(object8):
    r8 = `$`(object8, <sym weights>);
    goto L17(r8);
  L23():
    object10 = force? object9;
    checkMissing(object10);
    c4 = `is.object`(object10);
    if c4 then L25() else L26(object10);
  L28():
    res = ld res;
    check L29() else D6();
  D6():
    deopt 21 [res];
  D7():
    deopt 24 [];
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L20():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L17(dx3);
  L24(dx6):
    c5 = `==`(dx6, NULL);
    goto L4(c5);
  L25():
    dr4 = tryDispatchBuiltin.1("$", object10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L27() else L26(dr4);
  L26(object12):
    r11 = `$`(object12, <sym na.action>);
    goto L24(r11);
  L29():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  L31():
    p2 = prom<V +>{
      object13 = ld object;
      object14 = force? object13;
      checkMissing(object14);
      c7 = `is.object`(object14);
      if c7 then L1() else L2(object14);
    L0(dx8):
      return dx8;
    L1():
      dr6 = tryDispatchBuiltin.1("$", object14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(object16):
      r12 = `$`(object16, <sym na.action>);
      goto L0(r12);
    L3():
      dx7 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx7);
    };
    p3 = prom<V +>{
      res2 = ld res;
      res3 = force? res2;
      checkMissing(res3);
      return res3;
    };
    r15 = dyn naresid(p2, p3);
    check L32() else D8();
  D8():
    deopt 27 [r15];
  L27():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L24(dx5);
  L32():
    popenv;
    return r15;
  }
}