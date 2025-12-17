fun main() {
  () -+> V { reg r:cls, reg example:cls, reg InsectSprays:*, reg InsectSprays1:V, reg p:p(V +), reg r2:V, reg example1:cls, reg _Library:*, reg _Library1:V, reg p1:p(V +), reg r4:V, reg example2:cls, reg quantile:*, reg quantile1:V, reg p2:p(V +), reg r6:V, reg rnorm:cls, reg r7:V, reg runif:cls, reg r8:V, reg example3:cls, reg quantile2:*, reg quantile3:V, reg p3:p(V +), reg r10:V, reg rnorm1:cls, reg r11:V, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg r14:*, reg r15:V, reg r16:*, reg r17:V, reg identical:cls, reg r18:V, reg p4:p(V +), reg r20:V, reg x1:*, reg x2:V, reg x3:*, reg x4:V, reg sapply:cls, reg apropos:cls, reg r21:V, reg p5:p(V +), reg example4:*, reg example5:V, reg p6:p(V +), reg r24:V, reg lengths:cls, reg lmex:*, reg lmex1:V, reg p7:p(V +), reg r26:V |
    mkenv;
    r = clos inner1835660515;
    st example = r;
    example = ldf example;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      InsectSprays = ld InsectSprays;
      InsectSprays1 = force? InsectSprays;
      checkMissing(InsectSprays1);
      return InsectSprays1;
    };
    r2 = dyn example(p);
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    example1 = ldf example;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p1 = prom<V +>{
      _Library = ld `.Library`;
      _Library1 = force? _Library;
      checkMissing(_Library1);
      return _Library1;
    };
    r4 = dyn example1[, package, `lib.loc`]("smooth", "stats", p1);
    check L3() else D3();
  D3():
    deopt 14 [r4];
  L3():
    example2 = ldf example;
    check L4() else D4();
  D4():
    deopt 16 [];
  L4():
    p2 = prom<V +>{
      quantile = ld quantile;
      quantile1 = force? quantile;
      checkMissing(quantile1);
      return quantile1;
    };
    r6 = dyn example2[, setRNG](p2, TRUE);
    check L5() else D5();
  D5():
    deopt 20 [r6];
  L5():
    st r1 = r6;
    rnorm = ldf rnorm;
    check L6() else D6();
  D6():
    deopt 23 [];
  L6():
    r7 = dyn rnorm(1.0);
    check L7() else D7();
  D7():
    deopt 25 [r7];
  L7():
    st x1 = r7;
    runif = ldf runif;
    check L8() else D8();
  D8():
    deopt 28 [];
  L8():
    r8 = dyn runif(1.0);
    check L9() else D9();
  D9():
    deopt 30 [r8];
  L9():
    st u = r8;
    example3 = ldf example;
    check L10() else D10();
  D10():
    deopt 33 [];
  L10():
    p3 = prom<V +>{
      quantile2 = ld quantile;
      quantile3 = force? quantile2;
      checkMissing(quantile3);
      return quantile3;
    };
    r10 = dyn example3[, setRNG](p3, TRUE);
    check L11() else D11();
  D11():
    deopt 37 [r10];
  L11():
    st r2 = r10;
    rnorm1 = ldf rnorm;
    check L12() else D12();
  D12():
    deopt 40 [];
  L12():
    r11 = dyn rnorm1(1.0);
    check L13() else D13();
  D13():
    deopt 42 [r11];
  L13():
    st x2 = r11;
    stopifnot = ldf stopifnot;
    check L14() else D14();
  D14():
    deopt 45 [];
  L14():
    p4 = prom<V +>{
      sym = ldf identical;
      base = ldf identical in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r13):
      return r13;
    L1():
      r14 = ld r1;
      r15 = force? r14;
      checkMissing(r15);
      r16 = ld r2;
      r17 = force? r16;
      checkMissing(r17);
      identical = ldf identical in base;
      r18 = dyn identical(r15, r17, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r18);
    L2():
      r12 = dyn base(<sym r1>, <sym r2>);
      goto L0(r12);
    };
    r20 = dyn stopifnot(p4);
    check L15() else D15();
  D15():
    deopt 47 [r20];
  L15():
    x1 = ld x1;
    check L16() else D16();
  D16():
    deopt 48 [x1];
  L16():
    x2 = force? x1;
    checkMissing(x2);
    x3 = ld x2;
    check L17() else D17();
  D17():
    deopt 50 [x3];
  L17():
    x4 = force? x3;
    checkMissing(x4);
    sapply = ldf sapply;
    check L18() else D18();
  D18():
    deopt 53 [];
  L18():
    p5 = prom<V +>{
      apropos = ldf apropos;
      r21 = dyn apropos[, mode]("^lm", "function");
      return r21;
    };
    p6 = prom<V +>{
      example4 = ld example;
      example5 = force? example4;
      checkMissing(example5);
      return example5;
    };
    r24 = dyn sapply[, , `character.only`, `give.lines`](p5, p6, TRUE, TRUE);
    check L19() else D19();
  D19():
    deopt 60 [r24];
  L19():
    st lmex = r24;
    lengths = ldf lengths;
    check L20() else D20();
  D20():
    deopt 63 [];
  L20():
    p7 = prom<V +>{
      lmex = ld lmex;
      lmex1 = force? lmex;
      checkMissing(lmex1);
      return lmex1;
    };
    r26 = dyn lengths(p7);
    check L21() else D21();
  D21():
    deopt 65 [r26];
  L21():
    popenv;
    return r26;
  }
}
fun inner1835660515(topic, package, `lib.loc`, `character.only`, `give.lines`, local, type, echo, verbose, setRNG, ask, `prompt.prefix`, `catch.aborts`, `run.dontrun`, `run.donttest`) {
  (reg topic:*, reg package:*, reg lib_loc:*, reg character_only:*, reg give_lines:*, reg local:*, reg type:*, reg echo:*, reg verbose:*, reg setRNG:*, reg ask:*, reg prompt_prefix:*, reg catch_aborts:*, reg run_dontrun:*, reg run_donttest:*) -+> V { var topic:*, var package:*, reg package_isMissing:L, reg package_orDefault:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var `character.only`:*, reg character_only_isMissing:L, reg character_only_orDefault:*, var `give.lines`:*, reg give_lines_isMissing:L, reg give_lines_orDefault:*, var local:*, reg local_isMissing:L, reg local_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var echo:*, reg echo_isMissing:L, reg echo_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg getOption:cls, reg r4:V, reg p1:p(V +), var setRNG:*, reg setRNG_isMissing:L, reg setRNG_orDefault:*, var ask:*, reg ask_isMissing:L, reg ask_orDefault:*, reg getOption1:cls, reg r6:V, reg p2:p(V +), var `prompt.prefix`:*, reg prompt_prefix_isMissing:L, reg prompt_prefix_orDefault:*, reg abbreviate:cls, reg topic1:*, reg topic2:V, reg p3:p(V +), reg r9:V, reg p4:p(V +), var `catch.aborts`:*, reg catch_aborts_isMissing:L, reg catch_aborts_orDefault:*, var `run.dontrun`:*, reg run_dontrun_isMissing:L, reg run_dontrun_orDefault:*, var `run.donttest`:*, reg run_donttest_isMissing:L, reg run_donttest_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg interactive:cls, reg r13:V, reg p5:p(V +), reg match_arg:cls, reg type1:*, reg type2:V, reg p6:p(V +), reg r16:V, reg type3:*, reg type4:V, reg r17:V, reg html:*, reg html1:V, reg c1:L, reg str2logical:cls, reg Sys_getenv:cls, reg r18:V, reg p7:p(V +), reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg interactive1:cls, reg r23:V, reg r24:V, reg c2:L, reg c3:V, reg enhancedHTML:*, reg enhancedHTML1:V, reg r25:V, reg c5:L, reg c6:V, reg c8:L, reg c9:V, reg requireNamespace:cls, reg r26:V, reg r27:V, reg c11:L, reg c12:V, reg c14:L, reg r28:V, reg html2:*, reg html3:V, reg c15:L, reg __:cls, reg r30:V, reg r31:cls, reg r32:V, reg port:*, reg port1:V, reg r33:V, reg c16:L, reg r34:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg r36:V, reg lib_loc1:*, reg lib_loc2:V, reg c17:V, reg r37:V, reg c18:L, reg _Platform:*, reg _Platform1:V, reg c19:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r39:V, reg r40:V, reg c20:L, reg get:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg r42:V, reg as_environment:cls, reg r43:V, reg p8:p(V +), reg r45:V, reg r46:V, reg getOption2:cls, reg r47:V, reg character_only1:*, reg character_only2:V, reg r49:V, reg c21:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r50:V, reg r51:V, reg substitute:cls, reg r52:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r53:V, reg r54:V, reg topic3:*, reg topic4:V, reg c22:L, reg r55:V, reg c23:L, reg deparse:cls, reg topic5:*, reg topic6:V, reg p9:p(V +), reg r57:V, reg c24:L, reg r59:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r60:V, reg dx4:V, reg find_package:cls, reg package1:*, reg package2:V, reg p10:p(V +), reg lib_loc3:*, reg lib_loc4:V, reg p11:p(V +), reg verbose1:*, reg verbose2:V, reg p12:p(V +), reg r64:V, reg index_search:cls, reg topic7:*, reg topic8:V, reg p13:p(V +), reg pkgpaths:*, reg pkgpaths1:V, reg p14:p(V +), reg r67:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r68:V, reg r69:V, reg file:*, reg file1:V, reg length:cls, reg r70:V, reg r71:V, reg c25:L, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg topic9:*, reg topic10:V, reg p15:p(V +), reg r73:V, reg p16:p(V +), reg r75:V, reg p17:p(V +), reg r77:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r78:V, reg r79:V, reg invisible:cls, reg r80:V, reg verbose3:*, reg verbose4:V, reg c26:L, reg cat:cls, reg sQuote1:cls, reg file2:*, reg file3:V, reg p18:p(V +), reg r84:V, reg p19:p(V +), reg r86:V, reg dirname:cls, reg dirname1:cls, reg file4:*, reg file5:V, reg p20:p(V +), reg r89:V, reg p21:p(V +), reg r91:V, reg basename:cls, reg packagePath:*, reg packagePath1:V, reg p22:p(V +), reg r93:V, reg html4:*, reg html5:V, reg c27:L, reg local1:*, reg local2:V, reg c28:L, reg r94:S, reg browseURL:cls, reg paste0:cls, reg port2:*, reg port3:V, reg p23:p(V +), reg pkgname:*, reg pkgname1:V, reg p24:p(V +), reg topic11:*, reg topic12:V, reg p25:p(V +), reg query:*, reg query1:V, reg p26:p(V +), reg r99:V, reg p27:p(V +), reg browser:*, reg browser1:V, reg p28:p(V +), reg r102:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r103:V, reg r104:V, reg invisible1:cls, reg r105:V, reg dirname2:cls, reg packagePath2:*, reg packagePath3:V, reg p29:p(V +), reg r109:V, reg tempfile:cls, reg r110:V, reg __2:cls, reg r111:V, reg r112:cls, reg _getHelpFile:cls, reg file6:*, reg file7:V, reg p30:p(V +), reg r114:V, reg p31:p(V +), reg tf:*, reg tf1:V, reg p32:p(V +), reg run_dontrun1:*, reg run_dontrun2:V, reg r117:V, reg p33:p(V +), reg run_donttest1:*, reg run_donttest2:V, reg r119:V, reg p34:p(V +), reg r121:V, reg file_exists:cls, reg tf2:*, reg tf3:V, reg p35:p(V +), reg r123:V, reg r124:V, reg c29:L, reg give_lines1:*, reg give_lines2:V, reg c30:L, reg character:cls, reg r125:V, reg warning1:cls, reg gettextf1:cls, reg sQuote2:cls, reg topic13:*, reg topic14:V, reg p36:p(V +), reg r129:V, reg p37:p(V +), reg r131:V, reg p38:p(V +), reg r133:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r134:V, reg r135:V, reg invisible2:cls, reg r136:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r139:V, reg on_exit:cls, reg r141:V, reg give_lines3:*, reg give_lines4:V, reg c31:L, reg readLines:cls, reg tf4:*, reg tf5:V, reg p39:p(V +), reg r143:V, reg pkgname2:*, reg pkgname3:V, reg r146:V, reg c32:L, reg library:cls, reg pkgname4:*, reg pkgname5:V, reg p40:p(V +), reg lib:*, reg lib1:V, reg p41:p(V +), reg r149:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r151:V, reg r152:V, reg setRNG1:*, reg setRNG2:V, reg c33:L, reg r153:V, reg c34:L, reg c35:V, reg setRNG3:*, reg setRNG4:V, reg c37:L, reg c38:V, reg c40:L, reg exists:cls, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg p42:p(V +), reg r155:V, reg c41:L, reg get1:cls, reg _GlobalEnv2:*, reg _GlobalEnv3:V, reg p43:p(V +), reg r157:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r158:V, reg r159:V, reg on_exit1:cls, reg r160:V, reg RNGkind:cls, reg r162:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r163:V, reg on_exit2:cls, reg r164:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r165:V, reg r166:V, reg setRNG5:*, reg setRNG6:V, reg c42:L, reg c43:L, reg RNGkind1:cls, reg r167:V, reg set_seed:cls, reg r168:V, reg r169:V, reg eval:cls, reg setRNG7:*, reg setRNG8:V, reg p44:p(V +), reg r171:V, reg readLines1:cls, reg tf6:*, reg tf7:V, reg p45:p(V +), reg r174:V, reg echo1:*, reg echo2:V, reg c44:L, reg file8:cls, reg tf8:*, reg tf9:V, reg p46:p(V +), reg r176:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r177:V, reg r178:V, reg zz:*, reg zz1:V, reg length1:cls, reg r179:V, reg c45:L, reg c47:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r180:V, reg c50:L, reg r181:V, reg grep:cls, reg zz2:*, reg zz3:V, reg p47:p(V +), reg r183:V, reg length2:cls, reg r184:V, reg r185:V, reg c51:L, reg c52:V, reg c54:L, reg skips:*, reg skips1:V, reg r186:V, reg readLines2:cls, reg zcon:*, reg zcon1:V, reg p48:p(V +), reg r188:V, reg close:cls, reg zcon2:*, reg zcon3:V, reg p49:p(V +), reg r190:V, reg ask1:*, reg ask2:V, reg r192:V, reg c55:L, reg echo3:*, reg echo4:V, reg c56:L, reg c58:V, reg __3:cls, reg r193:V, reg r194:cls, reg r195:V, reg c59:L, reg c60:V, reg ask3:*, reg ask4:V, reg c63:L, reg _Device:*, reg _Device1:V, reg r196:V, reg c64:L, reg __4:cls, reg r197:V, reg r198:cls, reg r199:V, reg r200:V, reg getOption3:cls, reg r201:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r202:V, reg on_exit3:cls, reg r204:V, reg options:cls, reg r205:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r206:V, reg r207:V, reg on_exit4:cls, reg r208:V, reg source:cls, reg tf10:*, reg tf11:V, reg p50:p(V +), reg local3:*, reg local4:V, reg p51:p(V +), reg echo5:*, reg echo6:V, reg p52:p(V +), reg paste1:cls, reg prompt_prefix1:*, reg prompt_prefix2:V, reg p53:p(V +), reg getOption4:cls, reg r214:V, reg p54:p(V +), reg r216:V, reg p55:p(V +), reg paste2:cls, reg prompt_prefix3:*, reg prompt_prefix4:V, reg p56:p(V +), reg getOption5:cls, reg r219:V, reg p57:p(V +), reg r221:V, reg p58:p(V +), reg verbose5:*, reg verbose6:V, reg p59:p(V +), reg catch_aborts1:*, reg catch_aborts2:V, reg p60:p(V +), reg skips2:*, reg skips3:V, reg p61:p(V +), reg r226:V |
    mkenv;
    st topic = topic;
    package_isMissing = missing.0(package);
    if package_isMissing then L0(NULL) else L0(package);
  L0(package_orDefault):
    st package = package_orDefault;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L1(NULL) else L1(lib_loc);
  L1(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    character_only_isMissing = missing.0(character_only);
    if character_only_isMissing then L2(FALSE) else L2(character_only);
  L2(character_only_orDefault):
    st `character.only` = character_only_orDefault;
    give_lines_isMissing = missing.0(give_lines);
    if give_lines_isMissing then L3(FALSE) else L3(give_lines);
  L3(give_lines_orDefault):
    st `give.lines` = give_lines_orDefault;
    local_isMissing = missing.0(local);
    if local_isMissing then L4(FALSE) else L4(local);
  L4(local_orDefault):
    st local = local_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L5() else L6(type);
  L5():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("console", "html");
      goto L0(r2);
    L2():
      r = dyn base("console", "html");
      goto L0(r);
    };
    goto L6(p);
  L6(type_orDefault):
    st type = type_orDefault;
    echo_isMissing = missing.0(echo);
    if echo_isMissing then L7(TRUE) else L7(echo);
  L7(echo_orDefault):
    st echo = echo_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L8() else L9(verbose);
  L8():
    p1 = prom<V +>{
      getOption = ldf getOption;
      r4 = dyn getOption("verbose");
      return r4;
    };
    goto L9(p1);
  L9(verbose_orDefault):
    st verbose = verbose_orDefault;
    setRNG_isMissing = missing.0(setRNG);
    if setRNG_isMissing then L10(FALSE) else L10(setRNG);
  L10(setRNG_orDefault):
    st setRNG = setRNG_orDefault;
    ask_isMissing = missing.0(ask);
    if ask_isMissing then L11() else L12(ask);
  L11():
    p2 = prom<V +>{
      getOption1 = ldf getOption;
      r6 = dyn getOption1("example.ask");
      return r6;
    };
    goto L12(p2);
  L12(ask_orDefault):
    st ask = ask_orDefault;
    prompt_prefix_isMissing = missing.0(prompt_prefix);
    if prompt_prefix_isMissing then L13() else L14(prompt_prefix);
  L13():
    p4 = prom<V +>{
      abbreviate = ldf abbreviate;
      p3 = prom<V +>{
        topic1 = ld topic;
        topic2 = force? topic1;
        checkMissing(topic2);
        return topic2;
      };
      r9 = dyn abbreviate(p3, 6.0);
      return r9;
    };
    goto L14(p4);
  L14(prompt_prefix_orDefault):
    st `prompt.prefix` = prompt_prefix_orDefault;
    catch_aborts_isMissing = missing.0(catch_aborts);
    if catch_aborts_isMissing then L15(FALSE) else L15(catch_aborts);
  L15(catch_aborts_orDefault):
    st `catch.aborts` = catch_aborts_orDefault;
    run_dontrun_isMissing = missing.0(run_dontrun);
    if run_dontrun_isMissing then L16(FALSE) else L16(run_dontrun);
  L16(run_dontrun_orDefault):
    st `run.dontrun` = run_dontrun_orDefault;
    run_donttest_isMissing = missing.0(run_donttest);
    if run_donttest_isMissing then L17() else L18(run_donttest);
  L17():
    p5 = prom<V +>{
      sym1 = ldf interactive;
      base1 = ldf interactive in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      interactive = ldf interactive in base;
      r13 = dyn interactive();
      goto L0(r13);
    L2():
      r11 = dyn base1();
      goto L0(r11);
    };
    goto L18(p5);
  L18(run_donttest_orDefault):
    st `run.donttest` = run_donttest_orDefault;
    match_arg = ldf `match.arg`;
    check L89() else D0();
  D0():
    deopt 1 [];
  L89():
    p6 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r16 = dyn match_arg(p6);
    check L90() else D1();
  D1():
    deopt 3 [r16];
  L90():
    st type = r16;
    type3 = ld type;
    check L91() else D2();
  D2():
    deopt 5 [type3];
  L91():
    type4 = force? type3;
    checkMissing(type4);
    r17 = `==`(type4, "html");
    st html = r17;
    html = ld html;
    check L92() else D3();
  D3():
    deopt 10 [html];
  L92():
    html1 = force? html;
    checkMissing(html1);
    c1 = `as.logical`(html1);
    if c1 then L93() else L19();
  L19():
    goto L25();
  L25():
    html2 = ld html;
    check L109() else D10();
  L93():
    str2logical = ldf str2logical;
    check L94() else D4();
  D4():
    deopt 13 [];
  D10():
    deopt 41 [html2];
  L94():
    p7 = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r18 = dyn Sys_getenv("_R_HELP_ENABLE_ENHANCED_HTML_", "TRUE");
      return r18;
    };
    r20 = dyn str2logical(p7);
    check L95() else D5();
  L109():
    html3 = force? html2;
    checkMissing(html3);
    c15 = `as.logical`(html3);
    if c15 then L110() else L26();
  D5():
    deopt 15 [r20];
  L26():
    goto L34();
  L34():
    character_only1 = ld `character.only`;
    check L134() else D21();
  L95():
    st enhancedHTML = r20;
    sym2 = ldf interactive;
    base2 = ldf interactive in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L96() else L97();
  L110():
    __ = ldf `::`;
    check L111() else D11();
  D11():
    deopt 44 [];
  D21():
    deopt 87 [character_only1];
  L20(r22):
    r24 = `!`(r22);
    c2 = `as.logical`(r24);
    if c2 then L21(c2) else L99();
  L96():
    interactive1 = ldf interactive in base;
    r23 = dyn interactive1();
    check L98() else D6();
  L97():
    r21 = dyn base2();
    goto L20(r21);
  L111():
    r30 = dyn __("tools", "startDynamicHelp");
    check L112() else D12();
  L134():
    character_only2 = force? character_only1;
    checkMissing(character_only2);
    r49 = `!`(character_only2);
    c21 = `as.logical`(r49);
    if c21 then L135() else L35();
  D6():
    deopt 20 [r23];
  D12():
    deopt 47 [r30];
  L21(c3):
    c8 = `as.logical`(c3);
    if c8 then L22(c8) else L102();
  L35():
    goto L41();
  L41():
    find_package = ldf `find.package`;
    check L149() else D25();
  L98():
    goto L20(r23);
  L99():
    enhancedHTML = ld enhancedHTML;
    check L100() else D7();
  L112():
    checkFun.0(r30);
    r31 = r30 as cls;
    r32 = dyn r31(NA_LGL);
    check L113() else D13();
  L135():
    sym5 = ldf substitute;
    base5 = ldf substitute in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L136() else L137();
  D7():
    deopt 22 [c2, enhancedHTML];
  D13():
    deopt 50 [r32];
  D25():
    deopt 112 [];
  L22(c9):
    c14 = `as.logical`(c9);
    if c14 then L106() else L23();
  L36(r51):
    st topic = r51;
    sym6 = ldf `is.character`;
    base6 = ldf `is.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L138() else L139();
  L100():
    enhancedHTML1 = force? enhancedHTML;
    checkMissing(enhancedHTML1);
    r25 = `!`(enhancedHTML1);
    c5 = `as.logical`(r25);
    c6 = `||`(c2, c5);
    goto L21(c6);
  L102():
    requireNamespace = ldf requireNamespace;
    check L103() else D8();
  L113():
    st port = r32;
    port = ld port;
    check L114() else D14();
  L136():
    substitute = ldf substitute in base;
    r52 = dyn substitute(<sym topic>);
    goto L36(r52);
  L137():
    r50 = dyn base5(<sym topic>);
    goto L36(r50);
  L149():
    p10 = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    p11 = prom<V +>{
      lib_loc3 = ld `lib.loc`;
      lib_loc4 = force? lib_loc3;
      checkMissing(lib_loc4);
      return lib_loc4;
    };
    p12 = prom<V +>{
      verbose1 = ld verbose;
      verbose2 = force? verbose1;
      checkMissing(verbose2);
      return verbose2;
    };
    r64 = dyn find_package[, , verbose](p10, p11, p12);
    check L150() else D26();
  D8():
    deopt 27 [c8];
  D14():
    deopt 52 [port];
  D26():
    deopt 117 [r64];
  L23():
    goto L24(NULL);
  L24(r28):
    goto L25();
  L37(r54):
    r55 = `!`(r54);
    c23 = `as.logical`(r55);
    if c23 then L141() else L38();
  L103():
    r26 = dyn requireNamespace[, quietly]("knitr", TRUE);
    check L104() else D9();
  L106():
    st html = FALSE;
    goto L24(FALSE);
  L114():
    port1 = force? port;
    checkMissing(port1);
    r33 = `<=`(port1, 0);
    c16 = `as.logical`(r33);
    if c16 then L115() else L27();
  L138():
    topic3 = ld topic;
    check L140() else D22();
  L139():
    r53 = dyn base6(<sym topic>);
    goto L37(r53);
  L150():
    st pkgpaths = r64;
    index_search = ldf `index.search`;
    check L151() else D27();
  D9():
    deopt 31 [c8, r26];
  D22():
    deopt 95 [topic3];
  D27():
    deopt 120 [];
  L27():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L117() else L118();
  L28(r34):
    goto L34();
  L38():
    goto L40(NULL);
  L40(dx4):
    goto L41();
  L104():
    r27 = `!`(r26);
    c11 = `as.logical`(r27);
    c12 = `||`(c8, c11);
    goto L22(c12);
  L115():
    st html = FALSE;
    goto L28(FALSE);
  L140():
    topic4 = force? topic3;
    checkMissing(topic4);
    c22 = `is.character`(topic4);
    goto L37(c22);
  L141():
    deparse = ldf deparse;
    check L142() else D23();
  L151():
    p13 = prom<V +>{
      topic7 = ld topic;
      topic8 = force? topic7;
      checkMissing(topic8);
      return topic8;
    };
    p14 = prom<V +>{
      pkgpaths = ld pkgpaths;
      pkgpaths1 = force? pkgpaths;
      checkMissing(pkgpaths1);
      return pkgpaths1;
    };
    r67 = dyn index_search[, , firstOnly](p13, p14, TRUE);
    check L152() else D28();
  D23():
    deopt 100 [];
  D28():
    deopt 125 [r67];
  L29(r36):
    r37 = `!`(r36);
    c18 = `as.logical`(r37);
    if c18 then L120() else L30();
  L117():
    lib_loc1 = ld `lib.loc`;
    check L119() else D15();
  L118():
    r35 = dyn base3(<sym lib.loc>);
    goto L29(r35);
  L142():
    p9 = prom<V +>{
      topic5 = ld topic;
      topic6 = force? topic5;
      checkMissing(topic6);
      return topic6;
    };
    r57 = dyn deparse(p9);
    check L143() else D24();
  L152():
    st file = r67;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L153() else L154();
  D15():
    deopt 60 [lib_loc1];
  D24():
    deopt 102 [r57];
  L30():
    goto L31();
  L31():
    _Platform = ld `.Platform`;
    check L122() else D16();
  L42(r69):
    r71 = `!`(r69);
    c25 = `as.logical`(r71);
    if c25 then L157() else L43();
  L119():
    lib_loc2 = force? lib_loc1;
    checkMissing(lib_loc2);
    c17 = `==`(lib_loc2, NULL);
    goto L29(c17);
  L120():
    st `lib.loc` = NULL;
    goto L31();
  L143():
    c24 = `is.object`(r57);
    if c24 then L144() else L145(r57);
  L153():
    file = ld file;
    check L155() else D29();
  L154():
    r68 = dyn base7(<sym file>);
    goto L42(r68);
  D16():
    deopt 69 [_Platform];
  D29():
    deopt 129 [file];
  L39(dx3):
    st topic = dx3;
    goto L40(dx3);
  L43():
    verbose3 = ld verbose;
    check L165() else D34();
  L122():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c19 = `is.object`(_Platform1);
    if c19 then L124() else L125(_Platform1);
  L144():
    dr2 = tryDispatchBuiltin.1("[", r57);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L146() else L145(dr2);
  L145(r59):
    __1 = ldf `[` in base;
    r60 = dyn __1(r59, 1);
    goto L39(r60);
  L155():
    file1 = force? file;
    checkMissing(file1);
    length = ldf length in base;
    r70 = dyn length(file1);
    check L156() else D30();
  L157():
    warning = ldf warning;
    check L158() else D31();
  D30():
    deopt 132 [r70];
  D31():
    deopt 135 [];
  D34():
    deopt 147 [verbose3];
  L123(dx1):
    r40 = `==`(dx1, "AQUA");
    c20 = `as.logical`(r40);
    if c20 then L127() else L32();
  L124():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L126() else L125(dr);
  L125(_Platform3):
    r39 = `$`(_Platform3, <sym GUI>);
    goto L123(r39);
  L146():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L39(dx2);
  L156():
    goto L42(r70);
  L158():
    p17 = prom<V +>{
      gettextf = ldf gettextf;
      p16 = prom<V +>{
        sQuote = ldf sQuote;
        p15 = prom<V +>{
          topic9 = ld topic;
          topic10 = force? topic9;
          checkMissing(topic10);
          return topic10;
        };
        r73 = dyn sQuote(p15);
        return r73;
      };
      r75 = dyn gettextf("no help found for %s", p16);
      return r75;
    };
    r77 = dyn warning[, domain](p17, NA_LGL);
    check L159() else D32();
  L165():
    verbose4 = force? verbose3;
    checkMissing(verbose4);
    c26 = `as.logical`(verbose4);
    if c26 then L166() else L46();
  D32():
    deopt 139 [r77];
  L32():
    getOption2 = ldf getOption;
    check L131() else D19();
  L33(r46):
    st browser = r46;
    goto L28(r46);
  L46():
    goto L47();
  L47():
    dirname = ldf dirname;
    check L170() else D37();
  L126():
    dx = getTryDispatchBuiltinValue(dr);
    goto L123(dx);
  L127():
    get = ldf get;
    check L128() else D17();
  L159():
    sym8 = ldf invisible;
    base8 = ldf invisible in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L160() else L161();
  L166():
    cat = ldf cat;
    check L167() else D35();
  D17():
    deopt 75 [];
  D19():
    deopt 81 [];
  D35():
    deopt 150 [];
  D37():
    deopt 158 [];
  L44(r79):
    popenv;
    return r79;
  L128():
    p8 = prom<V +>{
      sym4 = ldf `as.environment`;
      base4 = ldf `as.environment` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r42):
      return r42;
    L1():
      as_environment = ldf `as.environment` in base;
      r43 = dyn as_environment("tools:RGUI");
      goto L0(r43);
    L2():
      r41 = dyn base4("tools:RGUI");
      goto L0(r41);
    };
    r45 = dyn get[, envir]("aqua.browser", p8);
    check L129() else D18();
  L131():
    r47 = dyn getOption2("browser");
    check L132() else D20();
  L160():
    invisible = ldf invisible in base;
    r80 = dyn invisible();
    check L162() else D33();
  L161():
    r78 = dyn base8();
    goto L44(r78);
  L167():
    p19 = prom<V +>{
      sQuote1 = ldf sQuote;
      p18 = prom<V +>{
        file2 = ld file;
        file3 = force? file2;
        checkMissing(file3);
        return file3;
      };
      r84 = dyn sQuote1(p18);
      return r84;
    };
    r86 = dyn cat("Found file =", p19, "\n");
    check L168() else D36();
  L170():
    p21 = prom<V +>{
      dirname1 = ldf dirname;
      p20 = prom<V +>{
        file4 = ld file;
        file5 = force? file4;
        checkMissing(file5);
        return file5;
      };
      r89 = dyn dirname1(p20);
      return r89;
    };
    r91 = dyn dirname(p21);
    check L171() else D38();
  D18():
    deopt 79 [r45];
  D20():
    deopt 83 [r47];
  D33():
    deopt 143 [r80];
  D36():
    deopt 154 [r86];
  D38():
    deopt 160 [r91];
  L129():
    goto L33(r45);
  L132():
    goto L33(r47);
  L162():
    goto L44(r80);
  L168():
    goto L47();
  L171():
    st packagePath = r91;
    basename = ldf basename;
    check L172() else D39();
  D39():
    deopt 163 [];
  L172():
    p22 = prom<V +>{
      packagePath = ld packagePath;
      packagePath1 = force? packagePath;
      checkMissing(packagePath1);
      return packagePath1;
    };
    r93 = dyn basename(p22);
    check L173() else D40();
  D40():
    deopt 165 [r93];
  L173():
    st pkgname = r93;
    html4 = ld html;
    check L174() else D41();
  D41():
    deopt 167 [html4];
  L174():
    html5 = force? html4;
    checkMissing(html5);
    c27 = `as.logical`(html5);
    if c27 then L175() else L48();
  L48():
    dirname2 = ldf dirname;
    check L186() else D46();
  L175():
    local1 = ld local;
    check L176() else D42();
  D42():
    deopt 169 [local1];
  D46():
    deopt 189 [];
  L176():
    local2 = force? local1;
    checkMissing(local2);
    c28 = `as.logical`(local2);
    if c28 then L177() else L49();
  L186():
    p29 = prom<V +>{
      packagePath2 = ld packagePath;
      packagePath3 = force? packagePath2;
      checkMissing(packagePath3);
      return packagePath3;
    };
    r109 = dyn dirname2(p29);
    check L187() else D47();
  D47():
    deopt 191 [r109];
  L49():
    goto L50("?local=FALSE");
  L50(r94):
    st query = r94;
    browseURL = ldf browseURL;
    check L179() else D43();
  L177():
    goto L50("");
  L187():
    st lib = r109;
    tempfile = ldf tempfile;
    check L188() else D48();
  D43():
    deopt 177 [];
  D48():
    deopt 194 [];
  L179():
    p27 = prom<V +>{
      paste0 = ldf paste0;
      p23 = prom<V +>{
        port2 = ld port;
        port3 = force? port2;
        checkMissing(port3);
        return port3;
      };
      p24 = prom<V +>{
        pkgname = ld pkgname;
        pkgname1 = force? pkgname;
        checkMissing(pkgname1);
        return pkgname1;
      };
      p25 = prom<V +>{
        topic11 = ld topic;
        topic12 = force? topic11;
        checkMissing(topic12);
        return topic12;
      };
      p26 = prom<V +>{
        query = ld query;
        query1 = force? query;
        checkMissing(query1);
        return query1;
      };
      r99 = dyn paste0("http://127.0.0.1:", p23, "/library/", p24, "/Example/", p25, p26);
      return r99;
    };
    p28 = prom<V +>{
      browser = ld browser;
      browser1 = force? browser;
      checkMissing(browser1);
      return browser1;
    };
    r102 = dyn browseURL(p27, p28);
    check L180() else D44();
  L188():
    r110 = dyn tempfile("Rex");
    check L189() else D49();
  D44():
    deopt 180 [r102];
  D49():
    deopt 196 [r110];
  L180():
    sym9 = ldf invisible;
    base9 = ldf invisible in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L181() else L182();
  L189():
    st tf = r110;
    __2 = ldf `::`;
    check L190() else D50();
  D50():
    deopt 199 [];
  L51(r104):
    popenv;
    return r104;
  L181():
    invisible1 = ldf invisible in base;
    r105 = dyn invisible1();
    check L183() else D45();
  L182():
    r103 = dyn base9();
    goto L51(r103);
  L190():
    r111 = dyn __2("tools", "Rd2ex");
    check L191() else D51();
  D45():
    deopt 184 [r105];
  D51():
    deopt 202 [r111];
  L183():
    goto L51(r105);
  L191():
    checkFun.0(r111);
    r112 = r111 as cls;
    p31 = prom<V +>{
      _getHelpFile = ldf `.getHelpFile`;
      p30 = prom<V +>{
        file6 = ld file;
        file7 = force? file6;
        checkMissing(file7);
        return file7;
      };
      r114 = dyn _getHelpFile(p30);
      return r114;
    };
    p32 = prom<V +>{
      tf = ld tf;
      tf1 = force? tf;
      checkMissing(tf1);
      return tf1;
    };
    p33 = prom<V +>{
      run_dontrun1 = ld `run.dontrun`;
      run_dontrun2 = force? run_dontrun1;
      checkMissing(run_dontrun2);
      r117 = `!`(run_dontrun2);
      return r117;
    };
    p34 = prom<V +>{
      run_donttest1 = ld `run.donttest`;
      run_donttest2 = force? run_donttest1;
      checkMissing(run_donttest2);
      r119 = `!`(run_donttest2);
      return r119;
    };
    r121 = dyn r112[, , commentDontrun, commentDonttest](p31, p32, p33, p34);
    check L192() else D52();
  D52():
    deopt 210 [r121];
  L192():
    file_exists = ldf `file.exists`;
    check L193() else D53();
  D53():
    deopt 212 [];
  L193():
    p35 = prom<V +>{
      tf2 = ld tf;
      tf3 = force? tf2;
      checkMissing(tf3);
      return tf3;
    };
    r123 = dyn file_exists(p35);
    check L194() else D54();
  D54():
    deopt 214 [r123];
  L194():
    r124 = `!`(r123);
    c29 = `as.logical`(r124);
    if c29 then L195() else L53();
  L53():
    sym11 = ldf `on.exit`;
    base11 = ldf `on.exit` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L209() else L210();
  L195():
    give_lines1 = ld `give.lines`;
    check L196() else D55();
  D55():
    deopt 216 [give_lines1];
  L58():
    give_lines3 = ld `give.lines`;
    check L211() else D61();
  L196():
    give_lines2 = force? give_lines1;
    checkMissing(give_lines2);
    c30 = `as.logical`(give_lines2);
    if c30 then L197() else L54();
  L209():
    on_exit = ldf `on.exit` in base;
    r141 = dyn on_exit(<lang unlink(tf)>);
    goto L58();
  L210():
    r139 = dyn base11(<lang unlink(tf)>);
    goto L58();
  D61():
    deopt 240 [give_lines3];
  L54():
    warning1 = ldf warning;
    check L202() else D58();
  L197():
    character = ldf character;
    check L198() else D56();
  L211():
    give_lines4 = force? give_lines3;
    checkMissing(give_lines4);
    c31 = `as.logical`(give_lines4);
    if c31 then L212() else L59();
  D56():
    deopt 219 [];
  D58():
    deopt 225 [];
  L59():
    pkgname2 = ld pkgname;
    check L217() else D64();
  L198():
    r125 = dyn character();
    check L199() else D57();
  L202():
    p38 = prom<V +>{
      gettextf1 = ldf gettextf;
      p37 = prom<V +>{
        sQuote2 = ldf sQuote;
        p36 = prom<V +>{
          topic13 = ld topic;
          topic14 = force? topic13;
          checkMissing(topic14);
          return topic14;
        };
        r129 = dyn sQuote2(p36);
        return r129;
      };
      r131 = dyn gettextf1("%s has a help file but no examples", p37);
      return r131;
    };
    r133 = dyn warning1[, domain](p38, NA_LGL);
    check L203() else D59();
  L212():
    readLines = ldf readLines;
    check L213() else D62();
  D57():
    deopt 220 [r125];
  D59():
    deopt 229 [r133];
  D62():
    deopt 243 [];
  D64():
    deopt 249 [pkgname2];
  L199():
    popenv;
    return r125;
  L203():
    sym10 = ldf invisible;
    base10 = ldf invisible in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L204() else L205();
  L213():
    p39 = prom<V +>{
      tf4 = ld tf;
      tf5 = force? tf4;
      checkMissing(tf5);
      return tf5;
    };
    r143 = dyn readLines(p39);
    check L214() else D63();
  L217():
    pkgname3 = force? pkgname2;
    checkMissing(pkgname3);
    r146 = `!=`(pkgname3, "base");
    c32 = `as.logical`(r146);
    if c32 then L218() else L61();
  D63():
    deopt 245 [r143];
  L56(r135):
    popenv;
    return r135;
  L61():
    goto L62();
  L62():
    sym12 = ldf `is.logical`;
    base12 = ldf `is.logical` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L222() else L223();
  L204():
    invisible2 = ldf invisible in base;
    r136 = dyn invisible2();
    check L206() else D60();
  L205():
    r134 = dyn base10();
    goto L56(r134);
  L214():
    popenv;
    return r143;
  L218():
    library = ldf library;
    check L219() else D65();
  D60():
    deopt 233 [r136];
  D65():
    deopt 254 [];
  L63(r152):
    r153 = `!`(r152);
    c34 = `as.logical`(r153);
    if c34 then L64(c34) else L225();
  L206():
    goto L56(r136);
  L219():
    p40 = prom<V +>{
      pkgname4 = ld pkgname;
      pkgname5 = force? pkgname4;
      checkMissing(pkgname5);
      return pkgname5;
    };
    p41 = prom<V +>{
      lib = ld lib;
      lib1 = force? lib;
      checkMissing(lib1);
      return lib1;
    };
    r149 = dyn library[, `lib.loc`, `character.only`](p40, p41, TRUE);
    check L220() else D66();
  L222():
    setRNG1 = ld setRNG;
    check L224() else D67();
  L223():
    r151 = dyn base12(<sym setRNG>);
    goto L63(r151);
  D66():
    deopt 260 [r149];
  D67():
    deopt 264 [setRNG1];
  L64(c35):
    c40 = `as.logical`(c35);
    if c40 then L228() else L65();
  L220():
    goto L62();
  L224():
    setRNG2 = force? setRNG1;
    checkMissing(setRNG2);
    c33 = `is.logical`(setRNG2);
    goto L63(c33);
  L225():
    setRNG3 = ld setRNG;
    check L226() else D68();
  D68():
    deopt 268 [c34, setRNG3];
  L65():
    goto L72();
  L72():
    readLines1 = ldf readLines;
    check L253() else D82();
  L226():
    setRNG4 = force? setRNG3;
    checkMissing(setRNG4);
    c37 = `as.logical`(setRNG4);
    c38 = `||`(c34, c37);
    goto L64(c38);
  L228():
    exists = ldf exists;
    check L229() else D69();
  D69():
    deopt 272 [];
  D82():
    deopt 315 [];
  L229():
    p42 = prom<V +>{
      _GlobalEnv = ld `.GlobalEnv`;
      _GlobalEnv1 = force? _GlobalEnv;
      checkMissing(_GlobalEnv1);
      return _GlobalEnv1;
    };
    r155 = dyn exists[, envir](".Random.seed", p42);
    check L230() else D70();
  L253():
    p45 = prom<V +>{
      tf6 = ld tf;
      tf7 = force? tf6;
      checkMissing(tf7);
      return tf7;
    };
    r174 = dyn readLines1[, n](p45, 1);
    check L254() else D83();
  D70():
    deopt 276 [r155];
  D83():
    deopt 319 [r174];
  L230():
    c41 = `as.logical`(r155);
    if c41 then L231() else L66();
  L254():
    st zz = r174;
    st skips = 0;
    echo1 = ld echo;
    check L255() else D84();
  D84():
    deopt 324 [echo1];
  L66():
    RNGkind = ldf RNGkind;
    check L237() else D73();
  L68():
    sym15 = ldf `is.logical`;
    base15 = ldf `is.logical` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L241() else L242();
  L231():
    get1 = ldf get;
    check L232() else D71();
  L255():
    echo2 = force? echo1;
    checkMissing(echo2);
    c44 = `as.logical`(echo2);
    if c44 then L256() else L73();
  D71():
    deopt 278 [];
  D73():
    deopt 288 [];
  L69(r166):
    c43 = `as.logical`(r166);
    if c43 then L244() else L70();
  L73():
    goto L79();
  L79():
    ask1 = ld ask;
    check L278() else D97();
  L232():
    p43 = prom<V +>{
      _GlobalEnv2 = ld `.GlobalEnv`;
      _GlobalEnv3 = force? _GlobalEnv2;
      checkMissing(_GlobalEnv3);
      return _GlobalEnv3;
    };
    r157 = dyn get1[, envir](".Random.seed", p43);
    check L233() else D72();
  L237():
    r162 = dyn RNGkind();
    check L238() else D74();
  L241():
    setRNG5 = ld setRNG;
    check L243() else D75();
  L242():
    r165 = dyn base15(<sym setRNG>);
    goto L69(r165);
  L256():
    file8 = ldf file;
    check L257() else D85();
  D72():
    deopt 282 [r157];
  D74():
    deopt 289 [r162];
  D75():
    deopt 295 [setRNG5];
  D85():
    deopt 327 [];
  D97():
    deopt 371 [ask1];
  L70():
    eval = ldf eval;
    check L250() else D80();
  L71(r169):
    goto L72();
  L233():
    st oldSeed = r157;
    sym13 = ldf `on.exit`;
    base13 = ldf `on.exit` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L234() else L235();
  L238():
    st oldRNG = r162;
    sym14 = ldf `on.exit`;
    base14 = ldf `on.exit` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L239() else L240();
  L243():
    setRNG6 = force? setRNG5;
    checkMissing(setRNG6);
    c42 = `is.logical`(setRNG6);
    goto L69(c42);
  L244():
    RNGkind1 = ldf RNGkind;
    check L245() else D76();
  L257():
    p46 = prom<V +>{
      tf8 = ld tf;
      tf9 = force? tf8;
      checkMissing(tf9);
      return tf9;
    };
    r176 = dyn file8[, open](p46, "rt");
    check L258() else D86();
  L278():
    ask2 = force? ask1;
    checkMissing(ask2);
    r192 = `==`(ask2, "default");
    c55 = `as.logical`(r192);
    if c55 then L279() else L80();
  D76():
    deopt 299 [];
  D80():
    deopt 309 [];
  D86():
    deopt 331 [r176];
  L67(r159):
    goto L68();
  L80():
    goto L82();
  L82():
    ask3 = ld ask;
    check L287() else D102();
  L234():
    on_exit1 = ldf `on.exit` in base;
    r160 = dyn on_exit1(<lang assign(".Random.seed", oldSeed, envir=.GlobalEnv)>, TRUE);
    goto L67(r160);
  L235():
    r158 = dyn base13[, add](<lang assign(".Random.seed", oldSeed, envir=.GlobalEnv)>, TRUE);
    goto L67(r158);
  L239():
    on_exit2 = ldf `on.exit` in base;
    r164 = dyn on_exit2(<lang RNGkind(`[`(oldRNG, 1), `[`(oldRNG, 2), `[`(oldRNG, 3))>, TRUE);
    goto L68();
  L240():
    r163 = dyn base14[, add](<lang RNGkind(`[`(oldRNG, 1), `[`(oldRNG, 2), `[`(oldRNG, 3))>, TRUE);
    goto L68();
  L245():
    r167 = dyn RNGkind1("default", "default", "default");
    check L246() else D77();
  L250():
    p44 = prom<V +>{
      setRNG7 = ld setRNG;
      setRNG8 = force? setRNG7;
      checkMissing(setRNG8);
      return setRNG8;
    };
    r171 = dyn eval(p44);
    check L251() else D81();
  L258():
    st zcon = r176;
    goto L78();
  L279():
    echo3 = ld echo;
    check L280() else D98();
  D77():
    deopt 303 [r167];
  D81():
    deopt 311 [r171];
  D98():
    deopt 375 [echo3];
  D102():
    deopt 390 [ask3];
  L78():
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L259() else L260();
  L246():
    set_seed = ldf `set.seed`;
    check L247() else D78();
  L251():
    goto L71(r171);
  L280():
    echo4 = force? echo3;
    checkMissing(echo4);
    c56 = `as.logical`(echo4);
    if c56 then L281() else L81(c56);
  L287():
    ask4 = force? ask3;
    checkMissing(ask4);
    c63 = `as.logical`(ask4);
    if c63 then L288() else L83();
  D78():
    deopt 305 [];
  L74(r178):
    c45 = `as.logical`(r178);
    if c45 then L263() else L75(c45);
  L81(c58):
    st ask = c58;
    goto L82();
  L83():
    goto L88();
  L88():
    source = ldf source;
    check L304() else D111();
  L247():
    r168 = dyn set_seed(1.0);
    check L248() else D79();
  L259():
    zz = ld zz;
    check L261() else D87();
  L260():
    r177 = dyn base16(<sym zz>);
    goto L74(r177);
  L281():
    __3 = ldf `::`;
    check L282() else D99();
  L288():
    _Device = ld `.Device`;
    check L289() else D103();
  D79():
    deopt 307 [r168];
  D87():
    deopt 335 [zz];
  D99():
    deopt 378 [c56];
  D103():
    deopt 392 [_Device];
  D111():
    deopt 426 [];
  L75(c47):
    c54 = `as.logical`(c47);
    if c54 then L270() else L77();
  L248():
    goto L71(r168);
  L261():
    zz1 = force? zz;
    checkMissing(zz1);
    length1 = ldf length in base;
    r179 = dyn length1(zz1);
    check L262() else D88();
  L263():
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L264() else L265();
  L282():
    r193 = dyn __3("grDevices", "dev.interactive");
    check L283() else D100();
  L289():
    _Device1 = force? _Device;
    checkMissing(_Device1);
    r196 = `!=`(_Device1, "null device");
    c64 = `as.logical`(r196);
    if c64 then L290() else L84();
  L304():
    p50 = prom<V +>{
      tf10 = ld tf;
      tf11 = force? tf10;
      checkMissing(tf11);
      return tf11;
    };
    p51 = prom<V +>{
      local3 = ld local;
      local4 = force? local3;
      checkMissing(local4);
      return local4;
    };
    p52 = prom<V +>{
      echo5 = ld echo;
      echo6 = force? echo5;
      checkMissing(echo6);
      return echo6;
    };
    p55 = prom<V +>{
      paste1 = ldf paste0;
      p53 = prom<V +>{
        prompt_prefix1 = ld `prompt.prefix`;
        prompt_prefix2 = force? prompt_prefix1;
        checkMissing(prompt_prefix2);
        return prompt_prefix2;
      };
      p54 = prom<V +>{
        getOption4 = ldf getOption;
        r214 = dyn getOption4("prompt");
        return r214;
      };
      r216 = dyn paste1(p53, p54);
      return r216;
    };
    p58 = prom<V +>{
      paste2 = ldf paste0;
      p56 = prom<V +>{
        prompt_prefix3 = ld `prompt.prefix`;
        prompt_prefix4 = force? prompt_prefix3;
        checkMissing(prompt_prefix4);
        return prompt_prefix4;
      };
      p57 = prom<V +>{
        getOption5 = ldf getOption;
        r219 = dyn getOption5("continue");
        return r219;
      };
      r221 = dyn paste2(p56, p57);
      return r221;
    };
    p59 = prom<V +>{
      verbose5 = ld verbose;
      verbose6 = force? verbose5;
      checkMissing(verbose6);
      return verbose6;
    };
    p60 = prom<V +>{
      catch_aborts1 = ld `catch.aborts`;
      catch_aborts2 = force? catch_aborts1;
      checkMissing(catch_aborts2);
      return catch_aborts2;
    };
    p61 = prom<V +>{
      skips2 = ld skips;
      skips3 = force? skips2;
      checkMissing(skips3);
      return skips3;
    };
    r226 = dyn source[, , echo, `prompt.echo`, `continue.echo`, verbose, `max.deparse.length`, encoding, `catch.aborts`, `skip.echo`, `keep.source`](p50, p51, p52, p55, p58, p59, +Infinity, "UTF-8", p60, p61, TRUE);
    check L305() else D112();
  D88():
    deopt 338 [r179];
  D100():
    deopt 381 [c56, r193];
  D112():
    deopt 447 [r226];
  L76(c50, r181):
    r185 = `!`(r181);
    c51 = `as.logical`(r185);
    c52 = `&&`(c50, c51);
    goto L75(c52);
  L77():
    close = ldf close;
    check L275() else D95();
  L84():
    getOption3 = ldf getOption;
    check L295() else D107();
  L85(r200):
    st oldask = r200;
    sym18 = ldf `on.exit`;
    base18 = ldf `on.exit` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L297() else L298();
  L262():
    goto L74(r179);
  L264():
    grep = ldf grep;
    check L266() else D89();
  L265():
    r180 = dyn base17(<lang grep("^### \\*\\*", zz)>);
    goto L76(c45, r180);
  L270():
    skips = ld skips;
    check L271() else D92();
  L283():
    checkFun.0(r193);
    r194 = r193 as cls;
    r195 = dyn r194[orNone](TRUE);
    check L284() else D101();
  L290():
    __4 = ldf `::`;
    check L291() else D104();
  L305():
    popenv;
    return r226;
  D89():
    deopt 342 [c45];
  D92():
    deopt 350 [skips];
  D95():
    deopt 366 [];
  D101():
    deopt 385 [c56, r195];
  D104():
    deopt 397 [];
  D107():
    deopt 406 [];
  L86():
    options = ldf options;
    check L299() else D109();
  L266():
    p47 = prom<V +>{
      zz2 = ld zz;
      zz3 = force? zz2;
      checkMissing(zz3);
      return zz3;
    };
    r183 = dyn grep("^### \\*\\*", p47);
    check L267() else D90();
  L271():
    skips1 = force? skips;
    checkMissing(skips1);
    r186 = `+`(skips1, 1);
    st skips = r186;
    readLines2 = ldf readLines;
    check L272() else D93();
  L275():
    p49 = prom<V +>{
      zcon2 = ld zcon;
      zcon3 = force? zcon2;
      checkMissing(zcon3);
      return zcon3;
    };
    r190 = dyn close(p49);
    check L276() else D96();
  L284():
    c59 = `as.logical`(r195);
    c60 = `&&`(c56, c59);
    goto L81(c60);
  L291():
    r197 = dyn __4("grDevices", "devAskNewPage");
    check L292() else D105();
  L295():
    r201 = dyn getOption3("device.ask.default", FALSE);
    check L296() else D108();
  L297():
    on_exit3 = ldf `on.exit` in base;
    r204 = dyn on_exit3(<lang if(`!=`(.Device, "null device"), `::`(grDevices, devAskNewPage)(oldask))>, TRUE);
    goto L86();
  L298():
    r202 = dyn base18[, add](<lang if(`!=`(.Device, "null device"), `::`(grDevices, devAskNewPage)(oldask))>, TRUE);
    goto L86();
  D90():
    deopt 345 [c45, r183];
  D93():
    deopt 356 [];
  D96():
    deopt 368 [r190];
  D105():
    deopt 400 [r197];
  D108():
    deopt 409 [r201];
  D109():
    deopt 415 [];
  L267():
    length2 = ldf length in base;
    r184 = dyn length2(r183);
    check L268() else D91();
  L272():
    p48 = prom<V +>{
      zcon = ld zcon;
      zcon1 = force? zcon;
      checkMissing(zcon1);
      return zcon1;
    };
    r188 = dyn readLines2[, n](p48, 1);
    check L273() else D94();
  L276():
    goto L79();
  L292():
    checkFun.0(r197);
    r198 = r197 as cls;
    r199 = dyn r198[ask](TRUE);
    check L293() else D106();
  L296():
    goto L85(r201);
  L299():
    r205 = dyn options[`device.ask.default`](TRUE);
    check L300() else D110();
  D91():
    deopt 347 [c45, r184];
  D94():
    deopt 360 [r188];
  D106():
    deopt 404 [r199];
  D110():
    deopt 418 [r205];
  L268():
    goto L76(c45, r184);
  L273():
    st zz = r188;
    goto L78();
  L293():
    goto L85(r199);
  L300():
    st op = r205;
    sym19 = ldf `on.exit`;
    base19 = ldf `on.exit` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L301() else L302();
  L87(r207):
    goto L88();
  L301():
    on_exit4 = ldf `on.exit` in base;
    r208 = dyn on_exit4(<lang options(op)>, TRUE);
    goto L87(r208);
  L302():
    r206 = dyn base19[, add](<lang options(op)>, TRUE);
    goto L87(r206);
  }
}