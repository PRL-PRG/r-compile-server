fun main() {
  () -+> V { reg r:cls, reg message:cls, reg r1:V, reg suppressMessages:cls, reg message1:cls, reg r2:V, reg p:p(V +), reg r4:V, reg r5:cls, reg testit:cls, reg r6:V, reg suppressPackageStartupMessages:cls, reg testit1:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg suppressMessages1:cls, reg testit2:cls, reg r10:V, reg p2:p(V +), reg r12:V |
    mkenv;
    r = clos `inner-680747806`;
    st message = r;
    message = ldf message;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn message("ABC", "DEF");
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    suppressMessages = ldf suppressMessages;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p = prom<V +>{
      message1 = ldf message;
      r2 = dyn message1("ABC");
      return r2;
    };
    r4 = dyn suppressMessages(p);
    check L3() else D3();
  D3():
    deopt 11 [r4];
  L3():
    r5 = clos inner560854305;
    st testit = r5;
    testit = ldf testit;
    check L4() else D4();
  D4():
    deopt 16 [];
  L4():
    r6 = dyn testit();
    check L5() else D5();
  D5():
    deopt 17 [r6];
  L5():
    suppressPackageStartupMessages = ldf suppressPackageStartupMessages;
    check L6() else D6();
  D6():
    deopt 19 [];
  L6():
    p1 = prom<V +>{
      testit1 = ldf testit;
      r7 = dyn testit1();
      return r7;
    };
    r9 = dyn suppressPackageStartupMessages(p1);
    check L7() else D7();
  D7():
    deopt 21 [r9];
  L7():
    suppressMessages1 = ldf suppressMessages;
    check L8() else D8();
  D8():
    deopt 23 [];
  L8():
    p2 = prom<V +>{
      testit2 = ldf testit;
      r10 = dyn testit2();
      return r10;
    };
    r12 = dyn suppressMessages1(p2);
    check L9() else D9();
  D9():
    deopt 25 [r12];
  L9():
    popenv;
    return r12;
  }
}
fun `inner-680747806`(`...`, domain, appendLF) {
  (reg ddd:dots, reg domain:*, reg appendLF:*) -+> V { var `...`:dots?, var domain:*, reg domain_isMissing:L, reg domain_orDefault:*, var appendLF:*, reg appendLF_isMissing:L, reg appendLF_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ___length:cls, reg r2:V, reg r3:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg __1:*, reg __2:V, reg inherits:cls, reg r6:V, reg c6:L, reg c7:V, reg c9:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg nargs:cls, reg r9:V, reg r10:V, reg c10:L, reg warning:cls, reg r11:V, reg __3:*, reg __4:V, reg __5:V, reg _makeMessage:cls, reg ddd1:dots?, reg domain1:*, reg domain2:V, reg p:p(V +), reg appendLF1:*, reg appendLF2:V, reg p1:p(V +), reg r15:V, reg sys_call:cls, reg r16:V, reg simpleMessage:cls, reg msg:*, reg msg1:V, reg p2:p(V +), reg call:*, reg call1:V, reg p3:p(V +), reg r19:V, reg r20:cls, reg withRestarts:cls, reg signalCondition:cls, reg cond:*, reg cond1:V, reg p4:p(V +), reg defaultHandler:cls, reg cond2:*, reg cond3:V, reg p5:p(V +), reg r24:V, reg p6:p(V +), reg r26:cls, reg p7:p(V +), reg r28:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg invisible:cls, reg r31:V |
    mkenv;
    st `...` = ddd;
    domain_isMissing = missing.0(domain);
    if domain_isMissing then L0(NULL) else L0(domain);
  L0(domain_orDefault):
    st domain = domain_orDefault;
    appendLF_isMissing = missing.0(appendLF);
    if appendLF_isMissing then L1(TRUE) else L1(appendLF);
  L1(appendLF_orDefault):
    st appendLF = appendLF_orDefault;
    sym = ldf `...length`;
    base = ldf `...length` in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L2(r1):
    r3 = `==`(r1, 1);
    c = `as.logical`(r3);
    if c then L14() else L3(c);
  L11():
    ___length = ldf `...length` in base;
    r2 = dyn ___length();
    check L13() else D0();
  L12():
    r = dyn base();
    goto L2(r);
  D0():
    deopt 3 [r2];
  L3(c2):
    c9 = `as.logical`(c2);
    if c9 then L20() else L5();
  L13():
    goto L2(r2);
  L14():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L4(c5, r5):
    c6 = `as.logical`(r5);
    c7 = `&&`(c5, c6);
    goto L3(c7);
  L5():
    _makeMessage = ldf `.makeMessage`;
    check L30() else D7();
  L9(__5):
    st cond = __5;
    r20 = clos inner1914006432;
    st defaultHandler = r20;
    withRestarts = ldf withRestarts;
    check L36() else D13();
  L15():
    __1 = ld `..1`;
    check L17() else D1();
  L16():
    r4 = dyn base1(<sym ..1>, "condition");
    goto L4(c, r4);
  L20():
    sym2 = ldf nargs;
    base2 = ldf nargs in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  D1():
    deopt 8 [c, __1];
  D7():
    deopt 30 [];
  D13():
    deopt 52 [];
  L6(r8):
    r10 = `>`(r8, 1);
    c10 = `as.logical`(r10);
    if c10 then L24() else L7();
  L17():
    __2 = force? __1;
    checkMissing(__2);
    inherits = ldf inherits in base;
    r6 = dyn inherits(__2, "condition", FALSE);
    check L18() else D2();
  L21():
    nargs = ldf nargs in base;
    r9 = dyn nargs();
    check L23() else D3();
  L22():
    r7 = dyn base2();
    goto L6(r7);
  L30():
    ddd1 = ld `...`;
    p = prom<V +>{
      domain1 = ld domain;
      domain2 = force? domain1;
      checkMissing(domain2);
      return domain2;
    };
    p1 = prom<V +>{
      appendLF1 = ld appendLF;
      appendLF2 = force? appendLF1;
      checkMissing(appendLF2);
      return appendLF2;
    };
    r15 = dyn _makeMessage[`...`, domain, appendLF](ddd1, p, p1);
    check L31() else D8();
  L36():
    p6 = prom<V +>{
      signalCondition = ldf signalCondition;
      p4 = prom<V +>{
        cond = ld cond;
        cond1 = force? cond;
        checkMissing(cond1);
        return cond1;
      };
      dyn signalCondition(p4);
      defaultHandler = ldf defaultHandler;
      p5 = prom<V +>{
        cond2 = ld cond;
        cond3 = force? cond2;
        checkMissing(cond3);
        return cond3;
      };
      r24 = dyn defaultHandler(p5);
      return r24;
    };
    p7 = prom<V +>{
      r26 = clos inner560854305;
      return r26;
    };
    r28 = dyn withRestarts[, muffleMessage](p6, p7);
    check L37() else D14();
  D2():
    deopt 13 [c, r6];
  D3():
    deopt 18 [r9];
  D8():
    deopt 36 [r15];
  D14():
    deopt 56 [r28];
  L7():
    goto L8();
  L8():
    __3 = ld `..1`;
    check L28() else D6();
  L18():
    goto L4(c, r6);
  L23():
    goto L6(r9);
  L24():
    warning = ldf warning;
    check L25() else D4();
  L31():
    st msg = r15;
    sys_call = ldf `sys.call`;
    check L32() else D9();
  L37():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  D4():
    deopt 22 [];
  D6():
    deopt 27 [__3];
  D9():
    deopt 39 [];
  L10(r30):
    popenv;
    return r30;
  L25():
    r11 = dyn warning("additional arguments ignored in message()");
    check L26() else D5();
  L28():
    __4 = force? __3;
    checkMissing(__4);
    goto L9(__4);
  L32():
    r16 = dyn sys_call();
    check L33() else D10();
  L38():
    invisible = ldf invisible in base;
    r31 = dyn invisible();
    check L40() else D15();
  L39():
    r29 = dyn base3();
    goto L10(r29);
  D5():
    deopt 24 [r11];
  D10():
    deopt 40 [r16];
  D15():
    deopt 60 [r31];
  L26():
    goto L8();
  L33():
    st call = r16;
    simpleMessage = ldf simpleMessage;
    check L34() else D11();
  L40():
    goto L10(r31);
  D11():
    deopt 43 [];
  L34():
    p2 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    p3 = prom<V +>{
      call = ld call;
      call1 = force? call;
      checkMissing(call1);
      return call1;
    };
    r19 = dyn simpleMessage(p2, p3);
    check L35() else D12();
  D12():
    deopt 46 [r19];
  L35():
    goto L9(r19);
  }
}
fun inner1914006432(c) {
  (reg c:*) -+> V { var c:*, reg cat:cls, reg conditionMessage:cls, reg c1:*, reg c2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg stderr:cls, reg r3:V, reg p2:p(V +), reg r5:V |
    mkenv;
    st c = c;
    cat = ldf cat;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      conditionMessage = ldf conditionMessage;
      p = prom<V +>{
        c1 = ld c;
        c2 = force? c1;
        checkMissing(c2);
        return c2;
      };
      r1 = dyn conditionMessage(p);
      return r1;
    };
    p2 = prom<V +>{
      stderr = ldf stderr;
      r3 = dyn stderr();
      return r3;
    };
    r5 = dyn cat[, file, sep](p1, p2, "");
    check L1() else D1();
  D1():
    deopt 7 [r5];
  L1():
    popenv;
    return r5;
  }
}
fun inner560854305() {
  () -+> V { |
    mkenv;
    popenv;
    return NULL;
  }
}