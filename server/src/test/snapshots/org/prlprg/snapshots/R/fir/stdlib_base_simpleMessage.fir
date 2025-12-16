fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner684325804;
    st simpleMessage = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner684325804(message, call) {
  (reg message:*, reg call:*) -+> V { var message:*, var call:*, reg call_isMissing:L, reg call_orDefault:*, reg structure:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg message1:*, reg message2:V, reg call1:*, reg call2:V, reg list:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c:cls, reg r6:V, reg p1:p(V +), reg r8:V |
    mkenv;
    st message = message;
    call_isMissing = missing.0(call);
    if call_isMissing then L0(NULL) else L0(call);
  L0(call_orDefault):
    st call = call_orDefault;
    structure = ldf structure;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      message1 = ld message;
      message2 = force? message1;
      checkMissing(message2);
      call1 = ld call;
      call2 = force? call1;
      checkMissing(call2);
      list = ldf list in base;
      r2 = dyn list(message2, call2);
      goto L0(r2);
    L2():
      r = dyn base[message, call](<sym message>, <sym call>);
      goto L0(r);
    };
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      c = ldf c in base;
      r6 = dyn c("simpleMessage", "message", "condition");
      goto L0(r6);
    L2():
      r4 = dyn base1("simpleMessage", "message", "condition");
      goto L0(r4);
    };
    r8 = dyn structure[, class](p, p1);
    check L2() else D1();
  D1():
    deopt 5 [r8];
  L2():
    popenv;
    return r8;
  }
}