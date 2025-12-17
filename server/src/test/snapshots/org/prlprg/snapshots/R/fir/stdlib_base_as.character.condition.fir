fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `as.character.condition` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg conditionMessage:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg conditionCall:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg x5:*, reg x6:V, reg class:cls, reg r6:V, reg c:L, reg r8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg call:*, reg call1:V, reg c1:V, reg r12:V, reg c2:L, reg paste0:cls, reg cl:*, reg cl1:V, reg p2:p(V +), reg deparse:cls, reg call2:*, reg call3:V, reg p3:p(V +), reg r15:V, reg p4:p(V +), reg msg:*, reg msg1:V, reg p5:p(V +), reg r18:V, reg paste1:cls, reg cl2:*, reg cl3:V, reg p6:p(V +), reg msg2:*, reg msg3:V, reg p7:p(V +), reg r21:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    conditionMessage = ldf conditionMessage;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn conditionMessage(p);
    check L5() else D1();
  D1():
    deopt 3 [r1];
  L5():
    st msg = r1;
    conditionCall = ldf conditionCall;
    check L6() else D2();
  D2():
    deopt 6 [];
  L6():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn conditionCall(p1);
    check L7() else D3();
  D3():
    deopt 8 [r3];
  L7():
    st call = r3;
    sym = ldf class;
    base = ldf class in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r5):
    c = `is.object`(r5);
    if c then L12() else L13(r5);
  L8():
    x5 = ld x;
    check L10() else D4();
  L9():
    r4 = dyn base(<sym x>);
    goto L0(r4);
  D4():
    deopt 12 [x5];
  L1(dx1):
    st cl = dx1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L10():
    x6 = force? x5;
    checkMissing(x6);
    class = ldf class in base;
    r6 = dyn class(x6);
    check L11() else D5();
  L12():
    dr = tryDispatchBuiltin.1("[", r5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(dr);
  L13(r8):
    __ = ldf `[` in base;
    r9 = dyn __(r8, 1);
    goto L1(r9);
  D5():
    deopt 15 [r6];
  L2(r11):
    r12 = `!`(r11);
    c2 = `as.logical`(r12);
    if c2 then L18() else L3();
  L11():
    goto L0(r6);
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L15():
    call = ld call;
    check L17() else D6();
  L16():
    r10 = dyn base1(<sym call>);
    goto L2(r10);
  D6():
    deopt 21 [call];
  L3():
    paste1 = ldf paste0;
    check L22() else D9();
  L17():
    call1 = force? call;
    checkMissing(call1);
    c1 = `==`(call1, NULL);
    goto L2(c1);
  L18():
    paste0 = ldf paste0;
    check L19() else D7();
  D7():
    deopt 26 [];
  D9():
    deopt 35 [];
  L19():
    p2 = prom<V +>{
      cl = ld cl;
      cl1 = force? cl;
      checkMissing(cl1);
      return cl1;
    };
    p4 = prom<V +>{
      deparse = ldf deparse;
      p3 = prom<V +>{
        call2 = ld call;
        call3 = force? call2;
        checkMissing(call3);
        return call3;
      };
      r15 = dyn deparse[, nlines](p3, 1);
      return r15;
    };
    p5 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r18 = dyn paste0(p2, " in ", p4, ": ", p5, "\n");
    check L20() else D8();
  L22():
    p6 = prom<V +>{
      cl2 = ld cl;
      cl3 = force? cl2;
      checkMissing(cl3);
      return cl3;
    };
    p7 = prom<V +>{
      msg2 = ld msg;
      msg3 = force? msg2;
      checkMissing(msg3);
      return msg3;
    };
    r21 = dyn paste1(p6, ": ", p7, "\n");
    check L23() else D10();
  D8():
    deopt 33 [r18];
  D10():
    deopt 40 [r21];
  L20():
    popenv;
    return r18;
  L23():
    popenv;
    return r21;
  }
}