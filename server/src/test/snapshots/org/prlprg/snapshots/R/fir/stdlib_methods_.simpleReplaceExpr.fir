fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner677121926;
    st `.simpleReplaceExpr` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner677121926(toDef) {
  (reg toDef:*) -+> V { var toDef:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg __:cls, reg r2:V, reg names:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg substitute:cls, reg r6:V |
    mkenv;
    st toDef = toDef;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    st toSlots = r1;
    sym1 = ldf substitute;
    base1 = ldf substitute in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L2():
    __ = ldf `@` in base;
    r2 = dyn __(<sym toDef>, <sym slots>);
    names = ldf names in base;
    r3 = dyn names(r2);
    check L4() else D0();
  L3():
    r = dyn base(<lang `@`(toDef, slots)>);
    goto L0(r);
  D0():
    deopt 5 [r3];
  L1(r5):
    popenv;
    return r5;
  L4():
    goto L0(r3);
  L5():
    substitute = ldf substitute in base;
    r6 = dyn substitute(<lang {
      for(what, TOSLOTS, `<-`(`::`(methods, slot)(from, what), `::`(methods, slot)(value, what)));
      from
    }>, <lang list(TOSLOTS=toSlots)>);
    goto L1(r6);
  L6():
    r4 = dyn base1(<lang {
      for(what, TOSLOTS, `<-`(`::`(methods, slot)(from, what), `::`(methods, slot)(value, what)));
      from
    }>, <lang list(TOSLOTS=toSlots)>);
    goto L1(r4);
  }
}