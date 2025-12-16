fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `as.character.error` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg conditionMessage:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg conditionCall:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg call:*, reg call1:V, reg c:V, reg r6:V, reg c1:L, reg paste0:cls, reg deparse:cls, reg call2:*, reg call3:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg msg:*, reg msg1:V, reg p4:p(V +), reg r11:V, reg paste1:cls, reg msg2:*, reg msg3:V, reg p5:p(V +), reg r13:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    conditionMessage = ldf conditionMessage;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn conditionMessage(p);
    check L3() else D1();
  D1():
    deopt 3 [r1];
  L3():
    st msg = r1;
    conditionCall = ldf conditionCall;
    check L4() else D2();
  D2():
    deopt 6 [];
  L4():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn conditionCall(p1);
    check L5() else D3();
  D3():
    deopt 8 [r3];
  L5():
    st call = r3;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r5):
    r6 = `!`(r5);
    c1 = `as.logical`(r6);
    if c1 then L9() else L1();
  L6():
    call = ld call;
    check L8() else D4();
  L7():
    r4 = dyn base(<sym call>);
    goto L0(r4);
  D4():
    deopt 11 [call];
  L1():
    paste1 = ldf paste0;
    check L13() else D7();
  L8():
    call1 = force? call;
    checkMissing(call1);
    c = `==`(call1, NULL);
    goto L0(c);
  L9():
    paste0 = ldf paste0;
    check L10() else D5();
  D5():
    deopt 16 [];
  D7():
    deopt 24 [];
  L10():
    p3 = prom<V +>{
      deparse = ldf deparse;
      p2 = prom<V +>{
        call2 = ld call;
        call3 = force? call2;
        checkMissing(call3);
        return call3;
      };
      r8 = dyn deparse[, nlines](p2, 1);
      return r8;
    };
    p4 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r11 = dyn paste0("Error in ", p3, ": ", p4, "\n");
    check L11() else D6();
  L13():
    p5 = prom<V +>{
      msg2 = ld msg;
      msg3 = force? msg2;
      checkMissing(msg3);
      return msg3;
    };
    r13 = dyn paste1("Error: ", p5, "\n");
    check L14() else D8();
  D6():
    deopt 22 [r11];
  D8():
    deopt 28 [r13];
  L11():
    popenv;
    return r11;
  L14():
    popenv;
    return r13;
  }
}