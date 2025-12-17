fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner285995296;
    st summaryLog = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner285995296(Log) {
  (reg Log:*) -+> V { var Log:*, reg messageLog:cls, reg Log1:*, reg Log2:V, reg p:p(V +), reg r1:V, reg message:cls, reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg Log3:*, reg Log4:V, reg c:L, reg Log6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg Log7:*, reg Log8:V, reg c1:L, reg Log10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r6:V, reg Log11:*, reg Log12:V, reg c2:L, reg Log14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r7:V, reg c3:cls, reg r8:V, reg counts:*, reg counts1:V, reg c4:L, reg counts3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg counts4:*, reg counts5:V, reg r9:V, reg __:cls, reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg counts6:*, reg counts7:V, reg length:cls, reg r13:V, reg r14:V, reg c5:L, reg printLog:cls, reg Log15:*, reg Log16:V, reg p1:p(V +), reg r16:V, reg printLog1:cls, reg Log17:*, reg Log18:V, reg p2:p(V +), reg sprintf:cls, reg paste:cls, reg sprintf1:cls, reg counts8:*, reg counts9:V, reg p3:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg counts10:*, reg counts11:V, reg names:cls, reg r22:V, reg p4:p(V +), reg ifelse:cls, reg counts12:*, reg counts13:V, reg r24:V, reg p5:p(V +), reg r26:V, reg p6:p(V +), reg r28:V, reg p7:p(V +), reg r30:V, reg p8:p(V +), reg r32:V, reg p9:p(V +), reg r34:V, reg message1:cls, reg sprintf2:cls, reg sQuote:cls, reg Log19:*, reg Log20:V, reg c6:L, reg Log22:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r35:V, reg p10:p(V +), reg r37:V, reg p11:p(V +), reg r39:V, reg p12:p(V +), reg r41:V, reg message2:cls, reg r42:V |
    mkenv;
    st Log = Log;
    messageLog = ldf messageLog;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      Log1 = ld Log;
      Log2 = force? Log1;
      checkMissing(Log2);
      return Log2;
    };
    r1 = dyn messageLog(p, "DONE");
    check L6() else D1();
  D1():
    deopt 4 [r1];
  L6():
    message = ldf message;
    check L7() else D2();
  D2():
    deopt 6 [];
  L7():
    r2 = dyn message("");
    check L8() else D3();
  D3():
    deopt 8 [r2];
  L8():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r4):
    st counts = r4;
    counts = ld counts;
    check L27() else D8();
  L9():
    Log3 = ld Log;
    check L11() else D4();
  L10():
    r3 = dyn base[ERROR, WARNING, NOTE](<lang `$`(Log, errors)>, <lang `$`(Log, warnings)>, <lang `$`(Log, notes)>);
    goto L0(r3);
  D4():
    deopt 11 [Log3];
  D8():
    deopt 26 [counts];
  L11():
    Log4 = force? Log3;
    checkMissing(Log4);
    c = `is.object`(Log4);
    if c then L13() else L14(Log4);
  L27():
    counts1 = force? counts;
    checkMissing(counts1);
    c4 = `is.object`(counts1);
    if c4 then L28() else L29(counts1);
  L1(dx7):
    st counts = dx7;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L12(dx1):
    Log7 = ld Log;
    check L16() else D5();
  L13():
    dr = tryDispatchBuiltin.1("$", Log4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(Log6):
    r5 = `$`(Log6, <sym errors>);
    goto L12(r5);
  L28():
    dr6 = tryDispatchBuiltin.1("[", counts1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L30() else L29(dr6);
  L29(counts3):
    counts4 = ld counts;
    check L31() else D9();
  D5():
    deopt 15 [Log7];
  D9():
    deopt 28 [counts3, counts4];
  L2(r12):
    r14 = `!`(r12);
    c5 = `as.logical`(r14);
    if c5 then L36() else L3();
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(dx);
  L16():
    Log8 = force? Log7;
    checkMissing(Log8);
    c1 = `is.object`(Log8);
    if c1 then L18() else L19(Log8);
  L30():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L1(dx6);
  L31():
    counts5 = force? counts4;
    checkMissing(counts5);
    r9 = `>`(counts5, 0);
    __ = ldf `[` in base;
    r10 = dyn __(counts3, r9);
    goto L1(r10);
  L32():
    counts6 = ld counts;
    check L34() else D10();
  L33():
    r11 = dyn base1(<sym counts>);
    goto L2(r11);
  D10():
    deopt 36 [counts6];
  L3():
    printLog1 = ldf printLog;
    check L40() else D14();
  L4():
    message2 = ldf message;
    check L44() else D18();
  L17(dx3):
    Log11 = ld Log;
    check L21() else D6();
  L18():
    dr2 = tryDispatchBuiltin.1("$", Log8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L20() else L19(dr2);
  L19(Log10):
    r6 = `$`(Log10, <sym warnings>);
    goto L17(r6);
  L34():
    counts7 = force? counts6;
    checkMissing(counts7);
    length = ldf length in base;
    r13 = dyn length(counts7);
    check L35() else D11();
  L36():
    printLog = ldf printLog;
    check L37() else D12();
  D6():
    deopt 19 [Log11];
  D11():
    deopt 39 [r13];
  D12():
    deopt 42 [];
  D14():
    deopt 47 [];
  D18():
    deopt 56 [];
  L20():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L17(dx2);
  L21():
    Log12 = force? Log11;
    checkMissing(Log12);
    c2 = `is.object`(Log12);
    if c2 then L23() else L24(Log12);
  L35():
    goto L2(r13);
  L37():
    p1 = prom<V +>{
      Log15 = ld Log;
      Log16 = force? Log15;
      checkMissing(Log16);
      return Log16;
    };
    r16 = dyn printLog(p1, "Status: OK\n");
    check L38() else D13();
  L40():
    p2 = prom<V +>{
      Log17 = ld Log;
      Log18 = force? Log17;
      checkMissing(Log18);
      return Log18;
    };
    p9 = prom<V +>{
      sprintf = ldf sprintf;
      p8 = prom<V +>{
        paste = ldf paste;
        p7 = prom<V +>{
          sprintf1 = ldf sprintf;
          p3 = prom<V +>{
            counts8 = ld counts;
            counts9 = force? counts8;
            checkMissing(counts9);
            return counts9;
          };
          p4 = prom<V +>{
            sym2 = ldf names;
            base2 = ldf names in base;
            guard2 = `==`.4(sym2, base2);
            if guard2 then L1() else L2();
          L0(r21):
            return r21;
          L1():
            counts10 = ld counts;
            counts11 = force? counts10;
            checkMissing(counts11);
            names = ldf names in base;
            r22 = dyn names(counts11);
            goto L0(r22);
          L2():
            r20 = dyn base2(<sym counts>);
            goto L0(r20);
          };
          p6 = prom<V +>{
            ifelse = ldf ifelse;
            p5 = prom<V +>{
              counts12 = ld counts;
              counts13 = force? counts12;
              checkMissing(counts13);
              r24 = `>`(counts13, 1);
              return r24;
            };
            r26 = dyn ifelse(p5, "s", "");
            return r26;
          };
          r28 = dyn sprintf1("%d %s%s", p3, p4, p6);
          return r28;
        };
        r30 = dyn paste[, collapse](p7, ", ");
        return r30;
      };
      r32 = dyn sprintf("Status: %s\n", p8);
      return r32;
    };
    r34 = dyn printLog1(p2, p9);
    check L41() else D15();
  L44():
    r42 = dyn message2("");
    check L45() else D19();
  D13():
    deopt 45 [r16];
  D15():
    deopt 50 [r34];
  D19():
    deopt 58 [r42];
  L22(dx5):
    c3 = ldf c in base;
    r8 = dyn c3(dx1, dx3, dx5);
    check L26() else D7();
  L23():
    dr4 = tryDispatchBuiltin.1("$", Log12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L25() else L24(dr4);
  L24(Log14):
    r7 = `$`(Log14, <sym notes>);
    goto L22(r7);
  L38():
    goto L4();
  L41():
    message1 = ldf message;
    check L42() else D16();
  L45():
    popenv;
    return r42;
  D7():
    deopt 24 [r8];
  D16():
    deopt 52 [];
  L25():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L22(dx4);
  L26():
    goto L0(r8);
  L42():
    p12 = prom<V +>{
      sprintf2 = ldf sprintf;
      p11 = prom<V +>{
        sQuote = ldf sQuote;
        p10 = prom<V +>{
          Log19 = ld Log;
          Log20 = force? Log19;
          checkMissing(Log20);
          c6 = `is.object`(Log20);
          if c6 then L1() else L2(Log20);
        L0(dx9):
          return dx9;
        L1():
          dr8 = tryDispatchBuiltin.1("$", Log20);
          dc4 = getTryDispatchBuiltinDispatched(dr8);
          if dc4 then L3() else L2(dr8);
        L2(Log22):
          r35 = `$`(Log22, <sym filename>);
          goto L0(r35);
        L3():
          dx8 = getTryDispatchBuiltinValue(dr8);
          goto L0(dx8);
        };
        r37 = dyn sQuote(p10);
        return r37;
      };
      r39 = dyn sprintf2("See\n  %s\nfor details.", p11);
      return r39;
    };
    r41 = dyn message1(p12);
    check L43() else D17();
  D17():
    deopt 54 [r41];
  L43():
    goto L4();
  }
}