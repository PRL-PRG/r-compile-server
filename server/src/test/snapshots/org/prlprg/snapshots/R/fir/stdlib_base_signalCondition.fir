fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1233555517`;
    st signalCondition = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1233555517`(cond) {
  (reg cond:*) -+> V { var cond:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg cond1:*, reg cond2:V, reg inherits:cls, reg r2:V, reg r3:V, reg c:L, reg simpleCondition:cls, reg cond3:*, reg cond4:V, reg p:p(V +), reg r5:V, reg conditionMessage:cls, reg cond5:*, reg cond6:V, reg p1:p(V +), reg r8:V, reg conditionCall:cls, reg cond7:*, reg cond8:V, reg p2:p(V +), reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg cond9:*, reg cond10:V, reg msg:*, reg msg1:V, reg call:*, reg call1:V, reg _signalCondition:cls, reg r13:V |
    mkenv;
    st cond = cond;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L8() else L1();
  L4():
    cond1 = ld cond;
    check L6() else D0();
  L5():
    r = dyn base(<sym cond>, "condition");
    goto L0(r);
  D0():
    deopt 2 [cond1];
  L1():
    goto L2();
  L2():
    conditionMessage = ldf conditionMessage;
    check L12() else D4();
  L6():
    cond2 = force? cond1;
    checkMissing(cond2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(cond2, "condition", FALSE);
    check L7() else D1();
  L8():
    simpleCondition = ldf simpleCondition;
    check L9() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 10 [];
  D4():
    deopt 17 [];
  L7():
    goto L0(r2);
  L9():
    p = prom<V +>{
      cond3 = ld cond;
      cond4 = force? cond3;
      checkMissing(cond4);
      return cond4;
    };
    r5 = dyn simpleCondition(p);
    check L10() else D3();
  L12():
    p1 = prom<V +>{
      cond5 = ld cond;
      cond6 = force? cond5;
      checkMissing(cond6);
      return cond6;
    };
    r8 = dyn conditionMessage(p1);
    check L13() else D5();
  D3():
    deopt 12 [r5];
  D5():
    deopt 19 [r8];
  L10():
    st cond = r5;
    goto L2();
  L13():
    st msg = r8;
    conditionCall = ldf conditionCall;
    check L14() else D6();
  D6():
    deopt 22 [];
  L14():
    p2 = prom<V +>{
      cond7 = ld cond;
      cond8 = force? cond7;
      checkMissing(cond8);
      return cond8;
    };
    r10 = dyn conditionCall(p2);
    check L15() else D7();
  D7():
    deopt 24 [r10];
  L15():
    st call = r10;
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L3(r12):
    popenv;
    return r12;
  L16():
    cond9 = ld cond;
    check L18() else D8();
  L17():
    r11 = dyn base1(<lang .signalCondition(cond, msg, call)>);
    goto L3(r11);
  D8():
    deopt 28 [cond9];
  L18():
    cond10 = force? cond9;
    checkMissing(cond10);
    msg = ld msg;
    check L19() else D9();
  D9():
    deopt 30 [msg];
  L19():
    msg1 = force? msg;
    checkMissing(msg1);
    call = ld call;
    check L20() else D10();
  D10():
    deopt 32 [call];
  L20():
    call1 = force? call;
    checkMissing(call1);
    _signalCondition = ldf `.signalCondition` in base;
    r13 = dyn _signalCondition(cond10, msg1, call1);
    check L21() else D11();
  D11():
    deopt 35 [r13];
  L21():
    goto L3(r13);
  }
}