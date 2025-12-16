fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner684325804;
    st simpleWarning = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner684325804(message, call) {
  (reg message:*, reg call:*) -+> V { var message:*, var call:*, reg call_isMissing:L, reg call_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg structure:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg message1:*, reg message2:V, reg as_character:cls, reg r7:V, reg call1:*, reg call2:V, reg list:cls, reg r8:V, reg p:p(V +), reg class:*, reg class1:V, reg p1:p(V +), reg r11:V |
    mkenv;
    st message = message;
    call_isMissing = missing.0(call);
    if call_isMissing then L0(NULL) else L0(call);
  L0(call_orDefault):
    st call = call_orDefault;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    st class = r1;
    structure = ldf structure;
    check L5() else D1();
  L2():
    c = ldf c in base;
    r2 = dyn c("simpleWarning", "warning", "condition");
    check L4() else D0();
  L3():
    r = dyn base("simpleWarning", "warning", "condition");
    goto L1(r);
  D0():
    deopt 6 [r2];
  D1():
    deopt 9 [];
  L4():
    goto L1(r2);
  L5():
    p = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r4):
      return r4;
    L2():
      sym2 = ldf `as.character`;
      base2 = ldf `as.character` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r3 = dyn base1[message, call](<lang as.character(message)>, <sym call>);
      goto L0(r3);
    L1(r6):
      call1 = ld call;
      call2 = force? call1;
      checkMissing(call2);
      list = ldf list in base;
      r8 = dyn list(r6, call2);
      goto L0(r8);
    L4():
      message1 = ld message;
      message2 = force? message1;
      checkMissing(message2);
      as_character = ldf `as.character` in base;
      r7 = dyn as_character(message2);
      goto L1(r7);
    L5():
      r5 = dyn base2(<sym message>);
      goto L1(r5);
    };
    p1 = prom<V +>{
      class = ld class;
      class1 = force? class;
      checkMissing(class1);
      return class1;
    };
    r11 = dyn structure[, class](p, p1);
    check L6() else D2();
  D2():
    deopt 13 [r11];
  L6():
    popenv;
    return r11;
  }
}