fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2461716132;
    st `path.package` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2461716132(package, quiet) {
  (reg package:*, reg quiet:*) -+> V { var package:*, reg package_isMissing:L, reg package_orDefault:*, var quiet:*, reg quiet_isMissing:L, reg quiet_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg package1:*, reg package2:V, reg c:V, reg c1:L, reg _packages:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg package3:*, reg package4:V, reg length:cls, reg r6:V, reg r7:V, reg c2:L, reg character:cls, reg r8:V, reg search:cls, reg r11:V, reg lapply:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg s:*, reg s1:V, reg r14:I, reg p:p(V +), reg r16:cls, reg p1:p(V +), reg r18:V, reg system_file:cls, reg r19:V, reg l:*, reg c3:L, reg r21:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg l5:*, reg r30:V, reg r31:V, reg s2:*, reg s3:V, reg length1:cls, reg r32:V, reg ____:cls, reg r33:V, reg paste0:cls, reg package5:*, reg package6:V, reg p2:p(V +), reg r35:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg r37:V, reg pkgs:*, reg pkgs1:V, reg s4:*, reg s5:V, reg match:cls, reg r38:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg r40:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg pos:*, reg pos1:V, reg is_na:cls, reg r43:V, reg any:cls, reg r44:V, reg c4:L, reg quiet1:*, reg quiet2:V, reg r45:V, reg c5:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg r47:V, reg m:*, reg m1:V, reg all:cls, reg r48:V, reg c6:L, reg stop:cls, reg r49:V, reg r50:V, reg warning:cls, reg sprintf:cls, reg ngettext:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r51:V, reg r52:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r53:V, reg r54:V, reg m2:*, reg m3:V, reg sum:cls, reg r55:V, reg as_integer:cls, reg r56:V, reg p3:p(V +), reg r58:V, reg p4:p(V +), reg paste1:cls, reg package7:*, reg package8:V, reg c7:L, reg package10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg m4:*, reg m5:V, reg __:cls, reg r60:V, reg p5:p(V +), reg r62:V, reg p6:p(V +), reg r64:V, reg p7:p(V +), reg r66:V, reg pos2:*, reg pos3:V, reg c8:L, reg pos5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg m6:*, reg m7:V, reg r68:V, reg __1:cls, reg r69:V, reg unlist:cls, reg searchpaths:*, reg searchpaths1:V, reg c9:L, reg searchpaths3:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg pos6:*, reg pos7:V, reg __2:cls, reg r70:V, reg p8:p(V +), reg r72:V |
    mkenv;
    package_isMissing = missing.0(package);
    if package_isMissing then L0(NULL) else L0(package);
  L0(package_orDefault):
    st package = package_orDefault;
    quiet_isMissing = missing.0(quiet);
    if quiet_isMissing then L1(FALSE) else L1(quiet);
  L1(quiet_orDefault):
    st quiet = quiet_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L2(r1):
    c1 = `as.logical`(r1);
    if c1 then L24() else L3();
  L21():
    package1 = ld package;
    check L23() else D0();
  L22():
    r = dyn base(<sym package>);
    goto L2(r);
  D0():
    deopt 1 [package1];
  L3():
    goto L4();
  L4():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L23():
    package2 = force? package1;
    checkMissing(package2);
    c = `==`(package2, NULL);
    goto L2(c);
  L24():
    _packages = ldf `.packages`;
    check L25() else D1();
  D1():
    deopt 5 [];
  L5(r5):
    r7 = `==`(r5, 0);
    c2 = `as.logical`(r7);
    if c2 then L32() else L6();
  L25():
    r2 = dyn _packages();
    check L26() else D2();
  L28():
    package3 = ld package;
    check L30() else D3();
  L29():
    r4 = dyn base1(<sym package>);
    goto L5(r4);
  D2():
    deopt 6 [r2];
  D3():
    deopt 12 [package3];
  L6():
    search = ldf search;
    check L37() else D7();
  L26():
    st package = r2;
    goto L4();
  L30():
    package4 = force? package3;
    checkMissing(package4);
    length = ldf length in base;
    r6 = dyn length(package4);
    check L31() else D4();
  L32():
    character = ldf character;
    check L33() else D5();
  D4():
    deopt 15 [r6];
  D5():
    deopt 19 [];
  D7():
    deopt 25 [];
  L31():
    goto L5(r6);
  L33():
    r8 = dyn character();
    check L34() else D6();
  L37():
    r11 = dyn search();
    check L38() else D8();
  D6():
    deopt 20 [r8];
  D8():
    deopt 26 [r11];
  L34():
    popenv;
    return r8;
  L38():
    st s = r11;
    lapply = ldf lapply;
    check L39() else D9();
  D9():
    deopt 29 [];
  L39():
    p = prom<V +>{
      sym2 = ldf seq_along;
      base2 = ldf seq_along in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      s = ld s;
      s1 = force? s;
      checkMissing(s1);
      r14 = seq_along(s1);
      goto L0(r14);
    L2():
      r12 = dyn base2(<sym s>);
      goto L0(r12);
    };
    p1 = prom<V +>{
      r16 = clos inner3002224933;
      return r16;
    };
    r18 = dyn lapply(p, p1);
    check L40() else D10();
  D10():
    deopt 32 [r18];
  L40():
    st searchpaths = r18;
    system_file = ldf `system.file`;
    check L41() else D11();
  D11():
    deopt 35 [];
  L41():
    r19 = dyn system_file();
    check L42() else D12();
  D12():
    deopt 36 [r19];
  L42():
    l = ld searchpaths;
    c3 = `is.object`(l);
    if c3 then L43() else L44(r19, l);
  L8(dx1):
    st searchpaths = dx1;
    paste0 = ldf paste0;
    check L50() else D15();
  L43():
    dr = tryDispatchBuiltin.0("[[<-", l, r19);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L45() else L44(r19, dr);
  L44(r21, l2):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  D15():
    deopt 47 [];
  L9(r29, l5, r30, r31):
    ____ = ldf `[[<-` in base;
    r33 = dyn ____(l5, r30, r31);
    goto L8(r33);
  L45():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L46():
    s2 = ld s;
    check L48() else D13();
  L47():
    r28 = dyn base3(<sym s>);
    goto L9(r21, l2, r19, r28);
  L50():
    p2 = prom<V +>{
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      return package6;
    };
    r35 = dyn paste0("package:", p2);
    check L51() else D16();
  D13():
    deopt 40 [r21, l2, r19, s2];
  D16():
    deopt 50 [r35];
  L48():
    s3 = force? s2;
    checkMissing(s3);
    length1 = ldf length in base;
    r32 = dyn length1(s3);
    check L49() else D14();
  L51():
    st pkgs = r35;
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  D14():
    deopt 43 [r21, l2, r19, r32];
  L10(r37):
    st pos = r37;
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L57() else L58();
  L49():
    goto L9(r21, l2, r19, r32);
  L52():
    pkgs = ld pkgs;
    check L54() else D17();
  L53():
    r36 = dyn base4(<sym pkgs>, <sym s>);
    goto L10(r36);
  D17():
    deopt 54 [pkgs];
  L11(r40):
    c4 = `as.logical`(r40);
    if c4 then L64() else L13();
  L54():
    pkgs1 = force? pkgs;
    checkMissing(pkgs1);
    s4 = ld s;
    check L55() else D18();
  L57():
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L59() else L60();
  L58():
    r39 = dyn base5(<lang `<-`(m, is.na(pos))>);
    goto L11(r39);
  D18():
    deopt 56 [s4];
  L12(r42):
    st m = r42;
    any = ldf any in base;
    r44 = dyn any(r42);
    check L63() else D22();
  L13():
    goto L20();
  L20():
    unlist = ldf unlist;
    check L84() else D32();
  L55():
    s5 = force? s4;
    checkMissing(s5);
    match = ldf match in base;
    r38 = dyn match(pkgs1, s5, NA_INT, NULL);
    check L56() else D19();
  L59():
    pos = ld pos;
    check L61() else D20();
  L60():
    r41 = dyn base6(<sym pos>);
    goto L12(r41);
  L64():
    quiet1 = ld quiet;
    check L65() else D23();
  D19():
    deopt 61 [r38];
  D20():
    deopt 67 [pos];
  D22():
    deopt 73 [r44];
  D23():
    deopt 74 [quiet1];
  D32():
    deopt 105 [];
  L56():
    goto L10(r38);
  L61():
    pos1 = force? pos;
    checkMissing(pos1);
    is_na = ldf `is.na` in base;
    r43 = dyn is_na(pos1);
    check L62() else D21();
  L63():
    goto L11(r44);
  L65():
    quiet2 = force? quiet1;
    checkMissing(quiet2);
    r45 = `!`(quiet2);
    c5 = `as.logical`(r45);
    if c5 then L66() else L14();
  L84():
    p8 = prom<V +>{
      searchpaths = ld searchpaths;
      searchpaths1 = force? searchpaths;
      checkMissing(searchpaths1);
      c9 = `is.object`(searchpaths1);
      if c9 then L1() else L2(searchpaths1);
    L0(dx8):
      return dx8;
    L1():
      dr6 = tryDispatchBuiltin.1("[", searchpaths1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(searchpaths3):
      pos6 = ld pos;
      pos7 = force? pos6;
      __2 = ldf `[` in base;
      r70 = dyn __2(searchpaths3, pos7);
      goto L0(r70);
    L3():
      dx7 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx7);
    };
    r72 = dyn unlist[, `use.names`](p8, FALSE);
    check L85() else D33();
  D21():
    deopt 70 [r43];
  D33():
    deopt 109 [r72];
  L14():
    goto L18();
  L18():
    pos2 = ld pos;
    check L78() else D30();
  L62():
    goto L12(r43);
  L66():
    sym7 = ldf all;
    base7 = ldf all in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L67() else L68();
  L85():
    popenv;
    return r72;
  D30():
    deopt 95 [pos2];
  L15(r47):
    c6 = `as.logical`(r47);
    if c6 then L71() else L16();
  L67():
    m = ld m;
    check L69() else D24();
  L68():
    r46 = dyn base7(<sym m>);
    goto L15(r46);
  L78():
    pos3 = force? pos2;
    checkMissing(pos3);
    c8 = `is.object`(pos3);
    if c8 then L79() else L80(pos3);
  D24():
    deopt 79 [m];
  L16():
    warning = ldf warning;
    check L75() else D28();
  L17(r50):
    goto L18();
  L19(dx5):
    st pos = dx5;
    goto L20();
  L69():
    m1 = force? m;
    checkMissing(m1);
    all = ldf all in base;
    r48 = dyn all(m1);
    check L70() else D25();
  L71():
    stop = ldf stop;
    check L72() else D26();
  L79():
    dr4 = tryDispatchBuiltin.1("[", pos3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L81() else L80(dr4);
  L80(pos5):
    m6 = ld m;
    check L82() else D31();
  D25():
    deopt 82 [r48];
  D26():
    deopt 84 [];
  D28():
    deopt 88 [];
  D31():
    deopt 97 [pos5, m6];
  L70():
    goto L15(r48);
  L72():
    r49 = dyn stop("none of the packages are loaded");
    check L73() else D27();
  L75():
    p7 = prom<V +>{
      sprintf = ldf sprintf;
      p4 = prom<V +>{
        ngettext = ldf ngettext;
        p3 = prom<V +>{
          sym8 = ldf `as.integer`;
          base8 = ldf `as.integer` in base;
          guard8 = `==`.4(sym8, base8);
          if guard8 then L2() else L3();
        L0(r52):
          return r52;
        L2():
          sym9 = ldf sum;
          base9 = ldf sum in base;
          guard9 = `==`.4(sym9, base9);
          if guard9 then L4() else L5();
        L3():
          r51 = dyn base8(<lang sum(m)>);
          goto L0(r51);
        L1(r54):
          as_integer = ldf `as.integer` in base;
          r56 = dyn as_integer(r54);
          goto L0(r56);
        L4():
          m2 = ld m;
          m3 = force? m2;
          checkMissing(m3);
          sum = ldf sum in base;
          r55 = dyn sum(m3);
          goto L1(r55);
        L5():
          r53 = dyn base9(<sym m>);
          goto L1(r53);
        };
        r58 = dyn ngettext(p3, "package %s is not loaded", "packages %s are not loaded");
        return r58;
      };
      p6 = prom<V +>{
        paste1 = ldf paste;
        p5 = prom<V +>{
          package7 = ld package;
          package8 = force? package7;
          checkMissing(package8);
          c7 = `is.object`(package8);
          if c7 then L1() else L2(package8);
        L0(dx3):
          return dx3;
        L1():
          dr2 = tryDispatchBuiltin.1("[", package8);
          dc1 = getTryDispatchBuiltinDispatched(dr2);
          if dc1 then L3() else L2(dr2);
        L2(package10):
          m4 = ld m;
          m5 = force? m4;
          __ = ldf `[` in base;
          r60 = dyn __(package10, m5);
          goto L0(r60);
        L3():
          dx2 = getTryDispatchBuiltinValue(dr2);
          goto L0(dx2);
        };
        r62 = dyn paste1[, collapse](p5, ", ");
        return r62;
      };
      r64 = dyn sprintf(p4, p6);
      return r64;
    };
    r66 = dyn warning[, domain](p7, NA_LGL);
    check L76() else D29();
  L81():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L19(dx4);
  L82():
    m7 = force? m6;
    checkMissing(m7);
    r68 = `!`(m7);
    __1 = ldf `[` in base;
    r69 = dyn __1(pos5, r68);
    goto L19(r69);
  D27():
    deopt 86 [r49];
  D29():
    deopt 92 [r66];
  L73():
    goto L17(r49);
  L76():
    goto L17(r66);
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg i1:*, reg i2:V, reg as_environment:cls, reg r4:V, reg attr:cls, reg r5:V |
    mkenv;
    st i = i;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    sym1 = ldf `as.environment`;
    base1 = ldf `as.environment` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L3():
    r = dyn base(<lang as.environment(i)>, "path");
    goto L0(r);
  L1(r3):
    attr = ldf attr in base;
    r5 = dyn attr(r3, "path");
    check L8() else D2();
  L4():
    i1 = ld i;
    check L6() else D0();
  L5():
    r2 = dyn base1(<sym i>);
    goto L1(r2);
  D0():
    deopt 4 [i1];
  D2():
    deopt 10 [r5];
  L6():
    i2 = force? i1;
    checkMissing(i2);
    as_environment = ldf `as.environment` in base;
    r4 = dyn as_environment(i2);
    check L7() else D1();
  L8():
    goto L0(r5);
  D1():
    deopt 7 [r4];
  L7():
    goto L1(r4);
  }
}