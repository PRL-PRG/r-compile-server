fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.check_dotInternal` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg length:cls, reg r3:V, reg c1:L, reg ngettext:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r6:V, reg length1:cls, reg r7:V, reg p:p(V +), reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg strwrap:cls, reg msg:*, reg msg1:V, reg p1:p(V +), reg r13:V, reg _pretty_format:cls, reg x9:*, reg x10:V, reg c3:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r14:V, reg p2:p(V +), reg r16:V, reg c4:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg unique:cls, reg x13:*, reg x14:V, reg c5:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r20:V, reg p3:p(V +), reg r22:V, reg length2:cls, reg r23:V, reg c6:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg out:*, reg out1:V, reg _pretty_format1:cls, reg sort:cls, reg unique1:cls, reg x17:*, reg x18:V, reg c7:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r26:V, reg p4:p(V +), reg r28:V, reg p5:p(V +), reg r30:V, reg p6:p(V +), reg r32:V, reg c8:cls, reg r33:V, reg out2:*, reg out3:V, reg out4:V, reg character:cls, reg r35:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg r37:V, reg x21:*, reg x22:V, reg c9:L, reg x24:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r38:V, reg length3:cls, reg r39:V, reg c10:L, reg ngettext1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg r41:V, reg x25:*, reg x26:V, reg c11:L, reg x28:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r42:V, reg length4:cls, reg r43:V, reg p7:p(V +), reg r45:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg r47:V, reg out5:*, reg out6:V, reg strwrap1:cls, reg msg2:*, reg msg3:V, reg p8:p(V +), reg r49:V, reg _pretty_format2:cls, reg x29:*, reg x30:V, reg c12:L, reg x32:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r50:V, reg p9:p(V +), reg r52:V, reg c13:cls, reg r53:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r55:V, reg r56:V, reg x33:*, reg x34:V, reg c14:L, reg x36:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r57:V, reg length5:cls, reg r58:V, reg c15:L, reg ngettext2:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r59:V, reg r60:V, reg x37:*, reg x38:V, reg c16:L, reg x40:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r61:V, reg length6:cls, reg r62:V, reg p10:p(V +), reg r64:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r65:V, reg r66:V, reg out7:*, reg out8:V, reg strwrap2:cls, reg msg4:*, reg msg5:V, reg p11:p(V +), reg r68:V, reg _pretty_format3:cls, reg x41:*, reg x42:V, reg c17:L, reg x44:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r69:V, reg p12:p(V +), reg r71:V, reg c18:cls, reg r72:V, reg out9:*, reg out10:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L24() else L1();
  L16():
    x1 = ld x;
    check L18() else D0();
  L17():
    r = dyn base(<lang `$`(x, bad_closures)>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    character = ldf character;
    check L49() else D17();
  L7(out4):
    st out = out4;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L51() else L52();
  L18():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L20() else L21(x2);
  L24():
    ngettext = ldf ngettext;
    check L25() else D2();
  D2():
    deopt 8 [];
  D17():
    deopt 52 [];
  L8(r37):
    c10 = `as.logical`(r37);
    if c10 then L59() else L9();
  L19(dx1):
    length = ldf length in base;
    r3 = dyn length(dx1);
    check L23() else D1();
  L20():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(dr);
  L21(x4):
    r2 = `$`(x4, <sym bad_closures>);
    goto L19(r2);
  L25():
    p = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c2 = `is.object`(x6);
      if c2 then L4() else L5(x6);
    L2():
      r4 = dyn base1(<lang `$`(x, bad_closures)>);
      goto L0(r4);
    L3(dx3):
      length1 = ldf length in base;
      r7 = dyn length1(dx3);
      goto L0(r7);
    L4():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(x8):
      r6 = `$`(x8, <sym bad_closures>);
      goto L3(r6);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L3(dx2);
    };
    r9 = dyn ngettext(p, "Found a .Internal call in the following function:", "Found .Internal calls in the following functions:");
    check L26() else D3();
  L49():
    r35 = dyn character();
    check L50() else D18();
  L51():
    x21 = ld x;
    check L53() else D19();
  L52():
    r36 = dyn base5(<lang `$`(x, bad_S4methods)>);
    goto L8(r36);
  D1():
    deopt 6 [r3];
  D3():
    deopt 12 [r9];
  D18():
    deopt 53 [r35];
  D19():
    deopt 57 [x21];
  L9():
    goto L11();
  L11():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L71() else L72();
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L19(dx);
  L23():
    goto L0(r3);
  L26():
    st msg = r9;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L50():
    goto L7(r35);
  L53():
    x22 = force? x21;
    checkMissing(x22);
    c9 = `is.object`(x22);
    if c9 then L55() else L56(x22);
  L59():
    ngettext1 = ldf ngettext;
    check L60() else D21();
  D21():
    deopt 63 [];
  L2(r11):
    st out = r11;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  L12(r56):
    c15 = `as.logical`(r56);
    if c15 then L79() else L13();
  L27():
    strwrap = ldf strwrap;
    check L29() else D4();
  L28():
    r10 = dyn base2(<lang strwrap(msg)>, <lang .pretty_format(`$`(x, bad_closures))>);
    goto L2(r10);
  L54(dx11):
    length3 = ldf length in base;
    r39 = dyn length3(dx11);
    check L58() else D20();
  L55():
    dr10 = tryDispatchBuiltin.1("$", x22);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L57() else L56(dr10);
  L56(x24):
    r38 = `$`(x24, <sym bad_S4methods>);
    goto L54(r38);
  L60():
    p7 = prom<V +>{
      sym6 = ldf length;
      base6 = ldf length in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      c11 = `is.object`(x26);
      if c11 then L4() else L5(x26);
    L2():
      r40 = dyn base6(<lang `$`(x, bad_S4methods)>);
      goto L0(r40);
    L3(dx13):
      length4 = ldf length in base;
      r43 = dyn length4(dx13);
      goto L0(r43);
    L4():
      dr12 = tryDispatchBuiltin.1("$", x26);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L6() else L5(dr12);
    L5(x28):
      r42 = `$`(x28, <sym bad_S4methods>);
      goto L3(r42);
    L6():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L3(dx12);
    };
    r45 = dyn ngettext1(p7, "Found a.Internal call in methods for the following S4 generic:", "Found .Internal calls in methods for the following S4 generics:");
    check L61() else D22();
  L71():
    x33 = ld x;
    check L73() else D29();
  L72():
    r55 = dyn base8(<lang `$`(x, bad_refs)>);
    goto L12(r55);
  D4():
    deopt 17 [];
  D20():
    deopt 61 [r39];
  D22():
    deopt 67 [r45];
  D29():
    deopt 88 [x33];
  L3(r19):
    c6 = `as.logical`(r19);
    if c6 then L39() else L4();
  L13():
    goto L15();
  L15():
    out9 = ld out;
    check L91() else D39();
  L29():
    p1 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r13 = dyn strwrap(p1);
    check L30() else D5();
  L34():
    unique = ldf unique;
    check L36() else D9();
  L35():
    r18 = dyn base3(<lang unique(`$`(x, internals))>);
    goto L3(r18);
  L57():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L54(dx10);
  L58():
    goto L8(r39);
  L61():
    st msg = r45;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L62() else L63();
  L73():
    x34 = force? x33;
    checkMissing(x34);
    c14 = `is.object`(x34);
    if c14 then L75() else L76(x34);
  L79():
    ngettext2 = ldf ngettext;
    check L80() else D31();
  D5():
    deopt 19 [r13];
  D9():
    deopt 30 [];
  D31():
    deopt 94 [];
  D39():
    deopt 117 [out9];
  L4():
    goto L6();
  L6():
    out2 = ld out;
    check L47() else D16();
  L10(r47):
    st out = r47;
    goto L11();
  L30():
    _pretty_format = ldf `.pretty_format`;
    check L31() else D6();
  L36():
    p3 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c5 = `is.object`(x14);
      if c5 then L1() else L2(x14);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", x14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x16):
      r20 = `$`(x16, <sym internals>);
      goto L0(r20);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r22 = dyn unique(p3);
    check L37() else D10();
  L39():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L40() else L41();
  L62():
    out5 = ld out;
    check L64() else D23();
  L63():
    r46 = dyn base7(<sym out>, <lang strwrap(msg)>, <lang .pretty_format(`$`(x, bad_S4methods))>);
    goto L10(r46);
  L74(dx17):
    length5 = ldf length in base;
    r58 = dyn length5(dx17);
    check L78() else D30();
  L75():
    dr16 = tryDispatchBuiltin.1("$", x34);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L77() else L76(dr16);
  L76(x36):
    r57 = `$`(x36, <sym bad_refs>);
    goto L74(r57);
  L80():
    p10 = prom<V +>{
      sym9 = ldf length;
      base9 = ldf length in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r60):
      return r60;
    L1():
      x37 = ld x;
      x38 = force? x37;
      checkMissing(x38);
      c16 = `is.object`(x38);
      if c16 then L4() else L5(x38);
    L2():
      r59 = dyn base9(<lang `$`(x, bad_refs)>);
      goto L0(r59);
    L3(dx19):
      length6 = ldf length in base;
      r62 = dyn length6(dx19);
      goto L0(r62);
    L4():
      dr18 = tryDispatchBuiltin.1("$", x38);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L6() else L5(dr18);
    L5(x40):
      r61 = `$`(x40, <sym bad_refs>);
      goto L3(r61);
    L6():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L3(dx18);
    };
    r64 = dyn ngettext2(p10, "Found a .Internal call in methods for the following reference class:", "Found .Internal calls in methods for the following reference classes:");
    check L81() else D32();
  L91():
    out10 = force? out9;
    checkMissing(out10);
    popenv;
    return out10;
  D6():
    deopt 21 [];
  D10():
    deopt 32 [r22];
  D16():
    deopt 49 [out2];
  D23():
    deopt 71 [out5];
  D30():
    deopt 92 [r58];
  D32():
    deopt 98 [r64];
  L5(r25):
    st out = r25;
    goto L6();
  L31():
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
      r14 = `$`(x12, <sym bad_closures>);
      goto L0(r14);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r16 = dyn _pretty_format(p2);
    check L32() else D7();
  L37():
    length2 = ldf length in base;
    r23 = dyn length2(r22);
    check L38() else D11();
  L40():
    out = ld out;
    check L42() else D12();
  L41():
    r24 = dyn base4(<sym out>, "with calls to .Internal functions", <lang .pretty_format(sort(unique(`$`(x, internals))))>);
    goto L5(r24);
  L47():
    out3 = force? out2;
    checkMissing(out3);
    goto L7(out3);
  L64():
    out6 = force? out5;
    checkMissing(out6);
    strwrap1 = ldf strwrap;
    check L65() else D24();
  L77():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L74(dx16);
  L78():
    goto L12(r58);
  L81():
    st msg = r64;
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L82() else L83();
  D7():
    deopt 23 [r16];
  D11():
    deopt 34 [r23];
  D12():
    deopt 37 [out];
  D24():
    deopt 74 [];
  L14(r66):
    st out = r66;
    goto L15();
  L32():
    c4 = ldf c in base;
    r17 = dyn c4(r13, r16);
    check L33() else D8();
  L38():
    goto L3(r23);
  L42():
    out1 = force? out;
    checkMissing(out1);
    _pretty_format1 = ldf `.pretty_format`;
    check L43() else D13();
  L65():
    p8 = prom<V +>{
      msg2 = ld msg;
      msg3 = force? msg2;
      checkMissing(msg3);
      return msg3;
    };
    r49 = dyn strwrap1(p8);
    check L66() else D25();
  L82():
    out7 = ld out;
    check L84() else D33();
  L83():
    r65 = dyn base10(<sym out>, <lang strwrap(msg)>, <lang .pretty_format(`$`(x, bad_refs))>);
    goto L14(r65);
  D8():
    deopt 25 [r17];
  D13():
    deopt 41 [];
  D25():
    deopt 76 [r49];
  D33():
    deopt 102 [out7];
  L33():
    goto L2(r17);
  L43():
    p6 = prom<V +>{
      sort = ldf sort;
      p5 = prom<V +>{
        unique1 = ldf unique;
        p4 = prom<V +>{
          x17 = ld x;
          x18 = force? x17;
          checkMissing(x18);
          c7 = `is.object`(x18);
          if c7 then L1() else L2(x18);
        L0(dx9):
          return dx9;
        L1():
          dr8 = tryDispatchBuiltin.1("$", x18);
          dc4 = getTryDispatchBuiltinDispatched(dr8);
          if dc4 then L3() else L2(dr8);
        L2(x20):
          r26 = `$`(x20, <sym internals>);
          goto L0(r26);
        L3():
          dx8 = getTryDispatchBuiltinValue(dr8);
          goto L0(dx8);
        };
        r28 = dyn unique1(p4);
        return r28;
      };
      r30 = dyn sort(p5);
      return r30;
    };
    r32 = dyn _pretty_format1(p6);
    check L44() else D14();
  L66():
    _pretty_format2 = ldf `.pretty_format`;
    check L67() else D26();
  L84():
    out8 = force? out7;
    checkMissing(out8);
    strwrap2 = ldf strwrap;
    check L85() else D34();
  D14():
    deopt 43 [r32];
  D26():
    deopt 78 [];
  D34():
    deopt 105 [];
  L44():
    c8 = ldf c in base;
    r33 = dyn c8(out1, "with calls to .Internal functions", r32);
    check L45() else D15();
  L67():
    p9 = prom<V +>{
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      c12 = `is.object`(x30);
      if c12 then L1() else L2(x30);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("$", x30);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(x32):
      r50 = `$`(x32, <sym bad_S4methods>);
      goto L0(r50);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    r52 = dyn _pretty_format2(p9);
    check L68() else D27();
  L85():
    p11 = prom<V +>{
      msg4 = ld msg;
      msg5 = force? msg4;
      checkMissing(msg5);
      return msg5;
    };
    r68 = dyn strwrap2(p11);
    check L86() else D35();
  D15():
    deopt 45 [r33];
  D27():
    deopt 80 [r52];
  D35():
    deopt 107 [r68];
  L45():
    goto L5(r33);
  L68():
    c13 = ldf c in base;
    r53 = dyn c13(out6, r49, r52);
    check L69() else D28();
  L86():
    _pretty_format3 = ldf `.pretty_format`;
    check L87() else D36();
  D28():
    deopt 82 [r53];
  D36():
    deopt 109 [];
  L69():
    goto L10(r53);
  L87():
    p12 = prom<V +>{
      x41 = ld x;
      x42 = force? x41;
      checkMissing(x42);
      c17 = `is.object`(x42);
      if c17 then L1() else L2(x42);
    L0(dx21):
      return dx21;
    L1():
      dr20 = tryDispatchBuiltin.1("$", x42);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(x44):
      r69 = `$`(x44, <sym bad_refs>);
      goto L0(r69);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    };
    r71 = dyn _pretty_format3(p12);
    check L88() else D37();
  D37():
    deopt 111 [r71];
  L88():
    c18 = ldf c in base;
    r72 = dyn c18(out8, r68, r71);
    check L89() else D38();
  D38():
    deopt 113 [r72];
  L89():
    goto L14(r72);
  }
}