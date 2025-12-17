fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3708401697;
    st `.massage_file_parse_error` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg conditionMessage:cls, reg e1:*, reg e2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg e3:*, reg e4:V, reg inherits:cls, reg r4:V, reg c:L, reg sub:cls, reg msg:*, reg msg1:V, reg p1:p(V +), reg r6:V, reg sub1:cls, reg msg2:*, reg msg3:V, reg p2:p(V +), reg r8:V |
    mkenv;
    st e = e;
    conditionMessage = ldf conditionMessage;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    r1 = dyn conditionMessage(p);
    check L3() else D1();
  D1():
    deopt 3 [r1];
  L3():
    st msg = r1;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r3):
    c = `as.logical`(r3);
    if c then L8() else L1();
  L4():
    e3 = ld e;
    check L6() else D2();
  L5():
    r2 = dyn base(<sym e>, "parseError");
    goto L0(r2);
  D2():
    deopt 7 [e3];
  L1():
    sub1 = ldf sub;
    check L12() else D6();
  L6():
    e4 = force? e3;
    checkMissing(e4);
    inherits = ldf inherits in base;
    r4 = dyn inherits(e4, "parseError", FALSE);
    check L7() else D3();
  L8():
    sub = ldf sub;
    check L9() else D4();
  D3():
    deopt 12 [r4];
  D4():
    deopt 14 [];
  D6():
    deopt 20 [];
  L7():
    goto L0(r4);
  L9():
    p1 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r6 = dyn sub("\\([^:]+:(.*)\\)", "(\\1)", p1);
    check L10() else D5();
  L12():
    p2 = prom<V +>{
      msg2 = ld msg;
      msg3 = force? msg2;
      checkMissing(msg3);
      return msg3;
    };
    r8 = dyn sub1("^[^:]+:[[:space:]]*", "", p2);
    check L13() else D7();
  D5():
    deopt 18 [r6];
  D7():
    deopt 24 [r8];
  L10():
    popenv;
    return r6;
  L13():
    popenv;
    return r8;
  }
}