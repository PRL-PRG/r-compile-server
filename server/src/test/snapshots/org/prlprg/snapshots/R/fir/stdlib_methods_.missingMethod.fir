fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner609771457;
    st `.missingMethod` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner609771457(f, message, method) {
  (reg f:*, reg message:*, reg method:*) -+> V { var f:*, var message:*, reg message_isMissing:L, reg message_orDefault:*, var method:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg message1:*, reg message2:V, reg nzchar:cls, reg r2:V, reg c:L, reg paste0:cls, reg message3:*, reg message4:V, reg p:p(V +), reg r4:V, reg paste1:cls, reg f1:*, reg f2:V, reg p1:p(V +), reg message5:*, reg message6:V, reg p2:p(V +), reg r8:V, reg is:cls, reg method1:*, reg method2:V, reg p3:p(V +), reg r10:V, reg c1:L, reg paste2:cls, reg _dQ:cls, reg __:cls, reg r11:V, reg p4:p(V +), reg r13:V, reg p5:p(V +), reg r15:V, reg paste3:cls, reg _dQ1:cls, reg __1:cls, reg r16:V, reg p6:p(V +), reg r18:V, reg p7:p(V +), reg r20:V, reg paste4:cls, reg message7:*, reg message8:V, reg p8:p(V +), reg target:*, reg target1:V, reg p9:p(V +), reg r23:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r24:V, reg r25:V, reg target2:*, reg target3:V, reg defined:*, reg defined1:V, reg identical:cls, reg r26:V, reg r27:V, reg c2:L, reg paste5:cls, reg message9:*, reg message10:V, reg p10:p(V +), reg defined2:*, reg defined3:V, reg p11:p(V +), reg r30:V, reg r31:V, reg paste6:cls, reg message11:*, reg message12:V, reg p12:p(V +), reg r34:V, reg message13:*, reg message14:V |
    mkenv;
    st f = f;
    message_isMissing = missing.0(message);
    if message_isMissing then L0("") else L0(message);
  L0(message_orDefault):
    st message = message_orDefault;
    st method = method;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L1(r1):
    c = `as.logical`(r1);
    if c then L13() else L2();
  L9():
    message1 = ld message;
    check L11() else D0();
  L10():
    r = dyn base(<sym message>);
    goto L1(r);
  D0():
    deopt 2 [message1];
  L2():
    goto L3();
  L3():
    paste1 = ldf paste;
    check L17() else D4();
  L11():
    message2 = force? message1;
    checkMissing(message2);
    nzchar = ldf nzchar in base;
    r2 = dyn nzchar(message2);
    check L12() else D1();
  L13():
    paste0 = ldf paste0;
    check L14() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  D4():
    deopt 16 [];
  L12():
    goto L1(r2);
  L14():
    p = prom<V +>{
      message3 = ld message;
      message4 = force? message3;
      checkMissing(message4);
      return message4;
    };
    r4 = dyn paste0("(", p, ")");
    check L15() else D3();
  L17():
    p1 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    p2 = prom<V +>{
      message5 = ld message;
      message6 = force? message5;
      checkMissing(message6);
      return message6;
    };
    r8 = dyn paste1("for function", p1, p2);
    check L18() else D5();
  D3():
    deopt 11 [r4];
  D5():
    deopt 20 [r8];
  L15():
    st message = r4;
    goto L3();
  L18():
    st message = r8;
    is = ldf is;
    check L19() else D6();
  D6():
    deopt 23 [];
  L19():
    p3 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r10 = dyn is(p3, "MethodDefinition");
    check L20() else D7();
  D7():
    deopt 26 [r10];
  L20():
    c1 = `as.logical`(r10);
    if c1 then L21() else L4();
  L4():
    paste6 = ldf paste;
    check L38() else D19();
  L8():
    message13 = ld message;
    check L40() else D21();
  L21():
    paste2 = ldf paste;
    check L22() else D8();
  D8():
    deopt 28 [];
  D19():
    deopt 75 [];
  D21():
    deopt 80 [message13];
  L22():
    p5 = prom<V +>{
      _dQ = ldf `.dQ`;
      p4 = prom<V +>{
        __ = ldf `@` in base;
        r11 = dyn __(<sym method>, <sym target>);
        return r11;
      };
      r13 = dyn _dQ(p4);
      return r13;
    };
    r15 = dyn paste2[, collapse](p5, ", ");
    check L23() else D9();
  L38():
    p12 = prom<V +>{
      message11 = ld message;
      message12 = force? message11;
      checkMissing(message12);
      return message12;
    };
    r34 = dyn paste6("Required method not defined", p12);
    check L39() else D20();
  L40():
    message14 = force? message13;
    checkMissing(message14);
    popenv;
    return message14;
  D9():
    deopt 32 [r15];
  D20():
    deopt 78 [r34];
  L23():
    st target = r15;
    paste3 = ldf paste;
    check L24() else D10();
  L39():
    st message = r34;
    goto L8();
  D10():
    deopt 35 [];
  L24():
    p7 = prom<V +>{
      _dQ1 = ldf `.dQ`;
      p6 = prom<V +>{
        __1 = ldf `@` in base;
        r16 = dyn __1(<sym method>, <sym defined>);
        return r16;
      };
      r18 = dyn _dQ1(p6);
      return r18;
    };
    r20 = dyn paste3[, collapse](p7, ", ");
    check L25() else D11();
  D11():
    deopt 39 [r20];
  L25():
    st defined = r20;
    paste4 = ldf paste;
    check L26() else D12();
  D12():
    deopt 42 [];
  L26():
    p8 = prom<V +>{
      message7 = ld message;
      message8 = force? message7;
      checkMissing(message8);
      return message8;
    };
    p9 = prom<V +>{
      target = ld target;
      target1 = force? target;
      checkMissing(target1);
      return target1;
    };
    r23 = dyn paste4("Required method", p8, "not defined for signature", p9);
    check L27() else D13();
  D13():
    deopt 47 [r23];
  L27():
    st message = r23;
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L5(r25):
    r27 = `!`(r25);
    c2 = `as.logical`(r27);
    if c2 then L33() else L6();
  L28():
    target2 = ld target;
    check L30() else D14();
  L29():
    r24 = dyn base1(<sym target>, <sym defined>);
    goto L5(r24);
  D14():
    deopt 51 [target2];
  L6():
    goto L7(NULL);
  L7(r31):
    goto L8();
  L30():
    target3 = force? target2;
    checkMissing(target3);
    defined = ld defined;
    check L31() else D15();
  L33():
    paste5 = ldf paste;
    check L34() else D17();
  D15():
    deopt 53 [defined];
  D17():
    deopt 66 [];
  L31():
    defined1 = force? defined;
    checkMissing(defined1);
    identical = ldf identical in base;
    r26 = dyn identical(target3, defined1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L32() else D16();
  L34():
    p10 = prom<V +>{
      message9 = ld message;
      message10 = force? message9;
      checkMissing(message10);
      return message10;
    };
    p11 = prom<V +>{
      defined2 = ld defined;
      defined3 = force? defined2;
      checkMissing(defined3);
      return defined3;
    };
    r30 = dyn paste5(p10, ", required for signature", p11);
    check L35() else D18();
  D16():
    deopt 63 [r26];
  D18():
    deopt 70 [r30];
  L32():
    goto L5(r26);
  L35():
    st message = r30;
    goto L7(r30);
  }
}