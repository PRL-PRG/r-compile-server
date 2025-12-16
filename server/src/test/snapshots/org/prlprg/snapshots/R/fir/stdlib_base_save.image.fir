fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner801723475;
    st `save.image` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner801723475(file, version, ascii, compress, safe) {
  (reg file:*, reg version:*, reg ascii:*, reg compress:*, reg safe:*) -+> V { var file:*, reg file_isMissing:L, reg file_orDefault:*, var version:*, reg version_isMissing:L, reg version_orDefault:*, var ascii:*, reg ascii_isMissing:L, reg ascii_orDefault:*, var compress:*, reg compress_isMissing:L, reg compress_orDefault:*, reg ascii1:*, reg ascii2:V, reg r:V, reg p:p(V +), var safe:*, reg safe_isMissing:L, reg safe_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg file1:*, reg file2:V, reg c:L, reg r4:V, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c6:L, reg r6:V, reg file3:*, reg file4:V, reg length:cls, reg r7:V, reg r8:V, reg c7:L, reg c8:V, reg c10:L, reg c11:V, reg file5:*, reg file6:V, reg r9:V, reg c13:L, reg c14:V, reg c16:L, reg stop:cls, reg gettextf:cls, reg r10:V, reg p1:p(V +), reg r12:V, reg getOption:cls, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg opts:*, reg opts1:V, reg c17:V, reg c18:L, reg getOption1:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg missing:cls, reg r21:V, reg c19:L, reg c21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg c24:L, reg r23:V, reg opts2:*, reg opts3:V, reg c25:L, reg c27:L, reg opts5:V, reg dr:V, reg dc:L, reg dx:V, reg c29:L, reg dx1:V, reg r24:V, reg c30:V, reg r25:V, reg c31:L, reg c32:V, reg c34:L, reg opts6:*, reg opts7:V, reg c35:L, reg opts9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg missing1:cls, reg r29:V, reg c36:L, reg c38:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg c41:L, reg r31:V, reg opts10:*, reg opts11:V, reg c42:L, reg c44:L, reg opts13:V, reg dr4:V, reg dc2:L, reg dx5:V, reg c46:L, reg dx6:V, reg r32:V, reg c47:V, reg r33:V, reg c48:L, reg c49:V, reg c51:L, reg opts14:*, reg opts15:V, reg c52:L, reg opts17:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg r34:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r35:V, reg r36:V, reg missing2:cls, reg r37:V, reg c53:L, reg c55:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r38:V, reg c58:L, reg r39:V, reg opts18:*, reg opts19:V, reg c59:L, reg c61:L, reg opts21:V, reg dr8:V, reg dc4:L, reg dx10:V, reg c63:L, reg dx11:V, reg r40:V, reg c64:V, reg r41:V, reg c65:L, reg c66:V, reg c68:L, reg opts22:*, reg opts23:V, reg c69:L, reg opts25:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg r42:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r43:V, reg r44:V, reg missing3:cls, reg r45:V, reg c70:L, reg opts26:*, reg opts27:V, reg c71:L, reg opts29:V, reg dr12:V, reg dc6:L, reg dx15:V, reg dx16:V, reg r46:V, reg safe1:*, reg safe2:V, reg c72:L, reg paste0:cls, reg file7:*, reg file8:V, reg p2:p(V +), reg r48:V, reg file_exists:cls, reg outfile:*, reg outfile1:V, reg p3:p(V +), reg r50:V, reg c73:L, reg i:*, reg i1:V, reg r51:V, reg paste1:cls, reg file9:*, reg file10:V, reg p4:p(V +), reg i2:*, reg i3:V, reg p5:p(V +), reg r54:V, reg file11:*, reg file12:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r56:V, reg on_exit:cls, reg r58:V, reg save:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r59:V, reg r60:V, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg names:cls, reg r61:V, reg p6:p(V +), reg outfile2:*, reg outfile3:V, reg p7:p(V +), reg version1:*, reg version2:V, reg p8:p(V +), reg ascii3:*, reg ascii4:V, reg p9:p(V +), reg compress1:*, reg compress2:V, reg p10:p(V +), reg _GlobalEnv2:*, reg _GlobalEnv3:V, reg p11:p(V +), reg r68:V, reg safe3:*, reg safe4:V, reg c74:L, reg file_rename:cls, reg outfile4:*, reg outfile5:V, reg p12:p(V +), reg file13:*, reg file14:V, reg p13:p(V +), reg r71:V, reg r72:V, reg c75:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r73:V, reg on_exit1:cls, reg r75:V, reg stop1:cls, reg gettextf1:cls, reg outfile6:*, reg outfile7:V, reg p14:p(V +), reg r77:V, reg p15:p(V +), reg r79:V, reg r80:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r82:V, reg r83:V, reg on_exit2:cls, reg r84:V |
    mkenv;
    file_isMissing = missing.0(file);
    if file_isMissing then L0(".RData") else L0(file);
  L0(file_orDefault):
    st file = file_orDefault;
    version_isMissing = missing.0(version);
    if version_isMissing then L1(NULL) else L1(version);
  L1(version_orDefault):
    st version = version_orDefault;
    ascii_isMissing = missing.0(ascii);
    if ascii_isMissing then L2(FALSE) else L2(ascii);
  L2(ascii_orDefault):
    st ascii = ascii_orDefault;
    compress_isMissing = missing.0(compress);
    if compress_isMissing then L3() else L4(compress);
  L3():
    p = prom<V +>{
      ascii1 = ld ascii;
      ascii2 = force? ascii1;
      checkMissing(ascii2);
      r = `!`(ascii2);
      return r;
    };
    goto L4(p);
  L4(compress_orDefault):
    st compress = compress_orDefault;
    safe_isMissing = missing.0(safe);
    if safe_isMissing then L5(TRUE) else L5(safe);
  L5(safe_orDefault):
    st safe = safe_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L44() else L45();
  L6(r3):
    r4 = `!`(r3);
    c1 = `as.logical`(r4);
    if c1 then L7(c1) else L47();
  L44():
    file1 = ld file;
    check L46() else D0();
  L45():
    r2 = dyn base(<sym file>);
    goto L6(r2);
  D0():
    deopt 1 [file1];
  L7(c2):
    c10 = `as.logical`(c2);
    if c10 then L9(c10) else L53();
  L46():
    file2 = force? file1;
    checkMissing(file2);
    c = `is.character`(file2);
    goto L6(c);
  L47():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L48() else L49();
  L8(c6, r6):
    r8 = `!=`(r6, 1.0);
    c7 = `as.logical`(r8);
    c8 = `||`(c6, c7);
    goto L7(c8);
  L9(c11):
    c16 = `as.logical`(c11);
    if c16 then L56() else L10();
  L48():
    file3 = ld file;
    check L50() else D1();
  L49():
    r5 = dyn base1(<sym file>);
    goto L8(c1, r5);
  L53():
    file5 = ld file;
    check L54() else D3();
  D1():
    deopt 7 [c1, file3];
  D3():
    deopt 14 [c10, file5];
  L10():
    goto L11();
  L11():
    getOption = ldf getOption;
    check L60() else D6();
  L50():
    file4 = force? file3;
    checkMissing(file4);
    length = ldf length in base;
    r7 = dyn length(file4);
    check L51() else D2();
  L54():
    file6 = force? file5;
    checkMissing(file6);
    r9 = `==`(file6, "");
    c13 = `as.logical`(r9);
    c14 = `||`(c10, c13);
    goto L9(c14);
  L56():
    stop = ldf stop;
    check L57() else D4();
  D2():
    deopt 10 [c1, r7];
  D4():
    deopt 20 [];
  D6():
    deopt 28 [];
  L51():
    goto L8(c1, r7);
  L57():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      r10 = dyn gettextf("'%s' must be a non-empty string", "file");
      return r10;
    };
    r12 = dyn stop[, domain](p1, NA_LGL);
    check L58() else D5();
  L60():
    r14 = dyn getOption("save.image.defaults");
    check L61() else D7();
  D5():
    deopt 24 [r12];
  D7():
    deopt 30 [r14];
  L58():
    goto L11();
  L61():
    st opts = r14;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L62() else L63();
  L12(r16):
    c18 = `as.logical`(r16);
    if c18 then L65() else L13();
  L62():
    opts = ld opts;
    check L64() else D8();
  L63():
    r15 = dyn base2(<sym opts>);
    goto L12(r15);
  D8():
    deopt 33 [opts];
  L13():
    goto L14();
  L14():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L69() else L70();
  L64():
    opts1 = force? opts;
    checkMissing(opts1);
    c17 = `==`(opts1, NULL);
    goto L12(c17);
  L65():
    getOption1 = ldf getOption;
    check L66() else D9();
  D9():
    deopt 37 [];
  L15(r20):
    c19 = `as.logical`(r20);
    if c19 then L71() else L16(c19);
  L66():
    r17 = dyn getOption1("save.defaults");
    check L67() else D10();
  L69():
    missing = ldf missing in base;
    r21 = dyn missing(<sym safe>);
    goto L15(r21);
  L70():
    r19 = dyn base3(<sym safe>);
    goto L15(r19);
  D10():
    deopt 39 [r17];
  L16(c21):
    c34 = `as.logical`(c21);
    if c34 then L80() else L18();
  L67():
    st opts = r17;
    goto L14();
  L71():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L72() else L73();
  L17(c24, r23):
    r25 = `!`(r23);
    c31 = `as.logical`(r25);
    c32 = `&&`(c24, c31);
    goto L16(c32);
  L18():
    goto L19();
  L19():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L87() else L88();
  L72():
    opts2 = ld opts;
    check L74() else D11();
  L73():
    r22 = dyn base4(<lang `$`(opts, safe)>);
    goto L17(c19, r22);
  L80():
    opts6 = ld opts;
    check L81() else D12();
  D11():
    deopt 47 [c19, opts2];
  D12():
    deopt 53 [opts6];
  L20(r28):
    c36 = `as.logical`(r28);
    if c36 then L89() else L21(c36);
  L74():
    opts3 = force? opts2;
    checkMissing(opts3);
    c25 = `is.object`(opts3);
    if c25 then L76() else L77(c19, opts3);
  L81():
    opts7 = force? opts6;
    checkMissing(opts7);
    c35 = `is.object`(opts7);
    if c35 then L83() else L84(opts7);
  L87():
    missing1 = ldf missing in base;
    r29 = dyn missing1(<sym ascii>);
    goto L20(r29);
  L88():
    r27 = dyn base5(<sym ascii>);
    goto L20(r27);
  L21(c38):
    c51 = `as.logical`(c38);
    if c51 then L98() else L23();
  L75(c29, dx1):
    c30 = `==`(dx1, NULL);
    goto L17(c29, c30);
  L76():
    dr = tryDispatchBuiltin.1("$", opts3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L78() else L77(c19, dr);
  L77(c27, opts5):
    r24 = `$`(opts5, <sym safe>);
    goto L75(c27, r24);
  L82(dx3):
    st safe = dx3;
    goto L19();
  L83():
    dr2 = tryDispatchBuiltin.1("$", opts7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L85() else L84(dr2);
  L84(opts9):
    r26 = `$`(opts9, <sym safe>);
    goto L82(r26);
  L89():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L90() else L91();
  L22(c41, r31):
    r33 = `!`(r31);
    c48 = `as.logical`(r33);
    c49 = `&&`(c41, c48);
    goto L21(c49);
  L23():
    goto L24();
  L24():
    sym7 = ldf missing;
    base7 = ldf missing in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L105() else L106();
  L78():
    dx = getTryDispatchBuiltinValue(dr);
    goto L75(c19, dx);
  L85():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L82(dx2);
  L90():
    opts10 = ld opts;
    check L92() else D13();
  L91():
    r30 = dyn base6(<lang `$`(opts, ascii)>);
    goto L22(c36, r30);
  L98():
    opts14 = ld opts;
    check L99() else D14();
  D13():
    deopt 63 [c36, opts10];
  D14():
    deopt 69 [opts14];
  L25(r36):
    c53 = `as.logical`(r36);
    if c53 then L107() else L26(c53);
  L92():
    opts11 = force? opts10;
    checkMissing(opts11);
    c42 = `is.object`(opts11);
    if c42 then L94() else L95(c36, opts11);
  L99():
    opts15 = force? opts14;
    checkMissing(opts15);
    c52 = `is.object`(opts15);
    if c52 then L101() else L102(opts15);
  L105():
    missing2 = ldf missing in base;
    r37 = dyn missing2(<sym compress>);
    goto L25(r37);
  L106():
    r35 = dyn base7(<sym compress>);
    goto L25(r35);
  L26(c55):
    c68 = `as.logical`(c55);
    if c68 then L116() else L28();
  L93(c46, dx6):
    c47 = `==`(dx6, NULL);
    goto L22(c46, c47);
  L94():
    dr4 = tryDispatchBuiltin.1("$", opts11);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L96() else L95(c36, dr4);
  L95(c44, opts13):
    r32 = `$`(opts13, <sym ascii>);
    goto L93(c44, r32);
  L100(dx8):
    st ascii = dx8;
    goto L24();
  L101():
    dr6 = tryDispatchBuiltin.1("$", opts15);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L103() else L102(dr6);
  L102(opts17):
    r34 = `$`(opts17, <sym ascii>);
    goto L100(r34);
  L107():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L108() else L109();
  L27(c58, r39):
    r41 = `!`(r39);
    c65 = `as.logical`(r41);
    c66 = `&&`(c58, c65);
    goto L26(c66);
  L28():
    goto L29();
  L29():
    sym9 = ldf missing;
    base9 = ldf missing in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L123() else L124();
  L96():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L93(c36, dx5);
  L103():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L100(dx7);
  L108():
    opts18 = ld opts;
    check L110() else D15();
  L109():
    r38 = dyn base8(<lang `$`(opts, compress)>);
    goto L27(c53, r38);
  L116():
    opts22 = ld opts;
    check L117() else D16();
  D15():
    deopt 79 [c53, opts18];
  D16():
    deopt 85 [opts22];
  L30(r44):
    c70 = `as.logical`(r44);
    if c70 then L125() else L31();
  L110():
    opts19 = force? opts18;
    checkMissing(opts19);
    c59 = `is.object`(opts19);
    if c59 then L112() else L113(c53, opts19);
  L117():
    opts23 = force? opts22;
    checkMissing(opts23);
    c69 = `is.object`(opts23);
    if c69 then L119() else L120(opts23);
  L123():
    missing3 = ldf missing in base;
    r45 = dyn missing3(<sym version>);
    goto L30(r45);
  L124():
    r43 = dyn base9(<sym version>);
    goto L30(r43);
  L31():
    goto L32();
  L32():
    safe1 = ld safe;
    check L132() else D18();
  L111(c63, dx11):
    c64 = `==`(dx11, NULL);
    goto L27(c63, c64);
  L112():
    dr8 = tryDispatchBuiltin.1("$", opts19);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L114() else L113(c53, dr8);
  L113(c61, opts21):
    r40 = `$`(opts21, <sym compress>);
    goto L111(c61, r40);
  L118(dx13):
    st compress = dx13;
    goto L29();
  L119():
    dr10 = tryDispatchBuiltin.1("$", opts23);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L121() else L120(dr10);
  L120(opts25):
    r42 = `$`(opts25, <sym compress>);
    goto L118(r42);
  L125():
    opts26 = ld opts;
    check L126() else D17();
  D17():
    deopt 94 [opts26];
  D18():
    deopt 100 [safe1];
  L114():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L111(c53, dx10);
  L121():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L118(dx12);
  L126():
    opts27 = force? opts26;
    checkMissing(opts27);
    c71 = `is.object`(opts27);
    if c71 then L128() else L129(opts27);
  L132():
    safe2 = force? safe1;
    checkMissing(safe2);
    c72 = `as.logical`(safe2);
    if c72 then L133() else L33();
  L33():
    file11 = ld file;
    check L144() else D26();
  L36():
    sym10 = ldf `on.exit`;
    base10 = ldf `on.exit` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L145() else L146();
  L127(dx16):
    st version = dx16;
    goto L32();
  L128():
    dr12 = tryDispatchBuiltin.1("$", opts27);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L130() else L129(dr12);
  L129(opts29):
    r46 = `$`(opts29, <sym version>);
    goto L127(r46);
  L133():
    paste0 = ldf paste0;
    check L134() else D19();
  D19():
    deopt 103 [];
  D26():
    deopt 130 [file11];
  L37():
    save = ldf save;
    check L147() else D27();
  L130():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L127(dx15);
  L134():
    p2 = prom<V +>{
      file7 = ld file;
      file8 = force? file7;
      checkMissing(file8);
      return file8;
    };
    r48 = dyn paste0(p2, "Tmp");
    check L135() else D20();
  L144():
    file12 = force? file11;
    checkMissing(file12);
    st outfile = file12;
    goto L36();
  L145():
    on_exit = ldf `on.exit` in base;
    r58 = dyn on_exit(<lang file.remove(outfile)>);
    goto L37();
  L146():
    r56 = dyn base10(<lang file.remove(outfile)>);
    goto L37();
  D20():
    deopt 106 [r48];
  D27():
    deopt 137 [];
  L135():
    st outfile = r48;
    st i = 0.0;
    goto L35();
  L147():
    p6 = prom<V +>{
      sym11 = ldf names;
      base11 = ldf names in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r60):
      return r60;
    L1():
      _GlobalEnv = ld `.GlobalEnv`;
      _GlobalEnv1 = force? _GlobalEnv;
      checkMissing(_GlobalEnv1);
      names = ldf names in base;
      r61 = dyn names(_GlobalEnv1);
      goto L0(r61);
    L2():
      r59 = dyn base11(<sym .GlobalEnv>);
      goto L0(r59);
    };
    p7 = prom<V +>{
      outfile2 = ld outfile;
      outfile3 = force? outfile2;
      checkMissing(outfile3);
      return outfile3;
    };
    p8 = prom<V +>{
      version1 = ld version;
      version2 = force? version1;
      checkMissing(version2);
      return version2;
    };
    p9 = prom<V +>{
      ascii3 = ld ascii;
      ascii4 = force? ascii3;
      checkMissing(ascii4);
      return ascii4;
    };
    p10 = prom<V +>{
      compress1 = ld compress;
      compress2 = force? compress1;
      checkMissing(compress2);
      return compress2;
    };
    p11 = prom<V +>{
      _GlobalEnv2 = ld `.GlobalEnv`;
      _GlobalEnv3 = force? _GlobalEnv2;
      checkMissing(_GlobalEnv3);
      return _GlobalEnv3;
    };
    r68 = dyn save[list, file, version, ascii, compress, envir, precheck](p6, p7, p8, p9, p10, p11, FALSE);
    check L148() else D28();
  D28():
    deopt 152 [r68];
  L35():
    file_exists = ldf `file.exists`;
    check L136() else D21();
  L148():
    safe3 = ld safe;
    check L149() else D29();
  D21():
    deopt 112 [];
  D29():
    deopt 153 [safe3];
  L136():
    p3 = prom<V +>{
      outfile = ld outfile;
      outfile1 = force? outfile;
      checkMissing(outfile1);
      return outfile1;
    };
    r50 = dyn file_exists(p3);
    check L137() else D22();
  L149():
    safe4 = force? safe3;
    checkMissing(safe4);
    c74 = `as.logical`(safe4);
    if c74 then L150() else L38();
  D22():
    deopt 114 [r50];
  L38():
    goto L42();
  L42():
    sym13 = ldf `on.exit`;
    base13 = ldf `on.exit` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L160() else L161();
  L137():
    c73 = `as.logical`(r50);
    if c73 then L138() else L34();
  L150():
    file_rename = ldf `file.rename`;
    check L151() else D30();
  D30():
    deopt 156 [];
  L34():
    goto L36();
  L43(r83):
    popenv;
    return r83;
  L138():
    i = ld i;
    check L139() else D23();
  L151():
    p12 = prom<V +>{
      outfile4 = ld outfile;
      outfile5 = force? outfile4;
      checkMissing(outfile5);
      return outfile5;
    };
    p13 = prom<V +>{
      file13 = ld file;
      file14 = force? file13;
      checkMissing(file14);
      return file14;
    };
    r71 = dyn file_rename(p12, p13);
    check L152() else D31();
  L160():
    on_exit2 = ldf `on.exit` in base;
    r84 = dyn on_exit2();
    goto L43(r84);
  L161():
    r82 = dyn base13();
    goto L43(r82);
  D23():
    deopt 115 [i];
  D31():
    deopt 159 [r71];
  L139():
    i1 = force? i;
    checkMissing(i1);
    r51 = `+`(i1, 1.0);
    st i = r51;
    paste1 = ldf paste0;
    check L140() else D24();
  L152():
    r72 = `!`(r71);
    c75 = `as.logical`(r72);
    if c75 then L153() else L39();
  D24():
    deopt 121 [];
  L39():
    goto L41(NULL);
  L41(r80):
    goto L42();
  L140():
    p4 = prom<V +>{
      file9 = ld file;
      file10 = force? file9;
      checkMissing(file10);
      return file10;
    };
    p5 = prom<V +>{
      i2 = ld i;
      i3 = force? i2;
      checkMissing(i3);
      return i3;
    };
    r54 = dyn paste1(p4, "Tmp", p5);
    check L141() else D25();
  L153():
    sym12 = ldf `on.exit`;
    base12 = ldf `on.exit` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L154() else L155();
  D25():
    deopt 125 [r54];
  L40():
    stop1 = ldf stop;
    check L156() else D32();
  L141():
    st outfile = r54;
    goto L35();
  L154():
    on_exit1 = ldf `on.exit` in base;
    r75 = dyn on_exit1();
    goto L40();
  L155():
    r73 = dyn base12();
    goto L40();
  D32():
    deopt 165 [];
  L156():
    p15 = prom<V +>{
      gettextf1 = ldf gettextf;
      p14 = prom<V +>{
        outfile6 = ld outfile;
        outfile7 = force? outfile6;
        checkMissing(outfile7);
        return outfile7;
      };
      r77 = dyn gettextf1("image could not be renamed and is left in %s", p14);
      return r77;
    };
    r79 = dyn stop1[, domain](p15, NA_LGL);
    check L157() else D33();
  D33():
    deopt 169 [r79];
  L157():
    goto L41(r79);
  }
}