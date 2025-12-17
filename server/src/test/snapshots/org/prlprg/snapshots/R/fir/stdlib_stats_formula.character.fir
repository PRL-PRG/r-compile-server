fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner536348692;
    st `formula.character` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner536348692(x, env, `...`) {
  (reg x:*, reg env:*, reg ddd:dots) -+> V { var x:*, var env:*, reg env_isMissing:L, reg env_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg length:cls, reg r4:V, reg r5:V, reg c:L, reg _Deprecated:cls, reg r6:V, reg str2expression:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r8:V, reg c1:L, reg r10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r11:V, reg dx2:V, reg str2lang:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg ff:*, reg ff1:V, reg is_call:cls, reg r16:V, reg r17:V, reg c2:L, reg stop:cls, reg gettextf:cls, reg deparse2:cls, reg x7:*, reg x8:V, reg p3:p(V +), reg r19:V, reg p4:p(V +), reg r21:V, reg p5:p(V +), reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg ff2:*, reg ff3:V, reg c3:L, reg ff5:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg __1:cls, reg r27:V, reg c4:L, reg c5:L, reg c7:V, reg c_:*, reg c_1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg c10:L, reg c_4:V, reg r29:V, reg quote:cls, reg r30:V, reg r31:V, reg c11:L, reg c12:V, reg c14:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg c_5:*, reg c_6:V, reg c15:L, reg c16:L, reg c_7:*, reg c_8:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg c_11:V, reg r36:V, reg quote1:cls, reg r37:V, reg r38:V, reg c17:L, reg _Deprecated1:cls, reg gettextf1:cls, reg deparse3:cls, reg x9:*, reg x10:V, reg p6:p(V +), reg r40:V, reg p7:p(V +), reg r42:V, reg p8:p(V +), reg r44:V, reg ff6:*, reg ff7:V, reg c18:L, reg ff9:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg __2:cls, reg r45:V, reg dx7:V, reg c_12:*, reg c_13:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r46:V, reg c_16:V, reg r47:V, reg quote2:cls, reg r48:V, reg r49:V, reg c19:L, reg c20:V, reg c_17:*, reg c_18:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r50:V, reg c24:L, reg c_21:V, reg r51:V, reg quote3:cls, reg r52:V, reg r53:V, reg c25:L, reg c26:V, reg c28:L, reg _Deprecated2:cls, reg gettextf2:cls, reg deparse4:cls, reg x11:*, reg x12:V, reg p9:p(V +), reg r55:V, reg p10:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r57:V, reg r58:V, reg c_22:*, reg c_23:V, reg as_character:cls, reg r59:V, reg p11:p(V +), reg r61:V, reg p12:p(V +), reg r63:V, reg eval:cls, reg ff10:*, reg ff11:V, reg p13:p(V +), reg r65:V, reg stop1:cls, reg gettextf3:cls, reg deparse5:cls, reg x13:*, reg x14:V, reg p14:p(V +), reg r67:V, reg p15:p(V +), reg r69:V, reg p16:p(V +), reg r71:V, reg l:*, reg class__:cls, reg r72:V, reg env1:*, reg env2:V, reg l1:*, reg environment__:cls, reg r73:V, reg ff12:*, reg ff13:V |
    mkenv;
    st x = x;
    env_isMissing = missing.0(env);
    if env_isMissing then L0() else L1(env);
  L0():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L1(p);
  L1(env_orDefault):
    st env = env_orDefault;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L2(r3):
    r5 = `>`(r3, 1);
    c = `as.logical`(r5);
    if c then L29() else L3();
  L25():
    x1 = ld x;
    check L27() else D0();
  L26():
    r2 = dyn base(<sym x>);
    goto L2(r2);
  D0():
    deopt 2 [x1];
  L3():
    str2lang = ldf str2lang;
    check L38() else D6();
  L5(dx2):
    st ff = dx2;
    sym1 = ldf `is.call`;
    base1 = ldf `is.call` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L40() else L41();
  L27():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r4 = dyn length(x2);
    check L28() else D1();
  L29():
    _Deprecated = ldf `.Deprecated`;
    check L30() else D2();
  D1():
    deopt 5 [r4];
  D2():
    deopt 9 [];
  D6():
    deopt 21 [];
  L6(r15):
    r17 = `!`(r15);
    c2 = `as.logical`(r17);
    if c2 then L44() else L7();
  L28():
    goto L2(r4);
  L30():
    r6 = dyn _Deprecated[msg]("Using formula(x) is deprecated when x is a character vector of length > 1.\n  Consider formula(paste(x, collapse = \" \")) instead.");
    check L31() else D3();
  L38():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r13 = dyn str2lang(p2);
    check L39() else D7();
  L40():
    ff = ld ff;
    check L42() else D8();
  L41():
    r14 = dyn base1(<sym ff>);
    goto L6(r14);
  D3():
    deopt 12 [r6];
  D7():
    deopt 23 [r13];
  D8():
    deopt 27 [ff];
  L7():
    goto L8();
  L8():
    sym2 = ldf `is.symbol`;
    base2 = ldf `is.symbol` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L48() else L49();
  L31():
    str2expression = ldf str2expression;
    check L32() else D4();
  L39():
    goto L5(r13);
  L42():
    ff1 = force? ff;
    checkMissing(ff1);
    is_call = ldf `is.call` in base;
    r16 = dyn is_call(ff1);
    check L43() else D9();
  L44():
    stop = ldf stop;
    check L45() else D10();
  D4():
    deopt 14 [];
  D9():
    deopt 30 [r16];
  D10():
    deopt 33 [];
  L9(r26):
    c5 = `as.logical`(r26);
    if c5 then L54() else L11(c5);
  L32():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r8 = dyn str2expression(p1);
    check L33() else D5();
  L43():
    goto L6(r16);
  L45():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      p4 = prom<V +>{
        deparse2 = ldf deparse2;
        p3 = prom<V +>{
          x7 = ld x;
          x8 = force? x7;
          checkMissing(x8);
          return x8;
        };
        r19 = dyn deparse2(p3);
        return r19;
      };
      r21 = dyn gettextf("invalid formula %s: not a call", p4);
      return r21;
    };
    r23 = dyn stop[, domain](p5, NA_LGL);
    check L46() else D11();
  L48():
    ff2 = ld ff;
    check L50() else D12();
  L49():
    r25 = dyn base2(<lang `<-`(c., `[[`(ff, 1))>);
    goto L9(r25);
  D5():
    deopt 16 [r8];
  D11():
    deopt 37 [r23];
  D12():
    deopt 41 [ff2];
  L11(c7):
    c14 = `as.logical`(c7);
    if c14 then L59() else L13();
  L33():
    c1 = `is.object`(r8);
    if c1 then L34() else L35(r8);
  L46():
    goto L8();
  L50():
    ff3 = force? ff2;
    checkMissing(ff3);
    c3 = `is.object`(ff3);
    if c3 then L51() else L52(ff3);
  L54():
    c_ = ld `c.`;
    check L55() else D13();
  D13():
    deopt 48 [c5, c_];
  L4(dx1):
    goto L5(dx1);
  L10(dx4):
    st `c.` = dx4;
    c4 = `is.symbol`(dx4);
    goto L9(c4);
  L13():
    sym4 = ldf `is.symbol`;
    base4 = ldf `is.symbol` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L61() else L62();
  L14():
    l = ld ff;
    class__ = ldf `class<-`;
    check L93() else D27();
  L34():
    dr = tryDispatchBuiltin.1("[[", r8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L36() else L35(dr);
  L35(r10):
    __ = ldf `[[` in base;
    r11 = dyn __(r10, 1);
    goto L4(r11);
  L51():
    dr2 = tryDispatchBuiltin.1("[[", ff3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L53() else L52(dr2);
  L52(ff5):
    __1 = ldf `[[` in base;
    r27 = dyn __1(ff5, 1);
    goto L10(r27);
  L55():
    c_1 = force? c_;
    checkMissing(c_1);
    sym3 = ldf quote;
    base3 = ldf quote in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L56() else L57();
  L59():
    goto L14();
  D27():
    deopt 107 ["formula", l, "formula"];
  L12(c10, c_4, r29):
    r31 = `==`(c_4, r29);
    c11 = `as.logical`(r31);
    c12 = `&&`(c10, c11);
    goto L11(c12);
  L15(r34):
    c16 = `as.logical`(r34);
    if c16 then L64() else L16();
  L36():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L53():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx3);
  L56():
    quote = ldf quote in base;
    r30 = dyn quote(<sym `~`>);
    goto L12(c5, c_1, r30);
  L57():
    r28 = dyn base3(<sym `~`>);
    goto L12(c5, c_1, r28);
  L61():
    c_5 = ld `c.`;
    check L63() else D14();
  L62():
    r33 = dyn base4(<sym c.>);
    goto L15(r33);
  L93():
    r72 = dyn class__(l, NULL, "formula");
    check L94() else D28();
  D14():
    deopt 57 [c_5];
  D28():
    deopt 109 ["formula", r72];
  L16():
    stop1 = ldf stop;
    check L91() else D25();
  L63():
    c_6 = force? c_5;
    checkMissing(c_6);
    c15 = `is.symbol`(c_6);
    goto L15(c15);
  L64():
    c_7 = ld `c.`;
    check L65() else D15();
  L94():
    st ff = r72;
    env1 = ld env;
    check L95() else D29();
  D15():
    deopt 60 [c_7];
  D25():
    deopt 99 [];
  D29():
    deopt 111 [env1];
  L65():
    c_8 = force? c_7;
    checkMissing(c_8);
    sym5 = ldf quote;
    base5 = ldf quote in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L66() else L67();
  L91():
    p16 = prom<V +>{
      gettextf3 = ldf gettextf;
      p15 = prom<V +>{
        deparse5 = ldf deparse2;
        p14 = prom<V +>{
          x13 = ld x;
          x14 = force? x13;
          checkMissing(x14);
          return x14;
        };
        r67 = dyn deparse5(p14);
        return r67;
      };
      r69 = dyn gettextf3("invalid formula %s", p15);
      return r69;
    };
    r71 = dyn stop1[, domain](p16, NA_LGL);
    check L92() else D26();
  L95():
    env2 = force? env1;
    checkMissing(env2);
    l1 = ld ff;
    environment__ = ldf `environment<-`;
    check L96() else D30();
  D26():
    deopt 103 [r71];
  D30():
    deopt 114 [env2, l1, env2];
  L17(c_11, r36):
    r38 = `==`(c_11, r36);
    c17 = `as.logical`(r38);
    if c17 then L68() else L18();
  L66():
    quote1 = ldf quote in base;
    r37 = dyn quote1(<sym `=`>);
    goto L17(c_8, r37);
  L67():
    r35 = dyn base5(<sym `=`>);
    goto L17(c_8, r35);
  L92():
    goto L14();
  L96():
    r73 = dyn environment__(l1, NULL, env2);
    check L97() else D31();
  D31():
    deopt 116 [env2, r73];
  L18():
    c_12 = ld `c.`;
    check L76() else D19();
  L20(dx7):
    st ff = dx7;
    goto L14();
  L68():
    _Deprecated1 = ldf `.Deprecated`;
    check L69() else D16();
  L97():
    st ff = r73;
    ff12 = ld ff;
    check L98() else D32();
  D16():
    deopt 66 [];
  D19():
    deopt 75 [c_12];
  D32():
    deopt 118 [ff12];
  L69():
    p8 = prom<V +>{
      gettextf1 = ldf gettextf;
      p7 = prom<V +>{
        deparse3 = ldf deparse2;
        p6 = prom<V +>{
          x9 = ld x;
          x10 = force? x9;
          checkMissing(x10);
          return x10;
        };
        r40 = dyn deparse3(p6);
        return r40;
      };
      r42 = dyn gettextf1("invalid formula %s: assignment is deprecated", p7);
      return r42;
    };
    r44 = dyn _Deprecated1[msg](p8);
    check L70() else D17();
  L76():
    c_13 = force? c_12;
    checkMissing(c_13);
    sym6 = ldf quote;
    base6 = ldf quote in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L77() else L78();
  L98():
    ff13 = force? ff12;
    checkMissing(ff13);
    popenv;
    return ff13;
  D17():
    deopt 69 [r44];
  L21(c_16, r47):
    r49 = `==`(c_16, r47);
    c19 = `as.logical`(r49);
    if c19 then L22(c19) else L79();
  L70():
    ff6 = ld ff;
    check L71() else D18();
  L77():
    quote2 = ldf quote in base;
    r48 = dyn quote2(<sym `(`>);
    goto L21(c_13, r48);
  L78():
    r46 = dyn base6(<sym `(`>);
    goto L21(c_13, r46);
  D18():
    deopt 70 [ff6];
  L22(c20):
    c28 = `as.logical`(c20);
    if c28 then L84() else L24();
  L71():
    ff7 = force? ff6;
    checkMissing(ff7);
    c18 = `is.object`(ff7);
    if c18 then L72() else L73(ff7);
  L79():
    c_17 = ld `c.`;
    check L80() else D20();
  D20():
    deopt 80 [c19, c_17];
  L19(dx6):
    goto L20(dx6);
  L24():
    goto L20(NULL);
  L72():
    dr4 = tryDispatchBuiltin.1("[[", ff7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L74() else L73(dr4);
  L73(ff9):
    __2 = ldf `[[` in base;
    r45 = dyn __2(ff9, 3);
    goto L19(r45);
  L80():
    c_18 = force? c_17;
    checkMissing(c_18);
    sym7 = ldf quote;
    base7 = ldf quote in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L81() else L82();
  L84():
    _Deprecated2 = ldf `.Deprecated`;
    check L85() else D21();
  D21():
    deopt 87 [];
  L23(c24, c_21, r51):
    r53 = `==`(c_21, r51);
    c25 = `as.logical`(r53);
    c26 = `||`(c24, c25);
    goto L22(c26);
  L74():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L19(dx5);
  L81():
    quote3 = ldf quote in base;
    r52 = dyn quote3(<sym `{`>);
    goto L23(c19, c_18, r52);
  L82():
    r50 = dyn base7(<sym `{`>);
    goto L23(c19, c_18, r50);
  L85():
    p12 = prom<V +>{
      gettextf2 = ldf gettextf;
      p10 = prom<V +>{
        deparse4 = ldf deparse2;
        p9 = prom<V +>{
          x11 = ld x;
          x12 = force? x11;
          checkMissing(x12);
          return x12;
        };
        r55 = dyn deparse4(p9);
        return r55;
      };
      p11 = prom<V +>{
        sym8 = ldf `as.character`;
        base8 = ldf `as.character` in base;
        guard8 = `==`.4(sym8, base8);
        if guard8 then L1() else L2();
      L0(r58):
        return r58;
      L1():
        c_22 = ld `c.`;
        c_23 = force? c_22;
        checkMissing(c_23);
        as_character = ldf `as.character` in base;
        r59 = dyn as_character(c_23);
        goto L0(r59);
      L2():
        r57 = dyn base8(<sym c.>);
        goto L0(r57);
      };
      r61 = dyn gettextf2("invalid formula %s: extraneous call to `%s` is deprecated", p10, p11);
      return r61;
    };
    r63 = dyn _Deprecated2[msg](p12);
    check L86() else D22();
  D22():
    deopt 90 [r63];
  L86():
    eval = ldf eval;
    check L87() else D23();
  D23():
    deopt 92 [];
  L87():
    p13 = prom<V +>{
      ff10 = ld ff;
      ff11 = force? ff10;
      checkMissing(ff11);
      return ff11;
    };
    r65 = dyn eval(p13);
    check L88() else D24();
  D24():
    deopt 94 [r65];
  L88():
    goto L20(r65);
  }
}