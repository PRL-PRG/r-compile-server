fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2295847165;
    st topicName = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2295847165(type, topic) {
  (reg type:*, reg topic:*) -+> V { var type:*, var topic:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg type1:*, reg type2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg topic1:*, reg topic2:V, reg length1:cls, reg r6:V, reg r7:V, reg c6:L, reg c7:V, reg c9:L, reg character:cls, reg r8:V, reg paste:cls, reg paste1:cls, reg topic3:*, reg topic4:V, reg p:p(V +), reg r10:V, reg p1:p(V +), reg type3:*, reg type4:V, reg p2:p(V +), reg r13:V |
    mkenv;
    st type = type;
    st topic = topic;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    r3 = `==`(r1, 0);
    c = `as.logical`(r3);
    if c then L1(c) else L8();
  L4():
    type1 = ld type;
    check L6() else D0();
  L5():
    r = dyn base(<sym type>);
    goto L0(r);
  D0():
    deopt 2 [type1];
  L1(c1):
    c9 = `as.logical`(c1);
    if c9 then L14() else L3();
  L6():
    type2 = force? type1;
    checkMissing(type2);
    length = ldf length in base;
    r2 = dyn length(type2);
    check L7() else D1();
  L8():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  D1():
    deopt 5 [r2];
  L2(c5, r5):
    r7 = `==`(r5, 0);
    c6 = `as.logical`(r7);
    c7 = `||`(c5, c6);
    goto L1(c7);
  L3():
    paste = ldf paste;
    check L18() else D6();
  L7():
    goto L0(r2);
  L9():
    topic1 = ld topic;
    check L11() else D2();
  L10():
    r4 = dyn base1(<sym topic>);
    goto L2(c, r4);
  L14():
    character = ldf character;
    check L15() else D4();
  D2():
    deopt 10 [c, topic1];
  D4():
    deopt 18 [];
  D6():
    deopt 22 [];
  L11():
    topic2 = force? topic1;
    checkMissing(topic2);
    length1 = ldf length in base;
    r6 = dyn length1(topic2);
    check L12() else D3();
  L15():
    r8 = dyn character(0);
    check L16() else D5();
  L18():
    p1 = prom<V +>{
      paste1 = ldf paste;
      p = prom<V +>{
        topic3 = ld topic;
        topic4 = force? topic3;
        checkMissing(topic4);
        return topic4;
      };
      r10 = dyn paste1[, collapse](p, ",");
      return r10;
    };
    p2 = prom<V +>{
      type3 = ld type;
      type4 = force? type3;
      checkMissing(type4);
      return type4;
    };
    r13 = dyn paste[, , sep](p1, p2, "-");
    check L19() else D7();
  D3():
    deopt 13 [c, r6];
  D5():
    deopt 20 [r8];
  D7():
    deopt 27 [r13];
  L12():
    goto L2(c, r6);
  L16():
    popenv;
    return r8;
  L19():
    popenv;
    return r13;
  }
}