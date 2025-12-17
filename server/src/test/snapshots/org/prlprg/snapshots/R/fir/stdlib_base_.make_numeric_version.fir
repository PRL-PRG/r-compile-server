fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner247924901;
    st `.make_numeric_version` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner247924901(x, strict, regexp, classes) {
  (reg x:*, reg strict:*, reg regexp:*, reg classes:*) -+> V { var x:*, var strict:*, reg strict_isMissing:L, reg strict_orDefault:*, var regexp:*, var classes:*, reg classes_isMissing:L, reg classes_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg names:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg list:cls, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg x5:*, reg x6:V, reg c1:L, reg r13:V, reg c2:L, reg gettextf:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:V, reg x7:*, reg x8:V, reg typeof:cls, reg r16:V, reg p:p(V +), reg r18:V, reg stop:cls, reg msg:*, reg msg1:V, reg p1:p(V +), reg r20:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg r23:V, reg x9:*, reg x10:V, reg as_character:cls, reg r24:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r25:V, reg r26:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r27:V, reg r28:V, reg integer:cls, reg r29:V, reg list1:cls, reg r30:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r31:V, reg r32:V, reg x11:*, reg x12:V, reg length1:cls, reg r33:V, reg rep_int:cls, reg r34:V, reg sprintf:cls, reg regexp1:*, reg regexp2:V, reg p2:p(V +), reg r36:V, reg grepl:cls, reg valid_numeric_version_regexp:*, reg valid_numeric_version_regexp1:V, reg p3:p(V +), reg x13:*, reg x14:V, reg p4:p(V +), reg r39:V, reg strict1:*, reg strict2:V, reg c3:L, reg c5:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r40:V, reg c8:L, reg r41:V, reg ok:*, reg ok1:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r42:V, reg c11:L, reg ok4:V, reg r43:V, reg x15:*, reg x16:V, reg is_na:cls, reg r44:V, reg r45:V, reg all:cls, reg r46:V, reg r47:V, reg c12:L, reg c13:V, reg c15:L, reg stop1:cls, reg gettextf1:cls, reg paste:cls, reg sQuote:cls, reg unique:cls, reg x17:*, reg x18:V, reg c16:L, reg x20:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i:*, reg i1:V, reg r48:V, reg __:cls, reg r49:V, reg p5:p(V +), reg r51:V, reg p6:p(V +), reg r53:V, reg p7:p(V +), reg r55:V, reg p8:p(V +), reg r57:V, reg p9:p(V +), reg r59:V, reg lapply:cls, reg strsplit:cls, reg x21:*, reg x22:V, reg c17:L, reg x24:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ok5:*, reg ok6:V, reg __1:cls, reg r61:V, reg p10:p(V +), reg r63:V, reg p11:p(V +), reg as_integer:*, reg as_integer1:V, reg p12:p(V +), reg r66:V, reg l:*, reg c18:L, reg r68:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r70:V, reg dx5:V, reg ok7:*, reg ok8:V, reg ___:cls, reg r71:V, reg nms:*, reg nms1:V, reg l3:*, reg names__:cls, reg r72:V, reg unique1:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r73:V, reg r74:V, reg classes1:*, reg classes2:V, reg c19:cls, reg r75:V, reg p13:p(V +), reg r77:V, reg l4:*, reg class__:cls, reg r78:V, reg y:*, reg y1:V |
    mkenv;
    st x = x;
    strict_isMissing = missing.0(strict);
    if strict_isMissing then L0(TRUE) else L0(strict);
  L0(strict_orDefault):
    st strict = strict_orDefault;
    st regexp = regexp;
    classes_isMissing = missing.0(classes);
    if classes_isMissing then L1(NULL) else L1(classes);
  L1(classes_orDefault):
    st classes = classes_orDefault;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L2(r1):
    st nms = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L20():
    x1 = ld x;
    check L22() else D0();
  L21():
    r = dyn base(<sym x>);
    goto L2(r);
  D0():
    deopt 2 [x1];
  L3(r4):
    r6 = `!`(r4);
    c = `as.logical`(r6);
    if c then L28() else L4();
  L22():
    x2 = force? x1;
    checkMissing(x2);
    names = ldf names in base;
    r2 = dyn names(x2);
    check L23() else D1();
  L24():
    x3 = ld x;
    check L26() else D2();
  L25():
    r3 = dyn base1(<sym x>);
    goto L3(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [x3];
  L4():
    sym3 = ldf `is.character`;
    base3 = ldf `is.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L6():
    nms = ld nms;
    check L83() else D32();
  L23():
    goto L2(r2);
  L26():
    x4 = force? x3;
    checkMissing(x4);
    length = ldf length in base;
    r5 = dyn length(x4);
    check L27() else D3();
  L28():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  D3():
    deopt 12 [r5];
  D32():
    deopt 112 [nms];
  L5(r8):
    st y = r8;
    goto L6();
  L7(r12):
    r13 = `!`(r12);
    c2 = `as.logical`(r13);
    if c2 then L36() else L8();
  L27():
    goto L3(r5);
  L29():
    list = ldf list in base;
    r9 = dyn list();
    check L31() else D4();
  L30():
    r7 = dyn base2();
    goto L5(r7);
  L33():
    x5 = ld x;
    check L35() else D5();
  L34():
    r11 = dyn base3(<sym x>);
    goto L7(r11);
  L83():
    nms1 = force? nms;
    checkMissing(nms1);
    l3 = ld y;
    names__ = ldf `names<-`;
    check L84() else D33();
  D4():
    deopt 17 [r9];
  D5():
    deopt 20 [x5];
  D33():
    deopt 115 [nms1, l3, nms1];
  L8():
    goto L9();
  L9():
    sym5 = ldf `as.character`;
    base5 = ldf `as.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L42() else L43();
  L31():
    goto L5(r9);
  L35():
    x6 = force? x5;
    checkMissing(x6);
    c1 = `is.character`(x6);
    goto L7(c1);
  L36():
    gettextf = ldf gettextf;
    check L37() else D6();
  L84():
    r72 = dyn names__(l3, NULL, nms1);
    check L85() else D34();
  D6():
    deopt 25 [];
  D34():
    deopt 117 [nms1, r72];
  L10(r23):
    st x = r23;
    sym6 = ldf `rep.int`;
    base6 = ldf `rep.int` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L46() else L47();
  L37():
    p = prom<V +>{
      sym4 = ldf typeof;
      base4 = ldf typeof in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      typeof = ldf typeof in base;
      r16 = dyn typeof(x8);
      goto L0(r16);
    L2():
      r14 = dyn base4(<sym x>);
      goto L0(r14);
    };
    r18 = dyn gettextf("invalid non-character version specification 'x' (type: %s)", p);
    check L38() else D7();
  L42():
    x9 = ld x;
    check L44() else D10();
  L43():
    r22 = dyn base5(<sym x>);
    goto L10(r22);
  L85():
    st y = r72;
    unique1 = ldf unique;
    check L86() else D35();
  D7():
    deopt 28 [r18];
  D10():
    deopt 40 [x9];
  D35():
    deopt 120 [];
  L11(r26):
    st y = r26;
    sprintf = ldf sprintf;
    check L58() else D18();
  L38():
    st msg = r18;
    stop = ldf stop;
    check L39() else D8();
  L44():
    x10 = force? x9;
    checkMissing(x10);
    as_character = ldf `as.character` in base;
    r24 = dyn as_character(x10);
    check L45() else D11();
  L46():
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L48() else L49();
  L47():
    r25 = dyn base6(<lang list(integer())>, <lang length(x)>);
    goto L11(r25);
  L86():
    p13 = prom<V +>{
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r74):
      return r74;
    L1():
      classes1 = ld classes;
      classes2 = force? classes1;
      checkMissing(classes2);
      c19 = ldf c in base;
      r75 = dyn c19(classes2, "numeric_version");
      goto L0(r75);
    L2():
      r73 = dyn base11(<sym classes>, "numeric_version");
      goto L0(r73);
    };
    r77 = dyn unique1(p13);
    check L87() else D36();
  D8():
    deopt 31 [];
  D11():
    deopt 43 [r24];
  D18():
    deopt 64 [];
  D36():
    deopt 122 [r77];
  L12(r28):
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L53() else L54();
  L39():
    p1 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r20 = dyn stop[, domain](p1, NA_LGL);
    check L40() else D9();
  L45():
    goto L10(r24);
  L48():
    integer = ldf integer;
    check L50() else D12();
  L49():
    r27 = dyn base7(<lang integer()>);
    goto L12(r27);
  L58():
    p2 = prom<V +>{
      regexp1 = ld regexp;
      regexp2 = force? regexp1;
      checkMissing(regexp2);
      return regexp2;
    };
    r36 = dyn sprintf("^%s$", p2);
    check L59() else D19();
  L87():
    l4 = ld y;
    class__ = ldf `class<-`;
    check L88() else D37();
  D9():
    deopt 35 [r20];
  D12():
    deopt 50 [];
  D19():
    deopt 67 [r36];
  D37():
    deopt 124 [r77, l4, r77];
  L13(r32):
    rep_int = ldf `rep.int` in base;
    r34 = dyn rep_int(r28, r32);
    check L57() else D17();
  L40():
    goto L9();
  L50():
    r29 = dyn integer();
    check L51() else D13();
  L53():
    x11 = ld x;
    check L55() else D15();
  L54():
    r31 = dyn base8(<sym x>);
    goto L13(r31);
  L59():
    st valid_numeric_version_regexp = r36;
    grepl = ldf grepl;
    check L60() else D20();
  L88():
    r78 = dyn class__(l4, NULL, r77);
    check L89() else D38();
  D13():
    deopt 51 [r29];
  D15():
    deopt 56 [x11];
  D17():
    deopt 61 [r34];
  D20():
    deopt 70 [];
  D38():
    deopt 126 [r77, r78];
  L51():
    list1 = ldf list in base;
    r30 = dyn list1(r29);
    check L52() else D14();
  L55():
    x12 = force? x11;
    checkMissing(x12);
    length1 = ldf length in base;
    r33 = dyn length1(x12);
    check L56() else D16();
  L57():
    goto L11(r34);
  L60():
    p3 = prom<V +>{
      valid_numeric_version_regexp = ld valid_numeric_version_regexp;
      valid_numeric_version_regexp1 = force? valid_numeric_version_regexp;
      checkMissing(valid_numeric_version_regexp1);
      return valid_numeric_version_regexp1;
    };
    p4 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r39 = dyn grepl(p3, p4);
    check L61() else D21();
  L89():
    st y = r78;
    y = ld y;
    check L90() else D39();
  D14():
    deopt 53 [r30];
  D16():
    deopt 59 [r33];
  D21():
    deopt 73 [r39];
  D39():
    deopt 128 [y];
  L52():
    goto L12(r30);
  L56():
    goto L13(r33);
  L61():
    st ok = r39;
    strict1 = ld strict;
    check L62() else D22();
  L90():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  D22():
    deopt 75 [strict1];
  L62():
    strict2 = force? strict1;
    checkMissing(strict2);
    c3 = `as.logical`(strict2);
    if c3 then L63() else L14(c3);
  L14(c5):
    c15 = `as.logical`(c5);
    if c15 then L73() else L17();
  L63():
    sym9 = ldf all;
    base9 = ldf all in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L64() else L65();
  L15(c8, r41):
    r47 = `!`(r41);
    c12 = `as.logical`(r47);
    c13 = `&&`(c8, c12);
    goto L14(c13);
  L17():
    goto L18();
  L18():
    lapply = ldf lapply;
    check L77() else D29();
  L64():
    ok = ld ok;
    check L66() else D23();
  L65():
    r40 = dyn base9(<lang `<-`(i, `(`(`|`(ok, is.na(x))))>);
    goto L15(c3, r40);
  L73():
    stop1 = ldf stop;
    check L74() else D27();
  D23():
    deopt 79 [c3, ok];
  D27():
    deopt 93 [];
  D29():
    deopt 103 [];
  L66():
    ok1 = force? ok;
    checkMissing(ok1);
    sym10 = ldf `is.na`;
    base10 = ldf `is.na` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L67() else L68();
  L74():
    p9 = prom<V +>{
      gettextf1 = ldf gettextf;
      p8 = prom<V +>{
        paste = ldf paste;
        p7 = prom<V +>{
          sQuote = ldf sQuote;
          p6 = prom<V +>{
            unique = ldf unique;
            p5 = prom<V +>{
              x17 = ld x;
              x18 = force? x17;
              checkMissing(x18);
              c16 = `is.object`(x18);
              if c16 then L1() else L2(x18);
            L0(dx1):
              return dx1;
            L1():
              dr = tryDispatchBuiltin.1("[", x18);
              dc = getTryDispatchBuiltinDispatched(dr);
              if dc then L3() else L2(dr);
            L2(x20):
              i = ld i;
              i1 = force? i;
              checkMissing(i1);
              r48 = `!`(i1);
              __ = ldf `[` in base;
              r49 = dyn __(x20, r48);
              goto L0(r49);
            L3():
              dx = getTryDispatchBuiltinValue(dr);
              goto L0(dx);
            };
            r51 = dyn unique(p5);
            return r51;
          };
          r53 = dyn sQuote(p6);
          return r53;
        };
        r55 = dyn paste[, collapse](p7, ", ");
        return r55;
      };
      r57 = dyn gettextf1("invalid version specification %s", p8);
      return r57;
    };
    r59 = dyn stop1[, `call.`, domain](p9, FALSE, NA_LGL);
    check L75() else D28();
  L77():
    p11 = prom<V +>{
      strsplit = ldf strsplit;
      p10 = prom<V +>{
        x21 = ld x;
        x22 = force? x21;
        checkMissing(x22);
        c17 = `is.object`(x22);
        if c17 then L1() else L2(x22);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[", x22);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(x24):
        ok5 = ld ok;
        ok6 = force? ok5;
        __1 = ldf `[` in base;
        r61 = dyn __1(x24, ok6);
        goto L0(r61);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r63 = dyn strsplit(p10, "[.-]");
      return r63;
    };
    p12 = prom<V +>{
      as_integer = ld `as.integer`;
      as_integer1 = force? as_integer;
      checkMissing(as_integer1);
      return as_integer1;
    };
    r66 = dyn lapply(p11, p12);
    check L78() else D30();
  D28():
    deopt 99 [r59];
  D30():
    deopt 106 [r66];
  L16(c11, ok4, r43):
    r45 = `||`(ok4, r43);
    st i = r45;
    all = ldf all in base;
    r46 = dyn all(r45);
    check L71() else D26();
  L67():
    x15 = ld x;
    check L69() else D24();
  L68():
    r42 = dyn base10(<sym x>);
    goto L16(c3, ok1, r42);
  L75():
    goto L18();
  L78():
    l = ld y;
    c18 = `is.object`(l);
    if c18 then L79() else L80(r66, l);
  D24():
    deopt 82 [c3, ok1, x15];
  D26():
    deopt 89 [c11, r46];
  L19(r70, dx5):
    st y = dx5;
    goto L6();
  L69():
    x16 = force? x15;
    checkMissing(x16);
    is_na = ldf `is.na` in base;
    r44 = dyn is_na(x16);
    check L70() else D25();
  L71():
    goto L15(c11, r46);
  L79():
    dr4 = tryDispatchBuiltin.0("[<-", l, r66);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L81() else L80(r66, dr4);
  L80(r68, l2):
    ok7 = ld ok;
    check L82() else D31();
  D25():
    deopt 85 [c3, ok1, r44];
  D31():
    deopt 108 [r68, l2, r66, ok7];
  L70():
    goto L16(c3, ok1, r44);
  L81():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L19(r66, dx4);
  L82():
    ok8 = force? ok7;
    ___ = ldf `[<-` in base;
    r71 = dyn ___(l2, r66, ok8);
    goto L19(r68, r71);
  }
}