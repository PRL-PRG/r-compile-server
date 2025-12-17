fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `summary.warnings` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg names:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg object3:*, reg object4:V, reg as_character:cls, reg r5:V, reg paste:cls, reg calls:*, reg calls1:V, reg p:p(V +), reg msgs:*, reg msgs1:V, reg p1:p(V +), reg ss:*, reg ss1:V, reg p2:p(V +), reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg which:cls, reg calls2:*, reg calls3:V, reg r12:V, reg p3:p(V +), reg r14:V, reg length:cls, reg r15:V, reg c:L, reg substr:cls, reg c_m_:*, reg c_m_1:V, reg c1:L, reg c_m_3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i_no_call:*, reg i_no_call1:V, reg __:cls, reg r16:V, reg p4:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg paste1:cls, reg ss2:*, reg ss3:V, reg p5:p(V +), reg r21:V, reg nchar:cls, reg r22:V, reg r23:V, reg p6:p(V +), reg r25:V, reg l:*, reg c2:L, reg r27:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r29:V, reg dx3:V, reg i_no_call2:*, reg i_no_call3:V, reg ___:cls, reg r30:V, reg which1:cls, reg duplicated:cls, reg object5:*, reg object6:V, reg p7:p(V +), reg r33:V, reg r34:V, reg p8:p(V +), reg r36:V, reg table:cls, reg factor:cls, reg c_m_4:*, reg c_m_5:V, reg p9:p(V +), reg c_m_6:*, reg c_m_7:V, reg c3:L, reg c_m_9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i_uniq:*, reg i_uniq1:V, reg __1:cls, reg r38:V, reg p10:p(V +), reg r40:V, reg p11:p(V +), reg r42:V, reg structure:cls, reg object7:*, reg object8:V, reg c4:L, reg object10:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i_uniq2:*, reg i_uniq3:V, reg __2:cls, reg r43:V, reg p12:p(V +), reg as_vector:cls, reg tm:*, reg tm1:V, reg p13:p(V +), reg r46:V, reg p14:p(V +), reg r48:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    st msgs = r1;
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L6():
    object1 = ld object;
    check L8() else D0();
  L7():
    r = dyn base(<sym object>);
    goto L0(r);
  D0():
    deopt 2 [object1];
  L1(r4):
    st calls = r4;
    st ss = " |<:>| ";
    paste = ldf paste;
    check L14() else D4();
  L8():
    object2 = force? object1;
    checkMissing(object2);
    names = ldf names in base;
    r2 = dyn names(object2);
    check L9() else D1();
  L10():
    object3 = ld object;
    check L12() else D2();
  L11():
    r3 = dyn base1(<sym object>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [object3];
  D4():
    deopt 18 [];
  L9():
    goto L0(r2);
  L12():
    object4 = force? object3;
    checkMissing(object4);
    as_character = ldf `as.character` in base;
    r5 = dyn as_character(object4);
    check L13() else D3();
  L14():
    p = prom<V +>{
      calls = ld calls;
      calls1 = force? calls;
      checkMissing(calls1);
      return calls1;
    };
    p1 = prom<V +>{
      msgs = ld msgs;
      msgs1 = force? msgs;
      checkMissing(msgs1);
      return msgs1;
    };
    p2 = prom<V +>{
      ss = ld ss;
      ss1 = force? ss;
      checkMissing(ss1);
      return ss1;
    };
    r9 = dyn paste[, , sep](p, p1, p2);
    check L15() else D5();
  D3():
    deopt 12 [r5];
  D5():
    deopt 23 [r9];
  L13():
    goto L1(r5);
  L15():
    st `c.m.` = r9;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L2(r11):
    c = `as.logical`(r11);
    if c then L21() else L3();
  L16():
    which = ldf which;
    check L18() else D6();
  L17():
    r10 = dyn base2(<lang `<-`(i.no.call, which(`==`(calls, "NULL")))>);
    goto L2(r10);
  D6():
    deopt 28 [];
  L3():
    goto L5();
  L5():
    which1 = ldf which;
    check L29() else D12();
  L18():
    p3 = prom<V +>{
      calls2 = ld calls;
      calls3 = force? calls2;
      checkMissing(calls3);
      r12 = `==`(calls3, "NULL");
      return r12;
    };
    r14 = dyn which(p3);
    check L19() else D7();
  L21():
    substr = ldf substr;
    check L22() else D9();
  D7():
    deopt 30 [r14];
  D9():
    deopt 35 [];
  D12():
    deopt 48 [];
  L19():
    st `i.no.call` = r14;
    length = ldf length in base;
    r15 = dyn length(r14);
    check L20() else D8();
  L22():
    p4 = prom<V +>{
      c_m_ = ld `c.m.`;
      c_m_1 = force? c_m_;
      checkMissing(c_m_1);
      c1 = `is.object`(c_m_1);
      if c1 then L1() else L2(c_m_1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", c_m_1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(c_m_3):
      i_no_call = ld `i.no.call`;
      i_no_call1 = force? i_no_call;
      __ = ldf `[` in base;
      r16 = dyn __(c_m_3, i_no_call1);
      goto L0(r16);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p6 = prom<V +>{
      sym3 = ldf nchar;
      base3 = ldf nchar in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r19):
      r23 = `+`(r19, 1);
      return r23;
    L1():
      paste1 = ldf paste0;
      p5 = prom<V +>{
        ss2 = ld ss;
        ss3 = force? ss2;
        checkMissing(ss3);
        return ss3;
      };
      r21 = dyn paste1("NULL", p5);
      nchar = ldf nchar in base;
      r22 = dyn nchar(r21, "chars", FALSE, NA_LGL);
      goto L0(r22);
    L2():
      r18 = dyn base3(<lang paste0("NULL", ss)>);
      goto L0(r18);
    };
    r25 = dyn substr(p4, p6, 100000);
    check L23() else D10();
  L29():
    p8 = prom<V +>{
      duplicated = ldf duplicated;
      p7 = prom<V +>{
        object5 = ld object;
        object6 = force? object5;
        checkMissing(object6);
        return object6;
      };
      r33 = dyn duplicated[, incomparables](p7, FALSE);
      r34 = `!`(r33);
      return r34;
    };
    r36 = dyn which1(p8);
    check L30() else D13();
  D8():
    deopt 33 [r15];
  D10():
    deopt 39 [r25];
  D13():
    deopt 50 [r36];
  L20():
    goto L2(r15);
  L23():
    l = ld `c.m.`;
    c2 = `is.object`(l);
    if c2 then L24() else L25(r25, l);
  L30():
    st `i.uniq` = r36;
    table = ldf table;
    check L31() else D14();
  D14():
    deopt 53 [];
  L4(r29, dx3):
    st `c.m.` = dx3;
    goto L5();
  L24():
    dr2 = tryDispatchBuiltin.0("[<-", l, r25);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L26() else L25(r25, dr2);
  L25(r27, l2):
    i_no_call2 = ld `i.no.call`;
    check L27() else D11();
  L31():
    p11 = prom<V +>{
      factor = ldf factor;
      p9 = prom<V +>{
        c_m_4 = ld `c.m.`;
        c_m_5 = force? c_m_4;
        checkMissing(c_m_5);
        return c_m_5;
      };
      p10 = prom<V +>{
        c_m_6 = ld `c.m.`;
        c_m_7 = force? c_m_6;
        checkMissing(c_m_7);
        c3 = `is.object`(c_m_7);
        if c3 then L1() else L2(c_m_7);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[", c_m_7);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(c_m_9):
        i_uniq = ld `i.uniq`;
        i_uniq1 = force? i_uniq;
        __1 = ldf `[` in base;
        r38 = dyn __1(c_m_9, i_uniq1);
        goto L0(r38);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r40 = dyn factor[, levels](p9, p10);
      return r40;
    };
    r42 = dyn table[, `deparse.level`](p11, 0);
    check L32() else D15();
  D11():
    deopt 41 [r27, l2, r25, i_no_call2];
  D15():
    deopt 57 [r42];
  L26():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(r25, dx2);
  L27():
    i_no_call3 = force? i_no_call2;
    ___ = ldf `[<-` in base;
    r30 = dyn ___(l2, r25, i_no_call3);
    goto L4(r27, r30);
  L32():
    st tm = r42;
    structure = ldf structure;
    check L33() else D16();
  D16():
    deopt 60 [];
  L33():
    p12 = prom<V +>{
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      c4 = `is.object`(object8);
      if c4 then L1() else L2(object8);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", object8);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(object10):
      i_uniq2 = ld `i.uniq`;
      i_uniq3 = force? i_uniq2;
      __2 = ldf `[` in base;
      r43 = dyn __2(object10, i_uniq3);
      goto L0(r43);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p14 = prom<V +>{
      as_vector = ldf `as.vector`;
      p13 = prom<V +>{
        tm = ld tm;
        tm1 = force? tm;
        checkMissing(tm1);
        return tm1;
      };
      r46 = dyn as_vector(p13);
      return r46;
    };
    r48 = dyn structure[, counts, class](p12, p14, "summary.warnings");
    check L34() else D17();
  D17():
    deopt 66 [r48];
  L34():
    popenv;
    return r48;
  }
}