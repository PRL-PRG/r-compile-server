fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.check_package_code_startup_functions` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg attr:cls, reg r4:V, reg c:V, reg r5:V, reg c1:L, reg r6:V, reg character:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg x3:*, reg x4:V, reg length:cls, reg r10:V, reg c2:L, reg unlist:cls, reg x5:*, reg x6:V, reg p:p(V +), reg r12:V, reg _in_:cls, reg unlist1:cls, reg lapply:cls, reg y:*, reg y1:V, reg p1:p(V +), reg names:*, reg names1:V, reg p2:p(V +), reg r15:V, reg p3:p(V +), reg r17:V, reg p4:p(V +), reg r19:V, reg unique:cls, reg unlist2:cls, reg lapply1:cls, reg y2:*, reg y3:V, reg p5:p(V +), reg r21:cls, reg p6:p(V +), reg r23:V, reg p7:p(V +), reg r25:V, reg p8:p(V +), reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg _in_1:cls, reg calls:*, reg calls1:V, reg p9:p(V +), reg _bad_call_names_in_startup_functions:*, reg _bad_call_names_in_startup_functions1:V, reg c3:L, reg _bad_call_names_in_startup_functions3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r31:V, reg p10:p(V +), reg r33:V, reg any:cls, reg r34:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg r36:V, reg _in_2:cls, reg calls2:*, reg calls3:V, reg p11:p(V +), reg _bad_call_names_in_startup_functions4:*, reg _bad_call_names_in_startup_functions5:V, reg c4:L, reg _bad_call_names_in_startup_functions7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r38:V, reg p12:p(V +), reg r40:V, reg any1:cls, reg r41:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r42:V, reg r43:V, reg _in_3:cls, reg calls4:*, reg calls5:V, reg p13:p(V +), reg _bad_call_names_in_startup_functions8:*, reg _bad_call_names_in_startup_functions9:V, reg c5:L, reg _bad_call_names_in_startup_functions11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r45:V, reg p14:p(V +), reg r47:V, reg any2:cls, reg r48:V, reg r49:cls, reg r50:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r51:V, reg r52:V, reg res:*, reg res1:V, reg unlist3:cls, reg Map:cls, reg _fmt_entries_for_file:*, reg _fmt_entries_for_file1:V, reg p15:p(V +), reg x7:*, reg x8:V, reg p16:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r55:V, reg r56:V, reg x9:*, reg x10:V, reg names2:cls, reg r57:V, reg p17:p(V +), reg r59:V, reg p18:p(V +), reg r61:V, reg has_bad_wrong_args:*, reg has_bad_wrong_args1:V, reg c6:L, reg strwrap:cls, reg gettextf:cls, reg sQuote:cls, reg r62:V, reg p19:p(V +), reg sQuote1:cls, reg r64:V, reg p20:p(V +), reg r66:V, reg p21:p(V +), reg r68:V, reg r69:V, reg has_bad_calls_for_load:*, reg has_bad_calls_for_load1:V, reg c7:L, reg strwrap1:cls, reg gettextf1:cls, reg r70:V, reg p22:p(V +), reg r72:V, reg r73:V, reg has_bad_calls_for_output:*, reg has_bad_calls_for_output1:V, reg c8:L, reg strwrap2:cls, reg gettextf2:cls, reg sQuote2:cls, reg r74:V, reg p23:p(V +), reg r76:V, reg p24:p(V +), reg r78:V, reg r79:V, reg has_unsafe_calls:*, reg has_unsafe_calls1:V, reg c9:L, reg strwrap3:cls, reg gettextf3:cls, reg sQuote3:cls, reg r80:V, reg p25:p(V +), reg r82:V, reg p26:p(V +), reg r84:V, reg r85:V, reg gettextf4:cls, reg sQuote4:cls, reg r86:V, reg p27:p(V +), reg r88:V, reg c10:cls, reg r89:V, reg res2:*, reg res3:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L0(r1):
    r5 = `!`(r1);
    c1 = `as.logical`(r5);
    if c1 then L25() else L2();
  L19():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L20():
    r = dyn base(<lang attr(x, ".First.lib")>);
    goto L0(r);
  L1(r3):
    c = `==`(r3, NULL);
    goto L0(c);
  L2():
    character = ldf character;
    check L27() else D2();
  L3(r6):
    st res = r6;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L21():
    x1 = ld x;
    check L23() else D0();
  L22():
    r2 = dyn base1(<sym x>, ".First.lib");
    goto L1(r2);
  L25():
    goto L3("NB: .First.lib is obsolete and will not be used in R >= 3.0.0");
  D0():
    deopt 3 [x1];
  D2():
    deopt 13 [];
  L4(r9):
    c2 = `as.logical`(r9);
    if c2 then L33() else L5();
  L23():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r4 = dyn attr(x2, ".First.lib");
    check L24() else D1();
  L27():
    r7 = dyn character();
    check L28() else D3();
  L29():
    x3 = ld x;
    check L31() else D4();
  L30():
    r8 = dyn base2(<sym x>);
    goto L4(r8);
  D1():
    deopt 7 [r4];
  D3():
    deopt 14 [r7];
  D4():
    deopt 18 [x3];
  L5():
    goto L18();
  L18():
    res2 = ld res;
    check L84() else D39();
  L24():
    goto L1(r4);
  L28():
    goto L3(r7);
  L31():
    x4 = force? x3;
    checkMissing(x4);
    length = ldf length in base;
    r10 = dyn length(x4);
    check L32() else D5();
  L33():
    unlist = ldf unlist;
    check L34() else D6();
  D5():
    deopt 21 [r10];
  D6():
    deopt 23 [];
  D39():
    deopt 137 [res2];
  L32():
    goto L4(r10);
  L34():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r12 = dyn unlist[, recursive](p, FALSE);
    check L35() else D7();
  L84():
    res3 = force? res2;
    checkMissing(res3);
    popenv;
    return res3;
  D7():
    deopt 27 [r12];
  L35():
    st y = r12;
    _in_ = ldf `%in%`;
    check L36() else D8();
  D8():
    deopt 30 [];
  L36():
    p4 = prom<V +>{
      unlist1 = ldf unlist;
      p3 = prom<V +>{
        lapply = ldf lapply;
        p1 = prom<V +>{
          y = ld y;
          y1 = force? y;
          checkMissing(y1);
          return y1;
        };
        p2 = prom<V +>{
          names = ld names;
          names1 = force? names;
          checkMissing(names1);
          return names1;
        };
        r15 = dyn lapply(p1, p2);
        return r15;
      };
      r17 = dyn unlist1(p3);
      return r17;
    };
    r19 = dyn _in_("bad_arg_names", p4);
    check L37() else D9();
  D9():
    deopt 33 [r19];
  L37():
    st has_bad_wrong_args = r19;
    unique = ldf unique;
    check L38() else D10();
  D10():
    deopt 36 [];
  L38():
    p8 = prom<V +>{
      unlist2 = ldf unlist;
      p7 = prom<V +>{
        lapply1 = ldf lapply;
        p5 = prom<V +>{
          y2 = ld y;
          y3 = force? y2;
          checkMissing(y3);
          return y3;
        };
        p6 = prom<V +>{
          r21 = clos inner3708401697;
          return r21;
        };
        r23 = dyn lapply1(p5, p6);
        return r23;
      };
      r25 = dyn unlist2(p7);
      return r25;
    };
    r27 = dyn unique(p8);
    check L39() else D11();
  D11():
    deopt 38 [r27];
  L39():
    st calls = r27;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L6(r29):
    st has_bad_calls_for_load = r29;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L45() else L46();
  L40():
    _in_1 = ldf `%in%`;
    check L42() else D12();
  L41():
    r28 = dyn base3(<lang `%in%`(calls, `$`(.bad_call_names_in_startup_functions, load))>);
    goto L6(r28);
  D12():
    deopt 43 [];
  L7(r36):
    st has_bad_calls_for_output = r36;
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L50() else L51();
  L42():
    p9 = prom<V +>{
      calls = ld calls;
      calls1 = force? calls;
      checkMissing(calls1);
      return calls1;
    };
    p10 = prom<V +>{
      _bad_call_names_in_startup_functions = ld `.bad_call_names_in_startup_functions`;
      _bad_call_names_in_startup_functions1 = force? _bad_call_names_in_startup_functions;
      checkMissing(_bad_call_names_in_startup_functions1);
      c3 = `is.object`(_bad_call_names_in_startup_functions1);
      if c3 then L1() else L2(_bad_call_names_in_startup_functions1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", _bad_call_names_in_startup_functions1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(_bad_call_names_in_startup_functions3):
      r31 = `$`(_bad_call_names_in_startup_functions3, <sym load>);
      goto L0(r31);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r33 = dyn _in_1(p9, p10);
    check L43() else D13();
  L45():
    _in_2 = ldf `%in%`;
    check L47() else D15();
  L46():
    r35 = dyn base4(<lang `%in%`(calls, `$`(.bad_call_names_in_startup_functions, output))>);
    goto L7(r35);
  D13():
    deopt 46 [r33];
  D15():
    deopt 53 [];
  L8(r43):
    st has_unsafe_calls = r43;
    r49 = clos inner2281728077;
    st `.fmt_entries_for_file` = r49;
    r50 = clos inner2281728077;
    st `.fmt_entries_for_function` = r50;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L55() else L56();
  L43():
    any = ldf any in base;
    r34 = dyn any(r33);
    check L44() else D14();
  L47():
    p11 = prom<V +>{
      calls2 = ld calls;
      calls3 = force? calls2;
      checkMissing(calls3);
      return calls3;
    };
    p12 = prom<V +>{
      _bad_call_names_in_startup_functions4 = ld `.bad_call_names_in_startup_functions`;
      _bad_call_names_in_startup_functions5 = force? _bad_call_names_in_startup_functions4;
      checkMissing(_bad_call_names_in_startup_functions5);
      c4 = `is.object`(_bad_call_names_in_startup_functions5);
      if c4 then L1() else L2(_bad_call_names_in_startup_functions5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", _bad_call_names_in_startup_functions5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(_bad_call_names_in_startup_functions7):
      r38 = `$`(_bad_call_names_in_startup_functions7, <sym output>);
      goto L0(r38);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r40 = dyn _in_2(p11, p12);
    check L48() else D16();
  L50():
    _in_3 = ldf `%in%`;
    check L52() else D18();
  L51():
    r42 = dyn base5(<lang `%in%`(calls, `$`(.bad_call_names_in_startup_functions, unsafe))>);
    goto L8(r42);
  D14():
    deopt 48 [r34];
  D16():
    deopt 56 [r40];
  D18():
    deopt 63 [];
  L9(r52):
    st res = r52;
    goto L18();
  L44():
    goto L6(r34);
  L48():
    any1 = ldf any in base;
    r41 = dyn any1(r40);
    check L49() else D17();
  L52():
    p13 = prom<V +>{
      calls4 = ld calls;
      calls5 = force? calls4;
      checkMissing(calls5);
      return calls5;
    };
    p14 = prom<V +>{
      _bad_call_names_in_startup_functions8 = ld `.bad_call_names_in_startup_functions`;
      _bad_call_names_in_startup_functions9 = force? _bad_call_names_in_startup_functions8;
      checkMissing(_bad_call_names_in_startup_functions9);
      c5 = `is.object`(_bad_call_names_in_startup_functions9);
      if c5 then L1() else L2(_bad_call_names_in_startup_functions9);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", _bad_call_names_in_startup_functions9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(_bad_call_names_in_startup_functions11):
      r45 = `$`(_bad_call_names_in_startup_functions11, <sym unsafe>);
      goto L0(r45);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r47 = dyn _in_3(p13, p14);
    check L53() else D19();
  L55():
    res = ld res;
    check L57() else D21();
  L56():
    r51 = dyn base6(<sym res>, <lang unlist(Map(.fmt_entries_for_file, x, names(x)), use.names=FALSE)>, <lang if(has_bad_wrong_args, strwrap(gettextf("Package startup functions should have two arguments with names starting with %s and %s, respectively.", sQuote("lib"), sQuote("pkg")), exdent=2))>, <lang if(has_bad_calls_for_load, strwrap(gettextf("Package startup functions should not change the search path."), exdent=2))>, <lang if(has_bad_calls_for_output, strwrap(gettextf("Package startup functions should use %s to generate messages.", sQuote("packageStartupMessage")), exdent=2))>, <lang if(has_unsafe_calls, strwrap(gettextf("Package startup functions should not call %s.", sQuote("installed.packages")), exdent=2))>, <lang gettextf("See section %s in '%s'.", sQuote("Good practice"), "?.onAttach")>);
    goto L9(r51);
  D17():
    deopt 58 [r41];
  D19():
    deopt 66 [r47];
  D21():
    deopt 78 [res];
  L49():
    goto L7(r41);
  L53():
    any2 = ldf any in base;
    r48 = dyn any2(r47);
    check L54() else D20();
  L57():
    res1 = force? res;
    checkMissing(res1);
    unlist3 = ldf unlist;
    check L58() else D22();
  D20():
    deopt 68 [r48];
  D22():
    deopt 81 [];
  L54():
    goto L8(r48);
  L58():
    p18 = prom<V +>{
      Map = ldf Map;
      p15 = prom<V +>{
        _fmt_entries_for_file = ld `.fmt_entries_for_file`;
        _fmt_entries_for_file1 = force? _fmt_entries_for_file;
        checkMissing(_fmt_entries_for_file1);
        return _fmt_entries_for_file1;
      };
      p16 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      p17 = prom<V +>{
        sym7 = ldf names;
        base7 = ldf names in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(r56):
        return r56;
      L1():
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        names2 = ldf names in base;
        r57 = dyn names2(x10);
        goto L0(r57);
      L2():
        r55 = dyn base7(<sym x>);
        goto L0(r55);
      };
      r59 = dyn Map(p15, p16, p17);
      return r59;
    };
    r61 = dyn unlist3[, `use.names`](p18, FALSE);
    check L59() else D23();
  D23():
    deopt 85 [r61];
  L59():
    has_bad_wrong_args = ld has_bad_wrong_args;
    check L60() else D24();
  D24():
    deopt 86 [has_bad_wrong_args];
  L60():
    has_bad_wrong_args1 = force? has_bad_wrong_args;
    checkMissing(has_bad_wrong_args1);
    c6 = `as.logical`(has_bad_wrong_args1);
    if c6 then L61() else L10();
  L10():
    goto L11(NULL);
  L11(r69):
    has_bad_calls_for_load = ld has_bad_calls_for_load;
    check L65() else D27();
  L61():
    strwrap = ldf strwrap;
    check L62() else D25();
  D25():
    deopt 89 [];
  D27():
    deopt 96 [has_bad_calls_for_load];
  L62():
    p21 = prom<V +>{
      gettextf = ldf gettextf;
      p19 = prom<V +>{
        sQuote = ldf sQuote;
        r62 = dyn sQuote("lib");
        return r62;
      };
      p20 = prom<V +>{
        sQuote1 = ldf sQuote;
        r64 = dyn sQuote1("pkg");
        return r64;
      };
      r66 = dyn gettextf("Package startup functions should have two arguments with names starting with %s and %s, respectively.", p19, p20);
      return r66;
    };
    r68 = dyn strwrap[, exdent](p21, 2);
    check L63() else D26();
  L65():
    has_bad_calls_for_load1 = force? has_bad_calls_for_load;
    checkMissing(has_bad_calls_for_load1);
    c7 = `as.logical`(has_bad_calls_for_load1);
    if c7 then L66() else L12();
  D26():
    deopt 93 [r68];
  L12():
    goto L13(NULL);
  L13(r73):
    has_bad_calls_for_output = ld has_bad_calls_for_output;
    check L70() else D30();
  L63():
    goto L11(r68);
  L66():
    strwrap1 = ldf strwrap;
    check L67() else D28();
  D28():
    deopt 99 [];
  D30():
    deopt 106 [has_bad_calls_for_output];
  L67():
    p22 = prom<V +>{
      gettextf1 = ldf gettextf;
      r70 = dyn gettextf1("Package startup functions should not change the search path.");
      return r70;
    };
    r72 = dyn strwrap1[, exdent](p22, 2);
    check L68() else D29();
  L70():
    has_bad_calls_for_output1 = force? has_bad_calls_for_output;
    checkMissing(has_bad_calls_for_output1);
    c8 = `as.logical`(has_bad_calls_for_output1);
    if c8 then L71() else L14();
  D29():
    deopt 103 [r72];
  L14():
    goto L15(NULL);
  L15(r79):
    has_unsafe_calls = ld has_unsafe_calls;
    check L75() else D33();
  L68():
    goto L13(r72);
  L71():
    strwrap2 = ldf strwrap;
    check L72() else D31();
  D31():
    deopt 109 [];
  D33():
    deopt 116 [has_unsafe_calls];
  L72():
    p24 = prom<V +>{
      gettextf2 = ldf gettextf;
      p23 = prom<V +>{
        sQuote2 = ldf sQuote;
        r74 = dyn sQuote2("packageStartupMessage");
        return r74;
      };
      r76 = dyn gettextf2("Package startup functions should use %s to generate messages.", p23);
      return r76;
    };
    r78 = dyn strwrap2[, exdent](p24, 2);
    check L73() else D32();
  L75():
    has_unsafe_calls1 = force? has_unsafe_calls;
    checkMissing(has_unsafe_calls1);
    c9 = `as.logical`(has_unsafe_calls1);
    if c9 then L76() else L16();
  D32():
    deopt 113 [r78];
  L16():
    goto L17(NULL);
  L17(r85):
    gettextf4 = ldf gettextf;
    check L80() else D36();
  L73():
    goto L15(r78);
  L76():
    strwrap3 = ldf strwrap;
    check L77() else D34();
  D34():
    deopt 119 [];
  D36():
    deopt 127 [];
  L77():
    p26 = prom<V +>{
      gettextf3 = ldf gettextf;
      p25 = prom<V +>{
        sQuote3 = ldf sQuote;
        r80 = dyn sQuote3("installed.packages");
        return r80;
      };
      r82 = dyn gettextf3("Package startup functions should not call %s.", p25);
      return r82;
    };
    r84 = dyn strwrap3[, exdent](p26, 2);
    check L78() else D35();
  L80():
    p27 = prom<V +>{
      sQuote4 = ldf sQuote;
      r86 = dyn sQuote4("Good practice");
      return r86;
    };
    r88 = dyn gettextf4("See section %s in '%s'.", p27, "?.onAttach");
    check L81() else D37();
  D35():
    deopt 123 [r84];
  D37():
    deopt 131 [r88];
  L78():
    goto L17(r84);
  L81():
    c10 = ldf c in base;
    r89 = dyn c10(res1, r61, r69, r73, r79, r85, r88);
    check L82() else D38();
  D38():
    deopt 133 [r89];
  L82():
    goto L9(r89);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg e1:*, reg e2:V, reg c:L, reg e4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r1:V |
    mkenv;
    st e = e;
    e1 = ld e;
    check L2() else D0();
  D0():
    deopt 0 [e1];
  L2():
    e2 = force? e1;
    checkMissing(e2);
    c = `is.object`(e2);
    if c then L3() else L4(e2);
  L0(dx1):
    c1 = `is.object`(dx1);
    if c1 then L6() else L7(dx1);
  L3():
    dr = tryDispatchBuiltin.1("[[", e2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(e4):
    __ = ldf `[[` in base;
    r = dyn __(e4, "bad_calls");
    goto L0(r);
  L1(dx5):
    popenv;
    return dx5;
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    dr2 = tryDispatchBuiltin.1("[[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L8() else L7(dr2);
  L7(dx3):
    __1 = ldf `[[` in base;
    r1 = dyn __1(dx3, "names");
    goto L1(r1);
  L8():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx4);
  }
}
fun inner2281728077(e, f) {
  (reg e:*, reg f:*) -+> V { var e:*, var f:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg gettextf:cls, reg sQuote:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg r5:V, reg unlist:cls, reg Map:cls, reg _fmt_entries_for_function:*, reg _fmt_entries_for_function1:V, reg p2:p(V +), reg e1:*, reg e2:V, reg p3:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg e3:*, reg e4:V, reg names:cls, reg r10:V, reg p4:p(V +), reg r12:V, reg p5:p(V +), reg r14:V, reg c:cls, reg r15:V |
    mkenv;
    st e = e;
    st f = f;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    gettextf = ldf gettextf;
    check L3() else D0();
  L2():
    r = dyn base(<lang gettextf("File %s:", sQuote(f))>, <lang unlist(Map(.fmt_entries_for_function, e, names(e)))>, "");
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p1 = prom<V +>{
      sQuote = ldf sQuote;
      p = prom<V +>{
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
      r3 = dyn sQuote(p);
      return r3;
    };
    r5 = dyn gettextf("File %s:", p1);
    check L4() else D1();
  D1():
    deopt 6 [r5];
  L4():
    unlist = ldf unlist;
    check L5() else D2();
  D2():
    deopt 8 [];
  L5():
    p5 = prom<V +>{
      Map = ldf Map;
      p2 = prom<V +>{
        _fmt_entries_for_function = ld `.fmt_entries_for_function`;
        _fmt_entries_for_function1 = force? _fmt_entries_for_function;
        checkMissing(_fmt_entries_for_function1);
        return _fmt_entries_for_function1;
      };
      p3 = prom<V +>{
        e1 = ld e;
        e2 = force? e1;
        checkMissing(e2);
        return e2;
      };
      p4 = prom<V +>{
        sym1 = ldf names;
        base1 = ldf names in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r9):
        return r9;
      L1():
        e3 = ld e;
        e4 = force? e3;
        checkMissing(e4);
        names = ldf names in base;
        r10 = dyn names(e4);
        goto L0(r10);
      L2():
        r8 = dyn base1(<sym e>);
        goto L0(r8);
      };
      r12 = dyn Map(p2, p3, p4);
      return r12;
    };
    r14 = dyn unlist(p5);
    check L6() else D3();
  D3():
    deopt 10 [r14];
  L6():
    c = ldf c in base;
    r15 = dyn c(r5, r14, "");
    check L7() else D4();
  D4():
    deopt 13 [r15];
  L7():
    goto L0(r15);
  }
}