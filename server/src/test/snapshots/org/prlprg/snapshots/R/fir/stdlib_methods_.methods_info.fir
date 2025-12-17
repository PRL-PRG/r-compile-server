fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4097151118;
    st `.methods_info` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4097151118(generic, signature, visible, from) {
  (reg generic:*, reg signature:*, reg visible:*, reg from:*) -+> V { var generic:*, reg generic_isMissing:L, reg generic_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var signature:*, reg signature_isMissing:L, reg signature_orDefault:*, reg character1:cls, reg r2:V, reg p1:p(V +), var visible:*, reg visible_isMissing:L, reg visible_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg rep:cls, reg r6:V, reg p2:p(V +), var from:*, reg from_isMissing:L, reg from_orDefault:*, reg character2:cls, reg r8:V, reg p3:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg signature1:*, reg signature2:V, reg length:cls, reg r12:V, reg c:L, reg paste0:cls, reg generic1:*, reg generic2:V, reg p4:p(V +), reg signature3:*, reg signature4:V, reg p5:p(V +), reg r15:V, reg duplicated:cls, reg signature5:*, reg signature6:V, reg p6:p(V +), reg r18:V, reg r19:V, reg data_frame:cls, reg visible1:*, reg visible2:V, reg c1:L, reg visible4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg keep:*, reg keep1:V, reg __:cls, reg r20:V, reg p7:p(V +), reg from1:*, reg from2:V, reg c2:L, reg from4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg keep2:*, reg keep3:V, reg __1:cls, reg r22:V, reg p8:p(V +), reg generic3:*, reg generic4:V, reg c3:L, reg generic6:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg keep4:*, reg keep5:V, reg __2:cls, reg r24:V, reg p9:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg rep1:cls, reg r28:V, reg p10:p(V +), reg signature7:*, reg signature8:V, reg c4:L, reg signature10:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg keep6:*, reg keep7:V, reg __3:cls, reg r30:V, reg p11:p(V +), reg r32:V |
    mkenv;
    generic_isMissing = missing.0(generic);
    if generic_isMissing then L0() else L1(generic);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(generic_orDefault):
    st generic = generic_orDefault;
    signature_isMissing = missing.0(signature);
    if signature_isMissing then L2() else L3(signature);
  L2():
    p1 = prom<V +>{
      character1 = ldf character;
      r2 = dyn character1();
      return r2;
    };
    goto L3(p1);
  L3(signature_orDefault):
    st signature = signature_orDefault;
    visible_isMissing = missing.0(visible);
    if visible_isMissing then L4() else L5(visible);
  L4():
    p2 = prom<V +>{
      sym = ldf rep;
      base = ldf rep in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      rep = ldf rep in base;
      r6 = dyn rep(TRUE, <lang length(signature)>);
      goto L0(r6);
    L2():
      r4 = dyn base(TRUE, <lang length(signature)>);
      goto L0(r4);
    };
    goto L5(p2);
  L5(visible_orDefault):
    st visible = visible_orDefault;
    from_isMissing = missing.0(from);
    if from_isMissing then L6() else L7(from);
  L6():
    p3 = prom<V +>{
      character2 = ldf character;
      r8 = dyn character2();
      return r8;
    };
    goto L7(p3);
  L7(from_orDefault):
    st from = from_orDefault;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L8(r11):
    c = `as.logical`(r11);
    if c then L15() else L9();
  L11():
    signature1 = ld signature;
    check L13() else D0();
  L12():
    r10 = dyn base1(<sym signature>);
    goto L8(r10);
  D0():
    deopt 2 [signature1];
  L9():
    goto L10();
  L10():
    duplicated = ldf duplicated;
    check L19() else D4();
  L13():
    signature2 = force? signature1;
    checkMissing(signature2);
    length = ldf length in base;
    r12 = dyn length(signature2);
    check L14() else D1();
  L15():
    paste0 = ldf paste0;
    check L16() else D2();
  D1():
    deopt 5 [r12];
  D2():
    deopt 7 [];
  D4():
    deopt 17 [];
  L14():
    goto L8(r12);
  L16():
    p4 = prom<V +>{
      generic1 = ld generic;
      generic2 = force? generic1;
      checkMissing(generic2);
      return generic2;
    };
    p5 = prom<V +>{
      signature3 = ld signature;
      signature4 = force? signature3;
      checkMissing(signature4);
      return signature4;
    };
    r15 = dyn paste0(p4, ",", p5, "-method");
    check L17() else D3();
  L19():
    p6 = prom<V +>{
      signature5 = ld signature;
      signature6 = force? signature5;
      checkMissing(signature6);
      return signature6;
    };
    r18 = dyn duplicated(p6);
    check L20() else D5();
  D3():
    deopt 12 [r15];
  D5():
    deopt 19 [r18];
  L17():
    st signature = r15;
    goto L10();
  L20():
    r19 = `!`(r18);
    st keep = r19;
    data_frame = ldf `data.frame`;
    check L21() else D6();
  D6():
    deopt 23 [];
  L21():
    p7 = prom<V +>{
      visible1 = ld visible;
      visible2 = force? visible1;
      checkMissing(visible2);
      c1 = `is.object`(visible2);
      if c1 then L1() else L2(visible2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", visible2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(visible4):
      keep = ld keep;
      keep1 = force? keep;
      __ = ldf `[` in base;
      r20 = dyn __(visible4, keep1);
      goto L0(r20);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p8 = prom<V +>{
      from1 = ld from;
      from2 = force? from1;
      checkMissing(from2);
      c2 = `is.object`(from2);
      if c2 then L1() else L2(from2);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", from2);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(from4):
      keep2 = ld keep;
      keep3 = force? keep2;
      __1 = ldf `[` in base;
      r22 = dyn __1(from4, keep3);
      goto L0(r22);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p9 = prom<V +>{
      generic3 = ld generic;
      generic4 = force? generic3;
      checkMissing(generic4);
      c3 = `is.object`(generic4);
      if c3 then L1() else L2(generic4);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", generic4);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(generic6):
      keep4 = ld keep;
      keep5 = force? keep4;
      __2 = ldf `[` in base;
      r24 = dyn __2(generic6, keep5);
      goto L0(r24);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p10 = prom<V +>{
      sym2 = ldf rep;
      base2 = ldf rep in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r27):
      return r27;
    L1():
      rep1 = ldf rep in base;
      r28 = dyn rep1(TRUE, <lang sum(keep)>);
      goto L0(r28);
    L2():
      r26 = dyn base2(TRUE, <lang sum(keep)>);
      goto L0(r26);
    };
    p11 = prom<V +>{
      signature7 = ld signature;
      signature8 = force? signature7;
      checkMissing(signature8);
      c4 = `is.object`(signature8);
      if c4 then L1() else L2(signature8);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", signature8);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(signature10):
      keep6 = ld keep;
      keep7 = force? keep6;
      __3 = ldf `[` in base;
      r30 = dyn __3(signature10, keep7);
      goto L0(r30);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r32 = dyn data_frame[visible, from, generic, isS4, `row.names`, stringsAsFactors](p7, p8, p9, p10, p11, FALSE);
    check L22() else D7();
  D7():
    deopt 36 [r32];
  L22():
    popenv;
    return r32;
  }
}