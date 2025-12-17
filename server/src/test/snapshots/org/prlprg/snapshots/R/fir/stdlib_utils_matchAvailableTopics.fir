fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner876791443;
    st matchAvailableTopics = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner876791443(prefix, text) {
  (reg prefix:*, reg text:*) -+> V { var prefix:*, var text:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg text1:*, reg text2:V, reg length:cls, reg r3:V, reg r4:V, reg c:L, reg c1:V, reg text3:*, reg text4:V, reg r5:V, reg c3:L, reg c4:V, reg c6:L, reg character:cls, reg r6:V, reg searchpaths:cls, reg r9:V, reg c7:L, reg r11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg startsWith:cls, reg search:cls, reg r12:V, reg p:p(V +), reg r14:V, reg __:cls, reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg basename:cls, reg pkgpaths:*, reg pkgpaths1:V, reg p1:p(V +), reg r19:V, reg _CompletionEnv:*, reg _CompletionEnv1:V, reg c8:L, reg _CompletionEnv3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r20:V, reg identical:cls, reg r21:V, reg r22:V, reg c9:L, reg assign:cls, reg basename1:cls, reg pkgpaths2:*, reg pkgpaths3:V, reg p2:p(V +), reg r24:V, reg p3:p(V +), reg _CompletionEnv4:*, reg _CompletionEnv5:V, reg p4:p(V +), reg r27:V, reg assign1:cls, reg unique:cls, reg unlist:cls, reg lapply:cls, reg pkgpaths4:*, reg pkgpaths5:V, reg p5:p(V +), reg _readAliases:*, reg _readAliases1:V, reg p6:p(V +), reg r30:V, reg p7:p(V +), reg r32:V, reg p8:p(V +), reg r34:V, reg p9:p(V +), reg _CompletionEnv6:*, reg _CompletionEnv7:V, reg p10:p(V +), reg r37:V, reg _CompletionEnv8:*, reg _CompletionEnv9:V, reg c10:L, reg _CompletionEnv11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r39:V, reg findMatches:cls, reg sprintf:cls, reg makeRegexpSafe:cls, reg text5:*, reg text6:V, reg p11:p(V +), reg r41:V, reg p12:p(V +), reg r43:V, reg p13:p(V +), reg aliases:*, reg aliases1:V, reg p14:p(V +), reg r46:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r47:V, reg r48:V, reg prefix1:*, reg prefix2:V, reg nzchar:cls, reg r49:V, reg c11:L, reg grep:cls, reg sprintf1:cls, reg prefix3:*, reg prefix4:V, reg p15:p(V +), reg r51:V, reg p16:p(V +), reg ans:*, reg ans1:V, reg p17:p(V +), reg r54:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r55:V, reg r56:V, reg tmp:*, reg tmp1:V, reg length1:cls, reg r57:V, reg c12:L, reg substring:cls, reg tmp2:*, reg tmp3:V, reg p18:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r59:V, reg r60:V, reg tmp4:*, reg tmp5:V, reg nchar:cls, reg r61:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r64:V, reg r65:V, reg r66:V, reg prefix5:*, reg prefix6:V, reg nchar1:cls, reg r67:V, reg r68:V, reg r69:V, reg p19:p(V +), reg r71:V, reg character1:cls, reg r72:V, reg ans2:*, reg ans3:V |
    mkenv;
    st prefix = prefix;
    st text = text;
    r = clos inner3006846853;
    st `.readAliases` = r;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r2):
    r4 = `!=`(r2, 1);
    c = `as.logical`(r4);
    if c then L1(c) else L18();
  L14():
    text1 = ld text;
    check L16() else D0();
  L15():
    r1 = dyn base(<sym text>);
    goto L0(r1);
  D0():
    deopt 5 [text1];
  L1(c1):
    c6 = `as.logical`(c1);
    if c6 then L21() else L2();
  L16():
    text2 = force? text1;
    checkMissing(text2);
    length = ldf length in base;
    r3 = dyn length(text2);
    check L17() else D1();
  L18():
    text3 = ld text;
    check L19() else D2();
  D1():
    deopt 8 [r3];
  D2():
    deopt 11 [c, text3];
  L2():
    searchpaths = ldf searchpaths;
    check L26() else D5();
  L17():
    goto L0(r3);
  L19():
    text4 = force? text3;
    checkMissing(text4);
    r5 = `==`(text4, "");
    c3 = `as.logical`(r5);
    c4 = `||`(c, c3);
    goto L1(c4);
  L21():
    character = ldf character;
    check L22() else D3();
  D3():
    deopt 17 [];
  D5():
    deopt 23 [];
  L22():
    r6 = dyn character();
    check L23() else D4();
  L26():
    r9 = dyn searchpaths();
    check L27() else D6();
  D4():
    deopt 18 [r6];
  D6():
    deopt 24 [r9];
  L23():
    popenv;
    return r6;
  L27():
    c7 = `is.object`(r9);
    if c7 then L28() else L29(r9);
  L4(dx1):
    st pkgpaths = dx1;
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L28():
    dr = tryDispatchBuiltin.1("[", r9);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L30() else L29(dr);
  L29(r11):
    startsWith = ldf startsWith;
    check L31() else D7();
  D7():
    deopt 26 [r11];
  L5(r17):
    r22 = `!`(r17);
    c9 = `as.logical`(r22);
    if c9 then L42() else L7();
  L30():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L31():
    p = prom<V +>{
      search = ldf search;
      r12 = dyn search();
      return r12;
    };
    r14 = dyn startsWith(p, "package:");
    check L32() else D8();
  L33():
    basename = ldf basename;
    check L35() else D9();
  L34():
    r16 = dyn base1(<lang basename(pkgpaths)>, <lang `[[`(.CompletionEnv, "attached_packages")>);
    goto L5(r16);
  D8():
    deopt 29 [r11, r14];
  D9():
    deopt 35 [];
  L7():
    goto L8();
  L8():
    _CompletionEnv8 = ld `.CompletionEnv`;
    check L48() else D17();
  L32():
    __ = ldf `[` in base;
    r15 = dyn __(r11, r14);
    goto L4(r15);
  L35():
    p1 = prom<V +>{
      pkgpaths = ld pkgpaths;
      pkgpaths1 = force? pkgpaths;
      checkMissing(pkgpaths1);
      return pkgpaths1;
    };
    r19 = dyn basename(p1);
    check L36() else D10();
  L42():
    assign = ldf assign;
    check L43() else D13();
  D10():
    deopt 37 [r19];
  D13():
    deopt 54 [];
  D17():
    deopt 69 [_CompletionEnv8];
  L36():
    _CompletionEnv = ld `.CompletionEnv`;
    check L37() else D11();
  L43():
    p3 = prom<V +>{
      basename1 = ldf basename;
      p2 = prom<V +>{
        pkgpaths2 = ld pkgpaths;
        pkgpaths3 = force? pkgpaths2;
        checkMissing(pkgpaths3);
        return pkgpaths3;
      };
      r24 = dyn basename1(p2);
      return r24;
    };
    p4 = prom<V +>{
      _CompletionEnv4 = ld `.CompletionEnv`;
      _CompletionEnv5 = force? _CompletionEnv4;
      checkMissing(_CompletionEnv5);
      return _CompletionEnv5;
    };
    r27 = dyn assign[, , envir]("attached_packages", p3, p4);
    check L44() else D14();
  L48():
    _CompletionEnv9 = force? _CompletionEnv8;
    checkMissing(_CompletionEnv9);
    c10 = `is.object`(_CompletionEnv9);
    if c10 then L49() else L50(_CompletionEnv9);
  D11():
    deopt 38 [_CompletionEnv];
  D14():
    deopt 59 [r27];
  L9(dx5):
    st aliases = dx5;
    findMatches = ldf findMatches;
    check L52() else D18();
  L37():
    _CompletionEnv1 = force? _CompletionEnv;
    checkMissing(_CompletionEnv1);
    c8 = `is.object`(_CompletionEnv1);
    if c8 then L38() else L39(_CompletionEnv1);
  L44():
    assign1 = ldf assign;
    check L45() else D15();
  L49():
    dr4 = tryDispatchBuiltin.1("[[", _CompletionEnv9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L51() else L50(dr4);
  L50(_CompletionEnv11):
    __2 = ldf `[[` in base;
    r39 = dyn __2(_CompletionEnv11, "help_topics");
    goto L9(r39);
  D15():
    deopt 61 [];
  D18():
    deopt 76 [];
  L6(dx3):
    identical = ldf identical in base;
    r21 = dyn identical(r19, dx3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L41() else D12();
  L38():
    dr2 = tryDispatchBuiltin.1("[[", _CompletionEnv1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L40() else L39(dr2);
  L39(_CompletionEnv3):
    __1 = ldf `[[` in base;
    r20 = dyn __1(_CompletionEnv3, "attached_packages");
    goto L6(r20);
  L45():
    p9 = prom<V +>{
      unique = ldf unique;
      p8 = prom<V +>{
        unlist = ldf unlist;
        p7 = prom<V +>{
          lapply = ldf lapply;
          p5 = prom<V +>{
            pkgpaths4 = ld pkgpaths;
            pkgpaths5 = force? pkgpaths4;
            checkMissing(pkgpaths5);
            return pkgpaths5;
          };
          p6 = prom<V +>{
            _readAliases = ld `.readAliases`;
            _readAliases1 = force? _readAliases;
            checkMissing(_readAliases1);
            return _readAliases1;
          };
          r30 = dyn lapply(p5, p6);
          return r30;
        };
        r32 = dyn unlist(p7);
        return r32;
      };
      r34 = dyn unique(p8);
      return r34;
    };
    p10 = prom<V +>{
      _CompletionEnv6 = ld `.CompletionEnv`;
      _CompletionEnv7 = force? _CompletionEnv6;
      checkMissing(_CompletionEnv7);
      return _CompletionEnv7;
    };
    r37 = dyn assign1[, , envir]("help_topics", p9, p10);
    check L46() else D16();
  L51():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L9(dx4);
  L52():
    p13 = prom<V +>{
      sprintf = ldf sprintf;
      p12 = prom<V +>{
        makeRegexpSafe = ldf makeRegexpSafe;
        p11 = prom<V +>{
          text5 = ld text;
          text6 = force? text5;
          checkMissing(text6);
          return text6;
        };
        r41 = dyn makeRegexpSafe(p11);
        return r41;
      };
      r43 = dyn sprintf("^%s", p12);
      return r43;
    };
    p14 = prom<V +>{
      aliases = ld aliases;
      aliases1 = force? aliases;
      checkMissing(aliases1);
      return aliases1;
    };
    r46 = dyn findMatches(p13, p14);
    check L53() else D19();
  D12():
    deopt 51 [r21];
  D16():
    deopt 66 [r37];
  D19():
    deopt 79 [r46];
  L40():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx2);
  L41():
    goto L5(r21);
  L46():
    goto L8();
  L53():
    st ans = r46;
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L54() else L55();
  L10(r48):
    c11 = `as.logical`(r48);
    if c11 then L58() else L11();
  L54():
    prefix1 = ld prefix;
    check L56() else D20();
  L55():
    r47 = dyn base2(<sym prefix>);
    goto L10(r47);
  D20():
    deopt 83 [prefix1];
  L11():
    ans2 = ld ans;
    check L72() else D30();
  L56():
    prefix2 = force? prefix1;
    checkMissing(prefix2);
    nzchar = ldf nzchar in base;
    r49 = dyn nzchar(prefix2);
    check L57() else D21();
  L58():
    grep = ldf grep;
    check L59() else D22();
  D21():
    deopt 86 [r49];
  D22():
    deopt 88 [];
  D30():
    deopt 111 [ans2];
  L57():
    goto L10(r49);
  L59():
    p16 = prom<V +>{
      sprintf1 = ldf sprintf;
      p15 = prom<V +>{
        prefix3 = ld prefix;
        prefix4 = force? prefix3;
        checkMissing(prefix4);
        return prefix4;
      };
      r51 = dyn sprintf1("-%s$", p15);
      return r51;
    };
    p17 = prom<V +>{
      ans = ld ans;
      ans1 = force? ans;
      checkMissing(ans1);
      return ans1;
    };
    r54 = dyn grep[, , value](p16, p17, TRUE);
    check L60() else D23();
  L72():
    ans3 = force? ans2;
    checkMissing(ans3);
    popenv;
    return ans3;
  D23():
    deopt 93 [r54];
  L60():
    st tmp = r54;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L61() else L62();
  L12(r56):
    c12 = `as.logical`(r56);
    if c12 then L65() else L13();
  L61():
    tmp = ld tmp;
    check L63() else D24();
  L62():
    r55 = dyn base3(<sym tmp>);
    goto L12(r55);
  D24():
    deopt 97 [tmp];
  L13():
    character1 = ldf character;
    check L69() else D28();
  L63():
    tmp1 = force? tmp;
    checkMissing(tmp1);
    length1 = ldf length in base;
    r57 = dyn length1(tmp1);
    check L64() else D25();
  L65():
    substring = ldf substring;
    check L66() else D26();
  D25():
    deopt 100 [r57];
  D26():
    deopt 102 [];
  D28():
    deopt 108 [];
  L64():
    goto L12(r57);
  L66():
    p18 = prom<V +>{
      tmp2 = ld tmp;
      tmp3 = force? tmp2;
      checkMissing(tmp3);
      return tmp3;
    };
    p19 = prom<V +>{
      sym4 = ldf nchar;
      base4 = ldf nchar in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r60):
      sym5 = ldf nchar;
      base5 = ldf nchar in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L4() else L5();
    L2():
      tmp4 = ld tmp;
      tmp5 = force? tmp4;
      checkMissing(tmp5);
      nchar = ldf nchar in base;
      r61 = dyn nchar(tmp5, "chars", FALSE, NA_LGL);
      goto L0(r61);
    L3():
      r59 = dyn base4(<sym tmp>);
      goto L0(r59);
    L1(r65, r66):
      r68 = `-`(r65, r66);
      r69 = `-`(r68, 1);
      return r69;
    L4():
      prefix5 = ld prefix;
      prefix6 = force? prefix5;
      checkMissing(prefix6);
      nchar1 = ldf nchar in base;
      r67 = dyn nchar1(prefix6, "chars", FALSE, NA_LGL);
      goto L1(r60, r67);
    L5():
      r64 = dyn base5(<sym prefix>);
      goto L1(r60, r64);
    };
    r71 = dyn substring(p18, 1.0, p19);
    check L67() else D27();
  L69():
    r72 = dyn character1(0.0);
    check L70() else D29();
  D27():
    deopt 106 [r71];
  D29():
    deopt 110 [r72];
  L67():
    popenv;
    return r71;
  L70():
    popenv;
    return r72;
  }
}
fun inner3006846853(path) {
  (reg path:*) -+> V { var path:*, reg file_exists:cls, reg file_path:cls, reg path1:*, reg path2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg readRDS:cls, reg f:*, reg f1:V, reg p2:p(V +), reg r7:V, reg names:cls, reg r8:V, reg file_exists1:cls, reg file_path1:cls, reg path3:*, reg path4:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg r12:V, reg c1:L, reg scan:cls, reg f2:*, reg f3:V, reg p5:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg list:cls, reg r16:V, reg p6:p(V +), reg r18:V, reg c2:L, reg r20:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r21:V, reg character:cls, reg r22:V |
    mkenv;
    st path = path;
    file_exists = ldf `file.exists`;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        path1 = ld path;
        path2 = force? path1;
        checkMissing(path2);
        return path2;
      };
      r1 = dyn file_path(p, "help", "aliases.rds");
      st f = r1;
      invisible.0();
      return r1;
    };
    r3 = dyn file_exists(p1);
    check L5() else D1();
  D1():
    deopt 3 [r3];
  L5():
    c = `as.logical`(r3);
    if c then L6() else L0();
  L0():
    file_exists1 = ldf `file.exists`;
    check L13() else D5();
  L6():
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  D5():
    deopt 13 [];
  L1(r5):
    popenv;
    return r5;
  L7():
    readRDS = ldf readRDS;
    check L9() else D2();
  L8():
    r4 = dyn base(<lang readRDS(f)>);
    goto L1(r4);
  L13():
    p4 = prom<V +>{
      file_path1 = ldf `file.path`;
      p3 = prom<V +>{
        path3 = ld path;
        path4 = force? path3;
        checkMissing(path4);
        return path4;
      };
      r10 = dyn file_path1(p3, "help", "AnIndex");
      st f = r10;
      invisible.0();
      return r10;
    };
    r12 = dyn file_exists1(p4);
    check L14() else D6();
  D2():
    deopt 7 [];
  D6():
    deopt 15 [r12];
  L9():
    p2 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r7 = dyn readRDS(p2);
    check L10() else D3();
  L14():
    c1 = `as.logical`(r12);
    if c1 then L15() else L2();
  D3():
    deopt 9 [r7];
  L2():
    character = ldf character;
    check L22() else D9();
  L10():
    names = ldf names in base;
    r8 = dyn names(r7);
    check L11() else D4();
  L15():
    scan = ldf scan;
    check L16() else D7();
  D4():
    deopt 11 [r8];
  D7():
    deopt 17 [];
  D9():
    deopt 34 [];
  L11():
    goto L1(r8);
  L16():
    p5 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    p6 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      list = ldf list in base;
      r16 = dyn list("", "");
      goto L0(r16);
    L2():
      r14 = dyn base1("", "");
      goto L0(r14);
    };
    r18 = dyn scan[, what, sep, quote, `na.strings`, quiet](p5, p6, "\t", "", "", TRUE);
    check L17() else D8();
  L22():
    r22 = dyn character();
    check L23() else D10();
  D8():
    deopt 29 [r18];
  D10():
    deopt 35 [r22];
  L17():
    c2 = `is.object`(r18);
    if c2 then L18() else L19(r18);
  L23():
    popenv;
    return r22;
  L3(dx1):
    popenv;
    return dx1;
  L18():
    dr = tryDispatchBuiltin.1("[[", r18);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(dr);
  L19(r20):
    __ = ldf `[[` in base;
    r21 = dyn __(r20, 1);
    goto L3(r21);
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  }
}