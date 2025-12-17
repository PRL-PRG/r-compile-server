fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1835514167;
    st `.install_package_vignettes` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1835514167(dir, outDir, `keep.source`) {
  (reg dir:*, reg outDir:*, reg keep_source:*) -+> V { var dir:*, var outDir:*, var `keep.source`:*, reg keep_source_isMissing:L, reg keep_source_orDefault:*, reg file_path_as_absolute:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg pkgVignettes:cls, reg dir3:*, reg dir4:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg vigns:*, reg vigns1:V, reg c:V, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg c6:L, reg r7:V, reg vigns2:*, reg vigns3:V, reg c7:L, reg c9:L, reg vigns5:V, reg dr:V, reg dc:L, reg dx:V, reg c11:L, reg dx1:V, reg r8:V, reg length:cls, reg r9:V, reg r10:V, reg c12:L, reg c13:V, reg c15:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg invisible:cls, reg r13:V, reg file_path_as_absolute1:cls, reg outDir1:*, reg outDir2:V, reg p2:p(V +), reg r17:V, reg file_path:cls, reg outDir3:*, reg outDir4:V, reg p3:p(V +), reg r19:V, reg dir_exists:cls, reg outVignetteDir:*, reg outVignetteDir1:V, reg p4:p(V +), reg r21:V, reg r22:V, reg c16:L, reg c18:V, reg dir_create:cls, reg outVignetteDir2:*, reg outVignetteDir3:V, reg p5:p(V +), reg r24:V, reg r25:V, reg c19:L, reg c20:V, reg c22:L, reg stop:cls, reg gettextf:cls, reg outVignetteDir4:*, reg outVignetteDir5:V, reg p6:p(V +), reg r27:V, reg p7:p(V +), reg r29:V, reg file_path1:cls, reg outVignetteDir6:*, reg outVignetteDir7:V, reg p8:p(V +), reg paste0:cls, reg vigns6:*, reg vigns7:V, reg c23:L, reg vigns9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r32:V, reg p9:p(V +), reg r34:V, reg p10:p(V +), reg r36:V, reg file_test:cls, reg vignettePDFs:*, reg vignettePDFs1:V, reg p11:p(V +), reg vigns10:*, reg vigns11:V, reg c24:L, reg vigns13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r38:V, reg p12:p(V +), reg r40:V, reg getwd:cls, reg r41:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r42:V, reg r43:V, reg cwd:*, reg cwd1:V, reg c25:V, reg c26:L, reg stop1:cls, reg r44:V, reg file_path2:cls, reg cwd2:*, reg cwd3:V, reg p13:p(V +), reg r47:V, reg dir_exists1:cls, reg buildDir:*, reg buildDir1:V, reg p14:p(V +), reg r49:V, reg r50:V, reg c27:L, reg c29:V, reg dir_create1:cls, reg buildDir2:*, reg buildDir3:V, reg p15:p(V +), reg r52:V, reg r53:V, reg c30:L, reg c31:V, reg c33:L, reg stop2:cls, reg gettextf1:cls, reg buildDir4:*, reg buildDir5:V, reg p16:p(V +), reg r55:V, reg p17:p(V +), reg r57:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r59:V, reg on_exit:cls, reg r61:V, reg setwd:cls, reg buildDir6:*, reg buildDir7:V, reg p18:p(V +), reg r63:V, reg loadVignetteBuilder:cls, reg vigns14:*, reg vigns15:V, reg c34:L, reg vigns17:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r64:V, reg p19:p(V +), reg r66:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r67:V, reg r68:V, reg vigns18:*, reg vigns19:V, reg c35:L, reg vigns21:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r69:V, reg r70:I, reg c36:L, reg r72:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg upToDate:*, reg upToDate1:V, reg r73:V, reg __:cls, reg r74:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c37:L, reg x:V, reg vigns22:*, reg vigns23:V, reg c38:L, reg i6:I, reg vigns25:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i8:I, reg dx13:V, reg r75:V, reg c39:L, reg i10:I, reg dx15:V, reg dr14:V, reg dc7:L, reg dx16:V, reg i12:I, reg dx17:V, reg i13:*, reg i14:V, reg __1:cls, reg r76:V, reg vigns26:*, reg vigns27:V, reg c40:L, reg i16:I, reg vigns29:V, reg dr16:V, reg dc8:L, reg dx18:V, reg i18:I, reg dx19:V, reg r77:V, reg c41:L, reg i20:I, reg dx21:V, reg dr18:V, reg dc9:L, reg dx22:V, reg i22:I, reg dx23:V, reg i23:*, reg i24:V, reg __2:cls, reg r78:V, reg vignetteEngine:cls, reg vigns30:*, reg vigns31:V, reg c42:L, reg vigns33:V, reg dr20:V, reg dc10:L, reg dx24:V, reg dx25:V, reg r79:V, reg c43:L, reg dx27:V, reg dr22:V, reg dc11:L, reg dx28:V, reg dx29:V, reg i25:*, reg i26:V, reg __3:cls, reg r80:V, reg p20:p(V +), reg r82:V, reg message:cls, reg gettextf2:cls, reg sQuote:cls, reg basename:cls, reg file:*, reg file1:V, reg p21:p(V +), reg r84:V, reg p22:p(V +), reg r86:V, reg p23:p(V +), reg r88:V, reg p24:p(V +), reg r90:V, reg tryCatch:cls, reg engine:*, reg engine1:V, reg c44:L, reg engine3:V, reg dr24:V, reg dc12:L, reg dx30:V, reg dx31:V, reg r91:V, reg dx32:cls, reg file2:*, reg file3:V, reg p25:p(V +), reg keep_source1:*, reg keep_source2:V, reg p26:p(V +), reg setwd1:cls, reg buildDir8:*, reg buildDir9:V, reg p27:p(V +), reg find_vignette_product:cls, reg name:*, reg name1:V, reg p28:p(V +), reg engine4:*, reg engine5:V, reg p29:p(V +), reg r99:V, reg p30:p(V +), reg r101:cls, reg p31:p(V +), reg r103:V, reg vignette_is_tex:cls, reg output:*, reg output1:V, reg p32:p(V +), reg r105:V, reg c45:L, reg tryCatch1:cls, reg texi2pdf:cls, reg output2:*, reg output3:V, reg p33:p(V +), reg vigns34:*, reg vigns35:V, reg c46:L, reg vigns37:V, reg dr26:V, reg dc13:L, reg dx33:V, reg dx34:V, reg r107:V, reg p34:p(V +), reg find_vignette_product1:cls, reg name2:*, reg name3:V, reg p35:p(V +), reg engine6:*, reg engine7:V, reg p36:p(V +), reg r112:V, reg p37:p(V +), reg r114:cls, reg p38:p(V +), reg r116:V, reg i29:I, reg file_copy:cls, reg output4:*, reg output5:V, reg p39:p(V +), reg outVignetteDir8:*, reg outVignetteDir9:V, reg p40:p(V +), reg r120:V, reg r121:V, reg c47:L, reg stop3:cls, reg gettextf3:cls, reg output6:*, reg output7:V, reg p41:p(V +), reg outVignetteDir10:*, reg outVignetteDir11:V, reg p42:p(V +), reg r124:V, reg p43:p(V +), reg r126:V, reg i32:I, reg sym6:cls, reg base6:cls, reg guard6:L, reg r128:V, reg r129:V, reg upToDate2:*, reg upToDate3:V, reg r130:V, reg any:cls, reg r131:V, reg c48:L, reg compactPDF:cls, reg outVignetteDir12:*, reg outVignetteDir13:V, reg p44:p(V +), reg r133:V, reg setwd2:cls, reg cwd4:*, reg cwd5:V, reg p45:p(V +), reg r136:V, reg unlink:cls, reg buildDir10:*, reg buildDir11:V, reg p46:p(V +), reg r138:V, reg _install_package_vignettes2:cls, reg dir5:*, reg dir6:V, reg p47:p(V +), reg outDir5:*, reg outDir6:V, reg p48:p(V +), reg r141:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r142:V, reg r143:V, reg invisible1:cls, reg r144:V |
    mkenv;
    st dir = dir;
    st outDir = outDir;
    keep_source_isMissing = missing.0(keep_source);
    if keep_source_isMissing then L0(TRUE) else L0(keep_source);
  L0(keep_source_orDefault):
    st `keep.source` = keep_source_orDefault;
    file_path_as_absolute = ldf file_path_as_absolute;
    check L31() else D0();
  D0():
    deopt 1 [];
  L31():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn file_path_as_absolute(p);
    check L32() else D1();
  D1():
    deopt 3 [r1];
  L32():
    st dir = r1;
    pkgVignettes = ldf pkgVignettes;
    check L33() else D2();
  D2():
    deopt 6 [];
  L33():
    p1 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r3 = dyn pkgVignettes[dir](p1);
    check L34() else D3();
  D3():
    deopt 9 [r3];
  L34():
    st vigns = r3;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L35() else L36();
  L1(r5):
    c1 = `as.logical`(r5);
    if c1 then L2(c1) else L38();
  L35():
    vigns = ld vigns;
    check L37() else D4();
  L36():
    r4 = dyn base(<sym vigns>);
    goto L1(r4);
  D4():
    deopt 12 [vigns];
  L2(c2):
    c15 = `as.logical`(c2);
    if c15 then L48() else L4();
  L37():
    vigns1 = force? vigns;
    checkMissing(vigns1);
    c = `==`(vigns1, NULL);
    goto L1(c);
  L38():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L39() else L40();
  L3(c6, r7):
    r10 = `!`(r7);
    c12 = `as.logical`(r10);
    c13 = `||`(c6, c12);
    goto L2(c13);
  L4():
    file_path_as_absolute1 = ldf file_path_as_absolute;
    check L54() else D8();
  L39():
    vigns2 = ld vigns;
    check L41() else D5();
  L40():
    r6 = dyn base1(<lang `$`(vigns, docs)>);
    goto L3(c1, r6);
  L48():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L49() else L50();
  D5():
    deopt 17 [c1, vigns2];
  D8():
    deopt 32 [];
  L5(r12):
    popenv;
    return r12;
  L41():
    vigns3 = force? vigns2;
    checkMissing(vigns3);
    c7 = `is.object`(vigns3);
    if c7 then L43() else L44(c1, vigns3);
  L49():
    invisible = ldf invisible in base;
    r13 = dyn invisible();
    check L51() else D7();
  L50():
    r11 = dyn base2();
    goto L5(r11);
  L54():
    p2 = prom<V +>{
      outDir1 = ld outDir;
      outDir2 = force? outDir1;
      checkMissing(outDir2);
      return outDir2;
    };
    r17 = dyn file_path_as_absolute1(p2);
    check L55() else D9();
  D7():
    deopt 27 [r13];
  D9():
    deopt 34 [r17];
  L42(c11, dx1):
    length = ldf length in base;
    r9 = dyn length(dx1);
    check L46() else D6();
  L43():
    dr = tryDispatchBuiltin.1("$", vigns3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L45() else L44(c1, dr);
  L44(c9, vigns5):
    r8 = `$`(vigns5, <sym docs>);
    goto L42(c9, r8);
  L51():
    goto L5(r13);
  L55():
    st outDir = r17;
    file_path = ldf `file.path`;
    check L56() else D10();
  D6():
    deopt 21 [c11, r9];
  D10():
    deopt 37 [];
  L45():
    dx = getTryDispatchBuiltinValue(dr);
    goto L42(c1, dx);
  L46():
    goto L3(c11, r9);
  L56():
    p3 = prom<V +>{
      outDir3 = ld outDir;
      outDir4 = force? outDir3;
      checkMissing(outDir4);
      return outDir4;
    };
    r19 = dyn file_path(p3, "doc");
    check L57() else D11();
  D11():
    deopt 40 [r19];
  L57():
    st outVignetteDir = r19;
    dir_exists = ldf `dir.exists`;
    check L58() else D12();
  D12():
    deopt 43 [];
  L58():
    p4 = prom<V +>{
      outVignetteDir = ld outVignetteDir;
      outVignetteDir1 = force? outVignetteDir;
      checkMissing(outVignetteDir1);
      return outVignetteDir1;
    };
    r21 = dyn dir_exists(p4);
    check L59() else D13();
  D13():
    deopt 45 [r21];
  L59():
    r22 = `!`(r21);
    c16 = `as.logical`(r22);
    if c16 then L60() else L7(c16);
  L7(c18):
    c22 = `as.logical`(c18);
    if c22 then L64() else L8();
  L60():
    dir_create = ldf `dir.create`;
    check L61() else D14();
  D14():
    deopt 48 [c16];
  L8():
    goto L9();
  L9():
    file_path1 = ldf `file.path`;
    check L68() else D18();
  L61():
    p5 = prom<V +>{
      outVignetteDir2 = ld outVignetteDir;
      outVignetteDir3 = force? outVignetteDir2;
      checkMissing(outVignetteDir3);
      return outVignetteDir3;
    };
    r24 = dyn dir_create(p5);
    check L62() else D15();
  L64():
    stop = ldf stop;
    check L65() else D16();
  D15():
    deopt 50 [c16, r24];
  D16():
    deopt 54 [];
  D18():
    deopt 62 [];
  L62():
    r25 = `!`(r24);
    c19 = `as.logical`(r25);
    c20 = `&&`(c16, c19);
    goto L7(c20);
  L65():
    p7 = prom<V +>{
      gettextf = ldf gettextf;
      p6 = prom<V +>{
        outVignetteDir4 = ld outVignetteDir;
        outVignetteDir5 = force? outVignetteDir4;
        checkMissing(outVignetteDir5);
        return outVignetteDir5;
      };
      r27 = dyn gettextf("cannot open directory '%s'", p6);
      return r27;
    };
    r29 = dyn stop[, domain](p7, NA_LGL);
    check L66() else D17();
  L68():
    p8 = prom<V +>{
      outVignetteDir6 = ld outVignetteDir;
      outVignetteDir7 = force? outVignetteDir6;
      checkMissing(outVignetteDir7);
      return outVignetteDir7;
    };
    p10 = prom<V +>{
      paste0 = ldf paste0;
      p9 = prom<V +>{
        vigns6 = ld vigns;
        vigns7 = force? vigns6;
        checkMissing(vigns7);
        c23 = `is.object`(vigns7);
        if c23 then L1() else L2(vigns7);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", vigns7);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(vigns9):
        r32 = `$`(vigns9, <sym names>);
        goto L0(r32);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r34 = dyn paste0(p9, ".pdf");
      return r34;
    };
    r36 = dyn file_path1(p8, p10);
    check L69() else D19();
  D17():
    deopt 58 [r29];
  D19():
    deopt 65 [r36];
  L66():
    goto L9();
  L69():
    st vignettePDFs = r36;
    file_test = ldf file_test;
    check L70() else D20();
  D20():
    deopt 68 [];
  L70():
    p11 = prom<V +>{
      vignettePDFs = ld vignettePDFs;
      vignettePDFs1 = force? vignettePDFs;
      checkMissing(vignettePDFs1);
      return vignettePDFs1;
    };
    p12 = prom<V +>{
      vigns10 = ld vigns;
      vigns11 = force? vigns10;
      checkMissing(vigns11);
      c24 = `is.object`(vigns11);
      if c24 then L1() else L2(vigns11);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", vigns11);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(vigns13):
      r38 = `$`(vigns13, <sym docs>);
      goto L0(r38);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r40 = dyn file_test("-nt", p11, p12);
    check L71() else D21();
  D21():
    deopt 72 [r40];
  L71():
    st upToDate = r40;
    getwd = ldf getwd;
    check L72() else D22();
  D22():
    deopt 75 [];
  L72():
    r41 = dyn getwd();
    check L73() else D23();
  D23():
    deopt 76 [r41];
  L73():
    st cwd = r41;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L74() else L75();
  L10(r43):
    c26 = `as.logical`(r43);
    if c26 then L77() else L11();
  L74():
    cwd = ld cwd;
    check L76() else D24();
  L75():
    r42 = dyn base3(<sym cwd>);
    goto L10(r42);
  D24():
    deopt 79 [cwd];
  L11():
    goto L12();
  L12():
    file_path2 = ldf `file.path`;
    check L81() else D27();
  L76():
    cwd1 = force? cwd;
    checkMissing(cwd1);
    c25 = `==`(cwd1, NULL);
    goto L10(c25);
  L77():
    stop1 = ldf stop;
    check L78() else D25();
  D25():
    deopt 83 [];
  D27():
    deopt 89 [];
  L78():
    r44 = dyn stop1("current working directory cannot be ascertained");
    check L79() else D26();
  L81():
    p13 = prom<V +>{
      cwd2 = ld cwd;
      cwd3 = force? cwd2;
      checkMissing(cwd3);
      return cwd3;
    };
    r47 = dyn file_path2(p13, ".vignettes");
    check L82() else D28();
  D26():
    deopt 85 [r44];
  D28():
    deopt 92 [r47];
  L79():
    goto L12();
  L82():
    st buildDir = r47;
    dir_exists1 = ldf `dir.exists`;
    check L83() else D29();
  D29():
    deopt 95 [];
  L83():
    p14 = prom<V +>{
      buildDir = ld buildDir;
      buildDir1 = force? buildDir;
      checkMissing(buildDir1);
      return buildDir1;
    };
    r49 = dyn dir_exists1(p14);
    check L84() else D30();
  D30():
    deopt 97 [r49];
  L84():
    r50 = `!`(r49);
    c27 = `as.logical`(r50);
    if c27 then L85() else L13(c27);
  L13(c29):
    c33 = `as.logical`(c29);
    if c33 then L89() else L14();
  L85():
    dir_create1 = ldf `dir.create`;
    check L86() else D31();
  D31():
    deopt 100 [c27];
  L14():
    goto L15();
  L15():
    sym4 = ldf `on.exit`;
    base4 = ldf `on.exit` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L93() else L94();
  L86():
    p15 = prom<V +>{
      buildDir2 = ld buildDir;
      buildDir3 = force? buildDir2;
      checkMissing(buildDir3);
      return buildDir3;
    };
    r52 = dyn dir_create1(p15);
    check L87() else D32();
  L89():
    stop2 = ldf stop;
    check L90() else D33();
  D32():
    deopt 102 [c27, r52];
  D33():
    deopt 106 [];
  L16():
    setwd = ldf setwd;
    check L95() else D35();
  L87():
    r53 = `!`(r52);
    c30 = `as.logical`(r53);
    c31 = `&&`(c27, c30);
    goto L13(c31);
  L90():
    p17 = prom<V +>{
      gettextf1 = ldf gettextf;
      p16 = prom<V +>{
        buildDir4 = ld buildDir;
        buildDir5 = force? buildDir4;
        checkMissing(buildDir5);
        return buildDir5;
      };
      r55 = dyn gettextf1("cannot create directory '%s'", p16);
      return r55;
    };
    r57 = dyn stop2[, domain](p17, NA_LGL);
    check L91() else D34();
  L93():
    on_exit = ldf `on.exit` in base;
    r61 = dyn on_exit(<lang setwd(cwd)>);
    goto L16();
  L94():
    r59 = dyn base4(<lang setwd(cwd)>);
    goto L16();
  D34():
    deopt 110 [r57];
  D35():
    deopt 117 [];
  L91():
    goto L15();
  L95():
    p18 = prom<V +>{
      buildDir6 = ld buildDir;
      buildDir7 = force? buildDir6;
      checkMissing(buildDir7);
      return buildDir7;
    };
    r63 = dyn setwd(p18);
    check L96() else D36();
  D36():
    deopt 119 [r63];
  L96():
    loadVignetteBuilder = ldf loadVignetteBuilder;
    check L97() else D37();
  D37():
    deopt 121 [];
  L97():
    p19 = prom<V +>{
      vigns14 = ld vigns;
      vigns15 = force? vigns14;
      checkMissing(vigns15);
      c34 = `is.object`(vigns15);
      if c34 then L1() else L2(vigns15);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", vigns15);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(vigns17):
      r64 = `$`(vigns17, <sym pkgdir>);
      goto L0(r64);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r66 = dyn loadVignetteBuilder(p19);
    check L98() else D38();
  D38():
    deopt 123 [r66];
  L98():
    sym5 = ldf seq_along;
    base5 = ldf seq_along in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L99() else L100();
  L17(r68):
    c36 = `is.object`(r68);
    if c36 then L106() else L107(r68);
  L99():
    vigns18 = ld vigns;
    check L101() else D39();
  L100():
    r67 = dyn base5(<lang `$`(vigns, docs)>);
    goto L17(r67);
  D39():
    deopt 125 [vigns18];
  L18(dx11):
    s = toForSeq(dx11);
    l = length(s);
    i = 0;
    goto L19(i);
  L101():
    vigns19 = force? vigns18;
    checkMissing(vigns19);
    c35 = `is.object`(vigns19);
    if c35 then L103() else L104(vigns19);
  L106():
    dr10 = tryDispatchBuiltin.1("[", r68);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L108() else L107(dr10);
  L107(r72):
    upToDate = ld upToDate;
    check L109() else D40();
  D40():
    deopt 129 [r72, upToDate];
  L19(i1):
    i2 = `+`.1(i1, 1);
    c37 = `<`.1(l, i2);
    if c37 then L110() else L26();
  L102(dx9):
    r70 = seq_along(dx9);
    goto L17(r70);
  L103():
    dr8 = tryDispatchBuiltin.1("$", vigns19);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L105() else L104(dr8);
  L104(vigns21):
    r69 = `$`(vigns21, <sym docs>);
    goto L102(r69);
  L108():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L18(dx10);
  L109():
    upToDate1 = force? upToDate;
    checkMissing(upToDate1);
    r73 = `!`(upToDate1);
    __ = ldf `[` in base;
    r74 = dyn __(r72, r73);
    goto L18(r74);
  L26():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    vigns22 = ld vigns;
    check L111() else D41();
  L105():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L102(dx8);
  L110():
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L147() else L148();
  D41():
    deopt 133 [i2, vigns22];
  L27(r129):
    c48 = `as.logical`(r129);
    if c48 then L151() else L28();
  L111():
    vigns23 = force? vigns22;
    checkMissing(vigns23);
    c38 = `is.object`(vigns23);
    if c38 then L113() else L114(i2, vigns23);
  L147():
    upToDate2 = ld upToDate;
    check L149() else D59();
  L148():
    r128 = dyn base6(<lang `!`(upToDate)>);
    goto L27(r128);
  D59():
    deopt 198 [upToDate2];
  L28():
    goto L29();
  L29():
    setwd2 = ldf setwd;
    check L155() else D63();
  L112(i8, dx13):
    c39 = `is.object`(dx13);
    if c39 then L116() else L117(i8, dx13);
  L113():
    dr12 = tryDispatchBuiltin.1("$", vigns23);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L115() else L114(i2, dr12);
  L114(i6, vigns25):
    r75 = `$`(vigns25, <sym docs>);
    goto L112(i6, r75);
  L149():
    upToDate3 = force? upToDate2;
    checkMissing(upToDate3);
    r130 = `!`(upToDate3);
    any = ldf any in base;
    r131 = dyn any(r130);
    check L150() else D60();
  L151():
    compactPDF = ldf compactPDF;
    check L152() else D61();
  D60():
    deopt 202 [r131];
  D61():
    deopt 204 [];
  D63():
    deopt 212 [];
  L20(i12, dx17):
    st file = dx17;
    vigns26 = ld vigns;
    check L120() else D43();
  L115():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L112(i2, dx12);
  L116():
    dr14 = tryDispatchBuiltin.1("[", dx13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L118() else L117(i8, dr14);
  L117(i10, dx15):
    i13 = ld i;
    check L119() else D42();
  L150():
    goto L27(r131);
  L152():
    p44 = prom<V +>{
      outVignetteDir12 = ld outVignetteDir;
      outVignetteDir13 = force? outVignetteDir12;
      checkMissing(outVignetteDir13);
      return outVignetteDir13;
    };
    r133 = dyn compactPDF[, gs_quality](p44, "ebook");
    check L153() else D62();
  L155():
    p45 = prom<V +>{
      cwd4 = ld cwd;
      cwd5 = force? cwd4;
      checkMissing(cwd5);
      return cwd5;
    };
    r136 = dyn setwd2(p45);
    check L156() else D64();
  D42():
    deopt 136 [i10, dx15, i13];
  D43():
    deopt 140 [i12, vigns26];
  D62():
    deopt 208 [r133];
  D64():
    deopt 214 [r136];
  L118():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L20(i8, dx16);
  L119():
    i14 = force? i13;
    __1 = ldf `[` in base;
    r76 = dyn __1(dx15, i14);
    goto L20(i10, r76);
  L120():
    vigns27 = force? vigns26;
    checkMissing(vigns27);
    c40 = `is.object`(vigns27);
    if c40 then L122() else L123(i12, vigns27);
  L153():
    goto L29();
  L156():
    unlink = ldf unlink;
    check L157() else D65();
  D65():
    deopt 216 [];
  L121(i18, dx19):
    c41 = `is.object`(dx19);
    if c41 then L125() else L126(i18, dx19);
  L122():
    dr16 = tryDispatchBuiltin.1("$", vigns27);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L124() else L123(i12, dr16);
  L123(i16, vigns29):
    r77 = `$`(vigns29, <sym names>);
    goto L121(i16, r77);
  L157():
    p46 = prom<V +>{
      buildDir10 = ld buildDir;
      buildDir11 = force? buildDir10;
      checkMissing(buildDir11);
      return buildDir11;
    };
    r138 = dyn unlink[, recursive](p46, TRUE);
    check L158() else D66();
  D66():
    deopt 220 [r138];
  L21(i22, dx23):
    st name = dx23;
    vignetteEngine = ldf vignetteEngine;
    check L129() else D45();
  L124():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L121(i12, dx18);
  L125():
    dr18 = tryDispatchBuiltin.1("[", dx19);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L127() else L126(i18, dr18);
  L126(i20, dx21):
    i23 = ld i;
    check L128() else D44();
  L158():
    _install_package_vignettes2 = ldf `.install_package_vignettes2`;
    check L159() else D67();
  D44():
    deopt 143 [i20, dx21, i23];
  D45():
    deopt 148 [i22];
  D67():
    deopt 222 [];
  L127():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L21(i18, dx22);
  L128():
    i24 = force? i23;
    __2 = ldf `[` in base;
    r78 = dyn __2(dx21, i24);
    goto L21(i20, r78);
  L129():
    p20 = prom<V +>{
      vigns30 = ld vigns;
      vigns31 = force? vigns30;
      checkMissing(vigns31);
      c42 = `is.object`(vigns31);
      if c42 then L2() else L3(vigns31);
    L1(dx25):
      c43 = `is.object`(dx25);
      if c43 then L5() else L6(dx25);
    L2():
      dr20 = tryDispatchBuiltin.1("$", vigns31);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L4() else L3(dr20);
    L3(vigns33):
      r79 = `$`(vigns33, <sym engines>);
      goto L1(r79);
    L0(dx29):
      return dx29;
    L4():
      dx24 = getTryDispatchBuiltinValue(dr20);
      goto L1(dx24);
    L5():
      dr22 = tryDispatchBuiltin.1("[", dx25);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L7() else L6(dr22);
    L6(dx27):
      i25 = ld i;
      i26 = force? i25;
      __3 = ldf `[` in base;
      r80 = dyn __3(dx27, i26);
      goto L0(r80);
    L7():
      dx28 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx28);
    };
    r82 = dyn vignetteEngine(p20);
    check L130() else D46();
  L159():
    p47 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    p48 = prom<V +>{
      outDir5 = ld outDir;
      outDir6 = force? outDir5;
      checkMissing(outDir6);
      return outDir6;
    };
    r141 = dyn _install_package_vignettes2[, , tangle](p47, p48, TRUE);
    check L160() else D68();
  D46():
    deopt 150 [i22, r82];
  D68():
    deopt 227 [r141];
  L130():
    st engine = r82;
    message = ldf message;
    check L131() else D47();
  L160():
    sym7 = ldf invisible;
    base7 = ldf invisible in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L161() else L162();
  D47():
    deopt 153 [i22];
  L30(r143):
    popenv;
    return r143;
  L131():
    p24 = prom<V +>{
      gettextf2 = ldf gettextf;
      p23 = prom<V +>{
        sQuote = ldf sQuote;
        p22 = prom<V +>{
          basename = ldf basename;
          p21 = prom<V +>{
            file = ld file;
            file1 = force? file;
            checkMissing(file1);
            return file1;
          };
          r84 = dyn basename(p21);
          return r84;
        };
        r86 = dyn sQuote(p22);
        return r86;
      };
      r88 = dyn gettextf2("processing %s", p23);
      return r88;
    };
    r90 = dyn message[, domain](p24, NA_LGL);
    check L132() else D48();
  L161():
    invisible1 = ldf invisible in base;
    r144 = dyn invisible1();
    check L163() else D69();
  L162():
    r142 = dyn base7();
    goto L30(r142);
  D48():
    deopt 157 [i22, r90];
  D69():
    deopt 231 [r144];
  L132():
    tryCatch = ldf tryCatch;
    check L133() else D49();
  L163():
    goto L30(r144);
  D49():
    deopt 159 [i22];
  L133():
    p30 = prom<V +>{
      engine = ld engine;
      engine1 = force? engine;
      checkMissing(engine1);
      c44 = `is.object`(engine1);
      if c44 then L1() else L2(engine1);
    L0(dx31):
      checkFun.0(dx31);
      dx32 = dx31 as cls;
      p25 = prom<V +>{
        file2 = ld file;
        file3 = force? file2;
        checkMissing(file3);
        return file3;
      };
      p26 = prom<V +>{
        keep_source1 = ld `keep.source`;
        keep_source2 = force? keep_source1;
        checkMissing(keep_source2);
        return keep_source2;
      };
      dyn dx32[, pdf, eps, quiet, `keep.source`, stylepath](p25, TRUE, FALSE, TRUE, p26, FALSE);
      setwd1 = ldf setwd;
      p27 = prom<V +>{
        buildDir8 = ld buildDir;
        buildDir9 = force? buildDir8;
        checkMissing(buildDir9);
        return buildDir9;
      };
      dyn setwd1(p27);
      find_vignette_product = ldf find_vignette_product;
      p28 = prom<V +>{
        name = ld name;
        name1 = force? name;
        checkMissing(name1);
        return name1;
      };
      p29 = prom<V +>{
        engine4 = ld engine;
        engine5 = force? engine4;
        checkMissing(engine5);
        return engine5;
      };
      r99 = dyn find_vignette_product[, by, engine](p28, "weave", p29);
      return r99;
    L1():
      dr24 = tryDispatchBuiltin.1("$", engine1);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(engine3):
      r91 = `$`(engine3, <sym weave>);
      goto L0(r91);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx30);
    };
    p31 = prom<V +>{
      r101 = clos inner3708401697;
      return r101;
    };
    r103 = dyn tryCatch[, error](p30, p31);
    check L134() else D50();
  D50():
    deopt 163 [i22, r103];
  L134():
    st output = r103;
    vignette_is_tex = ldf vignette_is_tex;
    check L135() else D51();
  D51():
    deopt 166 [i22];
  L135():
    p32 = prom<V +>{
      output = ld output;
      output1 = force? output;
      checkMissing(output1);
      return output1;
    };
    r105 = dyn vignette_is_tex(p32);
    check L136() else D52();
  D52():
    deopt 168 [i22, r105];
  L136():
    c45 = `as.logical`(r105);
    if c45 then L137() else L22();
  L22():
    goto L23(i22);
  L23(i29):
    file_copy = ldf `file.copy`;
    check L141() else D55();
  L137():
    tryCatch1 = ldf tryCatch;
    check L138() else D53();
  D53():
    deopt 170 [i22];
  D55():
    deopt 178 [i29];
  L138():
    p37 = prom<V +>{
      texi2pdf = ldf texi2pdf;
      p33 = prom<V +>{
        output2 = ld output;
        output3 = force? output2;
        checkMissing(output3);
        return output3;
      };
      p34 = prom<V +>{
        vigns34 = ld vigns;
        vigns35 = force? vigns34;
        checkMissing(vigns35);
        c46 = `is.object`(vigns35);
        if c46 then L1() else L2(vigns35);
      L0(dx34):
        return dx34;
      L1():
        dr26 = tryDispatchBuiltin.1("$", vigns35);
        dc13 = getTryDispatchBuiltinDispatched(dr26);
        if dc13 then L3() else L2(dr26);
      L2(vigns37):
        r107 = `$`(vigns37, <sym dir>);
        goto L0(r107);
      L3():
        dx33 = getTryDispatchBuiltinValue(dr26);
        goto L0(dx33);
      };
      dyn texi2pdf[file, quiet, texinputs](p33, TRUE, p34);
      find_vignette_product1 = ldf find_vignette_product;
      p35 = prom<V +>{
        name2 = ld name;
        name3 = force? name2;
        checkMissing(name3);
        return name3;
      };
      p36 = prom<V +>{
        engine6 = ld engine;
        engine7 = force? engine6;
        checkMissing(engine7);
        return engine7;
      };
      r112 = dyn find_vignette_product1[, by, engine](p35, "texi2pdf", p36);
      st output = r112;
      invisible.0();
      return r112;
    };
    p38 = prom<V +>{
      r114 = clos inner3708401697;
      return r114;
    };
    r116 = dyn tryCatch1[, error](p37, p38);
    check L139() else D54();
  L141():
    p39 = prom<V +>{
      output4 = ld output;
      output5 = force? output4;
      checkMissing(output5);
      return output5;
    };
    p40 = prom<V +>{
      outVignetteDir8 = ld outVignetteDir;
      outVignetteDir9 = force? outVignetteDir8;
      checkMissing(outVignetteDir9);
      return outVignetteDir9;
    };
    r120 = dyn file_copy[, , overwrite](p39, p40, TRUE);
    check L142() else D56();
  D54():
    deopt 174 [i22, r116];
  D56():
    deopt 183 [i29, r120];
  L139():
    goto L23(i22);
  L142():
    r121 = `!`(r120);
    c47 = `as.logical`(r121);
    if c47 then L143() else L24();
  L24():
    goto L25(i29);
  L25(i32):
    goto L19(i32);
  L143():
    stop3 = ldf stop;
    check L144() else D57();
  D57():
    deopt 186 [i29];
  L144():
    p43 = prom<V +>{
      gettextf3 = ldf gettextf;
      p41 = prom<V +>{
        output6 = ld output;
        output7 = force? output6;
        checkMissing(output7);
        return output7;
      };
      p42 = prom<V +>{
        outVignetteDir10 = ld outVignetteDir;
        outVignetteDir11 = force? outVignetteDir10;
        checkMissing(outVignetteDir11);
        return outVignetteDir11;
      };
      r124 = dyn gettextf3("cannot copy '%s' to '%s'", p41, p42);
      return r124;
    };
    r126 = dyn stop3[, domain](p43, NA_LGL);
    check L145() else D58();
  D58():
    deopt 190 [i29, r126];
  L145():
    goto L25(i29);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg stop:cls, reg gettextf:cls, reg engine:*, reg engine1:V, reg c:L, reg engine3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg p:p(V +), reg file:*, reg file1:V, reg p1:p(V +), reg conditionMessage:cls, reg e1:*, reg e2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V |
    mkenv;
    st e = e;
    stop = ldf stop;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        engine = ld engine;
        engine1 = force? engine;
        checkMissing(engine1);
        c = `is.object`(engine1);
        if c then L1() else L2(engine1);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[[", engine1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(engine3):
        __ = ldf `[[` in base;
        r = dyn __(engine3, "name");
        goto L0(r);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      p1 = prom<V +>{
        file = ld file;
        file1 = force? file;
        checkMissing(file1);
        return file1;
      };
      p3 = prom<V +>{
        conditionMessage = ldf conditionMessage;
        p2 = prom<V +>{
          e1 = ld e;
          e2 = force? e1;
          checkMissing(e2);
          return e2;
        };
        r4 = dyn conditionMessage(p2);
        return r4;
      };
      r6 = dyn gettextf("running %s on vignette '%s' failed with message:\n%s", p, p1, p3);
      return r6;
    };
    r8 = dyn stop[, domain, `call.`](p4, NA_LGL, FALSE);
    check L1() else D1();
  D1():
    deopt 7 [r8];
  L1():
    popenv;
    return r8;
  }
}