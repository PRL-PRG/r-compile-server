fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.bibentry_get_key` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg character:cls, reg r4:V, reg lapply:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg x3:*, reg x4:V, reg unclass:cls, reg r9:V, reg p:p(V +), reg attr:*, reg attr1:V, reg p1:p(V +), reg r12:V, reg l:*, reg c1:L, reg r14:S, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg lengths:cls, reg keys:*, reg keys1:V, reg p2:p(V +), reg r18:V, reg r19:V, reg ___:cls, reg r20:V, reg unlist:cls, reg keys2:*, reg keys3:V, reg p3:p(V +), reg r22:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L8() else L1();
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    lapply = ldf lapply;
    check L13() else D4();
  L6():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L7() else D1();
  L8():
    character = ldf character;
    check L9() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [];
  D4():
    deopt 14 [];
  L7():
    goto L0(r2);
  L9():
    r4 = dyn character();
    check L10() else D3();
  L13():
    p = prom<V +>{
      sym1 = ldf unclass;
      base1 = ldf unclass in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      unclass = ldf unclass in base;
      r9 = dyn unclass(x4);
      goto L0(r9);
    L2():
      r7 = dyn base1(<sym x>);
      goto L0(r7);
    };
    p1 = prom<V +>{
      attr = ld attr;
      attr1 = force? attr;
      checkMissing(attr1);
      return attr1;
    };
    r12 = dyn lapply(p, p1, "key");
    check L14() else D5();
  D3():
    deopt 9 [r4];
  D5():
    deopt 18 [r12];
  L10():
    popenv;
    return r4;
  L14():
    st keys = r12;
    l = ld keys;
    c1 = `is.object`(l);
    if c1 then L15() else L16("", l);
  L3(dx1):
    st keys = dx1;
    unlist = ldf unlist;
    check L20() else D8();
  L15():
    dr = tryDispatchBuiltin.0("[<-", l, "");
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16("", dr);
  L16(r14, l2):
    lengths = ldf lengths;
    check L18() else D6();
  D6():
    deopt 24 [r14, l2, ""];
  D8():
    deopt 31 [];
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L18():
    p2 = prom<V +>{
      keys = ld keys;
      keys1 = force? keys;
      checkMissing(keys1);
      return keys1;
    };
    r18 = dyn lengths(p2);
    check L19() else D7();
  L20():
    p3 = prom<V +>{
      keys2 = ld keys;
      keys3 = force? keys2;
      checkMissing(keys3);
      return keys3;
    };
    r22 = dyn unlist(p3);
    check L21() else D9();
  D7():
    deopt 26 [r14, l2, "", r18];
  D9():
    deopt 33 [r22];
  L19():
    r19 = `!`(r18);
    ___ = ldf `[<-` in base;
    r20 = dyn ___(l2, "", r19);
    goto L3(r20);
  L21():
    popenv;
    return r22;
  }
}