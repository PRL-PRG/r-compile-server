fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3300994742;
    st getGenericFromCall = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3300994742(call, methodEnv) {
  (reg call:*, reg methodEnv:*) -+> V { var call:*, var methodEnv:*, reg methodEnv1:*, reg methodEnv2:V, reg c:L, reg methodEnv4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg generic:*, reg generic1:V, reg c1:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg call1:*, reg call2:V, reg c3:L, reg call4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r5:V, reg c4:L, reg c5:L, reg getGeneric:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg call5:*, reg call6:V, reg c6:L, reg call8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r8:V, reg as_character:cls, reg r9:V, reg p:p(V +), reg methodEnv5:*, reg methodEnv6:V, reg p1:p(V +), reg r12:V, reg r13:V, reg call9:*, reg call10:V, reg c7:L, reg call12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg __2:cls, reg r14:V, reg environment:cls, reg fdef:*, reg fdef1:V, reg p2:p(V +), reg r16:V, reg c8:L, reg r18:V, reg dr8:V, reg dc4:L, reg dx7:V, reg dx8:V, reg r19:V, reg generic2:*, reg generic3:V |
    mkenv;
    st call = call;
    st methodEnv = methodEnv;
    methodEnv1 = ld methodEnv;
    check L7() else D0();
  D0():
    deopt 0 [methodEnv1];
  L7():
    methodEnv2 = force? methodEnv1;
    checkMissing(methodEnv2);
    c = `is.object`(methodEnv2);
    if c then L9() else L10(methodEnv2);
  L8(dx1):
    st generic = dx1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L9():
    dr = tryDispatchBuiltin.1("$", methodEnv2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(methodEnv4):
    r = `$`(methodEnv4, <sym .Generic>);
    goto L8(r);
  L0(r2):
    c2 = `as.logical`(r2);
    if c2 then L15() else L1();
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L12():
    generic = ld generic;
    check L14() else D1();
  L13():
    r1 = dyn base(<sym generic>);
    goto L0(r1);
  D1():
    deopt 5 [generic];
  L1():
    goto L6();
  L6():
    generic2 = ld generic;
    check L37() else D8();
  L14():
    generic1 = force? generic;
    checkMissing(generic1);
    c1 = `==`(generic1, NULL);
    goto L0(c1);
  L15():
    sym1 = ldf `is.name`;
    base1 = ldf `is.name` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  D8():
    deopt 37 [generic2];
  L2(r4):
    c5 = `as.logical`(r4);
    if c5 then L22() else L4();
  L16():
    call1 = ld call;
    check L18() else D2();
  L17():
    r3 = dyn base1(<lang `[[`(call, 1)>);
    goto L2(r3);
  L37():
    generic3 = force? generic2;
    checkMissing(generic3);
    popenv;
    return generic3;
  D2():
    deopt 9 [call1];
  L4():
    call9 = ld call;
    check L26() else D5();
  L5(r13):
    st fdef = r13;
    environment = ldf environment;
    check L30() else D6();
  L18():
    call2 = force? call1;
    checkMissing(call2);
    c3 = `is.object`(call2);
    if c3 then L19() else L20(call2);
  L22():
    getGeneric = ldf getGeneric;
    check L23() else D3();
  D3():
    deopt 16 [];
  D5():
    deopt 23 [call9];
  D6():
    deopt 30 [];
  L3(dx3):
    c4 = `is.symbol`(dx3);
    goto L2(c4);
  L19():
    dr2 = tryDispatchBuiltin.1("[[", call2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L21() else L20(dr2);
  L20(call4):
    __ = ldf `[[` in base;
    r5 = dyn __(call4, 1);
    goto L3(r5);
  L23():
    p = prom<V +>{
      sym2 = ldf `as.character`;
      base2 = ldf `as.character` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r7):
      return r7;
    L2():
      call5 = ld call;
      call6 = force? call5;
      checkMissing(call6);
      c6 = `is.object`(call6);
      if c6 then L4() else L5(call6);
    L3():
      r6 = dyn base2(<lang `[[`(call, 1)>);
      goto L0(r6);
    L1(dx5):
      as_character = ldf `as.character` in base;
      r9 = dyn as_character(dx5);
      goto L0(r9);
    L4():
      dr4 = tryDispatchBuiltin.1("[[", call6);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L6() else L5(dr4);
    L5(call8):
      __1 = ldf `[[` in base;
      r8 = dyn __1(call8, 1);
      goto L1(r8);
    L6():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx4);
    };
    p1 = prom<V +>{
      methodEnv5 = ld methodEnv;
      methodEnv6 = force? methodEnv5;
      checkMissing(methodEnv6);
      return methodEnv6;
    };
    r12 = dyn getGeneric[, mustFind, where](p, TRUE, p1);
    check L24() else D4();
  L26():
    call10 = force? call9;
    checkMissing(call10);
    c7 = `is.object`(call10);
    if c7 then L27() else L28(call10);
  L30():
    p2 = prom<V +>{
      fdef = ld fdef;
      fdef1 = force? fdef;
      checkMissing(fdef1);
      return fdef1;
    };
    r16 = dyn environment(p2);
    check L31() else D7();
  D4():
    deopt 22 [r12];
  D7():
    deopt 32 [r16];
  L21():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L24():
    goto L5(r12);
  L27():
    dr6 = tryDispatchBuiltin.1("[[", call10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L29() else L28(dr6);
  L28(call12):
    __2 = ldf `[[` in base;
    r14 = dyn __2(call12, 1);
    goto L5(r14);
  L31():
    c8 = `is.object`(r16);
    if c8 then L33() else L34(r16);
  L29():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L5(dx6);
  L32(dx8):
    st generic = dx8;
    goto L6();
  L33():
    dr8 = tryDispatchBuiltin.1("$", r16);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L35() else L34(dr8);
  L34(r18):
    r19 = `$`(r18, <sym .Generic>);
    goto L32(r19);
  L35():
    dx7 = getTryDispatchBuiltinValue(dr8);
    goto L32(dx7);
  }
}