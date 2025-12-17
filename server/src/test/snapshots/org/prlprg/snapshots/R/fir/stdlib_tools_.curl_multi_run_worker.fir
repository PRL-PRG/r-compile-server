fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3385562052;
    st `.curl_multi_run_worker` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3385562052(urls, nobody, verbose, pool, opts, hdrs) {
  (reg urls:*, reg nobody:*, reg verbose:*, reg pool:*, reg opts:*, reg hdrs:*) -+> V { var urls:*, var nobody:*, reg nobody_isMissing:L, reg nobody_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, var pool:*, reg pool_isMissing:L, reg pool_orDefault:*, var opts:*, reg opts_isMissing:L, reg opts_orDefault:*, var hdrs:*, reg hdrs_isMissing:L, reg hdrs_orDefault:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg pool1:*, reg pool2:V, reg c:V, reg c1:L, reg __:cls, reg r3:V, reg r4:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg opts1:*, reg opts2:V, reg c2:V, reg c3:L, reg _curl_handle_default_opts:*, reg _curl_handle_default_opts1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg opts3:*, reg opts4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg nobody1:*, reg nobody2:V, reg list:cls, reg r13:V, reg c4:cls, reg r14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg getOption:cls, reg r17:V, reg as_integer:cls, reg r18:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r19:V, reg r20:V, reg timeout:*, reg timeout1:V, reg is_na:cls, reg r21:V, reg r22:V, reg c5:L, reg c7:V, reg timeout2:*, reg timeout3:V, reg r23:V, reg c8:L, reg c9:V, reg c11:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r24:V, reg r25:V, reg opts5:*, reg opts6:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r26:V, reg r27:V, reg timeout4:*, reg timeout5:V, reg timeout6:*, reg timeout7:V, reg list1:cls, reg r28:V, reg c12:cls, reg r29:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r31:V, reg r32:V, reg hdrs1:*, reg hdrs2:V, reg c13:V, reg c14:L, reg _curl_handle_default_hdrs:*, reg _curl_handle_default_hdrs1:V, reg _progress_bar:cls, reg verbose1:*, reg verbose2:V, reg c15:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r33:V, reg r34:V, reg urls1:*, reg urls2:V, reg length:cls, reg r35:V, reg p:p(V +), reg r37:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r38:V, reg r39:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r40:V, reg r41:V, reg urls3:*, reg urls4:V, reg length1:cls, reg r42:V, reg vector:cls, reg r43:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r44:V, reg r45:V, reg out:*, reg out1:V, reg r46:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c16:L, reg x:V, reg urls5:*, reg urls6:V, reg c17:L, reg i6:I, reg urls8:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __1:cls, reg r47:V, reg __2:cls, reg r48:V, reg r49:cls, reg u:*, reg u1:V, reg p1:p(V +), reg r51:V, reg __3:cls, reg r52:V, reg r53:cls, reg h:*, reg h1:V, reg p2:p(V +), reg opts7:*, reg opts8:V, reg p3:p(V +), reg r56:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r57:V, reg i13:I, reg r58:V, reg hdrs3:*, reg hdrs4:V, reg length2:cls, reg r59:V, reg c18:L, reg __4:cls, reg r60:V, reg r61:cls, reg h2:*, reg h3:V, reg p4:p(V +), reg hdrs5:*, reg hdrs6:V, reg p5:p(V +), reg r64:V, reg i16:I, reg grepl:cls, reg u2:*, reg u3:V, reg p6:p(V +), reg r67:V, reg c19:L, reg i18:I, reg c21:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r68:V, reg i21:I, reg c24:L, reg r69:V, reg Sys_getenv:cls, reg r70:V, reg nzchar:cls, reg r71:V, reg c25:L, reg c26:V, reg c28:L, reg __5:cls, reg r72:V, reg r73:cls, reg h4:*, reg h5:V, reg p7:p(V +), reg paste:cls, reg a:*, reg a1:V, reg p8:p(V +), reg r76:V, reg p9:p(V +), reg r78:V, reg i25:I, reg r80:cls, reg r81:cls, reg r82:V, reg r83:cls, reg r84:cls, reg r85:V, reg __6:cls, reg r86:V, reg r87:cls, reg h6:*, reg h7:V, reg p10:p(V +), reg handle_result:*, reg handle_result1:V, reg p11:p(V +), reg handle_error:*, reg handle_error1:V, reg p12:p(V +), reg pool3:*, reg pool4:V, reg p13:p(V +), reg r92:V, reg __7:cls, reg r93:V, reg r94:cls, reg pool5:*, reg pool6:V, reg p14:p(V +), reg r96:V, reg out2:*, reg out3:V |
    mkenv;
    st urls = urls;
    nobody_isMissing = missing.0(nobody);
    if nobody_isMissing then L0(FALSE) else L0(nobody);
  L0(nobody_orDefault):
    st nobody = nobody_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L1(FALSE) else L1(verbose);
  L1(verbose_orDefault):
    st verbose = verbose_orDefault;
    pool_isMissing = missing.0(pool);
    if pool_isMissing then L2(NULL) else L2(pool);
  L2(pool_orDefault):
    st pool = pool_orDefault;
    opts_isMissing = missing.0(opts);
    if opts_isMissing then L3(NULL) else L3(opts);
  L3(opts_orDefault):
    st opts = opts_orDefault;
    hdrs_isMissing = missing.0(hdrs);
    if hdrs_isMissing then L4(NULL) else L4(hdrs);
  L4(hdrs_orDefault):
    st hdrs = hdrs_orDefault;
    r = clos inner2237071510;
    st `.progress_bar` = r;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L36() else L37();
  L5(r2):
    c1 = `as.logical`(r2);
    if c1 then L39() else L6();
  L36():
    pool1 = ld pool;
    check L38() else D0();
  L37():
    r1 = dyn base(<sym pool>);
    goto L5(r1);
  D0():
    deopt 4 [pool1];
  L6():
    goto L7();
  L7():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L44() else L45();
  L38():
    pool2 = force? pool1;
    checkMissing(pool2);
    c = `==`(pool2, NULL);
    goto L5(c);
  L39():
    __ = ldf `::`;
    check L40() else D1();
  D1():
    deopt 8 [];
  L8(r8):
    c3 = `as.logical`(r8);
    if c3 then L47() else L9();
  L40():
    r3 = dyn __("curl", "new_pool");
    check L41() else D2();
  L44():
    opts1 = ld opts;
    check L46() else D4();
  L45():
    r7 = dyn base1(<sym opts>);
    goto L8(r7);
  D2():
    deopt 11 [r3];
  D4():
    deopt 18 [opts1];
  L9():
    goto L10();
  L10():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L50() else L51();
  L41():
    checkFun.0(r3);
    r4 = r3 as cls;
    r5 = dyn r4();
    check L42() else D3();
  L46():
    opts2 = force? opts1;
    checkMissing(opts2);
    c2 = `==`(opts2, NULL);
    goto L8(c2);
  L47():
    _curl_handle_default_opts = ld `.curl_handle_default_opts`;
    check L48() else D5();
  D3():
    deopt 13 [r5];
  D5():
    deopt 21 [_curl_handle_default_opts];
  L11(r10):
    st opts = r10;
    sym4 = ldf `as.integer`;
    base4 = ldf `as.integer` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L58() else L59();
  L42():
    st pool = r5;
    goto L7();
  L48():
    _curl_handle_default_opts1 = force? _curl_handle_default_opts;
    checkMissing(_curl_handle_default_opts1);
    st opts = _curl_handle_default_opts1;
    goto L10();
  L50():
    opts3 = ld opts;
    check L52() else D6();
  L51():
    r9 = dyn base2(<sym opts>, <lang list(nobody=nobody)>);
    goto L11(r9);
  D6():
    deopt 28 [opts3];
  L13(r16):
    st timeout = r16;
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L63() else L64();
  L52():
    opts4 = force? opts3;
    checkMissing(opts4);
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L53() else L54();
  L58():
    getOption = ldf getOption;
    check L60() else D10();
  L59():
    r15 = dyn base4(<lang getOption("timeout")>);
    goto L13(r15);
  D10():
    deopt 43 [];
  L12(r12):
    c4 = ldf c in base;
    r14 = dyn c4(opts4, r12);
    check L57() else D9();
  L14(r20):
    r22 = `!`(r20);
    c5 = `as.logical`(r22);
    if c5 then L67() else L15(c5);
  L53():
    nobody1 = ld nobody;
    check L55() else D7();
  L54():
    r11 = dyn base3[nobody](<sym nobody>);
    goto L12(r11);
  L60():
    r17 = dyn getOption("timeout");
    check L61() else D11();
  L63():
    timeout = ld timeout;
    check L65() else D13();
  L64():
    r19 = dyn base5(<sym timeout>);
    goto L14(r19);
  D7():
    deopt 32 [nobody1];
  D9():
    deopt 38 [r14];
  D11():
    deopt 45 [r17];
  D13():
    deopt 51 [timeout];
  L15(c7):
    c11 = `as.logical`(c7);
    if c11 then L70() else L16();
  L55():
    nobody2 = force? nobody1;
    checkMissing(nobody2);
    list = ldf list in base;
    r13 = dyn list(nobody2);
    check L56() else D8();
  L57():
    goto L11(r14);
  L61():
    as_integer = ldf `as.integer` in base;
    r18 = dyn as_integer(r17);
    check L62() else D12();
  L65():
    timeout1 = force? timeout;
    checkMissing(timeout1);
    is_na = ldf `is.na` in base;
    r21 = dyn is_na(timeout1);
    check L66() else D14();
  L67():
    timeout2 = ld timeout;
    check L68() else D15();
  D8():
    deopt 36 [r13];
  D12():
    deopt 47 [r18];
  D14():
    deopt 54 [r21];
  D15():
    deopt 56 [c5, timeout2];
  L16():
    goto L19();
  L19():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L81() else L82();
  L56():
    goto L12(r13);
  L62():
    goto L13(r18);
  L66():
    goto L14(r21);
  L68():
    timeout3 = force? timeout2;
    checkMissing(timeout3);
    r23 = `>`(timeout3, 0);
    c8 = `as.logical`(r23);
    c9 = `&&`(c5, c8);
    goto L15(c9);
  L70():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L71() else L72();
  L17(r25):
    st opts = r25;
    goto L19();
  L20(r32):
    c14 = `as.logical`(r32);
    if c14 then L84() else L21();
  L71():
    opts5 = ld opts;
    check L73() else D16();
  L72():
    r24 = dyn base6(<sym opts>, <lang list(connecttimeout=timeout, timeout=timeout)>);
    goto L17(r24);
  L81():
    hdrs1 = ld hdrs;
    check L83() else D21();
  L82():
    r31 = dyn base8(<sym hdrs>);
    goto L20(r31);
  D16():
    deopt 63 [opts5];
  D21():
    deopt 81 [hdrs1];
  L21():
    goto L22();
  L22():
    _progress_bar = ldf `.progress_bar`;
    check L87() else D23();
  L73():
    opts6 = force? opts5;
    checkMissing(opts6);
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L74() else L75();
  L83():
    hdrs2 = force? hdrs1;
    checkMissing(hdrs2);
    c13 = `==`(hdrs2, NULL);
    goto L20(c13);
  L84():
    _curl_handle_default_hdrs = ld `.curl_handle_default_hdrs`;
    check L85() else D22();
  D22():
    deopt 84 [_curl_handle_default_hdrs];
  D23():
    deopt 90 [];
  L18(r27):
    c12 = ldf c in base;
    r29 = dyn c12(opts6, r27);
    check L79() else D20();
  L74():
    timeout4 = ld timeout;
    check L76() else D17();
  L75():
    r26 = dyn base7[connecttimeout, timeout](<sym timeout>, <sym timeout>);
    goto L18(r26);
  L85():
    _curl_handle_default_hdrs1 = force? _curl_handle_default_hdrs;
    checkMissing(_curl_handle_default_hdrs1);
    st hdrs = _curl_handle_default_hdrs1;
    goto L22();
  L87():
    p = prom<V +>{
      verbose1 = ld verbose;
      verbose2 = force? verbose1;
      checkMissing(verbose2);
      c15 = `as.logical`(verbose2);
      if c15 then L2() else L0();
    L0():
      invisible.0();
      return NULL;
    L2():
      sym9 = ldf length;
      base9 = ldf length in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L3() else L4();
    L1(r34):
      return r34;
    L3():
      urls1 = ld urls;
      urls2 = force? urls1;
      checkMissing(urls2);
      length = ldf length in base;
      r35 = dyn length(urls2);
      goto L1(r35);
    L4():
      r33 = dyn base9(<sym urls>);
      goto L1(r33);
    };
    r37 = dyn _progress_bar[, msg](p, "fetching ");
    check L88() else D24();
  D17():
    deopt 67 [timeout4];
  D20():
    deopt 76 [r29];
  D24():
    deopt 94 [r37];
  L76():
    timeout5 = force? timeout4;
    checkMissing(timeout5);
    timeout6 = ld timeout;
    check L77() else D18();
  L79():
    goto L17(r29);
  L88():
    st bar = r37;
    sym10 = ldf vector;
    base10 = ldf vector in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L89() else L90();
  D18():
    deopt 70 [timeout6];
  L23(r39):
    st out = r39;
    sym12 = ldf seq_along;
    base12 = ldf seq_along in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L96() else L97();
  L77():
    timeout7 = force? timeout6;
    checkMissing(timeout7);
    list1 = ldf list in base;
    r28 = dyn list1(timeout5, timeout7);
    check L78() else D19();
  L89():
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L91() else L92();
  L90():
    r38 = dyn base10("list", <lang length(urls)>);
    goto L23(r38);
  D19():
    deopt 74 [r28];
  L24(r41):
    vector = ldf vector in base;
    r43 = dyn vector("list", r41);
    check L95() else D27();
  L25(r45):
    s = toForSeq(r45);
    l = length(s);
    i = 0;
    goto L26(i);
  L78():
    goto L18(r28);
  L91():
    urls3 = ld urls;
    check L93() else D25();
  L92():
    r40 = dyn base11(<sym urls>);
    goto L24(r40);
  L96():
    out = ld out;
    check L98() else D28();
  L97():
    r44 = dyn base12(<sym out>);
    goto L25(r44);
  D25():
    deopt 101 [urls3];
  D27():
    deopt 106 [r43];
  D28():
    deopt 109 [out];
  L26(i1):
    i2 = `+`.1(i1, 1);
    c16 = `<`.1(l, i2);
    if c16 then L99() else L35();
  L93():
    urls4 = force? urls3;
    checkMissing(urls4);
    length1 = ldf length in base;
    r42 = dyn length1(urls4);
    check L94() else D26();
  L95():
    goto L23(r43);
  L98():
    out1 = force? out;
    checkMissing(out1);
    r46 = seq_along(out1);
    goto L25(r46);
  D26():
    deopt 104 [r42];
  L35():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    urls5 = ld urls;
    check L100() else D29();
  L94():
    goto L24(r42);
  L99():
    __7 = ldf `::`;
    check L139() else D55();
  D29():
    deopt 112 [i2, urls5];
  D55():
    deopt 212 [];
  L100():
    urls6 = force? urls5;
    checkMissing(urls6);
    c17 = `is.object`(urls6);
    if c17 then L101() else L102(i2, urls6);
  L139():
    r93 = dyn __7("curl", "multi_run");
    check L140() else D56();
  D56():
    deopt 215 [r93];
  L27(i8, dx1):
    st u = dx1;
    __2 = ldf `::`;
    check L105() else D31();
  L101():
    dr = tryDispatchBuiltin.1("[[", urls6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L103() else L102(i2, dr);
  L102(i6, urls8):
    i9 = ld i;
    check L104() else D30();
  L140():
    checkFun.0(r93);
    r94 = r93 as cls;
    p14 = prom<V +>{
      pool5 = ld pool;
      pool6 = force? pool5;
      checkMissing(pool6);
      return pool6;
    };
    r96 = dyn r94[pool](p14);
    check L141() else D57();
  D30():
    deopt 114 [i6, urls8, i9];
  D31():
    deopt 119 [i8];
  D57():
    deopt 219 [r96];
  L103():
    dx = getTryDispatchBuiltinValue(dr);
    goto L27(i2, dx);
  L104():
    i10 = force? i9;
    __1 = ldf `[[` in base;
    r47 = dyn __1(urls8, i10);
    goto L27(i6, r47);
  L105():
    r48 = dyn __2("curl", "new_handle");
    check L106() else D32();
  L141():
    out2 = ld out;
    check L142() else D58();
  D32():
    deopt 122 [i8, r48];
  D58():
    deopt 220 [out2];
  L106():
    checkFun.0(r48);
    r49 = r48 as cls;
    p1 = prom<V +>{
      u = ld u;
      u1 = force? u;
      checkMissing(u1);
      return u1;
    };
    r51 = dyn r49[url](p1);
    check L107() else D33();
  L142():
    out3 = force? out2;
    checkMissing(out3);
    popenv;
    return out3;
  D33():
    deopt 126 [i8, r51];
  L107():
    st h = r51;
    __3 = ldf `::`;
    check L108() else D34();
  D34():
    deopt 129 [i8];
  L108():
    r52 = dyn __3("curl", "handle_setopt");
    check L109() else D35();
  D35():
    deopt 132 [i8, r52];
  L109():
    checkFun.0(r52);
    r53 = r52 as cls;
    p2 = prom<V +>{
      h = ld h;
      h1 = force? h;
      checkMissing(h1);
      return h1;
    };
    p3 = prom<V +>{
      opts7 = ld opts;
      opts8 = force? opts7;
      checkMissing(opts8);
      return opts8;
    };
    r56 = dyn r53[, `.list`](p2, p3);
    check L110() else D36();
  D36():
    deopt 137 [i8, r56];
  L110():
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L111() else L112();
  L28(i13, r58):
    c18 = `as.logical`(r58);
    if c18 then L115() else L29();
  L111():
    hdrs3 = ld hdrs;
    check L113() else D37();
  L112():
    r57 = dyn base13(<sym hdrs>);
    goto L28(i8, r57);
  D37():
    deopt 140 [i8, hdrs3];
  L29():
    goto L30(i13);
  L30(i16):
    grepl = ldf grepl;
    check L120() else D42();
  L113():
    hdrs4 = force? hdrs3;
    checkMissing(hdrs4);
    length2 = ldf length in base;
    r59 = dyn length2(hdrs4);
    check L114() else D38();
  L115():
    __4 = ldf `::`;
    check L116() else D39();
  D38():
    deopt 143 [i8, r59];
  D39():
    deopt 145 [i13];
  D42():
    deopt 157 [i16];
  L114():
    goto L28(i8, r59);
  L116():
    r60 = dyn __4("curl", "handle_setheaders");
    check L117() else D40();
  L120():
    p6 = prom<V +>{
      u2 = ld u;
      u3 = force? u2;
      checkMissing(u3);
      return u3;
    };
    r67 = dyn grepl("^https?://github[.]com", p6);
    check L121() else D43();
  D40():
    deopt 148 [i13, r60];
  D43():
    deopt 160 [i16, r67];
  L117():
    checkFun.0(r60);
    r61 = r60 as cls;
    p4 = prom<V +>{
      h2 = ld h;
      h3 = force? h2;
      checkMissing(h3);
      return h3;
    };
    p5 = prom<V +>{
      hdrs5 = ld hdrs;
      hdrs6 = force? hdrs5;
      checkMissing(hdrs6);
      return hdrs6;
    };
    r64 = dyn r61[, `.list`](p4, p5);
    check L118() else D41();
  L121():
    c19 = `as.logical`(r67);
    if c19 then L122() else L31(i16, c19);
  D41():
    deopt 153 [i13, r64];
  L31(i18, c21):
    c28 = `as.logical`(c21);
    if c28 then L129() else L33();
  L118():
    goto L30(i13);
  L122():
    sym14 = ldf nzchar;
    base14 = ldf nzchar in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L123() else L124();
  L32(i21, c24, r69):
    c25 = `as.logical`(r69);
    c26 = `&&`(c24, c25);
    goto L31(i21, c26);
  L33():
    goto L34(i18);
  L34(i25):
    r80 = clos inner2708337952;
    checkFun.0(r80);
    r81 = r80 as cls;
    r82 = dyn r81();
    check L134() else D50();
  L123():
    Sys_getenv = ldf `Sys.getenv`;
    check L125() else D44();
  L124():
    r68 = dyn base14(<lang `<-`(a, Sys.getenv("GITHUB_PAT", ""))>);
    goto L32(i16, c19, r68);
  L129():
    __5 = ldf `::`;
    check L130() else D47();
  D44():
    deopt 164 [i16, c19];
  D47():
    deopt 173 [i18];
  D50():
    deopt 187 [i25, r82];
  L125():
    r70 = dyn Sys_getenv("GITHUB_PAT", "");
    check L126() else D45();
  L130():
    r72 = dyn __5("curl", "handle_setheaders");
    check L131() else D48();
  L134():
    st handle_result = r82;
    r83 = clos inner2708337952;
    checkFun.0(r83);
    r84 = r83 as cls;
    r85 = dyn r84();
    check L135() else D51();
  D45():
    deopt 167 [i16, c19, r70];
  D48():
    deopt 176 [i18, r72];
  D51():
    deopt 192 [i25, r85];
  L126():
    st a = r70;
    nzchar = ldf nzchar in base;
    r71 = dyn nzchar(r70);
    check L127() else D46();
  L131():
    checkFun.0(r72);
    r73 = r72 as cls;
    p7 = prom<V +>{
      h4 = ld h;
      h5 = force? h4;
      checkMissing(h5);
      return h5;
    };
    p9 = prom<V +>{
      paste = ldf paste;
      p8 = prom<V +>{
        a = ld a;
        a1 = force? a;
        checkMissing(a1);
        return a1;
      };
      r76 = dyn paste("token", p8);
      return r76;
    };
    r78 = dyn r73[, Authorization](p7, p9);
    check L132() else D49();
  L135():
    st handle_error = r85;
    __6 = ldf `::`;
    check L136() else D52();
  D46():
    deopt 170 [i16, c19, r71];
  D49():
    deopt 181 [i18, r78];
  D52():
    deopt 195 [i25];
  L127():
    goto L32(i16, c19, r71);
  L132():
    goto L34(i18);
  L136():
    r86 = dyn __6("curl", "multi_add");
    check L137() else D53();
  D53():
    deopt 198 [i25, r86];
  L137():
    checkFun.0(r86);
    r87 = r86 as cls;
    p10 = prom<V +>{
      h6 = ld h;
      h7 = force? h6;
      checkMissing(h7);
      return h7;
    };
    p11 = prom<V +>{
      handle_result = ld handle_result;
      handle_result1 = force? handle_result;
      checkMissing(handle_result1);
      return handle_result1;
    };
    p12 = prom<V +>{
      handle_error = ld handle_error;
      handle_error1 = force? handle_error;
      checkMissing(handle_error1);
      return handle_error1;
    };
    p13 = prom<V +>{
      pool3 = ld pool;
      pool4 = force? pool3;
      checkMissing(pool4);
      return pool4;
    };
    r92 = dyn r87[, done, fail, pool](p10, p11, p12, p13);
    check L138() else D54();
  D54():
    deopt 207 [i25, r92];
  L138():
    goto L26(i25);
  }
}
fun inner2237071510(length, msg) {
  (reg length:*, reg msg:*) -+> V { var length:*, var msg:*, reg msg_isMissing:L, reg msg_orDefault:*, reg new_env:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg baseenv:cls, reg r2:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg length1:*, reg length2:V, reg c:V, reg c1:L, reg length3:*, reg length4:V, reg l:*, reg c2:L, reg length6:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r8:V, reg l3:*, reg c3:L, reg r10:I, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg length9:*, reg length10:V, reg log10:cls, reg r18:V, reg trunc:cls, reg r19:V, reg r20:V, reg paste0:cls, reg msg1:*, reg msg2:V, reg p1:p(V +), reg digits:*, reg digits1:V, reg p2:p(V +), reg digits2:*, reg digits3:V, reg p3:p(V +), reg r24:V, reg l6:*, reg c4:L, reg r26:V, reg l8:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r29:V, reg r30:cls, reg l9:*, reg c5:L, reg r32:cls, reg l11:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r35:V, reg bar:*, reg bar1:V, reg l12:*, reg c6:L, reg bar4:V, reg l15:*, reg bar5:V, reg l16:*, reg dr8:V, reg dc4:L, reg dx8:V, reg bar8:V, reg l18:*, reg bar9:V, reg dx9:V, reg r36:V, reg environment__:cls, reg r37:V, reg c7:L, reg bar11:V, reg l20:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r38:V, reg bar14:*, reg bar15:V, reg c8:L, reg bar17:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r39:V, reg dx14:cls, reg r40:V, reg bar18:*, reg bar19:V |
    mkenv;
    st length = length;
    msg_isMissing = missing.0(msg);
    if msg_isMissing then L0("") else L0(msg);
  L0(msg_orDefault):
    st msg = msg_orDefault;
    new_env = ldf `new.env`;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      sym = ldf baseenv;
      base = ldf baseenv in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      baseenv = ldf baseenv in base;
      r2 = dyn baseenv();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    r4 = dyn new_env[parent](p);
    check L7() else D1();
  D1():
    deopt 4 [r4];
  L7():
    st bar = r4;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L1(r6):
    c1 = `as.logical`(r6);
    if c1 then L11() else L2();
  L8():
    length1 = ld length;
    check L10() else D2();
  L9():
    r5 = dyn base1(<sym length>);
    goto L1(r5);
  D2():
    deopt 7 [length1];
  L2():
    goto L3();
  L3():
    st fmt = NULL;
    st done = NULL;
    length3 = ld length;
    check L13() else D3();
  L10():
    length2 = force? length1;
    checkMissing(length2);
    c = `==`(length2, NULL);
    goto L1(c);
  L11():
    st length = 0;
    goto L3();
  D3():
    deopt 19 [length3];
  L13():
    length4 = force? length3;
    checkMissing(length4);
    l = ld bar;
    c2 = `is.object`(l);
    if c2 then L15() else L16(length4, l);
  L14(dx1):
    st bar = dx1;
    l3 = ld bar;
    c3 = `is.object`(l3);
    if c3 then L19() else L20(-1, l3);
  L15():
    dr = tryDispatchBuiltin.0("$<-", l, length4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(length4, dr);
  L16(length6, l2):
    r8 = `$<-`(l2, <sym length>, length4);
    goto L14(r8);
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L14(dx);
  L18(dx3):
    st bar = dx3;
    sym2 = ldf trunc;
    base2 = ldf trunc in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L19():
    dr2 = tryDispatchBuiltin.0("$<-", l3, -1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L21() else L20(-1, dr2);
  L20(r10, l5):
    r13 = `$<-`(l5, <sym done>, -1);
    goto L18(r13);
  L4(r15):
    r20 = `+`(r15, 1);
    st digits = r20;
    paste0 = ldf paste0;
    check L29() else D7();
  L21():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L18(dx2);
  L22():
    sym3 = ldf log10;
    base3 = ldf log10 in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  L23():
    r14 = dyn base2(<lang log10(length)>);
    goto L4(r14);
  D7():
    deopt 43 [];
  L5(r17):
    trunc = ldf trunc in base;
    r19 = dyn trunc(r17);
    check L28() else D6();
  L24():
    length9 = ld length;
    check L26() else D4();
  L25():
    r16 = dyn base3(<sym length>);
    goto L5(r16);
  L29():
    p1 = prom<V +>{
      msg1 = ld msg;
      msg2 = force? msg1;
      checkMissing(msg2);
      return msg2;
    };
    p2 = prom<V +>{
      digits = ld digits;
      digits1 = force? digits;
      checkMissing(digits1);
      return digits1;
    };
    p3 = prom<V +>{
      digits2 = ld digits;
      digits3 = force? digits2;
      checkMissing(digits3);
      return digits3;
    };
    r24 = dyn paste0("\r", p1, "[ %", p2, "i / %", p3, "i ]");
    check L30() else D8();
  D4():
    deopt 33 [length9];
  D6():
    deopt 38 [r19];
  D8():
    deopt 51 [r24];
  L26():
    length10 = force? length9;
    checkMissing(length10);
    log10 = ldf log10 in base;
    r18 = dyn log10(length10);
    check L27() else D5();
  L28():
    goto L4(r19);
  L30():
    l6 = ld bar;
    c4 = `is.object`(l6);
    if c4 then L32() else L33(r24, l6);
  D5():
    deopt 36 [r18];
  L27():
    goto L5(r18);
  L31(dx5):
    st bar = dx5;
    r30 = clos inner2708337952;
    l9 = ld bar;
    c5 = `is.object`(l9);
    if c5 then L36() else L37(r30, l9);
  L32():
    dr4 = tryDispatchBuiltin.0("$<-", l6, r24);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L34() else L33(r24, dr4);
  L33(r26, l8):
    r29 = `$<-`(l8, <sym fmt>, r24);
    goto L31(r29);
  L34():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L31(dx4);
  L35(dx7):
    st bar = dx7;
    bar = ld bar;
    check L39() else D9();
  L36():
    dr6 = tryDispatchBuiltin.0("$<-", l9, r30);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L38() else L37(r30, dr6);
  L37(r32, l11):
    r35 = `$<-`(l11, <sym update>, r30);
    goto L35(r35);
  D9():
    deopt 60 [bar];
  L38():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L35(dx6);
  L39():
    bar1 = force? bar;
    checkMissing(bar1);
    l12 = ld bar;
    c6 = `is.object`(l12);
    if c6 then L41() else L42(bar1, l12, bar1, l12);
  L40(bar8, l18, bar9, dx9):
    environment__ = ldf `environment<-`;
    check L44() else D10();
  L41():
    dr8 = tryDispatchBuiltin.1("$", l12);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L43() else L42(bar1, l12, bar1, dr8);
  L42(bar4, l15, bar5, l16):
    r36 = `$`(l16, <sym update>);
    goto L40(bar4, l15, bar5, r36);
  D10():
    deopt 66 [bar8, l18, dx9, bar9];
  L43():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L40(bar1, l12, bar1, dx8);
  L44():
    r37 = dyn environment__(dx9, NULL, bar9);
    check L45() else D11();
  D11():
    deopt 68 [bar8, l18, r37];
  L45():
    c7 = `is.object`(l18);
    if c7 then L47() else L48(bar8, l18);
  L46(dx11):
    st bar = dx11;
    bar14 = ld bar;
    check L50() else D12();
  L47():
    dr10 = tryDispatchBuiltin.0("$<-", l18, r37);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L49() else L48(bar8, dr10);
  L48(bar11, l20):
    r38 = `$<-`(l20, <sym update>, r37);
    goto L46(r38);
  D12():
    deopt 71 [bar14];
  L49():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L46(dx10);
  L50():
    bar15 = force? bar14;
    checkMissing(bar15);
    c8 = `is.object`(bar15);
    if c8 then L52() else L53(bar15);
  L51(dx13):
    checkFun.0(dx13);
    dx14 = dx13 as cls;
    r40 = dyn dx14();
    check L55() else D13();
  L52():
    dr12 = tryDispatchBuiltin.1("$", bar15);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L54() else L53(dr12);
  L53(bar17):
    r39 = `$`(bar17, <sym update>);
    goto L51(r39);
  D13():
    deopt 75 [r40];
  L54():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L51(dx12);
  L55():
    bar18 = ld bar;
    check L56() else D14();
  D14():
    deopt 76 [bar18];
  L56():
    bar19 = force? bar18;
    checkMissing(bar19);
    popenv;
    return bar19;
  }
}
fun inner2708337952() {
  () -+> V { reg assign:cls, reg done:*, reg done1:V, reg r:V, reg p:p(V +), reg r2:V, reg length:*, reg length1:V, reg r3:V, reg c:L, reg done2:*, reg done3:V, reg length2:*, reg length3:V, reg r6:V, reg c1:L, reg cat:cls, reg strrep:cls, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg fmt:*, reg fmt1:V, reg nchar:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg p2:p(V +), reg stderr:cls, reg r13:V, reg p3:p(V +), reg r15:V, reg cat1:cls, reg sprintf:cls, reg fmt2:*, reg fmt3:V, reg p4:p(V +), reg done4:*, reg done5:V, reg p5:p(V +), reg length4:*, reg length5:V, reg p6:p(V +), reg r19:V, reg p7:p(V +), reg stderr1:cls, reg r21:V, reg p8:p(V +), reg r23:V |
    mkenv;
    assign = ldf assign;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      done = ld done;
      done1 = force? done;
      checkMissing(done1);
      r = `+`(done1, 1);
      return r;
    };
    r2 = dyn assign[, inherits, ]("done", TRUE, p);
    check L4() else D1();
  D1():
    deopt 6 [r2];
  L4():
    length = ld length;
    check L5() else D2();
  D2():
    deopt 7 [length];
  L5():
    length1 = force? length;
    checkMissing(length1);
    r3 = `<=`(length1, 0);
    c = `as.logical`(r3);
    if c then L6() else L0();
  L0():
    done2 = ld done;
    check L9() else D3();
  L6():
    popenv;
    return NULL;
  D3():
    deopt 16 [done2];
  L9():
    done3 = force? done2;
    checkMissing(done3);
    length2 = ld length;
    check L10() else D4();
  D4():
    deopt 17 [done3, length2];
  L10():
    length3 = force? length2;
    checkMissing(length3);
    r6 = `>=`(done3, length3);
    c1 = `as.logical`(r6);
    if c1 then L11() else L2();
  L2():
    cat1 = ldf cat;
    check L15() else D7();
  L11():
    cat = ldf cat;
    check L12() else D5();
  D5():
    deopt 21 [];
  D7():
    deopt 31 [];
  L12():
    p2 = prom<V +>{
      strrep = ldf strrep;
      p1 = prom<V +>{
        sym = ldf nchar;
        base = ldf nchar in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r8):
        return r8;
      L1():
        fmt = ld fmt;
        fmt1 = force? fmt;
        checkMissing(fmt1);
        nchar = ldf nchar in base;
        r9 = dyn nchar(fmt1, "chars", FALSE, NA_LGL);
        goto L0(r9);
      L2():
        r7 = dyn base(<sym fmt>);
        goto L0(r7);
      };
      r11 = dyn strrep(" ", p1);
      return r11;
    };
    p3 = prom<V +>{
      stderr = ldf stderr;
      r13 = dyn stderr();
      return r13;
    };
    r15 = dyn cat[, , , sep, file]("\r", p2, "\r", "", p3);
    check L13() else D6();
  L15():
    p7 = prom<V +>{
      sprintf = ldf sprintf;
      p4 = prom<V +>{
        fmt2 = ld fmt;
        fmt3 = force? fmt2;
        checkMissing(fmt3);
        return fmt3;
      };
      p5 = prom<V +>{
        done4 = ld done;
        done5 = force? done4;
        checkMissing(done5);
        return done5;
      };
      p6 = prom<V +>{
        length4 = ld length;
        length5 = force? length4;
        checkMissing(length5);
        return length5;
      };
      r19 = dyn sprintf(p4, p5, p6);
      return r19;
    };
    p8 = prom<V +>{
      stderr1 = ldf stderr;
      r21 = dyn stderr1();
      return r21;
    };
    r23 = dyn cat1[, sep, file](p7, "", p8);
    check L16() else D8();
  D6():
    deopt 29 [r15];
  D8():
    deopt 37 [r23];
  L13():
    popenv;
    return r15;
  L16():
    popenv;
    return r23;
  }
}