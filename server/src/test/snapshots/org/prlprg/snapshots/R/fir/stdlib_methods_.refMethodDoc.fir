fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3093007434;
    st `.refMethodDoc` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3093007434(topic, env) {
  (reg topic:*, reg env:*) -+> V { var topic:*, var env:*, reg get:cls, reg topic1:*, reg topic2:V, reg p:p(V +), reg env1:*, reg env2:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg _makeCall:cls, reg topic3:*, reg topic4:V, reg p2:p(V +), reg f:*, reg f1:V, reg p3:p(V +), reg r7:V, reg c:cls, reg r8:V, reg body:cls, reg f2:*, reg f3:V, reg p4:p(V +), reg r10:V, reg is:cls, reg bb:*, reg bb1:V, reg p5:p(V +), reg r12:V, reg c1:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg c6:L, reg r14:V, reg bb2:*, reg bb3:V, reg length:cls, reg r15:V, reg r16:V, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg is1:cls, reg bb4:*, reg bb5:V, reg c13:L, reg bb7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r17:V, reg p6:p(V +), reg r19:V, reg c14:L, reg c15:V, reg c17:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg msg:*, reg msg1:V, reg bb8:*, reg bb9:V, reg c18:L, reg bb11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r22:V, reg c19:cls, reg r23:V, reg msg2:*, reg msg3:V |
    mkenv;
    st topic = topic;
    st env = env;
    get = ldf get;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      topic1 = ld topic;
      topic2 = force? topic1;
      checkMissing(topic2);
      return topic2;
    };
    p1 = prom<V +>{
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      return env2;
    };
    r2 = dyn get[, envir](p, p1);
    check L9() else D1();
  D1():
    deopt 5 [r2];
  L9():
    st f = r2;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r4):
    st msg = r4;
    body = ldf body;
    check L15() else D5();
  L10():
    _makeCall = ldf `.makeCall`;
    check L12() else D2();
  L11():
    r3 = dyn base("Call:", <lang .makeCall(topic, f)>, "");
    goto L0(r3);
  D2():
    deopt 11 [];
  D5():
    deopt 20 [];
  L12():
    p2 = prom<V +>{
      topic3 = ld topic;
      topic4 = force? topic3;
      checkMissing(topic4);
      return topic4;
    };
    p3 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r7 = dyn _makeCall(p2, p3);
    check L13() else D3();
  L15():
    p4 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    r10 = dyn body(p4);
    check L16() else D6();
  D3():
    deopt 14 [r7];
  D6():
    deopt 22 [r10];
  L13():
    c = ldf c in base;
    r8 = dyn c("Call:", r7, "");
    check L14() else D4();
  L16():
    st bb = r10;
    is = ldf is;
    check L17() else D7();
  D4():
    deopt 17 [r8];
  D7():
    deopt 25 [];
  L14():
    goto L0(r8);
  L17():
    p5 = prom<V +>{
      bb = ld bb;
      bb1 = force? bb;
      checkMissing(bb1);
      return bb1;
    };
    r12 = dyn is(p5, "{");
    check L18() else D8();
  D8():
    deopt 28 [r12];
  L18():
    c1 = `as.logical`(r12);
    if c1 then L19() else L1(c1);
  L1(c3):
    c10 = `as.logical`(c3);
    if c10 then L25() else L3(c10);
  L19():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L2(c6, r14):
    r16 = `>`(r14, 1.0);
    c7 = `as.logical`(r16);
    c8 = `&&`(c6, c7);
    goto L1(c8);
  L3(c12):
    c17 = `as.logical`(c12);
    if c17 then L29() else L4();
  L20():
    bb2 = ld bb;
    check L22() else D9();
  L21():
    r13 = dyn base1(<sym bb>);
    goto L2(c1, r13);
  L25():
    is1 = ldf is;
    check L26() else D11();
  D9():
    deopt 31 [c1, bb2];
  D11():
    deopt 39 [c10];
  L4():
    goto L7();
  L7():
    msg2 = ld msg;
    check L39() else D16();
  L22():
    bb3 = force? bb2;
    checkMissing(bb3);
    length = ldf length in base;
    r15 = dyn length(bb3);
    check L23() else D10();
  L26():
    p6 = prom<V +>{
      bb4 = ld bb;
      bb5 = force? bb4;
      checkMissing(bb5);
      c13 = `is.object`(bb5);
      if c13 then L1() else L2(bb5);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", bb5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(bb7):
      __ = ldf `[[` in base;
      r17 = dyn __(bb7, 2.0);
      goto L0(r17);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r19 = dyn is1(p6, "character");
    check L27() else D12();
  L29():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  D10():
    deopt 34 [c1, r15];
  D12():
    deopt 42 [c10, r19];
  D16():
    deopt 59 [msg2];
  L5(r21):
    st msg = r21;
    goto L7();
  L23():
    goto L2(c1, r15);
  L27():
    c14 = `as.logical`(r19);
    c15 = `&&`(c10, c14);
    goto L3(c15);
  L30():
    msg = ld msg;
    check L32() else D13();
  L31():
    r20 = dyn base2(<sym msg>, <lang `[[`(bb, 2.0)>, "");
    goto L5(r20);
  L39():
    msg3 = force? msg2;
    checkMissing(msg3);
    popenv;
    return msg3;
  D13():
    deopt 46 [msg];
  L32():
    msg1 = force? msg;
    checkMissing(msg1);
    bb8 = ld bb;
    check L33() else D14();
  D14():
    deopt 48 [bb8];
  L33():
    bb9 = force? bb8;
    checkMissing(bb9);
    c18 = `is.object`(bb9);
    if c18 then L34() else L35(bb9);
  L6(dx3):
    c19 = ldf c in base;
    r23 = dyn c19(msg1, dx3, "");
    check L37() else D15();
  L34():
    dr2 = tryDispatchBuiltin.1("[[", bb9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L36() else L35(dr2);
  L35(bb11):
    __1 = ldf `[[` in base;
    r22 = dyn __1(bb11, 2.0);
    goto L6(r22);
  D15():
    deopt 55 [r23];
  L36():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx2);
  L37():
    goto L5(r23);
  }
}