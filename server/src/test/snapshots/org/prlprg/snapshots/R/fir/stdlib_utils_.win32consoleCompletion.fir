fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2728920431;
    st `.win32consoleCompletion` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2728920431(linebuffer, cursorPosition, `check.repeat`, minlength) {
  (reg linebuffer:*, reg cursorPosition:*, reg check_repeat:*, reg minlength:*) -+> V { var linebuffer:*, var cursorPosition:*, var `check.repeat`:*, reg check_repeat_isMissing:L, reg check_repeat_orDefault:*, var minlength:*, reg minlength_isMissing:L, reg minlength_orDefault:*, reg p:p(V +), reg check_repeat1:*, reg check_repeat2:V, reg c:L, reg linebuffer1:*, reg linebuffer2:V, reg _CompletionEnv:*, reg _CompletionEnv1:V, reg c1:L, reg linebuffer4:V, reg _CompletionEnv3:V, reg dr:V, reg dc:L, reg dx:V, reg linebuffer6:V, reg dx1:V, reg __:cls, reg r1:V, reg r2:V, reg c2:L, reg c4:V, reg cursorPosition1:*, reg cursorPosition2:V, reg _CompletionEnv4:*, reg _CompletionEnv5:V, reg c5:L, reg c7:L, reg cursorPosition4:V, reg _CompletionEnv7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c9:L, reg cursorPosition6:V, reg dx3:V, reg __1:cls, reg r3:V, reg r4:V, reg c10:L, reg c11:V, reg c13:V, reg _assignLinebuffer:cls, reg linebuffer7:*, reg linebuffer8:V, reg p1:p(V +), reg r6:V, reg _assignEnd:cls, reg cursorPosition7:*, reg cursorPosition8:V, reg p2:p(V +), reg r8:V, reg _guessTokenFromLine:cls, reg r9:V, reg _CompletionEnv8:*, reg _CompletionEnv9:V, reg c14:L, reg _CompletionEnv11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r10:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg token:*, reg token1:V, reg nchar:cls, reg r13:V, reg minlength1:*, reg minlength2:V, reg r14:V, reg c15:L, reg character:cls, reg r15:V, reg r16:V, reg _completeToken:cls, reg r17:V, reg _retrieveCompletions:cls, reg r18:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg r20:V, reg comps:*, reg comps1:V, reg length:cls, reg r21:V, reg r22:V, reg c16:L, reg character1:cls, reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg comps2:*, reg comps3:V, reg length1:cls, reg r27:V, reg r28:V, reg c17:L, reg substr:cls, reg comps4:*, reg comps5:V, reg p3:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r30:V, reg r31:V, reg token2:*, reg token3:V, reg nchar1:cls, reg r32:V, reg r33:V, reg p4:p(V +), reg r35:V, reg character2:cls, reg r36:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r37:V, reg r38:V, reg comps6:*, reg comps7:V, reg length2:cls, reg r39:V, reg r40:V, reg c18:L, reg substr1:cls, reg comps8:*, reg comps9:V, reg p5:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r42:V, reg r43:V, reg token4:*, reg token5:V, reg nchar2:cls, reg r44:V, reg r45:V, reg p6:p(V +), reg r47:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r48:V, reg r49:V, reg table:cls, reg substr2:cls, reg additions:*, reg additions1:V, reg p7:p(V +), reg r51:V, reg p8:p(V +), reg r53:V, reg length3:cls, reg r54:V, reg r55:V, reg c19:L, reg isRepeat:*, reg isRepeat1:V, reg c20:L, reg capture_output:cls, reg cat:cls, reg format:cls, reg comps10:*, reg comps11:V, reg p9:p(V +), reg r57:V, reg p10:p(V +), reg r59:V, reg p11:p(V +), reg r61:V, reg r62:V, reg character3:cls, reg r63:V, reg r64:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r65:V, reg r66:V, reg table1:cls, reg substr3:cls, reg additions2:*, reg additions3:V, reg p12:p(V +), reg keepUpto:*, reg keepUpto1:V, reg p13:p(V +), reg r69:V, reg p14:p(V +), reg r71:V, reg length4:cls, reg r72:V, reg r73:V, reg c21:L, reg keepUpto2:*, reg keepUpto3:V, reg r74:V, reg substr4:cls, reg additions4:*, reg additions5:V, reg c22:L, reg additions7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r75:V, reg p15:p(V +), reg keepUpto4:*, reg keepUpto5:V, reg r77:V, reg p16:p(V +), reg r79:V, reg character4:cls, reg r80:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r81:V, reg r82:V, reg addition:*, reg addition1:V, reg possible:*, reg possible1:V, reg paste:cls, reg comps12:*, reg comps13:V, reg p17:p(V +), reg r84:V, reg list:cls, reg r85:V |
    mkenv;
    st linebuffer = linebuffer;
    st cursorPosition = cursorPosition;
    check_repeat_isMissing = missing.0(check_repeat);
    if check_repeat_isMissing then L0(TRUE) else L0(check_repeat);
  L0(check_repeat_orDefault):
    st `check.repeat` = check_repeat_orDefault;
    minlength_isMissing = missing.0(minlength);
    if minlength_isMissing then L1() else L2(minlength);
  L1():
    p = prom<V +>{
      return -1.0;
    };
    goto L2(p);
  L2(minlength_orDefault):
    st minlength = minlength_orDefault;
    check_repeat1 = ld `check.repeat`;
    check L28() else D0();
  D0():
    deopt 0 [check_repeat1];
  L28():
    check_repeat2 = force? check_repeat1;
    checkMissing(check_repeat2);
    c = `as.logical`(check_repeat2);
    if c then L29() else L3();
  L3():
    goto L7(TRUE);
  L7(c13):
    st isRepeat = c13;
    _assignLinebuffer = ldf `.assignLinebuffer`;
    check L43() else D5();
  L29():
    linebuffer1 = ld linebuffer;
    check L30() else D1();
  D1():
    deopt 2 [linebuffer1];
  D5():
    deopt 21 [];
  L30():
    linebuffer2 = force? linebuffer1;
    checkMissing(linebuffer2);
    _CompletionEnv = ld `.CompletionEnv`;
    check L31() else D2();
  L43():
    p1 = prom<V +>{
      linebuffer7 = ld linebuffer;
      linebuffer8 = force? linebuffer7;
      checkMissing(linebuffer8);
      return linebuffer8;
    };
    r6 = dyn _assignLinebuffer(p1);
    check L44() else D6();
  D2():
    deopt 3 [linebuffer2, _CompletionEnv];
  D6():
    deopt 23 [r6];
  L31():
    _CompletionEnv1 = force? _CompletionEnv;
    checkMissing(_CompletionEnv1);
    c1 = `is.object`(_CompletionEnv1);
    if c1 then L32() else L33(linebuffer2, _CompletionEnv1);
  L44():
    _assignEnd = ldf `.assignEnd`;
    check L45() else D7();
  D7():
    deopt 25 [];
  L4(linebuffer6, dx1):
    r2 = `==`(linebuffer6, dx1);
    c2 = `as.logical`(r2);
    if c2 then L35() else L5(c2);
  L32():
    dr = tryDispatchBuiltin.1("[[", _CompletionEnv1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L34() else L33(linebuffer2, dr);
  L33(linebuffer4, _CompletionEnv3):
    __ = ldf `[[` in base;
    r1 = dyn __(_CompletionEnv3, "linebuffer");
    goto L4(linebuffer4, r1);
  L45():
    p2 = prom<V +>{
      cursorPosition7 = ld cursorPosition;
      cursorPosition8 = force? cursorPosition7;
      checkMissing(cursorPosition8);
      return cursorPosition8;
    };
    r8 = dyn _assignEnd(p2);
    check L46() else D8();
  D8():
    deopt 27 [r8];
  L5(c4):
    goto L7(c4);
  L34():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(linebuffer2, dx);
  L35():
    cursorPosition1 = ld cursorPosition;
    check L36() else D3();
  L46():
    _guessTokenFromLine = ldf `.guessTokenFromLine`;
    check L47() else D9();
  D3():
    deopt 9 [c2, cursorPosition1];
  D9():
    deopt 29 [];
  L36():
    cursorPosition2 = force? cursorPosition1;
    checkMissing(cursorPosition2);
    _CompletionEnv4 = ld `.CompletionEnv`;
    check L37() else D4();
  L47():
    r9 = dyn _guessTokenFromLine();
    check L48() else D10();
  D4():
    deopt 10 [c2, cursorPosition2, _CompletionEnv4];
  D10():
    deopt 30 [r9];
  L37():
    _CompletionEnv5 = force? _CompletionEnv4;
    checkMissing(_CompletionEnv5);
    c5 = `is.object`(_CompletionEnv5);
    if c5 then L38() else L39(c2, cursorPosition2, _CompletionEnv5);
  L48():
    _CompletionEnv8 = ld `.CompletionEnv`;
    check L49() else D11();
  D11():
    deopt 31 [_CompletionEnv8];
  L6(c9, cursorPosition6, dx3):
    r4 = `==`(cursorPosition6, dx3);
    c10 = `as.logical`(r4);
    c11 = `&&`(c9, c10);
    goto L5(c11);
  L38():
    dr2 = tryDispatchBuiltin.1("[[", _CompletionEnv5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L40() else L39(c2, cursorPosition2, dr2);
  L39(c7, cursorPosition4, _CompletionEnv7):
    __1 = ldf `[[` in base;
    r3 = dyn __1(_CompletionEnv7, "end");
    goto L6(c7, cursorPosition4, r3);
  L49():
    _CompletionEnv9 = force? _CompletionEnv8;
    checkMissing(_CompletionEnv9);
    c14 = `is.object`(_CompletionEnv9);
    if c14 then L50() else L51(_CompletionEnv9);
  L8(dx5):
    st token = dx5;
    sym = ldf nchar;
    base = ldf nchar in base;
    guard = `==`.4(sym, base);
    if guard then L53() else L54();
  L40():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(c2, cursorPosition2, dx2);
  L50():
    dr4 = tryDispatchBuiltin.1("[[", _CompletionEnv9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L52() else L51(dr4);
  L51(_CompletionEnv11):
    __2 = ldf `[[` in base;
    r10 = dyn __2(_CompletionEnv11, "token");
    goto L8(r10);
  L9(r12):
    minlength1 = ld minlength;
    check L57() else D14();
  L52():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L8(dx4);
  L53():
    token = ld token;
    check L55() else D12();
  L54():
    r11 = dyn base[, type](<sym token>, "chars");
    goto L9(r11);
  D12():
    deopt 39 [token];
  D14():
    deopt 45 [r12, minlength1];
  L55():
    token1 = force? token;
    checkMissing(token1);
    nchar = ldf nchar in base;
    r13 = dyn nchar(token1, "chars", FALSE, NA_LGL);
    check L56() else D13();
  L57():
    minlength2 = force? minlength1;
    checkMissing(minlength2);
    r14 = `<`(r12, minlength2);
    c15 = `as.logical`(r14);
    if c15 then L58() else L10();
  D13():
    deopt 45 [r13];
  L10():
    _completeToken = ldf `.completeToken`;
    check L62() else D17();
  L11(r16):
    st comps = r16;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L66() else L67();
  L56():
    goto L9(r13);
  L58():
    character = ldf character;
    check L59() else D15();
  D15():
    deopt 49 [];
  D17():
    deopt 52 [];
  L12(r20):
    r22 = `==`(r20, 0);
    c16 = `as.logical`(r22);
    if c16 then L70() else L13();
  L59():
    r15 = dyn character();
    check L60() else D16();
  L62():
    r17 = dyn _completeToken();
    check L63() else D18();
  L66():
    comps = ld comps;
    check L68() else D21();
  L67():
    r19 = dyn base1(<sym comps>);
    goto L12(r19);
  D16():
    deopt 50 [r15];
  D18():
    deopt 53 [r17];
  D21():
    deopt 60 [comps];
  L13():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L74() else L75();
  L14():
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L118() else L119();
  L60():
    goto L11(r15);
  L63():
    _retrieveCompletions = ldf `.retrieveCompletions`;
    check L64() else D19();
  L68():
    comps1 = force? comps;
    checkMissing(comps1);
    length = ldf length in base;
    r21 = dyn length(comps1);
    check L69() else D22();
  L70():
    st addition = "";
    character1 = ldf character;
    check L71() else D23();
  D19():
    deopt 55 [];
  D22():
    deopt 63 [r21];
  D23():
    deopt 70 [];
  L15(r26):
    r28 = `==`(r26, 1);
    c17 = `as.logical`(r28);
    if c17 then L78() else L16();
  L27(r82):
    popenv;
    return r82;
  L64():
    r18 = dyn _retrieveCompletions();
    check L65() else D20();
  L69():
    goto L12(r21);
  L71():
    r23 = dyn character1();
    check L72() else D24();
  L74():
    comps2 = ld comps;
    check L76() else D25();
  L75():
    r25 = dyn base2(<sym comps>);
    goto L15(r25);
  L118():
    addition = ld addition;
    check L120() else D51();
  L119():
    r81 = dyn base8[addition, possible, comps](<sym addition>, <sym possible>, <lang paste(comps, collapse=" ")>);
    goto L27(r81);
  D20():
    deopt 56 [r18];
  D24():
    deopt 71 [r23];
  D25():
    deopt 75 [comps2];
  D51():
    deopt 166 [addition];
  L16():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L84() else L85();
  L65():
    goto L11(r18);
  L72():
    st possible = r23;
    goto L14();
  L76():
    comps3 = force? comps2;
    checkMissing(comps3);
    length1 = ldf length in base;
    r27 = dyn length1(comps3);
    check L77() else D26();
  L78():
    substr = ldf substr;
    check L79() else D27();
  L120():
    addition1 = force? addition;
    checkMissing(addition1);
    possible = ld possible;
    check L121() else D52();
  D26():
    deopt 78 [r27];
  D27():
    deopt 82 [];
  D52():
    deopt 169 [possible];
  L17(r38):
    r40 = `>`(r38, 1);
    c18 = `as.logical`(r40);
    if c18 then L88() else L18();
  L77():
    goto L15(r27);
  L79():
    p3 = prom<V +>{
      comps4 = ld comps;
      comps5 = force? comps4;
      checkMissing(comps5);
      return comps5;
    };
    p4 = prom<V +>{
      sym3 = ldf nchar;
      base3 = ldf nchar in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r31):
      r33 = `+`(r31, 1);
      return r33;
    L1():
      token2 = ld token;
      token3 = force? token2;
      checkMissing(token3);
      nchar1 = ldf nchar in base;
      r32 = dyn nchar1(token3, "chars", FALSE, NA_LGL);
      goto L0(r32);
    L2():
      r30 = dyn base3[, type](<sym token>, "chars");
      goto L0(r30);
    };
    r35 = dyn substr(p3, p4, 100000);
    check L80() else D28();
  L84():
    comps6 = ld comps;
    check L86() else D31();
  L85():
    r37 = dyn base4(<sym comps>);
    goto L17(r37);
  L121():
    possible1 = force? possible;
    checkMissing(possible1);
    paste = ldf paste;
    check L122() else D53();
  D28():
    deopt 86 [r35];
  D31():
    deopt 94 [comps6];
  D53():
    deopt 173 [];
  L18():
    goto L14();
  L80():
    st addition = r35;
    character2 = ldf character;
    check L81() else D29();
  L86():
    comps7 = force? comps6;
    checkMissing(comps7);
    length2 = ldf length in base;
    r39 = dyn length2(comps7);
    check L87() else D32();
  L88():
    substr1 = ldf substr;
    check L89() else D33();
  L122():
    p17 = prom<V +>{
      comps12 = ld comps;
      comps13 = force? comps12;
      checkMissing(comps13);
      return comps13;
    };
    r84 = dyn paste[, collapse](p17, " ");
    check L123() else D54();
  D29():
    deopt 89 [];
  D32():
    deopt 97 [r39];
  D33():
    deopt 101 [];
  D54():
    deopt 177 [r84];
  L81():
    r36 = dyn character2();
    check L82() else D30();
  L87():
    goto L17(r39);
  L89():
    p5 = prom<V +>{
      comps8 = ld comps;
      comps9 = force? comps8;
      checkMissing(comps9);
      return comps9;
    };
    p6 = prom<V +>{
      sym5 = ldf nchar;
      base5 = ldf nchar in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r43):
      r45 = `+`(r43, 1);
      return r45;
    L1():
      token4 = ld token;
      token5 = force? token4;
      checkMissing(token5);
      nchar2 = ldf nchar in base;
      r44 = dyn nchar2(token5, "chars", FALSE, NA_LGL);
      goto L0(r44);
    L2():
      r42 = dyn base5[, type](<sym token>, "chars");
      goto L0(r42);
    };
    r47 = dyn substr1(p5, p6, 100000);
    check L90() else D34();
  L123():
    list = ldf list in base;
    r85 = dyn list(addition1, possible1, r84);
    check L124() else D55();
  D30():
    deopt 90 [r36];
  D34():
    deopt 105 [r47];
  D55():
    deopt 180 [r85];
  L82():
    st possible = r36;
    goto L14();
  L90():
    st additions = r47;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L91() else L92();
  L124():
    goto L27(r85);
  L19(r49):
    r55 = `>`(r49, 1);
    c19 = `as.logical`(r55);
    if c19 then L96() else L20();
  L91():
    table = ldf table;
    check L93() else D35();
  L92():
    r48 = dyn base6(<lang table(substr(additions, 1, 1))>);
    goto L19(r48);
  D35():
    deopt 110 [];
  L20():
    st keepUpto = 1.0;
    goto L26();
  L23(r64):
    goto L14();
  L93():
    p8 = prom<V +>{
      substr2 = ldf substr;
      p7 = prom<V +>{
        additions = ld additions;
        additions1 = force? additions;
        checkMissing(additions1);
        return additions1;
      };
      r51 = dyn substr2(p7, 1, 1);
      return r51;
    };
    r53 = dyn table(p8);
    check L94() else D36();
  L96():
    st addition = "";
    isRepeat = ld isRepeat;
    check L97() else D38();
  D36():
    deopt 112 [r53];
  D38():
    deopt 120 [isRepeat];
  L26():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L105() else L106();
  L94():
    length3 = ldf length in base;
    r54 = dyn length3(r53);
    check L95() else D37();
  L97():
    isRepeat1 = force? isRepeat;
    checkMissing(isRepeat1);
    c20 = `as.logical`(isRepeat1);
    if c20 then L98() else L21();
  D37():
    deopt 114 [r54];
  L21():
    character3 = ldf character;
    check L102() else D41();
  L22(r62):
    st possible = r62;
    goto L23(r62);
  L24(r66):
    r73 = `==`(r66, 1);
    c21 = `as.logical`(r73);
    if c21 then L110() else L25();
  L95():
    goto L19(r54);
  L98():
    capture_output = ldf `capture.output`;
    check L99() else D39();
  L105():
    table1 = ldf table;
    check L107() else D43();
  L106():
    r65 = dyn base7(<lang table(substr(additions, 1, keepUpto))>);
    goto L24(r65);
  D39():
    deopt 123 [];
  D41():
    deopt 127 [];
  D43():
    deopt 136 [];
  L25():
    substr4 = ldf substr;
    check L113() else D47();
  L99():
    p11 = prom<V +>{
      cat = ldf cat;
      p10 = prom<V +>{
        format = ldf format;
        p9 = prom<V +>{
          comps10 = ld comps;
          comps11 = force? comps10;
          checkMissing(comps11);
          return comps11;
        };
        r57 = dyn format[, justify](p9, "left");
        return r57;
      };
      r59 = dyn cat[, fill](p10, TRUE);
      return r59;
    };
    r61 = dyn capture_output(p11);
    check L100() else D40();
  L102():
    r63 = dyn character3();
    check L103() else D42();
  L107():
    p14 = prom<V +>{
      substr3 = ldf substr;
      p12 = prom<V +>{
        additions2 = ld additions;
        additions3 = force? additions2;
        checkMissing(additions3);
        return additions3;
      };
      p13 = prom<V +>{
        keepUpto = ld keepUpto;
        keepUpto1 = force? keepUpto;
        checkMissing(keepUpto1);
        return keepUpto1;
      };
      r69 = dyn substr3(p12, 1, p13);
      return r69;
    };
    r71 = dyn table1(p14);
    check L108() else D44();
  L110():
    keepUpto2 = ld keepUpto;
    check L111() else D46();
  D40():
    deopt 125 [r61];
  D42():
    deopt 128 [r63];
  D44():
    deopt 138 [r71];
  D46():
    deopt 143 [keepUpto2];
  D47():
    deopt 152 [];
  L100():
    goto L22(r61);
  L103():
    goto L22(r63);
  L108():
    length4 = ldf length in base;
    r72 = dyn length4(r71);
    check L109() else D45();
  L111():
    keepUpto3 = force? keepUpto2;
    checkMissing(keepUpto3);
    r74 = `+`(keepUpto3, 1);
    st keepUpto = r74;
    goto L26();
  L113():
    p15 = prom<V +>{
      additions4 = ld additions;
      additions5 = force? additions4;
      checkMissing(additions5);
      c22 = `is.object`(additions5);
      if c22 then L1() else L2(additions5);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", additions5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(additions7):
      __3 = ldf `[` in base;
      r75 = dyn __3(additions7, 1);
      goto L0(r75);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p16 = prom<V +>{
      keepUpto4 = ld keepUpto;
      keepUpto5 = force? keepUpto4;
      checkMissing(keepUpto5);
      r77 = `-`(keepUpto5, 1);
      return r77;
    };
    r79 = dyn substr4(p15, 1, p16);
    check L114() else D48();
  D45():
    deopt 140 [r72];
  D48():
    deopt 156 [r79];
  L109():
    goto L24(r72);
  L114():
    st addition = r79;
    character4 = ldf character;
    check L115() else D49();
  D49():
    deopt 159 [];
  L115():
    r80 = dyn character4();
    check L116() else D50();
  D50():
    deopt 160 [r80];
  L116():
    st possible = r80;
    goto L23(r80);
  }
}