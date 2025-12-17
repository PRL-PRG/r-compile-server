fun main() {
  () -+> V { reg r:cls, reg cat:cls, reg shQuote:cls, reg test:*, reg test1:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V, reg cat1:cls, reg shQuote1:cls, reg test2:*, reg test3:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg r8:V, reg paste:cls, reg sQuote:cls, reg r9:V, reg p4:p(V +), reg r11:V, reg cat2:cls, reg shQuote2:cls, reg tryit:*, reg tryit1:V, reg p5:p(V +), reg r13:V, reg p6:p(V +), reg r15:V, reg cat3:cls, reg shQuote3:cls, reg tryit2:*, reg tryit3:V, reg p7:p(V +), reg r17:V, reg p8:p(V +), reg r19:V |
    mkenv;
    r = clos inner494507457;
    st shQuote = r;
    st test = "abc$def`gh`i\\j";
    cat = ldf cat;
    check L0() else D0();
  D0():
    deopt 7 [];
  L0():
    p1 = prom<V +>{
      shQuote = ldf shQuote;
      p = prom<V +>{
        test = ld test;
        test1 = force? test;
        checkMissing(test1);
        return test1;
      };
      r2 = dyn shQuote(p);
      return r2;
    };
    r4 = dyn cat(p1, "\n");
    check L1() else D1();
  D1():
    deopt 10 [r4];
  L1():
    st test = "don't do it!";
    cat1 = ldf cat;
    check L2() else D2();
  D2():
    deopt 15 [];
  L2():
    p3 = prom<V +>{
      shQuote1 = ldf shQuote;
      p2 = prom<V +>{
        test2 = ld test;
        test3 = force? test2;
        checkMissing(test3);
        return test3;
      };
      r6 = dyn shQuote1(p2);
      return r6;
    };
    r8 = dyn cat1(p3, "\n");
    check L3() else D3();
  D3():
    deopt 18 [r8];
  L3():
    paste = ldf paste;
    check L4() else D4();
  D4():
    deopt 20 [];
  L4():
    p4 = prom<V +>{
      sQuote = ldf sQuote;
      r9 = dyn sQuote("-c");
      return r9;
    };
    r11 = dyn paste("use the", p4, "switch\nlike this");
    check L5() else D5();
  D5():
    deopt 24 [r11];
  L5():
    st tryit = r11;
    cat2 = ldf cat;
    check L6() else D6();
  D6():
    deopt 27 [];
  L6():
    p6 = prom<V +>{
      shQuote2 = ldf shQuote;
      p5 = prom<V +>{
        tryit = ld tryit;
        tryit1 = force? tryit;
        checkMissing(tryit1);
        return tryit1;
      };
      r13 = dyn shQuote2(p5);
      return r13;
    };
    r15 = dyn cat2(p6, "\n");
    check L7() else D7();
  D7():
    deopt 30 [r15];
  L7():
    cat3 = ldf cat;
    check L8() else D8();
  D8():
    deopt 32 [];
  L8():
    p8 = prom<V +>{
      shQuote3 = ldf shQuote;
      p7 = prom<V +>{
        tryit2 = ld tryit;
        tryit3 = force? tryit2;
        checkMissing(tryit3);
        return tryit3;
      };
      r17 = dyn shQuote3[, type](p7, "csh");
      return r17;
    };
    r19 = dyn cat3(p8, "\n");
    check L9() else D9();
  D9():
    deopt 35 [r19];
  L9():
    st perlcmd = "print \"Hello World\\n\";";
    invisible.0();
    popenv;
    return "print \"Hello World\\n\";";
  }
}
fun inner494507457(string, type) {
  (reg string:*, reg type:*) -+> V { var string:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg missing:cls, reg r6:V, reg c1:L, reg c3:V, reg _Platform:*, reg _Platform1:V, reg c4:L, reg c6:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg c8:L, reg dx1:V, reg r7:V, reg r8:V, reg c9:L, reg c10:V, reg c12:L, reg match_arg:cls, reg type1:*, reg type2:V, reg p1:p(V +), reg r11:V, reg type3:*, reg type4:V, reg r12:V, reg c13:L, reg gsub:cls, reg string1:*, reg string2:V, reg p2:p(V +), reg r14:V, reg sub:cls, reg string3:*, reg string4:V, reg p3:p(V +), reg r16:V, reg paste0:cls, reg string5:*, reg string6:V, reg p4:p(V +), reg r18:V, reg type5:*, reg type6:V, reg r19:V, reg c14:L, reg gsub1:cls, reg string7:*, reg string8:V, reg p5:p(V +), reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg grepl:cls, reg string9:*, reg string10:V, reg p6:p(V +), reg r25:V, reg any:cls, reg r26:V, reg r27:V, reg c15:L, reg paste1:cls, reg string11:*, reg string12:V, reg p7:p(V +), reg r29:V, reg type7:*, reg type8:V, reg r30:V, reg c16:L, reg paste2:cls, reg gsub2:cls, reg string13:*, reg string14:V, reg p8:p(V +), reg r32:V, reg p9:p(V +), reg r34:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg r36:V, reg grepl1:cls, reg string15:*, reg string16:V, reg p10:p(V +), reg r38:V, reg any1:cls, reg r39:V, reg r40:V, reg c17:L, reg paste3:cls, reg gsub3:cls, reg string17:*, reg string18:V, reg p11:p(V +), reg r42:V, reg p12:p(V +), reg r44:V, reg paste4:cls, reg gsub4:cls, reg string19:*, reg string20:V, reg p13:p(V +), reg r46:V, reg p14:p(V +), reg r48:V |
    mkenv;
    st string = string;
    type_isMissing = missing.0(type);
    if type_isMissing then L0() else L1(type);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("sh", "csh", "cmd", "cmd2");
      goto L0(r2);
    L2():
      r = dyn base("sh", "csh", "cmd", "cmd2");
      goto L0(r);
    };
    goto L1(p);
  L1(type_orDefault):
    st type = type_orDefault;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L2(r5):
    c1 = `as.logical`(r5);
    if c1 then L15() else L3(c1);
  L13():
    missing = ldf missing in base;
    r6 = dyn missing(<sym type>);
    goto L2(r6);
  L14():
    r4 = dyn base1(<sym type>);
    goto L2(r4);
  L3(c3):
    c12 = `as.logical`(c3);
    if c12 then L22() else L4();
  L15():
    _Platform = ld `.Platform`;
    check L16() else D0();
  D0():
    deopt 3 [c1, _Platform];
  L4():
    goto L5();
  L5():
    match_arg = ldf `match.arg`;
    check L24() else D1();
  L16():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c4 = `is.object`(_Platform1);
    if c4 then L18() else L19(c1, _Platform1);
  L22():
    st type = "cmd";
    goto L5();
  D1():
    deopt 15 [];
  L17(c8, dx1):
    r8 = `==`(dx1, "windows");
    c9 = `as.logical`(r8);
    c10 = `&&`(c8, c9);
    goto L3(c10);
  L18():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(c1, dr);
  L19(c6, _Platform3):
    r7 = `$`(_Platform3, <sym OS.type>);
    goto L17(c6, r7);
  L24():
    p1 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r11 = dyn match_arg(p1);
    check L25() else D2();
  D2():
    deopt 17 [r11];
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L17(c1, dx);
  L25():
    st type = r11;
    type3 = ld type;
    check L26() else D3();
  D3():
    deopt 19 [type3];
  L26():
    type4 = force? type3;
    checkMissing(type4);
    r12 = `==`(type4, "cmd");
    c13 = `as.logical`(r12);
    if c13 then L27() else L6();
  L6():
    type5 = ld type;
    check L35() else D10();
  L27():
    gsub = ldf gsub;
    check L28() else D4();
  D4():
    deopt 24 [];
  D10():
    deopt 45 [type5];
  L28():
    p2 = prom<V +>{
      string1 = ld string;
      string2 = force? string1;
      checkMissing(string2);
      return string2;
    };
    r14 = dyn gsub("(\\\\*)\"", "\\1\\1\\\\\"", p2);
    check L29() else D5();
  L35():
    type6 = force? type5;
    checkMissing(type6);
    r19 = `==`(type6, "cmd2");
    c14 = `as.logical`(r19);
    if c14 then L36() else L7();
  D5():
    deopt 28 [r14];
  L7():
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L40() else L41();
  L29():
    st string = r14;
    sub = ldf sub;
    check L30() else D6();
  L36():
    gsub1 = ldf gsub;
    check L37() else D11();
  D6():
    deopt 31 [];
  D11():
    deopt 50 [];
  L8(r23):
    r27 = `!`(r23);
    c15 = `as.logical`(r27);
    if c15 then L45() else L9();
  L30():
    p3 = prom<V +>{
      string3 = ld string;
      string4 = force? string3;
      checkMissing(string4);
      return string4;
    };
    r16 = dyn sub("(\\\\+)$", "\\1\\1", p3);
    check L31() else D7();
  L37():
    p5 = prom<V +>{
      string7 = ld string;
      string8 = force? string7;
      checkMissing(string8);
      return string8;
    };
    r21 = dyn gsub1("([()%!^\"<>&|])", "^\\1", p5);
    check L38() else D12();
  L40():
    grepl = ldf grepl;
    check L42() else D13();
  L41():
    r22 = dyn base2(<lang grepl("'", string)>);
    goto L8(r22);
  D7():
    deopt 35 [r16];
  D12():
    deopt 54 [r21];
  D13():
    deopt 58 [];
  L9():
    type7 = ld type;
    check L49() else D18();
  L31():
    st string = r16;
    paste0 = ldf paste0;
    check L32() else D8();
  L38():
    popenv;
    return r21;
  L42():
    p6 = prom<V +>{
      string9 = ld string;
      string10 = force? string9;
      checkMissing(string10);
      return string10;
    };
    r25 = dyn grepl("'", p6);
    check L43() else D14();
  L45():
    paste1 = ldf paste0;
    check L46() else D16();
  D8():
    deopt 38 [];
  D14():
    deopt 61 [r25];
  D16():
    deopt 66 [];
  D18():
    deopt 73 [type7];
  L32():
    p4 = prom<V +>{
      string5 = ld string;
      string6 = force? string5;
      checkMissing(string6);
      return string6;
    };
    r18 = dyn paste0[, , , recycle0]("\"", p4, "\"", TRUE);
    check L33() else D9();
  L43():
    any = ldf any in base;
    r26 = dyn any(r25);
    check L44() else D15();
  L46():
    p7 = prom<V +>{
      string11 = ld string;
      string12 = force? string11;
      checkMissing(string12);
      return string12;
    };
    r29 = dyn paste1[, , , recycle0]("'", p7, "'", TRUE);
    check L47() else D17();
  L49():
    type8 = force? type7;
    checkMissing(type8);
    r30 = `==`(type8, "sh");
    c16 = `as.logical`(r30);
    if c16 then L50() else L10();
  D9():
    deopt 44 [r18];
  D15():
    deopt 63 [r26];
  D17():
    deopt 72 [r29];
  L10():
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L54() else L55();
  L33():
    popenv;
    return r18;
  L44():
    goto L8(r26);
  L47():
    popenv;
    return r29;
  L50():
    paste2 = ldf paste0;
    check L51() else D19();
  D19():
    deopt 78 [];
  L11(r36):
    r40 = `!`(r36);
    c17 = `as.logical`(r40);
    if c17 then L59() else L12();
  L51():
    p9 = prom<V +>{
      gsub2 = ldf gsub;
      p8 = prom<V +>{
        string13 = ld string;
        string14 = force? string13;
        checkMissing(string14);
        return string14;
      };
      r32 = dyn gsub2("([\"$`\\])", "\\\\\\1", p8);
      return r32;
    };
    r34 = dyn paste2("\"", p9, "\"");
    check L52() else D20();
  L54():
    grepl1 = ldf grepl;
    check L56() else D21();
  L55():
    r35 = dyn base3(<lang grepl("([$`])", string)>);
    goto L11(r35);
  D20():
    deopt 82 [r34];
  D21():
    deopt 86 [];
  L12():
    paste4 = ldf paste0;
    check L63() else D26();
  L52():
    popenv;
    return r34;
  L56():
    p10 = prom<V +>{
      string15 = ld string;
      string16 = force? string15;
      checkMissing(string16);
      return string16;
    };
    r38 = dyn grepl1("([$`])", p10);
    check L57() else D22();
  L59():
    paste3 = ldf paste0;
    check L60() else D24();
  D22():
    deopt 89 [r38];
  D24():
    deopt 94 [];
  D26():
    deopt 100 [];
  L57():
    any1 = ldf any in base;
    r39 = dyn any1(r38);
    check L58() else D23();
  L60():
    p12 = prom<V +>{
      gsub3 = ldf gsub;
      p11 = prom<V +>{
        string17 = ld string;
        string18 = force? string17;
        checkMissing(string18);
        return string18;
      };
      r42 = dyn gsub3("([\"!\\])", "\\\\\\1", p11);
      return r42;
    };
    r44 = dyn paste3("\"", p12, "\"");
    check L61() else D25();
  L63():
    p14 = prom<V +>{
      gsub4 = ldf gsub;
      p13 = prom<V +>{
        string19 = ld string;
        string20 = force? string19;
        checkMissing(string20);
        return string20;
      };
      r46 = dyn gsub4[, , , fixed]("'", "'\"'\"'", p13, TRUE);
      return r46;
    };
    r48 = dyn paste4("'", p14, "'");
    check L64() else D27();
  D23():
    deopt 91 [r39];
  D25():
    deopt 98 [r44];
  D27():
    deopt 104 [r48];
  L58():
    goto L11(r39);
  L61():
    popenv;
    return r44;
  L64():
    popenv;
    return r48;
  }
}