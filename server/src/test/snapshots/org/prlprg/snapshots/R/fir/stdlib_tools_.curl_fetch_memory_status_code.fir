fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1794547501;
    st `.curl_fetch_memory_status_code` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1794547501(u, verbose, opts) {
  (reg u:*, reg verbose:*, reg opts:*) -+> V { var u:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, var opts:*, reg opts_isMissing:L, reg opts_orDefault:*, reg verbose1:*, reg verbose2:V, reg c:L, reg message:cls, reg sprintf:cls, reg u1:*, reg u2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg opts1:*, reg opts2:V, reg c1:V, reg c2:L, reg _curl_handle_default_opts:*, reg _curl_handle_default_opts1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg getOption:cls, reg r9:V, reg as_integer:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg timeout:*, reg timeout1:V, reg is_na:cls, reg r13:V, reg r14:V, reg c3:L, reg c5:V, reg timeout2:*, reg timeout3:V, reg r15:V, reg c6:L, reg c7:V, reg c9:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg opts3:*, reg opts4:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg timeout4:*, reg timeout5:V, reg timeout6:*, reg timeout7:V, reg list:cls, reg r20:V, reg c10:cls, reg r21:V, reg __:cls, reg r23:V, reg r24:cls, reg r25:V, reg __1:cls, reg r26:V, reg r27:cls, reg h:*, reg h1:V, reg p2:p(V +), reg opts5:*, reg opts6:V, reg p3:p(V +), reg r30:V, reg startsWith:cls, reg u3:*, reg u4:V, reg p4:p(V +), reg r32:V, reg c11:L, reg c13:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg c16:L, reg r34:V, reg Sys_getenv:cls, reg r35:V, reg nzchar:cls, reg r36:V, reg c17:L, reg c18:V, reg c20:L, reg __2:cls, reg r37:V, reg r38:cls, reg h2:*, reg h3:V, reg p5:p(V +), reg paste:cls, reg a:*, reg a1:V, reg p6:p(V +), reg r41:V, reg p7:p(V +), reg r43:V, reg tryCatch:cls, reg __3:cls, reg r45:V, reg r46:cls, reg u5:*, reg u6:V, reg p8:p(V +), reg h4:*, reg h5:V, reg p9:p(V +), reg r49:V, reg p10:p(V +), reg identity:*, reg identity1:V, reg p11:p(V +), reg r52:V, reg _curl_response_status_code:cls, reg g:*, reg g1:V, reg p12:p(V +), reg r54:V |
    mkenv;
    st u = u;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L0(FALSE) else L0(verbose);
  L0(verbose_orDefault):
    st verbose = verbose_orDefault;
    opts_isMissing = missing.0(opts);
    if opts_isMissing then L1(NULL) else L1(opts);
  L1(opts_orDefault):
    st opts = opts_orDefault;
    verbose1 = ld verbose;
    check L18() else D0();
  D0():
    deopt 0 [verbose1];
  L18():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c = `as.logical`(verbose2);
    if c then L19() else L2();
  L2():
    goto L3();
  L3():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L19():
    message = ldf message;
    check L20() else D1();
  D1():
    deopt 3 [];
  L4(r6):
    c2 = `as.logical`(r6);
    if c2 then L26() else L5();
  L20():
    p1 = prom<V +>{
      sprintf = ldf sprintf;
      p = prom<V +>{
        u1 = ld u;
        u2 = force? u1;
        checkMissing(u2);
        return u2;
      };
      r1 = dyn sprintf("processing %s", p);
      return r1;
    };
    r3 = dyn message(p1);
    check L21() else D2();
  L23():
    opts1 = ld opts;
    check L25() else D3();
  L24():
    r5 = dyn base(<sym opts>);
    goto L4(r5);
  D2():
    deopt 5 [r3];
  D3():
    deopt 9 [opts1];
  L5():
    goto L6();
  L6():
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L21():
    goto L3();
  L25():
    opts2 = force? opts1;
    checkMissing(opts2);
    c1 = `==`(opts2, NULL);
    goto L4(c1);
  L26():
    _curl_handle_default_opts = ld `.curl_handle_default_opts`;
    check L27() else D4();
  D4():
    deopt 12 [_curl_handle_default_opts];
  L7(r8):
    st timeout = r8;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L27():
    _curl_handle_default_opts1 = force? _curl_handle_default_opts;
    checkMissing(_curl_handle_default_opts1);
    st opts = _curl_handle_default_opts1;
    goto L6();
  L29():
    getOption = ldf getOption;
    check L31() else D5();
  L30():
    r7 = dyn base1(<lang getOption("timeout")>);
    goto L7(r7);
  D5():
    deopt 20 [];
  L8(r12):
    r14 = `!`(r12);
    c3 = `as.logical`(r14);
    if c3 then L38() else L9(c3);
  L31():
    r9 = dyn getOption("timeout");
    check L32() else D6();
  L34():
    timeout = ld timeout;
    check L36() else D8();
  L35():
    r11 = dyn base2(<sym timeout>);
    goto L8(r11);
  D6():
    deopt 22 [r9];
  D8():
    deopt 28 [timeout];
  L9(c5):
    c9 = `as.logical`(c5);
    if c9 then L41() else L10();
  L32():
    as_integer = ldf `as.integer` in base;
    r10 = dyn as_integer(r9);
    check L33() else D7();
  L36():
    timeout1 = force? timeout;
    checkMissing(timeout1);
    is_na = ldf `is.na` in base;
    r13 = dyn is_na(timeout1);
    check L37() else D9();
  L38():
    timeout2 = ld timeout;
    check L39() else D10();
  D7():
    deopt 24 [r10];
  D9():
    deopt 31 [r13];
  D10():
    deopt 33 [c3, timeout2];
  L10():
    goto L13();
  L13():
    __ = ldf `::`;
    check L52() else D16();
  L33():
    goto L7(r10);
  L37():
    goto L8(r13);
  L39():
    timeout3 = force? timeout2;
    checkMissing(timeout3);
    r15 = `>`(timeout3, 0);
    c6 = `as.logical`(r15);
    c7 = `&&`(c3, c6);
    goto L9(c7);
  L41():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  D16():
    deopt 58 [];
  L11(r17):
    st opts = r17;
    goto L13();
  L42():
    opts3 = ld opts;
    check L44() else D11();
  L43():
    r16 = dyn base3(<sym opts>, <lang list(connecttimeout=timeout, timeout=timeout)>);
    goto L11(r16);
  L52():
    r23 = dyn __("curl", "new_handle");
    check L53() else D17();
  D11():
    deopt 40 [opts3];
  D17():
    deopt 61 [r23];
  L44():
    opts4 = force? opts3;
    checkMissing(opts4);
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L45() else L46();
  L53():
    checkFun.0(r23);
    r24 = r23 as cls;
    r25 = dyn r24();
    check L54() else D18();
  D18():
    deopt 63 [r25];
  L12(r19):
    c10 = ldf c in base;
    r21 = dyn c10(opts4, r19);
    check L50() else D15();
  L45():
    timeout4 = ld timeout;
    check L47() else D12();
  L46():
    r18 = dyn base4[connecttimeout, timeout](<sym timeout>, <sym timeout>);
    goto L12(r18);
  L54():
    st h = r25;
    __1 = ldf `::`;
    check L55() else D19();
  D12():
    deopt 44 [timeout4];
  D15():
    deopt 53 [r21];
  D19():
    deopt 66 [];
  L47():
    timeout5 = force? timeout4;
    checkMissing(timeout5);
    timeout6 = ld timeout;
    check L48() else D13();
  L50():
    goto L11(r21);
  L55():
    r26 = dyn __1("curl", "handle_setopt");
    check L56() else D20();
  D13():
    deopt 47 [timeout6];
  D20():
    deopt 69 [r26];
  L48():
    timeout7 = force? timeout6;
    checkMissing(timeout7);
    list = ldf list in base;
    r20 = dyn list(timeout5, timeout7);
    check L49() else D14();
  L56():
    checkFun.0(r26);
    r27 = r26 as cls;
    p2 = prom<V +>{
      h = ld h;
      h1 = force? h;
      checkMissing(h1);
      return h1;
    };
    p3 = prom<V +>{
      opts5 = ld opts;
      opts6 = force? opts5;
      checkMissing(opts6);
      return opts6;
    };
    r30 = dyn r27[, `.list`](p2, p3);
    check L57() else D21();
  D14():
    deopt 51 [r20];
  D21():
    deopt 74 [r30];
  L49():
    goto L12(r20);
  L57():
    startsWith = ldf startsWith;
    check L58() else D22();
  D22():
    deopt 76 [];
  L58():
    p4 = prom<V +>{
      u3 = ld u;
      u4 = force? u3;
      checkMissing(u4);
      return u4;
    };
    r32 = dyn startsWith(p4, "https://github.com");
    check L59() else D23();
  D23():
    deopt 79 [r32];
  L59():
    c11 = `as.logical`(r32);
    if c11 then L60() else L14(c11);
  L14(c13):
    c20 = `as.logical`(c13);
    if c20 then L67() else L16();
  L60():
    sym5 = ldf nzchar;
    base5 = ldf nzchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L61() else L62();
  L15(c16, r34):
    c17 = `as.logical`(r34);
    c18 = `&&`(c16, c17);
    goto L14(c18);
  L16():
    goto L17();
  L17():
    tryCatch = ldf tryCatch;
    check L72() else D30();
  L61():
    Sys_getenv = ldf `Sys.getenv`;
    check L63() else D24();
  L62():
    r33 = dyn base5(<lang `<-`(a, Sys.getenv("GITHUB_PAT", ""))>);
    goto L15(c11, r33);
  L67():
    __2 = ldf `::`;
    check L68() else D27();
  D24():
    deopt 83 [c11];
  D27():
    deopt 92 [];
  D30():
    deopt 104 [];
  L63():
    r35 = dyn Sys_getenv("GITHUB_PAT", "");
    check L64() else D25();
  L68():
    r37 = dyn __2("curl", "handle_setheaders");
    check L69() else D28();
  L72():
    p10 = prom<V +>{
      __3 = ldf `::`;
      r45 = dyn __3("curl", "curl_fetch_memory");
      checkFun.0(r45);
      r46 = r45 as cls;
      p8 = prom<V +>{
        u5 = ld u;
        u6 = force? u5;
        checkMissing(u6);
        return u6;
      };
      p9 = prom<V +>{
        h4 = ld h;
        h5 = force? h4;
        checkMissing(h5);
        return h5;
      };
      r49 = dyn r46[, handle](p8, p9);
      return r49;
    };
    p11 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r52 = dyn tryCatch[, error](p10, p11);
    check L73() else D31();
  D25():
    deopt 86 [c11, r35];
  D28():
    deopt 95 [r37];
  D31():
    deopt 108 [r52];
  L64():
    st a = r35;
    nzchar = ldf nzchar in base;
    r36 = dyn nzchar(r35);
    check L65() else D26();
  L69():
    checkFun.0(r37);
    r38 = r37 as cls;
    p5 = prom<V +>{
      h2 = ld h;
      h3 = force? h2;
      checkMissing(h3);
      return h3;
    };
    p7 = prom<V +>{
      paste = ldf paste;
      p6 = prom<V +>{
        a = ld a;
        a1 = force? a;
        checkMissing(a1);
        return a1;
      };
      r41 = dyn paste("token", p6);
      return r41;
    };
    r43 = dyn r38[, Authorization](p5, p7);
    check L70() else D29();
  L73():
    st g = r52;
    _curl_response_status_code = ldf `.curl_response_status_code`;
    check L74() else D32();
  D26():
    deopt 89 [c11, r36];
  D29():
    deopt 100 [r43];
  D32():
    deopt 111 [];
  L65():
    goto L15(c11, r36);
  L70():
    goto L17();
  L74():
    p12 = prom<V +>{
      g = ld g;
      g1 = force? g;
      checkMissing(g1);
      return g1;
    };
    r54 = dyn _curl_response_status_code(p12);
    check L75() else D33();
  D33():
    deopt 113 [r54];
  L75():
    popenv;
    return r54;
  }
}