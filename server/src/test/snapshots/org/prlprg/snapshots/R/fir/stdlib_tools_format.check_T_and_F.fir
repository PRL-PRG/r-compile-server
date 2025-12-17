fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.check_T_and_F` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg character:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg length:cls, reg r6:V, reg c1:L, reg ngettext:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r9:V, reg length1:cls, reg r10:V, reg p:p(V +), reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg strwrap:cls, reg msg:*, reg msg1:V, reg p1:p(V +), reg r16:V, reg _pretty_format:cls, reg x9:*, reg x10:V, reg c3:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r17:V, reg p2:p(V +), reg r19:V, reg c4:cls, reg r20:V, reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg x13:*, reg x14:V, reg c5:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r24:V, reg length2:cls, reg r25:V, reg c6:L, reg ngettext1:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg r27:V, reg x17:*, reg x18:V, reg c7:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r28:V, reg length3:cls, reg r29:V, reg p3:p(V +), reg r31:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg strwrap1:cls, reg msg2:*, reg msg3:V, reg p4:p(V +), reg r35:V, reg paste0:cls, reg x21:*, reg x22:V, reg c8:L, reg x24:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r36:V, reg p5:p(V +), reg r38:V, reg c9:cls, reg r39:V, reg r40:V, reg c10:cls, reg r41:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r1):
    popenv;
    return r1;
  L9():
    character = ldf character;
    check L11() else D0();
  L10():
    r = dyn base(<lang character()>, <lang if(length(`$`(x, bad_closures)), {
        `<-`(msg, ngettext(length(`$`(x, bad_closures)), "Found possibly global 'T' or 'F' in the following function:", "Found possibly global 'T' or 'F' in the following functions:"));
        c(strwrap(msg), .pretty_format(`$`(x, bad_closures)))
      })>, <lang if(length(`$`(x, bad_examples)), {
        `<-`(msg, ngettext(length(`$`(x, bad_examples)), "Found possibly global 'T' or 'F' in the examples of the following Rd file:", "Found possibly global 'T' or 'F' in the examples of the following Rd files:"));
        c(strwrap(msg), paste0("  ", `$`(x, bad_examples)))
      })>);
    goto L0(r);
  D0():
    deopt 3 [];
  L11():
    r2 = dyn character();
    check L12() else D1();
  D1():
    deopt 4 [r2];
  L12():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L1(r4):
    c1 = `as.logical`(r4);
    if c1 then L21() else L2();
  L13():
    x1 = ld x;
    check L15() else D2();
  L14():
    r3 = dyn base1(<lang `$`(x, bad_closures)>);
    goto L1(r3);
  D2():
    deopt 7 [x1];
  L2():
    goto L4(NULL);
  L4(r21):
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L32() else L33();
  L15():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L17() else L18(x2);
  L21():
    ngettext = ldf ngettext;
    check L22() else D4();
  D4():
    deopt 13 [];
  L5(r23):
    c6 = `as.logical`(r23);
    if c6 then L40() else L6();
  L16(dx1):
    length = ldf length in base;
    r6 = dyn length(dx1);
    check L20() else D3();
  L17():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(dr);
  L18(x4):
    r5 = `$`(x4, <sym bad_closures>);
    goto L16(r5);
  L22():
    p = prom<V +>{
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c2 = `is.object`(x6);
      if c2 then L4() else L5(x6);
    L2():
      r7 = dyn base2(<lang `$`(x, bad_closures)>);
      goto L0(r7);
    L3(dx3):
      length1 = ldf length in base;
      r10 = dyn length1(dx3);
      goto L0(r10);
    L4():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(x8):
      r9 = `$`(x8, <sym bad_closures>);
      goto L3(r9);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L3(dx2);
    };
    r12 = dyn ngettext(p, "Found possibly global 'T' or 'F' in the following function:", "Found possibly global 'T' or 'F' in the following functions:");
    check L23() else D5();
  L32():
    x13 = ld x;
    check L34() else D11();
  L33():
    r22 = dyn base4(<lang `$`(x, bad_examples)>);
    goto L5(r22);
  D3():
    deopt 11 [r6];
  D5():
    deopt 17 [r12];
  D11():
    deopt 35 [x13];
  L6():
    goto L8(NULL);
  L8(r40):
    c10 = ldf c in base;
    r41 = dyn c10(r2, r21, r40);
    check L51() else D20();
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L16(dx);
  L20():
    goto L1(r6);
  L23():
    st msg = r12;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  L34():
    x14 = force? x13;
    checkMissing(x14);
    c5 = `is.object`(x14);
    if c5 then L36() else L37(x14);
  L40():
    ngettext1 = ldf ngettext;
    check L41() else D13();
  D13():
    deopt 41 [];
  D20():
    deopt 63 [r41];
  L3(r14):
    goto L4(r14);
  L24():
    strwrap = ldf strwrap;
    check L26() else D6();
  L25():
    r13 = dyn base3(<lang strwrap(msg)>, <lang .pretty_format(`$`(x, bad_closures))>);
    goto L3(r13);
  L35(dx7):
    length2 = ldf length in base;
    r25 = dyn length2(dx7);
    check L39() else D12();
  L36():
    dr6 = tryDispatchBuiltin.1("$", x14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L38() else L37(dr6);
  L37(x16):
    r24 = `$`(x16, <sym bad_examples>);
    goto L35(r24);
  L41():
    p3 = prom<V +>{
      sym5 = ldf length;
      base5 = ldf length in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r27):
      return r27;
    L1():
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c7 = `is.object`(x18);
      if c7 then L4() else L5(x18);
    L2():
      r26 = dyn base5(<lang `$`(x, bad_examples)>);
      goto L0(r26);
    L3(dx9):
      length3 = ldf length in base;
      r29 = dyn length3(dx9);
      goto L0(r29);
    L4():
      dr8 = tryDispatchBuiltin.1("$", x18);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L6() else L5(dr8);
    L5(x20):
      r28 = `$`(x20, <sym bad_examples>);
      goto L3(r28);
    L6():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L3(dx8);
    };
    r31 = dyn ngettext1(p3, "Found possibly global 'T' or 'F' in the examples of the following Rd file:", "Found possibly global 'T' or 'F' in the examples of the following Rd files:");
    check L42() else D14();
  L51():
    goto L0(r41);
  D6():
    deopt 22 [];
  D12():
    deopt 39 [r25];
  D14():
    deopt 45 [r31];
  L26():
    p1 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r16 = dyn strwrap(p1);
    check L27() else D7();
  L38():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L35(dx6);
  L39():
    goto L5(r25);
  L42():
    st msg = r31;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L43() else L44();
  D7():
    deopt 24 [r16];
  L7(r33):
    goto L8(r33);
  L27():
    _pretty_format = ldf `.pretty_format`;
    check L28() else D8();
  L43():
    strwrap1 = ldf strwrap;
    check L45() else D15();
  L44():
    r32 = dyn base6(<lang strwrap(msg)>, <lang paste0("  ", `$`(x, bad_examples))>);
    goto L7(r32);
  D8():
    deopt 26 [];
  D15():
    deopt 50 [];
  L28():
    p2 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c3 = `is.object`(x10);
      if c3 then L1() else L2(x10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", x10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x12):
      r17 = `$`(x12, <sym bad_closures>);
      goto L0(r17);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r19 = dyn _pretty_format(p2);
    check L29() else D9();
  L45():
    p4 = prom<V +>{
      msg2 = ld msg;
      msg3 = force? msg2;
      checkMissing(msg3);
      return msg3;
    };
    r35 = dyn strwrap1(p4);
    check L46() else D16();
  D9():
    deopt 28 [r19];
  D16():
    deopt 52 [r35];
  L29():
    c4 = ldf c in base;
    r20 = dyn c4(r16, r19);
    check L30() else D10();
  L46():
    paste0 = ldf paste0;
    check L47() else D17();
  D10():
    deopt 30 [r20];
  D17():
    deopt 54 [];
  L30():
    goto L3(r20);
  L47():
    p5 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c8 = `is.object`(x22);
      if c8 then L1() else L2(x22);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", x22);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(x24):
      r36 = `$`(x24, <sym bad_examples>);
      goto L0(r36);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r38 = dyn paste0("  ", p5);
    check L48() else D18();
  D18():
    deopt 57 [r38];
  L48():
    c9 = ldf c in base;
    r39 = dyn c9(r35, r38);
    check L49() else D19();
  D19():
    deopt 59 [r39];
  L49():
    goto L7(r39);
  }
}