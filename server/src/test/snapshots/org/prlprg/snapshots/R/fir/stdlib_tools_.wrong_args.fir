fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner230421836;
    st `.wrong_args` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner230421836(args, msg) {
  (reg args:*, reg msg:*) -+> V { var args:*, var msg:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg args1:*, reg args2:V, reg length:cls, reg r2:V, reg len:*, reg len1:V, reg r3:V, reg c:L, reg character:cls, reg r4:V, reg len2:*, reg len3:V, reg r5:V, reg c1:L, reg paste:cls, reg sQuote:cls, reg args3:*, reg args4:V, reg p:p(V +), reg r7:V, reg p1:p(V +), reg msg1:*, reg msg2:V, reg p2:p(V +), reg r10:V, reg paste1:cls, reg paste2:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg len4:*, reg len5:V, reg r15:V, reg rep_int:cls, reg r16:V, reg c2:cls, reg r17:V, reg p3:p(V +), reg sQuote1:cls, reg args5:*, reg args6:V, reg p4:p(V +), reg r20:V, reg p5:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg len6:*, reg len7:V, reg r26:V, reg rep_int1:cls, reg r27:V, reg c3:cls, reg r28:V, reg p6:p(V +), reg r30:V, reg p7:p(V +), reg msg3:*, reg msg4:V, reg p8:p(V +), reg r33:V |
    mkenv;
    st args = args;
    st msg = msg;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    st len = r1;
    len = ld len;
    check L7() else D2();
  L3():
    args1 = ld args;
    check L5() else D0();
  L4():
    r = dyn base(<sym args>);
    goto L0(r);
  D0():
    deopt 2 [args1];
  D2():
    deopt 7 [len];
  L5():
    args2 = force? args1;
    checkMissing(args2);
    length = ldf length in base;
    r2 = dyn length(args2);
    check L6() else D1();
  L7():
    len1 = force? len;
    checkMissing(len1);
    r3 = `!`(len1);
    c = `as.logical`(r3);
    if c then L8() else L1();
  D1():
    deopt 5 [r2];
  L1():
    len2 = ld len;
    check L12() else D5();
  L6():
    goto L0(r2);
  L8():
    character = ldf character;
    check L9() else D3();
  D3():
    deopt 11 [];
  D5():
    deopt 13 [len2];
  L9():
    r4 = dyn character();
    check L10() else D4();
  L12():
    len3 = force? len2;
    checkMissing(len3);
    r5 = `==`(len3, 1);
    c1 = `as.logical`(r5);
    if c1 then L13() else L2();
  D4():
    deopt 12 [r4];
  L2():
    paste1 = ldf paste;
    check L17() else D8();
  L10():
    popenv;
    return r4;
  L13():
    paste = ldf paste;
    check L14() else D6();
  D6():
    deopt 18 [];
  D8():
    deopt 24 [];
  L14():
    p1 = prom<V +>{
      sQuote = ldf sQuote;
      p = prom<V +>{
        args3 = ld args;
        args4 = force? args3;
        checkMissing(args4);
        return args4;
      };
      r7 = dyn sQuote(p);
      return r7;
    };
    p2 = prom<V +>{
      msg1 = ld msg;
      msg2 = force? msg1;
      checkMissing(msg2);
      return msg2;
    };
    r10 = dyn paste("argument", p1, p2);
    check L15() else D7();
  L17():
    p7 = prom<V +>{
      paste2 = ldf paste0;
      p3 = prom<V +>{
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L2() else L3();
      L0(r12):
        return r12;
      L2():
        sym2 = ldf `rep.int`;
        base2 = ldf `rep.int` in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L4() else L5();
      L3():
        r11 = dyn base1(<lang rep.int("", `-`(len, 1))>, "and ");
        goto L0(r11);
      L1(r14):
        c2 = ldf c in base;
        r17 = dyn c2(r14, "and ");
        goto L0(r17);
      L4():
        len4 = ld len;
        len5 = force? len4;
        checkMissing(len5);
        r15 = `-`(len5, 1);
        rep_int = ldf `rep.int` in base;
        r16 = dyn rep_int("", r15);
        goto L1(r16);
      L5():
        r13 = dyn base2("", <lang `-`(len, 1)>);
        goto L1(r13);
      };
      p5 = prom<V +>{
        sQuote1 = ldf sQuote;
        p4 = prom<V +>{
          args5 = ld args;
          args6 = force? args5;
          checkMissing(args6);
          return args6;
        };
        r20 = dyn sQuote1(p4);
        return r20;
      };
      p6 = prom<V +>{
        sym3 = ldf c;
        base3 = ldf c in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L2() else L3();
      L0(r23):
        return r23;
      L2():
        sym4 = ldf `rep.int`;
        base4 = ldf `rep.int` in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L4() else L5();
      L3():
        r22 = dyn base3(<lang rep.int(", ", `-`(len, 1))>, "");
        goto L0(r22);
      L1(r25):
        c3 = ldf c in base;
        r28 = dyn c3(r25, "");
        goto L0(r28);
      L4():
        len6 = ld len;
        len7 = force? len6;
        checkMissing(len7);
        r26 = `-`(len7, 1);
        rep_int1 = ldf `rep.int` in base;
        r27 = dyn rep_int1(", ", r26);
        goto L1(r27);
      L5():
        r24 = dyn base4(", ", <lang `-`(len, 1)>);
        goto L1(r24);
      };
      r30 = dyn paste2[, , , collapse](p3, p5, p6, "");
      return r30;
    };
    p8 = prom<V +>{
      msg3 = ld msg;
      msg4 = force? msg3;
      checkMissing(msg4);
      return msg4;
    };
    r33 = dyn paste1("arguments", p7, p8);
    check L18() else D9();
  D7():
    deopt 22 [r10];
  D9():
    deopt 28 [r33];
  L15():
    popenv;
    return r10;
  L18():
    popenv;
    return r33;
  }
}