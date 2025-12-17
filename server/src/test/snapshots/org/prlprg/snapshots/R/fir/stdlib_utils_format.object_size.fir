fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner559155767;
    st `format.object_size` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner559155767(x, units, standard, digits, `...`) {
  (reg x:*, reg units:*, reg standard:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var units:*, reg units_isMissing:L, reg units_orDefault:*, var standard:*, reg standard_isMissing:L, reg standard_orDefault:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg c1:cls, reg r7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg r9:V, reg c2:cls, reg r10:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r11:V, reg r12:V, reg c3:cls, reg r13:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r14:V, reg r15:V, reg c4:cls, reg r16:V, reg list:cls, reg r17:V, reg match_arg:cls, reg units1:*, reg units2:V, reg p:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r19:V, reg r20:V, reg unique:cls, reg unlist:cls, reg known_units:*, reg known_units1:V, reg p1:p(V +), reg r22:V, reg p2:p(V +), reg r24:V, reg c5:cls, reg r25:V, reg p3:p(V +), reg r27:V, reg match_arg1:cls, reg standard1:*, reg standard2:V, reg p4:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r29:V, reg r30:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r31:V, reg r32:V, reg known_bases:*, reg known_bases1:V, reg names:cls, reg r33:V, reg c6:cls, reg r34:V, reg p5:p(V +), reg r36:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r37:V, reg r38:V, reg digits1:*, reg digits2:V, reg c7:V, reg c8:L, reg standard3:*, reg standard4:V, reg r40:V, reg c9:L, reg units3:*, reg units4:V, reg r41:V, reg c10:L, reg endsWith:cls, reg units5:*, reg units6:V, reg p6:p(V +), reg r43:V, reg c11:L, reg r44:V, reg endsWith1:cls, reg units7:*, reg units8:V, reg p7:p(V +), reg r46:V, reg c12:L, reg units9:*, reg units10:V, reg r47:V, reg c13:L, reg stop:cls, reg r48:V, reg r49:V, reg known_bases2:*, reg known_bases3:V, reg c14:L, reg known_bases5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg standard5:*, reg standard6:V, reg __:cls, reg r51:V, reg known_units2:*, reg known_units3:V, reg c15:L, reg known_units5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg standard7:*, reg standard8:V, reg __1:cls, reg r52:V, reg units11:*, reg units12:V, reg r53:V, reg c16:L, reg x1:*, reg x2:V, reg r54:V, reg c17:L, reg r55:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r56:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r57:V, reg r58:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r59:V, reg r60:V, reg log:cls, reg r61:V, reg as_integer:cls, reg r62:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r63:V, reg r64:V, reg units_map:*, reg units_map1:V, reg length:cls, reg r65:V, reg r66:V, reg min:cls, reg r67:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r69:V, reg r70:V, reg toupper:cls, reg units13:*, reg units14:V, reg p8:p(V +), reg r72:V, reg toupper1:cls, reg units_map2:*, reg units_map3:V, reg p9:p(V +), reg r74:V, reg match:cls, reg r75:V, reg r76:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r77:V, reg r78:V, reg power:*, reg power1:V, reg is_na:cls, reg r79:V, reg c18:L, reg stop1:cls, reg gettextf:cls, reg sQuote:cls, reg units15:*, reg units16:V, reg p10:p(V +), reg r81:V, reg p11:p(V +), reg sQuote1:cls, reg standard9:*, reg standard10:V, reg p12:p(V +), reg r84:V, reg p13:p(V +), reg r86:V, reg p14:p(V +), reg r88:V, reg units_map4:*, reg units_map5:V, reg c19:L, reg units_map7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg power2:*, reg power3:V, reg r89:V, reg __2:cls, reg r90:V, reg power4:*, reg power5:V, reg r91:V, reg c20:L, reg c22:V, reg standard11:*, reg standard12:V, reg r92:V, reg c23:L, reg c24:V, reg c26:L, reg paste:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r94:V, reg r95:V, reg round:cls, reg r96:V, reg p15:p(V +), reg unit:*, reg unit1:V, reg p16:p(V +), reg r99:V |
    mkenv;
    st x = x;
    units_isMissing = missing.0(units);
    if units_isMissing then L0("b") else L0(units);
  L0(units_orDefault):
    st units = units_orDefault;
    standard_isMissing = missing.0(standard);
    if standard_isMissing then L1("auto") else L1(standard);
  L1(standard_orDefault):
    st standard = standard_orDefault;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L2(1) else L2(digits);
  L2(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L36() else L37();
  L3(r1):
    st known_bases = r1;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L39() else L40();
  L36():
    c = ldf c in base;
    r2 = dyn c(1024.0, 1024.0, 1000.0);
    check L38() else D0();
  L37():
    r = dyn base[legacy, IEC, SI](1024.0, 1024.0, 1000.0);
    goto L3(r);
  D0():
    deopt 9 [r2];
  L4(r4):
    st known_units = r4;
    match_arg = ldf `match.arg`;
    check L54() else D6();
  L38():
    goto L3(r2);
  L39():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  L40():
    r3 = dyn base1[SI, IEC, legacy, LEGACY](<lang c("B", "kB", "MB", "GB", "TB", "PB", "EB", "ZB", "YB", "RB", "QB")>, <lang c("B", "KiB", "MiB", "GiB", "TiB", "PiB", "EiB", "ZiB", "YiB")>, <lang c("b", "Kb", "Mb", "Gb", "Tb", "Pb")>, <lang c("B", "KB", "MB", "GB", "TB", "PB")>);
    goto L4(r3);
  D6():
    deopt 69 [];
  L5(r6):
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L44() else L45();
  L41():
    c1 = ldf c in base;
    r7 = dyn c1("B", "kB", "MB", "GB", "TB", "PB", "EB", "ZB", "YB", "RB", "QB");
    check L43() else D1();
  L42():
    r5 = dyn base2("B", "kB", "MB", "GB", "TB", "PB", "EB", "ZB", "YB", "RB", "QB");
    goto L5(r5);
  L54():
    p = prom<V +>{
      units1 = ld units;
      units2 = force? units1;
      checkMissing(units2);
      return units2;
    };
    p3 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r20):
      return r20;
    L1():
      unique = ldf unique;
      p2 = prom<V +>{
        unlist = ldf unlist;
        p1 = prom<V +>{
          known_units = ld known_units;
          known_units1 = force? known_units;
          checkMissing(known_units1);
          return known_units1;
        };
        r22 = dyn unlist(p1);
        return r22;
      };
      r24 = dyn unique[, `use.names`](p2, FALSE);
      c5 = ldf c in base;
      r25 = dyn c5("auto", r24);
      goto L0(r25);
    L2():
      r19 = dyn base6("auto", <lang unique(unlist(known_units), use.names=FALSE)>);
      goto L0(r19);
    };
    r27 = dyn match_arg(p, p3);
    check L55() else D7();
  D1():
    deopt 27 [r7];
  D7():
    deopt 72 [r27];
  L6(r9):
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L47() else L48();
  L43():
    goto L5(r7);
  L44():
    c2 = ldf c in base;
    r10 = dyn c2("B", "KiB", "MiB", "GiB", "TiB", "PiB", "EiB", "ZiB", "YiB");
    check L46() else D2();
  L45():
    r8 = dyn base3("B", "KiB", "MiB", "GiB", "TiB", "PiB", "EiB", "ZiB", "YiB");
    goto L6(r8);
  L55():
    st units = r27;
    match_arg1 = ldf `match.arg`;
    check L56() else D8();
  D2():
    deopt 41 [r10];
  D8():
    deopt 75 [];
  L7(r12):
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L50() else L51();
  L46():
    goto L6(r10);
  L47():
    c3 = ldf c in base;
    r13 = dyn c3("b", "Kb", "Mb", "Gb", "Tb", "Pb");
    check L49() else D3();
  L48():
    r11 = dyn base4("b", "Kb", "Mb", "Gb", "Tb", "Pb");
    goto L7(r11);
  L56():
    p4 = prom<V +>{
      standard1 = ld standard;
      standard2 = force? standard1;
      checkMissing(standard2);
      return standard2;
    };
    p5 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L2() else L3();
    L0(r30):
      return r30;
    L2():
      sym8 = ldf names;
      base8 = ldf names in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L4() else L5();
    L3():
      r29 = dyn base7("auto", <lang names(known_bases)>);
      goto L0(r29);
    L1(r32):
      c6 = ldf c in base;
      r34 = dyn c6("auto", r32);
      goto L0(r34);
    L4():
      known_bases = ld known_bases;
      known_bases1 = force? known_bases;
      checkMissing(known_bases1);
      names = ldf names in base;
      r33 = dyn names(known_bases1);
      goto L1(r33);
    L5():
      r31 = dyn base8(<sym known_bases>);
      goto L1(r31);
    };
    r36 = dyn match_arg1(p4, p5);
    check L57() else D9();
  D3():
    deopt 52 [r13];
  D9():
    deopt 78 [r36];
  L8(r15):
    list = ldf list in base;
    r17 = dyn list(r6, r9, r12, r15);
    check L53() else D5();
  L49():
    goto L7(r13);
  L50():
    c4 = ldf c in base;
    r16 = dyn c4("B", "KB", "MB", "GB", "TB", "PB");
    check L52() else D4();
  L51():
    r14 = dyn base5("B", "KB", "MB", "GB", "TB", "PB");
    goto L8(r14);
  L57():
    st standard = r36;
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L58() else L59();
  D4():
    deopt 63 [r16];
  D5():
    deopt 66 [r17];
  L9(r38):
    c8 = `as.logical`(r38);
    if c8 then L61() else L10();
  L52():
    goto L8(r16);
  L53():
    goto L4(r17);
  L58():
    digits1 = ld digits;
    check L60() else D10();
  L59():
    r37 = dyn base9(<sym digits>);
    goto L9(r37);
  D10():
    deopt 81 [digits1];
  L10():
    goto L11();
  L11():
    standard3 = ld standard;
    check L63() else D11();
  L60():
    digits2 = force? digits1;
    checkMissing(digits2);
    c7 = `==`(digits2, NULL);
    goto L9(c7);
  L61():
    st digits = 1;
    goto L11();
  D11():
    deopt 89 [standard3];
  L63():
    standard4 = force? standard3;
    checkMissing(standard4);
    r40 = `==`(standard4, "auto");
    c9 = `as.logical`(r40);
    if c9 then L64() else L12();
  L12():
    goto L19();
  L19():
    known_bases2 = ld known_bases;
    check L82() else D20();
  L64():
    st standard = "legacy";
    units3 = ld units;
    check L65() else D12();
  D12():
    deopt 96 [units3];
  D20():
    deopt 130 [known_bases2];
  L65():
    units4 = force? units3;
    checkMissing(units4);
    r41 = `!=`(units4, "auto");
    c10 = `as.logical`(r41);
    if c10 then L66() else L13();
  L82():
    known_bases3 = force? known_bases2;
    checkMissing(known_bases3);
    c14 = `is.object`(known_bases3);
    if c14 then L83() else L84(known_bases3);
  L13():
    goto L18(NULL);
  L18(r49):
    goto L19();
  L20(dx1):
    st base = dx1;
    known_units2 = ld known_units;
    check L87() else D22();
  L66():
    endsWith = ldf endsWith;
    check L67() else D13();
  L83():
    dr = tryDispatchBuiltin.1("[[", known_bases3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L85() else L84(dr);
  L84(known_bases5):
    standard5 = ld standard;
    check L86() else D21();
  D13():
    deopt 101 [];
  D21():
    deopt 132 [known_bases5, standard5];
  D22():
    deopt 136 [known_units2];
  L67():
    p6 = prom<V +>{
      units5 = ld units;
      units6 = force? units5;
      checkMissing(units6);
      return units6;
    };
    r43 = dyn endsWith(p6, "iB");
    check L68() else D14();
  L85():
    dx = getTryDispatchBuiltinValue(dr);
    goto L20(dx);
  L86():
    standard6 = force? standard5;
    __ = ldf `[[` in base;
    r51 = dyn __(known_bases5, standard6);
    goto L20(r51);
  L87():
    known_units3 = force? known_units2;
    checkMissing(known_units3);
    c15 = `is.object`(known_units3);
    if c15 then L88() else L89(known_units3);
  D14():
    deopt 104 [r43];
  L21(dx3):
    st units_map = dx3;
    units11 = ld units;
    check L92() else D24();
  L68():
    c11 = `as.logical`(r43);
    if c11 then L69() else L14();
  L88():
    dr2 = tryDispatchBuiltin.1("[[", known_units3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L90() else L89(dr2);
  L89(known_units5):
    standard7 = ld standard;
    check L91() else D23();
  D23():
    deopt 138 [known_units5, standard7];
  D24():
    deopt 142 [units11];
  L14():
    endsWith1 = ldf endsWith;
    check L71() else D15();
  L15(r44):
    goto L18(r44);
  L69():
    st standard = "IEC";
    goto L15("IEC");
  L90():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L21(dx2);
  L91():
    standard8 = force? standard7;
    __1 = ldf `[[` in base;
    r52 = dyn __1(known_units5, standard8);
    goto L21(r52);
  L92():
    units12 = force? units11;
    checkMissing(units12);
    r53 = `==`(units12, "auto");
    c16 = `as.logical`(r53);
    if c16 then L93() else L22();
  D15():
    deopt 109 [];
  L22():
    sym14 = ldf match;
    base14 = ldf match in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L110() else L111();
  L28():
    units_map4 = ld units_map;
    check L125() else D39();
  L71():
    p7 = prom<V +>{
      units7 = ld units;
      units8 = force? units7;
      checkMissing(units8);
      return units8;
    };
    r46 = dyn endsWith1(p7, "b");
    check L72() else D16();
  L93():
    x1 = ld x;
    check L94() else D25();
  D16():
    deopt 112 [r46];
  D25():
    deopt 146 [x1];
  D39():
    deopt 203 [units_map4];
  L29(r70):
    r76 = `-`(r70, 1);
    st power = r76;
    sym15 = ldf `is.na`;
    base15 = ldf `is.na` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L117() else L118();
  L72():
    c12 = `as.logical`(r46);
    if c12 then L73() else L16();
  L94():
    x2 = force? x1;
    checkMissing(x2);
    r54 = `<=`(x2, 0.0);
    c17 = `as.logical`(r54);
    if c17 then L95() else L23();
  L110():
    toupper = ldf toupper;
    check L112() else D30();
  L111():
    r69 = dyn base14(<lang toupper(units)>, <lang toupper(units_map)>);
    goto L29(r69);
  L125():
    units_map5 = force? units_map4;
    checkMissing(units_map5);
    c19 = `is.object`(units_map5);
    if c19 then L126() else L127(units_map5);
  D30():
    deopt 175 [];
  L16():
    units9 = ld units;
    check L75() else D17();
  L23():
    sym10 = ldf min;
    base10 = ldf min in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L97() else L98();
  L24(r55):
    st power = r55;
    goto L28();
  L30(r78):
    c18 = `as.logical`(r78);
    if c18 then L121() else L31();
  L32(dx5):
    st unit = dx5;
    power4 = ld power;
    check L130() else D41();
  L73():
    st standard = "legacy";
    goto L15("legacy");
  L95():
    goto L24(0);
  L112():
    p8 = prom<V +>{
      units13 = ld units;
      units14 = force? units13;
      checkMissing(units14);
      return units14;
    };
    r72 = dyn toupper(p8);
    check L113() else D31();
  L117():
    power = ld power;
    check L119() else D35();
  L118():
    r77 = dyn base15(<sym power>);
    goto L30(r77);
  L126():
    dr4 = tryDispatchBuiltin.1("[", units_map5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L128() else L127(dr4);
  L127(units_map7):
    power2 = ld power;
    check L129() else D40();
  D17():
    deopt 116 [units9];
  D31():
    deopt 177 [r72];
  D35():
    deopt 191 [power];
  D40():
    deopt 205 [units_map7, power2];
  D41():
    deopt 211 [power4];
  L31():
    goto L28();
  L75():
    units10 = force? units9;
    checkMissing(units10);
    r47 = `==`(units10, "kB");
    c13 = `as.logical`(r47);
    if c13 then L76() else L17();
  L97():
    sym11 = ldf `as.integer`;
    base11 = ldf `as.integer` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L99() else L100();
  L98():
    r56 = dyn base10(<lang as.integer(log(x, base=base))>, <lang `-`(length(units_map), 1)>);
    goto L24(r56);
  L113():
    toupper1 = ldf toupper;
    check L114() else D32();
  L119():
    power1 = force? power;
    checkMissing(power1);
    is_na = ldf `is.na` in base;
    r79 = dyn is_na(power1);
    check L120() else D36();
  L121():
    stop1 = ldf stop;
    check L122() else D37();
  L128():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L32(dx4);
  L129():
    power3 = force? power2;
    checkMissing(power3);
    r89 = `+`(power3, 1);
    __2 = ldf `[` in base;
    r90 = dyn __2(units_map7, r89);
    goto L32(r90);
  L130():
    power5 = force? power4;
    checkMissing(power5);
    r91 = `==`(power5, 0.0);
    c20 = `as.logical`(r91);
    if c20 then L131() else L33(c20);
  D32():
    deopt 179 [];
  D36():
    deopt 194 [r79];
  D37():
    deopt 196 [];
  L17():
    goto L15(NULL);
  L25(r58):
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L104() else L105();
  L33(c22):
    c26 = `as.logical`(c22);
    if c26 then L134() else L34();
  L76():
    stop = ldf stop;
    check L77() else D18();
  L99():
    sym12 = ldf log;
    base12 = ldf log in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L101() else L102();
  L100():
    r57 = dyn base11(<lang log(x, base=base)>);
    goto L25(r57);
  L114():
    p9 = prom<V +>{
      units_map2 = ld units_map;
      units_map3 = force? units_map2;
      checkMissing(units_map3);
      return units_map3;
    };
    r74 = dyn toupper1(p9);
    check L115() else D33();
  L120():
    goto L30(r79);
  L122():
    p14 = prom<V +>{
      gettextf = ldf gettextf;
      p11 = prom<V +>{
        sQuote = ldf sQuote;
        p10 = prom<V +>{
          units15 = ld units;
          units16 = force? units15;
          checkMissing(units16);
          return units16;
        };
        r81 = dyn sQuote(p10);
        return r81;
      };
      p13 = prom<V +>{
        sQuote1 = ldf sQuote;
        p12 = prom<V +>{
          standard9 = ld standard;
          standard10 = force? standard9;
          checkMissing(standard10);
          return standard10;
        };
        r84 = dyn sQuote1(p12);
        return r84;
      };
      r86 = dyn gettextf("Unit \"%s\" is not part of standard \"%s\"", p11, p13);
      return r86;
    };
    r88 = dyn stop1[, domain](p14, NA_LGL);
    check L123() else D38();
  L131():
    standard11 = ld standard;
    check L132() else D42();
  D18():
    deopt 121 [];
  D33():
    deopt 181 [r74];
  D38():
    deopt 200 [r88];
  D42():
    deopt 215 [c20, standard11];
  L26(r60):
    as_integer = ldf `as.integer` in base;
    r62 = dyn as_integer(r60);
    check L103() else D26();
  L27(r64):
    r66 = `-`(r64, 1);
    min = ldf min in base;
    r67 = dyn min(r58, r66);
    check L108() else D29();
  L34():
    goto L35();
  L35():
    paste = ldf paste;
    check L136() else D43();
  L77():
    r48 = dyn stop("For SI units, specify 'standard = \"SI\"'");
    check L78() else D19();
  L101():
    log = ldf log in base;
    r61 = dyn log(<sym x>, <sym base>);
    goto L26(r61);
  L102():
    r59 = dyn base12[, base](<sym x>, <sym base>);
    goto L26(r59);
  L104():
    units_map = ld units_map;
    check L106() else D27();
  L105():
    r63 = dyn base13(<sym units_map>);
    goto L27(r63);
  L115():
    match = ldf match in base;
    r75 = dyn match(r72, r74, NA_INT, NULL);
    check L116() else D34();
  L123():
    goto L28();
  L132():
    standard12 = force? standard11;
    checkMissing(standard12);
    r92 = `==`(standard12, "legacy");
    c23 = `as.logical`(r92);
    c24 = `&&`(c20, c23);
    goto L33(c24);
  L134():
    st unit = "bytes";
    goto L35();
  D19():
    deopt 123 [r48];
  D26():
    deopt 160 [r62];
  D27():
    deopt 163 [units_map];
  D29():
    deopt 170 [r67];
  D34():
    deopt 185 [r75];
  D43():
    deopt 226 [];
  L78():
    goto L15(r48);
  L103():
    goto L25(r62);
  L106():
    units_map1 = force? units_map;
    checkMissing(units_map1);
    length = ldf length in base;
    r65 = dyn length(units_map1);
    check L107() else D28();
  L108():
    goto L24(r67);
  L116():
    goto L29(r75);
  L136():
    p15 = prom<V +>{
      sym16 = ldf round;
      base16 = ldf round in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r95):
      return r95;
    L1():
      round = ldf round in base;
      r96 = dyn round(<lang `/`(x, `^`(base, power))>, <sym digits>);
      goto L0(r96);
    L2():
      r94 = dyn base16[, digits](<lang `/`(x, `^`(base, power))>, <sym digits>);
      goto L0(r94);
    };
    p16 = prom<V +>{
      unit = ld unit;
      unit1 = force? unit;
      checkMissing(unit1);
      return unit1;
    };
    r99 = dyn paste(p15, p16);
    check L137() else D44();
  D28():
    deopt 166 [r65];
  D44():
    deopt 229 [r99];
  L107():
    goto L27(r65);
  L137():
    popenv;
    return r99;
  }
}