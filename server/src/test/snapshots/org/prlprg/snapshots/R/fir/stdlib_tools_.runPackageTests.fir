fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1994717793;
    st `.runPackageTests` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1994717793(use_gct, use_valgrind, Log, stop_on_error, `...`) {
  (reg use_gct:*, reg use_valgrind:*, reg Log:*, reg stop_on_error:*, reg ddd:dots) -+> V { var use_gct:*, reg use_gct_isMissing:L, reg use_gct_orDefault:*, var use_valgrind:*, reg use_valgrind_isMissing:L, reg use_valgrind_orDefault:*, var Log:*, reg Log_isMissing:L, reg Log_orDefault:*, var stop_on_error:*, reg stop_on_error_isMissing:L, reg stop_on_error_orDefault:*, var `...`:dots?, reg Sys_getenv:cls, reg Sys_getenv1:cls, reg Sys_getenv2:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V, reg get_timeout:cls, reg tlim:*, reg tlim1:V, reg p2:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg Log1:*, reg Log2:V, reg c:V, reg r9:V, reg c1:L, reg file:cls, reg Log3:*, reg Log4:V, reg p3:p(V +), reg r11:V, reg _Platform:*, reg _Platform1:V, reg c2:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r13:V, reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg Sys_getenv3:cls, reg r17:V, reg as_numeric:cls, reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg Sys_getenv4:cls, reg r21:V, reg as_numeric1:cls, reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg td0:*, reg td1:V, reg is_na:cls, reg r25:V, reg c3:L, reg r27:cls, reg r28:cls, reg file_copy:cls, reg file_path:cls, reg R_home:cls, reg r29:V, reg p4:p(V +), reg r31:V, reg p5:p(V +), reg r33:V, reg use_gct1:*, reg use_gct2:V, reg c4:L, reg cat:cls, reg r34:V, reg dir:cls, reg r36:V, reg Rinfiles:*, reg Rinfiles1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c5:L, reg x:V, reg message:cls, reg sQuote:cls, reg f:*, reg f1:V, reg p6:p(V +), reg r38:V, reg p7:p(V +), reg r40:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg i7:I, reg r42:V, reg Log5:*, reg Log6:V, reg c6:V, reg r43:V, reg c7:L, reg cat1:cls, reg sQuote1:cls, reg f2:*, reg f3:V, reg p8:p(V +), reg r45:V, reg p9:p(V +), reg Log7:*, reg Log8:V, reg p10:p(V +), reg r48:V, reg i10:I, reg paste:cls, reg shQuote:cls, reg file_path1:cls, reg R_home1:cls, reg r50:V, reg p11:p(V +), reg r52:V, reg p12:p(V +), reg r54:V, reg p13:p(V +), reg shQuote1:cls, reg f4:*, reg f5:V, reg p14:p(V +), reg r57:V, reg p15:p(V +), reg r59:V, reg system:cls, reg cmd:*, reg cmd1:V, reg p16:p(V +), reg r61:V, reg c8:L, reg nfail:*, reg nfail1:V, reg r62:V, reg file_rename:cls, reg paste1:cls, reg f6:*, reg f7:V, reg p17:p(V +), reg r64:V, reg p18:p(V +), reg paste2:cls, reg f8:*, reg f9:V, reg p19:p(V +), reg r67:V, reg p20:p(V +), reg r69:V, reg stop_on_error1:*, reg stop_on_error2:V, reg c9:L, reg i17:I, reg dir1:cls, reg r73:V, reg Rfiles:*, reg Rfiles1:V, reg s1:V, reg l1:I, reg i18:I, reg i19:I, reg i20:I, reg c10:L, reg x1:V, reg nfail2:*, reg nfail3:V, reg runone:cls, reg f10:*, reg f11:V, reg p21:p(V +), reg r75:V, reg r76:V, reg nfail4:*, reg nfail5:V, reg r77:V, reg c11:L, reg i24:I, reg c13:V, reg stop_on_error3:*, reg stop_on_error4:V, reg c14:L, reg c15:V, reg c17:L, reg nfail6:*, reg nfail7:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r80:V, reg r81:V, reg Log9:*, reg Log10:V, reg c18:V, reg r82:V, reg c19:L, reg close:cls, reg Log11:*, reg Log12:V, reg p22:p(V +), reg r84:V, reg nfail8:*, reg nfail9:V |
    mkenv;
    use_gct_isMissing = missing.0(use_gct);
    if use_gct_isMissing then L0(FALSE) else L0(use_gct);
  L0(use_gct_orDefault):
    st use_gct = use_gct_orDefault;
    use_valgrind_isMissing = missing.0(use_valgrind);
    if use_valgrind_isMissing then L1(FALSE) else L1(use_valgrind);
  L1(use_valgrind_orDefault):
    st use_valgrind = use_valgrind_orDefault;
    Log_isMissing = missing.0(Log);
    if Log_isMissing then L2(NULL) else L2(Log);
  L2(Log_orDefault):
    st Log = Log_orDefault;
    stop_on_error_isMissing = missing.0(stop_on_error);
    if stop_on_error_isMissing then L3(TRUE) else L3(stop_on_error);
  L3(stop_on_error_orDefault):
    st stop_on_error = stop_on_error_orDefault;
    st `...` = ddd;
    Sys_getenv = ldf `Sys.getenv`;
    check L31() else D0();
  D0():
    deopt 1 [];
  L31():
    p1 = prom<V +>{
      Sys_getenv1 = ldf `Sys.getenv`;
      p = prom<V +>{
        Sys_getenv2 = ldf `Sys.getenv`;
        r = dyn Sys_getenv2("_R_CHECK_ELAPSED_TIMEOUT_");
        return r;
      };
      r2 = dyn Sys_getenv1("_R_CHECK_TESTS_ELAPSED_TIMEOUT_", p);
      return r2;
    };
    r4 = dyn Sys_getenv("_R_CHECK_ONE_TEST_ELAPSED_TIMEOUT_", p1);
    check L32() else D1();
  D1():
    deopt 4 [r4];
  L32():
    st tlim = r4;
    get_timeout = ldf get_timeout;
    check L33() else D2();
  D2():
    deopt 7 [];
  L33():
    p2 = prom<V +>{
      tlim = ld tlim;
      tlim1 = force? tlim;
      checkMissing(tlim1);
      return tlim1;
    };
    r6 = dyn get_timeout(p2);
    check L34() else D3();
  D3():
    deopt 9 [r6];
  L34():
    st tlim = r6;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L35() else L36();
  L4(r8):
    r9 = `!`(r8);
    c1 = `as.logical`(r9);
    if c1 then L38() else L5();
  L35():
    Log1 = ld Log;
    check L37() else D4();
  L36():
    r7 = dyn base(<sym Log>);
    goto L4(r7);
  D4():
    deopt 12 [Log1];
  L5():
    goto L6();
  L6():
    _Platform = ld `.Platform`;
    check L42() else D7();
  L37():
    Log2 = force? Log1;
    checkMissing(Log2);
    c = `==`(Log2, NULL);
    goto L4(c);
  L38():
    file = ldf file;
    check L39() else D5();
  D5():
    deopt 17 [];
  D7():
    deopt 24 [_Platform];
  L39():
    p3 = prom<V +>{
      Log3 = ld Log;
      Log4 = force? Log3;
      checkMissing(Log4);
      return Log4;
    };
    r11 = dyn file(p3, "wt");
    check L40() else D6();
  L42():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c2 = `is.object`(_Platform1);
    if c2 then L44() else L45(_Platform1);
  D6():
    deopt 20 [r11];
  L40():
    st Log = r11;
    goto L6();
  L43(dx1):
    r14 = `==`(dx1, "windows");
    st WINDOWS = r14;
    sym1 = ldf `as.numeric`;
    base1 = ldf `as.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L47() else L48();
  L44():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L46() else L45(dr);
  L45(_Platform3):
    r13 = `$`(_Platform3, <sym OS.type>);
    goto L43(r13);
  L7(r16):
    st td0 = r16;
    sym2 = ldf `as.numeric`;
    base2 = ldf `as.numeric` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L52() else L53();
  L46():
    dx = getTryDispatchBuiltinValue(dr);
    goto L43(dx);
  L47():
    Sys_getenv3 = ldf `Sys.getenv`;
    check L49() else D8();
  L48():
    r15 = dyn base1(<lang Sys.getenv("_R_CHECK_TIMINGS_")>);
    goto L7(r15);
  D8():
    deopt 33 [];
  L8(r20):
    st theta = r20;
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L57() else L58();
  L49():
    r17 = dyn Sys_getenv3("_R_CHECK_TIMINGS_");
    check L50() else D9();
  L52():
    Sys_getenv4 = ldf `Sys.getenv`;
    check L54() else D11();
  L53():
    r19 = dyn base2(<lang Sys.getenv("_R_CHECK_TEST_TIMING_CPU_TO_ELAPSED_THRESHOLD_", NA_STR)>);
    goto L8(r19);
  D9():
    deopt 35 [r17];
  D11():
    deopt 42 [];
  L9(r24):
    c3 = `as.logical`(r24);
    if c3 then L61() else L10();
  L50():
    as_numeric = ldf `as.numeric` in base;
    r18 = dyn as_numeric(r17);
    check L51() else D10();
  L54():
    r21 = dyn Sys_getenv4("_R_CHECK_TEST_TIMING_CPU_TO_ELAPSED_THRESHOLD_", NA_STR);
    check L55() else D12();
  L57():
    td0 = ld td0;
    check L59() else D14();
  L58():
    r23 = dyn base3(<sym td0>);
    goto L9(r23);
  D10():
    deopt 37 [r18];
  D12():
    deopt 45 [r21];
  D14():
    deopt 51 [td0];
  L10():
    goto L11();
  L11():
    r27 = clos inner3461457245;
    st print_time = r27;
    r28 = clos inner1384373858;
    st runone = r28;
    file_copy = ldf `file.copy`;
    check L63() else D16();
  L51():
    goto L7(r18);
  L55():
    as_numeric1 = ldf `as.numeric` in base;
    r22 = dyn as_numeric1(r21);
    check L56() else D13();
  L59():
    td1 = force? td0;
    checkMissing(td1);
    is_na = ldf `is.na` in base;
    r25 = dyn is_na(td1);
    check L60() else D15();
  L61():
    st td0 = +Infinity;
    goto L11();
  D13():
    deopt 47 [r22];
  D15():
    deopt 54 [r25];
  D16():
    deopt 67 [];
  L56():
    goto L8(r22);
  L60():
    goto L9(r25);
  L63():
    p5 = prom<V +>{
      file_path = ldf `file.path`;
      p4 = prom<V +>{
        R_home = ldf `R.home`;
        r29 = dyn R_home("share");
        return r29;
      };
      r31 = dyn file_path(p4, "R", "tests-startup.R");
      return r31;
    };
    r33 = dyn file_copy(p5, "startup.Rs");
    check L64() else D17();
  D17():
    deopt 70 [r33];
  L64():
    use_gct1 = ld use_gct;
    check L65() else D18();
  D18():
    deopt 71 [use_gct1];
  L65():
    use_gct2 = force? use_gct1;
    checkMissing(use_gct2);
    c4 = `as.logical`(use_gct2);
    if c4 then L66() else L12();
  L12():
    goto L13();
  L13():
    st nfail = 0;
    dir = ldf dir;
    check L70() else D21();
  L66():
    cat = ldf cat;
    check L67() else D19();
  D19():
    deopt 74 [];
  D21():
    deopt 87 [];
  L67():
    r34 = dyn cat[, file, append]("gctorture(TRUE)", "startup.Rs", TRUE);
    check L68() else D20();
  L70():
    r36 = dyn dir[, pattern](".", "\\.Rin$");
    check L71() else D22();
  D20():
    deopt 80 [r34];
  D22():
    deopt 91 [r36];
  L68():
    goto L13();
  L71():
    st Rinfiles = r36;
    Rinfiles = ld Rinfiles;
    check L72() else D23();
  D23():
    deopt 93 [Rinfiles];
  L72():
    Rinfiles1 = force? Rinfiles;
    checkMissing(Rinfiles1);
    s = toForSeq(Rinfiles1);
    l = length(s);
    i = 0;
    goto L14(i);
  L14(i1):
    i2 = `+`.1(i1, 1);
    c5 = `<`.1(l, i2);
    if c5 then L73() else L22();
  L22():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    message = ldf message;
    check L74() else D24();
  L73():
    dir1 = ldf dir;
    check L96() else D37();
  D24():
    deopt 96 [i2];
  D37():
    deopt 153 [];
  L74():
    p7 = prom<V +>{
      sQuote = ldf sQuote;
      p6 = prom<V +>{
        f = ld f;
        f1 = force? f;
        checkMissing(f1);
        return f1;
      };
      r38 = dyn sQuote(p6);
      return r38;
    };
    r40 = dyn message[, , domain]("  Processing ", p7, NA_LGL);
    check L75() else D25();
  L96():
    r73 = dyn dir1[, pattern](".", "\\.[rR]$");
    check L97() else D38();
  D25():
    deopt 101 [i2, r40];
  D38():
    deopt 157 [r73];
  L75():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L76() else L77();
  L97():
    st Rfiles = r73;
    Rfiles = ld Rfiles;
    check L98() else D39();
  D39():
    deopt 159 [Rfiles];
  L15(i7, r42):
    r43 = `!`(r42);
    c7 = `as.logical`(r43);
    if c7 then L79() else L16();
  L76():
    Log5 = ld Log;
    check L78() else D26();
  L77():
    r41 = dyn base4(<sym Log>);
    goto L15(i2, r41);
  L98():
    Rfiles1 = force? Rfiles;
    checkMissing(Rfiles1);
    s1 = toForSeq(Rfiles1);
    l1 = length(s1);
    i18 = 0;
    goto L23(i18);
  D26():
    deopt 103 [i2, Log5];
  L16():
    goto L17(i7);
  L17(i10):
    paste = ldf paste;
    check L83() else D29();
  L23(i19):
    i20 = `+`.1(i19, 1);
    c10 = `<`.1(l1, i20);
    if c10 then L99() else L27();
  L78():
    Log6 = force? Log5;
    checkMissing(Log6);
    c6 = `==`(Log6, NULL);
    goto L15(i2, c6);
  L79():
    cat1 = ldf cat;
    check L80() else D27();
  D27():
    deopt 108 [i7];
  D29():
    deopt 120 [i10];
  L27():
    x1 = `[[`(s1, i20, NULL, TRUE);
    st f = x1;
    nfail2 = ld nfail;
    check L100() else D40();
  L80():
    p9 = prom<V +>{
      sQuote1 = ldf sQuote;
      p8 = prom<V +>{
        f2 = ld f;
        f3 = force? f2;
        checkMissing(f3);
        return f3;
      };
      r45 = dyn sQuote1(p8);
      return r45;
    };
    p10 = prom<V +>{
      Log7 = ld Log;
      Log8 = force? Log7;
      checkMissing(Log8);
      return Log8;
    };
    r48 = dyn cat1[, , , sep, file]("  Processing ", p9, "\n", "", p10);
    check L81() else D28();
  L83():
    p13 = prom<V +>{
      shQuote = ldf shQuote;
      p12 = prom<V +>{
        file_path1 = ldf `file.path`;
        p11 = prom<V +>{
          R_home1 = ldf `R.home`;
          r50 = dyn R_home1("bin");
          return r50;
        };
        r52 = dyn file_path1(p11, "R");
        return r52;
      };
      r54 = dyn shQuote(p12);
      return r54;
    };
    p15 = prom<V +>{
      shQuote1 = ldf shQuote;
      p14 = prom<V +>{
        f4 = ld f;
        f5 = force? f4;
        checkMissing(f5);
        return f5;
      };
      r57 = dyn shQuote1(p14);
      return r57;
    };
    r59 = dyn paste(p13, "CMD BATCH --no-timing --vanilla --no-echo", p15);
    check L84() else D30();
  L99():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L111() else L112();
  D28():
    deopt 116 [i7, r48];
  D30():
    deopt 124 [i10, r59];
  D40():
    deopt 161 [i20, nfail2];
  L28(r81):
    r82 = `!`(r81);
    c19 = `as.logical`(r82);
    if c19 then L114() else L29();
  L81():
    goto L17(i7);
  L84():
    st cmd = r59;
    system = ldf system;
    check L85() else D31();
  L100():
    nfail3 = force? nfail2;
    checkMissing(nfail3);
    runone = ldf runone;
    check L101() else D41();
  L111():
    Log9 = ld Log;
    check L113() else D46();
  L112():
    r80 = dyn base5(<sym Log>);
    goto L28(r80);
  D31():
    deopt 127 [i10];
  D41():
    deopt 163 [i20, nfail3];
  D46():
    deopt 184 [Log9];
  L29():
    goto L30();
  L30():
    nfail8 = ld nfail;
    check L118() else D49();
  L85():
    p16 = prom<V +>{
      cmd = ld cmd;
      cmd1 = force? cmd;
      checkMissing(cmd1);
      return cmd1;
    };
    r61 = dyn system(p16);
    check L86() else D32();
  L101():
    p21 = prom<V +>{
      f10 = ld f;
      f11 = force? f10;
      checkMissing(f11);
      return f11;
    };
    r75 = dyn runone(p21);
    check L102() else D42();
  L113():
    Log10 = force? Log9;
    checkMissing(Log10);
    c18 = `==`(Log10, NULL);
    goto L28(c18);
  L114():
    close = ldf close;
    check L115() else D47();
  D32():
    deopt 129 [i10, r61];
  D42():
    deopt 165 [i20, nfail3, r75];
  D47():
    deopt 189 [];
  D49():
    deopt 194 [nfail8];
  L86():
    c8 = `as.logical`(r61);
    if c8 then L87() else L18();
  L102():
    r76 = `+`(nfail3, r75);
    st nfail = r76;
    nfail4 = ld nfail;
    check L103() else D43();
  L115():
    p22 = prom<V +>{
      Log11 = ld Log;
      Log12 = force? Log11;
      checkMissing(Log12);
      return Log12;
    };
    r84 = dyn close(p22);
    check L116() else D48();
  L118():
    nfail9 = force? nfail8;
    checkMissing(nfail9);
    popenv;
    return nfail9;
  D43():
    deopt 168 [i20, nfail4];
  D48():
    deopt 191 [r84];
  L18():
    goto L21(i10);
  L21(i17):
    goto L14(i17);
  L87():
    nfail = ld nfail;
    check L88() else D33();
  L103():
    nfail5 = force? nfail4;
    checkMissing(nfail5);
    r77 = `>`(nfail5, 0.0);
    c11 = `as.logical`(r77);
    if c11 then L104() else L24(i20, c11);
  L116():
    goto L30();
  D33():
    deopt 130 [i10, nfail];
  L24(i24, c13):
    c17 = `as.logical`(c13);
    if c17 then L107() else L25();
  L88():
    nfail1 = force? nfail;
    checkMissing(nfail1);
    r62 = `+`(nfail1, 1);
    st nfail = r62;
    file_rename = ldf `file.rename`;
    check L89() else D34();
  L104():
    stop_on_error3 = ld stop_on_error;
    check L105() else D44();
  D34():
    deopt 136 [i10];
  D44():
    deopt 172 [i20, c11, stop_on_error3];
  L25():
    goto L23(i24);
  L89():
    p18 = prom<V +>{
      paste1 = ldf paste0;
      p17 = prom<V +>{
        f6 = ld f;
        f7 = force? f6;
        checkMissing(f7);
        return f7;
      };
      r64 = dyn paste1(p17, ".Rout");
      return r64;
    };
    p20 = prom<V +>{
      paste2 = ldf paste0;
      p19 = prom<V +>{
        f8 = ld f;
        f9 = force? f8;
        checkMissing(f9);
        return f9;
      };
      r67 = dyn paste2(p19, ".Rout.fail");
      return r67;
    };
    r69 = dyn file_rename(p18, p20);
    check L90() else D35();
  L105():
    stop_on_error4 = force? stop_on_error3;
    checkMissing(stop_on_error4);
    c14 = `as.logical`(stop_on_error4);
    c15 = `&&`(c11, c14);
    goto L24(i20, c15);
  L107():
    nfail6 = ld nfail;
    check L108() else D45();
  D35():
    deopt 139 [i10, r69];
  D45():
    deopt 175 [i24, nfail6];
  L90():
    stop_on_error1 = ld stop_on_error;
    check L91() else D36();
  L108():
    nfail7 = force? nfail6;
    checkMissing(nfail7);
    popenv;
    return nfail7;
  D36():
    deopt 140 [i10, stop_on_error1];
  L91():
    stop_on_error2 = force? stop_on_error1;
    checkMissing(stop_on_error2);
    c9 = `as.logical`(stop_on_error2);
    if c9 then L92() else L19();
  L19():
    goto L21(i10);
  L92():
    popenv;
    return 1;
  }
}
fun inner3461457245(t1, t2, Log) {
  (reg t1:*, reg t2:*, reg Log:*) -+> V { var t1:*, var t2:*, var Log:*, reg t3:*, reg t4:V, reg t5:*, reg t6:V, reg r:V, reg td:*, reg td1:V, reg c:L, reg td3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r1:V, reg td4:*, reg td5:V, reg r2:V, reg c1:L, reg td6:*, reg td7:V, reg c2:L, reg td9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r4:V, reg r5:V, reg c3:L, reg td10:*, reg td11:V, reg r6:V, reg WINDOWS:*, reg WINDOWS1:V, reg c4:L, reg sprintf:cls, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg round:cls, reg r9:V, reg p:p(V +), reg r11:V, reg r12:V, reg sprintf1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg round1:cls, reg r15:V, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg round2:cls, reg r19:V, reg p2:p(V +), reg r21:V, reg r22:V, reg WINDOWS2:*, reg WINDOWS3:V, reg c5:L, reg sprintf2:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg round3:cls, reg r25:V, reg p3:p(V +), reg r27:V, reg sprintf3:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg round4:cls, reg r30:V, reg p4:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg round5:cls, reg r34:V, reg p5:p(V +), reg r36:V, reg message:cls, reg td12:*, reg td13:V, reg p6:p(V +), reg r38:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg Log1:*, reg Log2:V, reg c6:V, reg r41:V, reg c7:L, reg cat:cls, reg td14:*, reg td15:V, reg p7:p(V +), reg Log3:*, reg Log4:V, reg p8:p(V +), reg r44:V |
    mkenv;
    st t1 = t1;
    st t2 = t2;
    st Log = Log;
    t3 = ld t2;
    check L11() else D0();
  D0():
    deopt 0 [t3];
  L11():
    t4 = force? t3;
    checkMissing(t4);
    t5 = ld t1;
    check L12() else D1();
  D1():
    deopt 1 [t4, t5];
  L12():
    t6 = force? t5;
    checkMissing(t6);
    r = `-`(t4, t6);
    st td = r;
    td = ld td;
    check L13() else D2();
  D2():
    deopt 5 [td];
  L13():
    td1 = force? td;
    checkMissing(td1);
    c = `is.object`(td1);
    if c then L14() else L15(td1);
  L0(dx1):
    td4 = ld td0;
    check L17() else D3();
  L14():
    dr = tryDispatchBuiltin.1("[", td1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(td3):
    __ = ldf `[` in base;
    r1 = dyn __(td3, 3);
    goto L0(r1);
  D3():
    deopt 9 [dx1, td4];
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L17():
    td5 = force? td4;
    checkMissing(td5);
    r2 = `<`(dx1, td5);
    c1 = `as.logical`(r2);
    if c1 then L18() else L1();
  L1():
    td6 = ld td;
    check L20() else D4();
  L2():
    message = ldf message;
    check L41() else D16();
  L18():
    st td2 = "";
    goto L2();
  D4():
    deopt 15 [td6];
  D16():
    deopt 55 [];
  L20():
    td7 = force? td6;
    checkMissing(td7);
    c2 = `is.object`(td7);
    if c2 then L21() else L22(td7);
  L41():
    p6 = prom<V +>{
      td12 = ld td2;
      td13 = force? td12;
      checkMissing(td13);
      return td13;
    };
    r38 = dyn message[, domain](p6, NA_LGL);
    check L42() else D17();
  D17():
    deopt 59 [r38];
  L3(dx3):
    r5 = `>`(dx3, 600.0);
    c3 = `as.logical`(r5);
    if c3 then L24() else L4();
  L21():
    dr2 = tryDispatchBuiltin.1("[", td7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L23() else L22(dr2);
  L22(td9):
    __1 = ldf `[` in base;
    r4 = dyn __1(td9, 3);
    goto L3(r4);
  L42():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L43() else L44();
  L4():
    WINDOWS2 = ld WINDOWS;
    check L34() else D11();
  L7(r22):
    st td2 = r22;
    goto L2();
  L9(r40):
    r41 = `!`(r40);
    c7 = `as.logical`(r41);
    if c7 then L46() else L10();
  L23():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L24():
    td10 = ld td;
    check L25() else D5();
  L43():
    Log1 = ld Log;
    check L45() else D18();
  L44():
    r39 = dyn base6(<sym Log>);
    goto L9(r39);
  D5():
    deopt 22 [td10];
  D11():
    deopt 40 [WINDOWS2];
  D18():
    deopt 61 [Log1];
  L10():
    invisible.0();
    popenv;
    return NULL;
  L25():
    td11 = force? td10;
    checkMissing(td11);
    r6 = `/`(td11, 60.0);
    st td = r6;
    WINDOWS = ld WINDOWS;
    check L26() else D6();
  L34():
    WINDOWS3 = force? WINDOWS2;
    checkMissing(WINDOWS3);
    c5 = `as.logical`(WINDOWS3);
    if c5 then L35() else L8();
  L45():
    Log2 = force? Log1;
    checkMissing(Log2);
    c6 = `==`(Log2, NULL);
    goto L9(c6);
  L46():
    cat = ldf cat;
    check L47() else D19();
  D6():
    deopt 27 [WINDOWS];
  D19():
    deopt 66 [];
  L8():
    sprintf3 = ldf sprintf;
    check L39() else D14();
  L26():
    WINDOWS1 = force? WINDOWS;
    checkMissing(WINDOWS1);
    c4 = `as.logical`(WINDOWS1);
    if c4 then L27() else L5();
  L35():
    sprintf2 = ldf sprintf;
    check L36() else D12();
  L47():
    p7 = prom<V +>{
      td14 = ld td2;
      td15 = force? td14;
      checkMissing(td15);
      return td15;
    };
    p8 = prom<V +>{
      Log3 = ld Log;
      Log4 = force? Log3;
      checkMissing(Log4);
      return Log4;
    };
    r44 = dyn cat[, , sep, file](p7, "\n", "", p8);
    check L48() else D20();
  D12():
    deopt 43 [];
  D14():
    deopt 48 [];
  D20():
    deopt 73 [r44];
  L5():
    sprintf1 = ldf sprintf;
    check L31() else D9();
  L6(r12):
    goto L7(r12);
  L27():
    sprintf = ldf sprintf;
    check L28() else D7();
  L36():
    p3 = prom<V +>{
      sym3 = ldf round;
      base3 = ldf round in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      round3 = ldf round in base;
      r25 = dyn round3(<lang `[`(td, 3)>);
      goto L0(r25);
    L2():
      r23 = dyn base3(<lang `[`(td, 3)>);
      goto L0(r23);
    };
    r27 = dyn sprintf2(" [%ds]", p3);
    check L37() else D13();
  L39():
    p4 = prom<V +>{
      sym4 = ldf round;
      base4 = ldf round in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r29):
      return r29;
    L1():
      round4 = ldf round in base;
      r30 = dyn round4(<lang sum(`[`(td, `-`(3)))>);
      goto L0(r30);
    L2():
      r28 = dyn base4(<lang sum(`[`(td, `-`(3)))>);
      goto L0(r28);
    };
    p5 = prom<V +>{
      sym5 = ldf round;
      base5 = ldf round in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      round5 = ldf round in base;
      r34 = dyn round5(<lang `[`(td, 3)>);
      goto L0(r34);
    L2():
      r32 = dyn base5(<lang `[`(td, 3)>);
      goto L0(r32);
    };
    r36 = dyn sprintf3(" [%ds/%ds]", p4, p5);
    check L40() else D15();
  L48():
    popenv;
    return r44;
  D7():
    deopt 30 [];
  D9():
    deopt 35 [];
  D13():
    deopt 46 [r27];
  D15():
    deopt 52 [r36];
  L28():
    p = prom<V +>{
      sym = ldf round;
      base = ldf round in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r8):
      return r8;
    L1():
      round = ldf round in base;
      r9 = dyn round(<lang `[`(td, 3)>);
      goto L0(r9);
    L2():
      r7 = dyn base(<lang `[`(td, 3)>);
      goto L0(r7);
    };
    r11 = dyn sprintf(" [%dm]", p);
    check L29() else D8();
  L31():
    p1 = prom<V +>{
      sym1 = ldf round;
      base1 = ldf round in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      round1 = ldf round in base;
      r15 = dyn round1(<lang sum(`[`(td, `-`(3)))>);
      goto L0(r15);
    L2():
      r13 = dyn base1(<lang sum(`[`(td, `-`(3)))>);
      goto L0(r13);
    };
    p2 = prom<V +>{
      sym2 = ldf round;
      base2 = ldf round in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      round2 = ldf round in base;
      r19 = dyn round2(<lang `[`(td, 3)>);
      goto L0(r19);
    L2():
      r17 = dyn base2(<lang `[`(td, 3)>);
      goto L0(r17);
    };
    r21 = dyn sprintf1(" [%dm/%dm]", p1, p2);
    check L32() else D10();
  L37():
    goto L7(r27);
  L40():
    goto L7(r36);
  D8():
    deopt 33 [r11];
  D10():
    deopt 39 [r21];
  L29():
    goto L6(r11);
  L32():
    goto L6(r21);
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg message:cls, reg gettextf:cls, reg sQuote:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg Log:*, reg Log1:V, reg c:V, reg r8:V, reg c1:L, reg cat:cls, reg sQuote1:cls, reg f3:*, reg f4:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg Log2:*, reg Log3:V, reg p5:p(V +), reg r13:V, reg sub:cls, reg paste0:cls, reg f5:*, reg f6:V, reg p6:p(V +), reg r16:V, reg p7:p(V +), reg r18:V, reg paste1:cls, reg shQuote:cls, reg file_path:cls, reg R_home:cls, reg r19:V, reg p8:p(V +), reg r21:V, reg p9:p(V +), reg r23:V, reg p10:p(V +), reg use_valgrind:*, reg use_valgrind1:V, reg c2:L, reg p11:p(V +), reg shQuote1:cls, reg f7:*, reg f8:V, reg p12:p(V +), reg r27:V, reg p13:p(V +), reg shQuote2:cls, reg outfile:*, reg outfile1:V, reg p14:p(V +), reg r30:V, reg p15:p(V +), reg r32:V, reg WINDOWS:*, reg WINDOWS1:V, reg c3:L, reg Sys_setenv:cls, reg r33:V, reg Sys_setenv1:cls, reg r34:V, reg paste2:cls, reg cmd:*, reg cmd1:V, reg p16:p(V +), reg r37:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r38:V, reg r39:V, reg proc_time:cls, reg r40:V, reg system:cls, reg cmd2:*, reg cmd3:V, reg p17:p(V +), reg tlim:*, reg tlim1:V, reg p18:p(V +), reg r43:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r44:V, reg r45:V, reg proc_time1:cls, reg r46:V, reg print_time:cls, reg t1:*, reg t2:V, reg p19:p(V +), reg t3:*, reg t4:V, reg p20:p(V +), reg Log4:*, reg Log5:V, reg p21:p(V +), reg r50:V, reg WINDOWS2:*, reg WINDOWS3:V, reg r51:V, reg c4:L, reg c6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r52:V, reg c9:L, reg r53:V, reg theta:*, reg theta1:V, reg is_na:cls, reg r54:V, reg r55:V, reg c10:L, reg c11:V, reg c13:L, reg t5:*, reg t6:V, reg t7:*, reg t8:V, reg r56:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r57:V, reg r58:V, reg td:*, reg td1:V, reg c14:L, reg td3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r59:V, reg sum:cls, reg r60:V, reg cpu:*, reg cpu1:V, reg pmax:cls, reg theta2:*, reg theta3:V, reg td4:*, reg td5:V, reg c15:L, reg theta5:V, reg td7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg theta7:V, reg dx3:V, reg __1:cls, reg r61:V, reg r62:V, reg p22:p(V +), reg r64:V, reg r65:V, reg c16:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r66:V, reg r67:V, reg round:cls, reg r68:V, reg sprintf:cls, reg sQuote2:cls, reg f9:*, reg f10:V, reg p23:p(V +), reg r70:V, reg p24:p(V +), reg ratio:*, reg ratio1:V, reg p25:p(V +), reg r73:V, reg cat1:cls, reg msg:*, reg msg1:V, reg p26:p(V +), reg r75:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r76:V, reg r77:V, reg Log6:*, reg Log7:V, reg c17:V, reg r78:V, reg c18:L, reg cat2:cls, reg msg2:*, reg msg3:V, reg p27:p(V +), reg Log8:*, reg Log9:V, reg p28:p(V +), reg r81:V, reg r82:V, reg r83:V, reg res:*, reg res1:V, reg c19:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r85:V, reg r86:V, reg res2:*, reg res3:V, reg identical:cls, reg r87:V, reg c20:L, reg report_timeout:cls, reg tlim2:*, reg tlim3:V, reg p29:p(V +), reg r89:V, reg file_rename:cls, reg outfile2:*, reg outfile3:V, reg p30:p(V +), reg paste3:cls, reg outfile4:*, reg outfile5:V, reg p31:p(V +), reg r93:V, reg p32:p(V +), reg r95:V, reg paste4:cls, reg outfile6:*, reg outfile7:V, reg p33:p(V +), reg r99:V, reg file_exists:cls, reg savefile:*, reg savefile1:V, reg p34:p(V +), reg r101:V, reg c21:L, reg message1:cls, reg gettextf1:cls, reg sQuote3:cls, reg outfile8:*, reg outfile9:V, reg p35:p(V +), reg r103:V, reg p36:p(V +), reg sQuote4:cls, reg savefile2:*, reg savefile3:V, reg p37:p(V +), reg r106:V, reg p38:p(V +), reg r108:V, reg p39:p(V +), reg r110:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r111:V, reg r112:V, reg Log10:*, reg Log11:V, reg c22:V, reg r113:V, reg c23:L, reg cat3:cls, reg sQuote5:cls, reg outfile10:*, reg outfile11:V, reg p40:p(V +), reg r115:V, reg p41:p(V +), reg sQuote6:cls, reg savefile4:*, reg savefile5:V, reg p42:p(V +), reg r118:V, reg p43:p(V +), reg Log12:*, reg Log13:V, reg p44:p(V +), reg r121:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r123:V, reg r124:V, reg Log14:*, reg Log15:V, reg c24:V, reg r125:V, reg c25:L, reg Rdiff:cls, reg outfile12:*, reg outfile13:V, reg p45:p(V +), reg savefile6:*, reg savefile7:V, reg p46:p(V +), reg r128:V, reg writeLines:cls, reg ans:*, reg ans1:V, reg c26:L, reg ans3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r129:V, reg p47:p(V +), reg r131:V, reg writeLines1:cls, reg ans4:*, reg ans5:V, reg c27:L, reg ans7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r132:V, reg p48:p(V +), reg Log16:*, reg Log17:V, reg p49:p(V +), reg r135:V, reg ans8:*, reg ans9:V, reg c28:L, reg ans11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r136:V, reg Rdiff1:cls, reg outfile14:*, reg outfile15:V, reg p50:p(V +), reg savefile8:*, reg savefile9:V, reg p51:p(V +), reg r139:V, reg res4:*, reg res5:V, reg r140:V, reg c29:L, reg message2:cls, reg r141:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r142:V, reg r143:V, reg Log18:*, reg Log19:V, reg c30:V, reg r144:V, reg c31:L, reg cat4:cls, reg Log20:*, reg Log21:V, reg p52:p(V +), reg r146:V, reg r147:V, reg r148:V |
    mkenv;
    st f = f;
    message = ldf message;
    check L37() else D0();
  D0():
    deopt 1 [];
  L37():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        sQuote = ldf sQuote;
        p = prom<V +>{
          f1 = ld f;
          f2 = force? f1;
          checkMissing(f2);
          return f2;
        };
        r1 = dyn sQuote(p);
        return r1;
      };
      r3 = dyn gettextf("  Running %s", p1);
      return r3;
    };
    r5 = dyn message[, appendLF, domain](p2, FALSE, NA_LGL);
    check L38() else D1();
  D1():
    deopt 7 [r5];
  L38():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L39() else L40();
  L0(r7):
    r8 = `!`(r7);
    c1 = `as.logical`(r8);
    if c1 then L42() else L1();
  L39():
    Log = ld Log;
    check L41() else D2();
  L40():
    r6 = dyn base(<sym Log>);
    goto L0(r6);
  D2():
    deopt 9 [Log];
  L1():
    goto L2();
  L2():
    sub = ldf sub;
    check L46() else D5();
  L41():
    Log1 = force? Log;
    checkMissing(Log1);
    c = `==`(Log1, NULL);
    goto L0(c);
  L42():
    cat = ldf cat;
    check L43() else D3();
  D3():
    deopt 14 [];
  D5():
    deopt 25 [];
  L43():
    p4 = prom<V +>{
      sQuote1 = ldf sQuote;
      p3 = prom<V +>{
        f3 = ld f;
        f4 = force? f3;
        checkMissing(f4);
        return f4;
      };
      r10 = dyn sQuote1(p3);
      return r10;
    };
    p5 = prom<V +>{
      Log2 = ld Log;
      Log3 = force? Log2;
      checkMissing(Log3);
      return Log3;
    };
    r13 = dyn cat[, , sep, file]("  Running ", p4, "", p5);
    check L44() else D4();
  L46():
    p7 = prom<V +>{
      paste0 = ldf paste0;
      p6 = prom<V +>{
        f5 = ld f;
        f6 = force? f5;
        checkMissing(f6);
        return f6;
      };
      r16 = dyn paste0(p6, "out");
      return r16;
    };
    r18 = dyn sub("rout$", "Rout", p7);
    check L47() else D6();
  D4():
    deopt 21 [r13];
  D6():
    deopt 29 [r18];
  L44():
    goto L2();
  L47():
    st outfile = r18;
    paste1 = ldf paste;
    check L48() else D7();
  D7():
    deopt 32 [];
  L48():
    p10 = prom<V +>{
      shQuote = ldf shQuote;
      p9 = prom<V +>{
        file_path = ldf `file.path`;
        p8 = prom<V +>{
          R_home = ldf `R.home`;
          r19 = dyn R_home("bin");
          return r19;
        };
        r21 = dyn file_path(p8, "R");
        return r21;
      };
      r23 = dyn shQuote(p9);
      return r23;
    };
    p11 = prom<V +>{
      use_valgrind = ld use_valgrind;
      use_valgrind1 = force? use_valgrind;
      checkMissing(use_valgrind1);
      c2 = `as.logical`(use_valgrind1);
      if c2 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      return "--debugger=valgrind";
    };
    p13 = prom<V +>{
      shQuote1 = ldf shQuote;
      p12 = prom<V +>{
        f7 = ld f;
        f8 = force? f7;
        checkMissing(f8);
        return f8;
      };
      r27 = dyn shQuote1(p12);
      return r27;
    };
    p15 = prom<V +>{
      shQuote2 = ldf shQuote;
      p14 = prom<V +>{
        outfile = ld outfile;
        outfile1 = force? outfile;
        checkMissing(outfile1);
        return outfile1;
      };
      r30 = dyn shQuote2(p14);
      return r30;
    };
    r32 = dyn paste1(p10, "CMD BATCH --vanilla", p11, p13, p15);
    check L49() else D8();
  D8():
    deopt 38 [r32];
  L49():
    st cmd = r32;
    WINDOWS = ld WINDOWS;
    check L50() else D9();
  D9():
    deopt 40 [WINDOWS];
  L50():
    WINDOWS1 = force? WINDOWS;
    checkMissing(WINDOWS1);
    c3 = `as.logical`(WINDOWS1);
    if c3 then L51() else L3();
  L3():
    paste2 = ldf paste;
    check L57() else D14();
  L4():
    sym1 = ldf `proc.time`;
    base1 = ldf `proc.time` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L59() else L60();
  L51():
    Sys_setenv = ldf `Sys.setenv`;
    check L52() else D10();
  D10():
    deopt 43 [];
  D14():
    deopt 53 [];
  L5(r39):
    st t1 = r39;
    system = ldf system;
    check L62() else D17();
  L52():
    r33 = dyn Sys_setenv[LANGUAGE]("C");
    check L53() else D11();
  L57():
    p16 = prom<V +>{
      cmd = ld cmd;
      cmd1 = force? cmd;
      checkMissing(cmd1);
      return cmd1;
    };
    r37 = dyn paste2("LANGUAGE=C", "R_TESTS=startup.Rs", p16);
    check L58() else D15();
  L59():
    proc_time = ldf `proc.time` in base;
    r40 = dyn proc_time();
    check L61() else D16();
  L60():
    r38 = dyn base1();
    goto L5(r38);
  D11():
    deopt 46 [r33];
  D15():
    deopt 57 [r37];
  D16():
    deopt 62 [r40];
  D17():
    deopt 65 [];
  L53():
    Sys_setenv1 = ldf `Sys.setenv`;
    check L54() else D12();
  L58():
    st cmd = r37;
    goto L4();
  L61():
    goto L5(r40);
  L62():
    p17 = prom<V +>{
      cmd2 = ld cmd;
      cmd3 = force? cmd2;
      checkMissing(cmd3);
      return cmd3;
    };
    p18 = prom<V +>{
      tlim = ld tlim;
      tlim1 = force? tlim;
      checkMissing(tlim1);
      return tlim1;
    };
    r43 = dyn system[, timeout](p17, p18);
    check L63() else D18();
  D12():
    deopt 48 [];
  D18():
    deopt 69 [r43];
  L54():
    r34 = dyn Sys_setenv1[R_TESTS]("startup.Rs");
    check L55() else D13();
  L63():
    st res = r43;
    sym2 = ldf `proc.time`;
    base2 = ldf `proc.time` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L64() else L65();
  D13():
    deopt 51 [r34];
  L6(r45):
    st t2 = r45;
    print_time = ldf print_time;
    check L67() else D20();
  L55():
    goto L4();
  L64():
    proc_time1 = ldf `proc.time` in base;
    r46 = dyn proc_time1();
    check L66() else D19();
  L65():
    r44 = dyn base2();
    goto L6(r44);
  D19():
    deopt 74 [r46];
  D20():
    deopt 77 [];
  L66():
    goto L6(r46);
  L67():
    p19 = prom<V +>{
      t1 = ld t1;
      t2 = force? t1;
      checkMissing(t2);
      return t2;
    };
    p20 = prom<V +>{
      t3 = ld t2;
      t4 = force? t3;
      checkMissing(t4);
      return t4;
    };
    p21 = prom<V +>{
      Log4 = ld Log;
      Log5 = force? Log4;
      checkMissing(Log5);
      return Log5;
    };
    r50 = dyn print_time(p19, p20, p21);
    check L68() else D21();
  D21():
    deopt 81 [r50];
  L68():
    WINDOWS2 = ld WINDOWS;
    check L69() else D22();
  D22():
    deopt 82 [WINDOWS2];
  L69():
    WINDOWS3 = force? WINDOWS2;
    checkMissing(WINDOWS3);
    r51 = `!`(WINDOWS3);
    c4 = `as.logical`(r51);
    if c4 then L70() else L7(c4);
  L7(c6):
    c13 = `as.logical`(c6);
    if c13 then L76() else L9();
  L70():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L71() else L72();
  L8(c9, r53):
    r55 = `!`(r53);
    c10 = `as.logical`(r55);
    c11 = `&&`(c9, c10);
    goto L7(c11);
  L9():
    goto L18();
  L18():
    res = ld res;
    check L105() else D39();
  L71():
    theta = ld theta;
    check L73() else D23();
  L72():
    r52 = dyn base3(<sym theta>);
    goto L8(c4, r52);
  L76():
    t5 = ld t2;
    check L77() else D25();
  D23():
    deopt 87 [c4, theta];
  D25():
    deopt 93 [t5];
  D39():
    deopt 147 [res];
  L73():
    theta1 = force? theta;
    checkMissing(theta1);
    is_na = ldf `is.na` in base;
    r54 = dyn is_na(theta1);
    check L74() else D24();
  L77():
    t6 = force? t5;
    checkMissing(t6);
    t7 = ld t1;
    check L78() else D26();
  L105():
    res1 = force? res;
    checkMissing(res1);
    c19 = `as.logical`(res1);
    if c19 then L106() else L19();
  D24():
    deopt 90 [c4, r54];
  D26():
    deopt 94 [t6, t7];
  L19():
    paste4 = ldf paste0;
    check L119() else D46();
  L74():
    goto L8(c4, r54);
  L78():
    t8 = force? t7;
    checkMissing(t8);
    r56 = `-`(t6, t8);
    st td = r56;
    sym4 = ldf sum;
    base4 = ldf sum in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L79() else L80();
  L106():
    sym7 = ldf identical;
    base7 = ldf identical in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L107() else L108();
  D46():
    deopt 180 [];
  L10(r58):
    st cpu = r58;
    cpu = ld cpu;
    check L86() else D29();
  L20(r86):
    c20 = `as.logical`(r86);
    if c20 then L111() else L21();
  L79():
    td = ld td;
    check L81() else D27();
  L80():
    r57 = dyn base4(<lang `[`(td, `-`(3))>);
    goto L10(r57);
  L107():
    res2 = ld res;
    check L109() else D40();
  L108():
    r85 = dyn base7(<sym res>, 124);
    goto L20(r85);
  L119():
    p33 = prom<V +>{
      outfile6 = ld outfile;
      outfile7 = force? outfile6;
      checkMissing(outfile7);
      return outfile7;
    };
    r99 = dyn paste4(p33, ".save");
    check L120() else D47();
  D27():
    deopt 100 [td];
  D29():
    deopt 108 [cpu];
  D40():
    deopt 151 [res2];
  D47():
    deopt 183 [r99];
  L21():
    goto L22();
  L22():
    file_rename = ldf `file.rename`;
    check L115() else D44();
  L81():
    td1 = force? td;
    checkMissing(td1);
    c14 = `is.object`(td1);
    if c14 then L82() else L83(td1);
  L86():
    cpu1 = force? cpu;
    checkMissing(cpu1);
    pmax = ldf pmax;
    check L87() else D30();
  L109():
    res3 = force? res2;
    checkMissing(res3);
    identical = ldf identical in base;
    r87 = dyn identical(res3, 124, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L110() else D41();
  L111():
    report_timeout = ldf report_timeout;
    check L112() else D42();
  L120():
    st savefile = r99;
    file_exists = ldf `file.exists`;
    check L121() else D48();
  D30():
    deopt 110 [cpu1];
  D41():
    deopt 162 [r87];
  D42():
    deopt 164 [];
  D44():
    deopt 170 [];
  D48():
    deopt 186 [];
  L11(dx1):
    sum = ldf sum in base;
    r60 = dyn sum(dx1);
    check L85() else D28();
  L82():
    dr = tryDispatchBuiltin.1("[", td1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L84() else L83(dr);
  L83(td3):
    __ = ldf `[` in base;
    r59 = dyn __(td3, -3);
    goto L11(r59);
  L87():
    p22 = prom<V +>{
      theta2 = ld theta;
      theta3 = force? theta2;
      checkMissing(theta3);
      td4 = ld td;
      td5 = force? td4;
      checkMissing(td5);
      c15 = `is.object`(td5);
      if c15 then L1() else L2(theta3, td5);
    L0(theta7, dx3):
      r62 = `*`(theta7, dx3);
      return r62;
    L1():
      dr2 = tryDispatchBuiltin.1("[", td5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(theta3, dr2);
    L2(theta5, td7):
      __1 = ldf `[` in base;
      r61 = dyn __1(td7, 3);
      goto L0(theta5, r61);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(theta3, dx2);
    };
    r64 = dyn pmax(p22, 1.0);
    check L88() else D31();
  L110():
    goto L20(r87);
  L112():
    p29 = prom<V +>{
      tlim2 = ld tlim;
      tlim3 = force? tlim2;
      checkMissing(tlim3);
      return tlim3;
    };
    r89 = dyn report_timeout(p29);
    check L113() else D43();
  L115():
    p30 = prom<V +>{
      outfile2 = ld outfile;
      outfile3 = force? outfile2;
      checkMissing(outfile3);
      return outfile3;
    };
    p32 = prom<V +>{
      paste3 = ldf paste0;
      p31 = prom<V +>{
        outfile4 = ld outfile;
        outfile5 = force? outfile4;
        checkMissing(outfile5);
        return outfile5;
      };
      r93 = dyn paste3(p31, ".fail");
      return r93;
    };
    r95 = dyn file_rename(p30, p32);
    check L116() else D45();
  L121():
    p34 = prom<V +>{
      savefile = ld savefile;
      savefile1 = force? savefile;
      checkMissing(savefile1);
      return savefile1;
    };
    r101 = dyn file_exists(p34);
    check L122() else D49();
  D28():
    deopt 106 [r60];
  D31():
    deopt 113 [cpu1, r64];
  D43():
    deopt 166 [r89];
  D45():
    deopt 173 [r95];
  D49():
    deopt 188 [r101];
  L84():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L85():
    goto L10(r60);
  L88():
    r65 = `>=`(cpu1, r64);
    c16 = `as.logical`(r65);
    if c16 then L89() else L12();
  L113():
    goto L22();
  L116():
    popenv;
    return 1;
  L122():
    c21 = `as.logical`(r101);
    if c21 then L123() else L24();
  L12():
    goto L17(NULL);
  L17(r83):
    goto L18();
  L24():
    goto L36();
  L36():
    popenv;
    return 0;
  L89():
    sym5 = ldf round;
    base5 = ldf round in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L90() else L91();
  L123():
    message1 = ldf message;
    check L124() else D50();
  D50():
    deopt 190 [];
  L13(r67):
    st ratio = r67;
    sprintf = ldf sprintf;
    check L92() else D32();
  L90():
    round = ldf round in base;
    r68 = dyn round(<lang `/`(cpu, `[`(td, 3))>, 1);
    goto L13(r68);
  L91():
    r66 = dyn base5(<lang `/`(cpu, `[`(td, 3))>, 1);
    goto L13(r66);
  L124():
    p39 = prom<V +>{
      gettextf1 = ldf gettextf;
      p36 = prom<V +>{
        sQuote3 = ldf sQuote;
        p35 = prom<V +>{
          outfile8 = ld outfile;
          outfile9 = force? outfile8;
          checkMissing(outfile9);
          return outfile9;
        };
        r103 = dyn sQuote3(p35);
        return r103;
      };
      p38 = prom<V +>{
        sQuote4 = ldf sQuote;
        p37 = prom<V +>{
          savefile2 = ld savefile;
          savefile3 = force? savefile2;
          checkMissing(savefile3);
          return savefile3;
        };
        r106 = dyn sQuote4(p37);
        return r106;
      };
      r108 = dyn gettextf1("  Comparing %s to %s ...", p36, p38);
      return r108;
    };
    r110 = dyn message1[, appendLF, domain](p39, FALSE, NA_LGL);
    check L125() else D51();
  D32():
    deopt 120 [];
  D51():
    deopt 196 [r110];
  L92():
    p24 = prom<V +>{
      sQuote2 = ldf sQuote;
      p23 = prom<V +>{
        f9 = ld f;
        f10 = force? f9;
        checkMissing(f10);
        return f10;
      };
      r70 = dyn sQuote2(p23);
      return r70;
    };
    p25 = prom<V +>{
      ratio = ld ratio;
      ratio1 = force? ratio;
      checkMissing(ratio1);
      return ratio1;
    };
    r73 = dyn sprintf("Running R code in %s had CPU time %g times elapsed time\n", p24, p25);
    check L93() else D33();
  L125():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L126() else L127();
  D33():
    deopt 124 [r73];
  L25(r112):
    r113 = `!`(r112);
    c23 = `as.logical`(r113);
    if c23 then L129() else L26();
  L93():
    st msg = r73;
    cat1 = ldf cat;
    check L94() else D34();
  L126():
    Log10 = ld Log;
    check L128() else D52();
  L127():
    r111 = dyn base8(<sym Log>);
    goto L25(r111);
  D34():
    deopt 127 [];
  D52():
    deopt 198 [Log10];
  L26():
    goto L27();
  L27():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L133() else L134();
  L94():
    p26 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r75 = dyn cat1(p26);
    check L95() else D35();
  L128():
    Log11 = force? Log10;
    checkMissing(Log11);
    c22 = `==`(Log11, NULL);
    goto L25(c22);
  L129():
    cat3 = ldf cat;
    check L130() else D53();
  D35():
    deopt 129 [r75];
  D53():
    deopt 203 [];
  L28(r124):
    r125 = `!`(r124);
    c25 = `as.logical`(r125);
    if c25 then L136() else L29();
  L95():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L96() else L97();
  L130():
    p41 = prom<V +>{
      sQuote5 = ldf sQuote;
      p40 = prom<V +>{
        outfile10 = ld outfile;
        outfile11 = force? outfile10;
        checkMissing(outfile11);
        return outfile11;
      };
      r115 = dyn sQuote5(p40);
      return r115;
    };
    p43 = prom<V +>{
      sQuote6 = ldf sQuote;
      p42 = prom<V +>{
        savefile4 = ld savefile;
        savefile5 = force? savefile4;
        checkMissing(savefile5);
        return savefile5;
      };
      r118 = dyn sQuote6(p42);
      return r118;
    };
    p44 = prom<V +>{
      Log12 = ld Log;
      Log13 = force? Log12;
      checkMissing(Log13);
      return Log13;
    };
    r121 = dyn cat3[, , , , , sep, file]("  Comparing ", p41, " to ", p43, " ...", "", p44);
    check L131() else D54();
  L133():
    Log14 = ld Log;
    check L135() else D55();
  L134():
    r123 = dyn base9(<sym Log>);
    goto L28(r123);
  D54():
    deopt 213 [r121];
  D55():
    deopt 217 [Log14];
  L14(r77):
    r78 = `!`(r77);
    c18 = `as.logical`(r78);
    if c18 then L99() else L15();
  L29():
    Rdiff1 = ldf Rdiff;
    check L149() else D63();
  L30():
    res4 = ld res;
    check L151() else D65();
  L96():
    Log6 = ld Log;
    check L98() else D36();
  L97():
    r76 = dyn base6(<sym Log>);
    goto L14(r76);
  L131():
    goto L27();
  L135():
    Log15 = force? Log14;
    checkMissing(Log15);
    c24 = `==`(Log15, NULL);
    goto L28(c24);
  L136():
    Rdiff = ldf Rdiff;
    check L137() else D56();
  D36():
    deopt 131 [Log6];
  D56():
    deopt 222 [];
  D63():
    deopt 244 [];
  D65():
    deopt 250 [res4];
  L15():
    goto L16(NULL);
  L16(r82):
    goto L17(r82);
  L98():
    Log7 = force? Log6;
    checkMissing(Log7);
    c17 = `==`(Log7, NULL);
    goto L14(c17);
  L99():
    cat2 = ldf cat;
    check L100() else D37();
  L137():
    p45 = prom<V +>{
      outfile12 = ld outfile;
      outfile13 = force? outfile12;
      checkMissing(outfile13);
      return outfile13;
    };
    p46 = prom<V +>{
      savefile6 = ld savefile;
      savefile7 = force? savefile6;
      checkMissing(savefile7);
      return savefile7;
    };
    r128 = dyn Rdiff[, , , Log](p45, p46, TRUE, TRUE);
    check L138() else D57();
  L149():
    p50 = prom<V +>{
      outfile14 = ld outfile;
      outfile15 = force? outfile14;
      checkMissing(outfile15);
      return outfile15;
    };
    p51 = prom<V +>{
      savefile8 = ld savefile;
      savefile9 = force? savefile8;
      checkMissing(savefile9);
      return savefile9;
    };
    r139 = dyn Rdiff1(p50, p51, TRUE);
    check L150() else D64();
  L151():
    res5 = force? res4;
    checkMissing(res5);
    r140 = `!`(res5);
    c29 = `as.logical`(r140);
    if c29 then L152() else L31();
  D37():
    deopt 136 [];
  D57():
    deopt 228 [r128];
  D64():
    deopt 248 [r139];
  L31():
    goto L35(NULL);
  L35(r148):
    goto L36();
  L100():
    p27 = prom<V +>{
      msg2 = ld msg;
      msg3 = force? msg2;
      checkMissing(msg3);
      return msg3;
    };
    p28 = prom<V +>{
      Log8 = ld Log;
      Log9 = force? Log8;
      checkMissing(Log9);
      return Log9;
    };
    r81 = dyn cat2[, file](p27, p28);
    check L101() else D38();
  L138():
    st ans = r128;
    writeLines = ldf writeLines;
    check L139() else D58();
  L150():
    st res = r139;
    goto L30();
  L152():
    message2 = ldf message;
    check L153() else D66();
  D38():
    deopt 140 [r81];
  D58():
    deopt 231 [];
  D66():
    deopt 254 [];
  L101():
    goto L16(r81);
  L139():
    p47 = prom<V +>{
      ans = ld ans;
      ans1 = force? ans;
      checkMissing(ans1);
      c26 = `is.object`(ans1);
      if c26 then L1() else L2(ans1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", ans1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(ans3):
      r129 = `$`(ans3, <sym out>);
      goto L0(r129);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r131 = dyn writeLines(p47);
    check L140() else D59();
  L153():
    r141 = dyn message2(" OK");
    check L154() else D67();
  D59():
    deopt 233 [r131];
  D67():
    deopt 256 [r141];
  L140():
    writeLines1 = ldf writeLines;
    check L141() else D60();
  L154():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L155() else L156();
  D60():
    deopt 235 [];
  L32(r143):
    r144 = `!`(r143);
    c31 = `as.logical`(r144);
    if c31 then L158() else L33();
  L141():
    p48 = prom<V +>{
      ans4 = ld ans;
      ans5 = force? ans4;
      checkMissing(ans5);
      c27 = `is.object`(ans5);
      if c27 then L1() else L2(ans5);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", ans5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(ans7):
      r132 = `$`(ans7, <sym out>);
      goto L0(r132);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p49 = prom<V +>{
      Log16 = ld Log;
      Log17 = force? Log16;
      checkMissing(Log17);
      return Log17;
    };
    r135 = dyn writeLines1(p48, p49);
    check L142() else D61();
  L155():
    Log18 = ld Log;
    check L157() else D68();
  L156():
    r142 = dyn base10(<sym Log>);
    goto L32(r142);
  D61():
    deopt 238 [r135];
  D68():
    deopt 258 [Log18];
  L33():
    goto L34(NULL);
  L34(r147):
    goto L35(r147);
  L142():
    ans8 = ld ans;
    check L143() else D62();
  L157():
    Log19 = force? Log18;
    checkMissing(Log19);
    c30 = `==`(Log19, NULL);
    goto L32(c30);
  L158():
    cat4 = ldf cat;
    check L159() else D69();
  D62():
    deopt 239 [ans8];
  D69():
    deopt 263 [];
  L143():
    ans9 = force? ans8;
    checkMissing(ans9);
    c28 = `is.object`(ans9);
    if c28 then L145() else L146(ans9);
  L159():
    p52 = prom<V +>{
      Log20 = ld Log;
      Log21 = force? Log20;
      checkMissing(Log21);
      return Log21;
    };
    r146 = dyn cat4[, file](" OK\n", p52);
    check L160() else D70();
  D70():
    deopt 267 [r146];
  L144(dx9):
    st res = dx9;
    goto L30();
  L145():
    dr8 = tryDispatchBuiltin.1("$", ans9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L147() else L146(dr8);
  L146(ans11):
    r136 = `$`(ans11, <sym status>);
    goto L144(r136);
  L160():
    goto L34(r146);
  L147():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L144(dx8);
  }
}