fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1984152571;
    st warningCondition = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1984152571(message, `...`, class, call) {
  (reg message:*, reg ddd:dots, reg class:*, reg call:*) -+> V { var message:*, var `...`:dots?, var class:*, reg class_isMissing:L, reg class_orDefault:*, var call:*, reg call_isMissing:L, reg call_orDefault:*, reg structure:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg message1:*, reg message2:V, reg as_character:cls, reg r4:V, reg p:p(V +), reg call1:*, reg call2:V, reg p1:p(V +), reg ddd1:dots?, reg r7:V, reg p2:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg class1:*, reg class2:V, reg c:cls, reg r11:V, reg p3:p(V +), reg r13:V |
    mkenv;
    st message = message;
    st `...` = ddd;
    class_isMissing = missing.0(class);
    if class_isMissing then L0(NULL) else L0(class);
  L0(class_orDefault):
    st class = class_orDefault;
    call_isMissing = missing.0(call);
    if call_isMissing then L1(NULL) else L1(call);
  L1(call_orDefault):
    st call = call_orDefault;
    structure = ldf structure;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p2 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list;
      p = prom<V +>{
        sym1 = ldf `as.character`;
        base1 = ldf `as.character` in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r3):
        return r3;
      L1():
        message1 = ld message;
        message2 = force? message1;
        checkMissing(message2);
        as_character = ldf `as.character` in base;
        r4 = dyn as_character(message2);
        goto L0(r4);
      L2():
        r2 = dyn base1(<sym message>);
        goto L0(r2);
      };
      p1 = prom<V +>{
        call1 = ld call;
        call2 = force? call1;
        checkMissing(call2);
        return call2;
      };
      ddd1 = ld `...`;
      r7 = dyn list[message, call, `...`](p, p1, ddd1);
      goto L0(r7);
    L2():
      r = dyn base[message, call, ](<lang as.character(message)>, <sym call>, <sym ...>);
      goto L0(r);
    };
    p3 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      class1 = ld class;
      class2 = force? class1;
      checkMissing(class2);
      c = ldf c in base;
      r11 = dyn c(class2, "warning", "condition");
      goto L0(r11);
    L2():
      r9 = dyn base2(<sym class>, "warning", "condition");
      goto L0(r9);
    };
    r13 = dyn structure[, class](p2, p3);
    check L3() else D1();
  D1():
    deopt 5 [r13];
  L3():
    popenv;
    return r13;
  }
}