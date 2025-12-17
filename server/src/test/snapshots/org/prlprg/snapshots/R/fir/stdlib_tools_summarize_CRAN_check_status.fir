fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2904987533;
    st summarize_CRAN_check_status = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2904987533(packages, results, details, issues) {
  (reg packages:*, reg results:*, reg details:*, reg issues:*) -+> V { var packages:*, var results:*, reg results_isMissing:L, reg results_orDefault:*, var details:*, reg details_isMissing:L, reg details_orDefault:*, var issues:*, reg issues_isMissing:L, reg issues_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg results1:*, reg results2:V, reg c:V, reg c1:L, reg CRAN_check_results:cls, reg r2:V, reg results3:*, reg results4:V, reg c2:L, reg results6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg results9:V, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg results12:V, reg r7:V, reg results13:*, reg results14:V, reg c3:L, reg results17:V, reg results18:V, reg dr2:V, reg dc1:L, reg dx2:V, reg results20:V, reg dx3:V, reg r8:V, reg packages1:*, reg packages2:V, reg match:cls, reg r9:V, reg is_na:cls, reg r10:V, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg r16:V, reg results24:*, reg results25:V, reg c4:L, reg results28:V, reg r18:V, reg results29:V, reg dr4:V, reg dc2:L, reg dx4:V, reg results31:V, reg r20:V, reg dx5:V, reg r21:V, reg is_na1:cls, reg r22:V, reg r23:V, reg r24:V, reg __:cls, reg r25:V, reg NROW:cls, reg results32:*, reg results33:V, reg p:p(V +), reg r27:V, reg r28:V, reg c5:L, reg character:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg packages3:*, reg packages4:V, reg length:cls, reg r31:V, reg p1:p(V +), reg r33:V, reg packages5:*, reg packages6:V, reg l:*, reg names__:cls, reg r34:V, reg s:*, reg s1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg results34:*, reg results35:V, reg c6:L, reg results37:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r39:V, reg r40:V, reg any:cls, reg r41:V, reg c7:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg details1:*, reg details2:V, reg c8:V, reg c9:L, reg CRAN_check_details:cls, reg r44:V, reg details3:*, reg details4:V, reg c10:L, reg details6:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg r47:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg details12:V, reg r49:V, reg details13:*, reg details14:V, reg c11:L, reg details17:V, reg details18:V, reg dr10:V, reg dc5:L, reg dx10:V, reg details20:V, reg dx11:V, reg r50:V, reg packages7:*, reg packages8:V, reg match1:cls, reg r51:V, reg is_na2:cls, reg r52:V, reg r53:V, reg __1:cls, reg r54:V, reg details21:*, reg details22:V, reg c12:L, reg details24:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg details25:*, reg details26:V, reg c13:L, reg details29:V, reg details30:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r55:V, reg r56:V, reg __2:cls, reg r57:V, reg sub:cls, reg details33:*, reg details34:V, reg c14:L, reg details36:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r58:V, reg p2:p(V +), reg r60:V, reg l1:*, reg c15:L, reg r62:V, reg l3:*, reg dr18:V, reg dc9:L, reg dx18:V, reg r64:V, reg dx19:V, reg r65:V, reg as_data_frame:cls, reg matrix:cls, reg character1:cls, reg r67:V, reg p3:p(V +), reg r69:V, reg p4:p(V +), reg r71:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r72:V, reg r73:V, reg c16:cls, reg r74:V, reg l4:*, reg names__1:cls, reg r75:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r76:V, reg r77:V, reg issues1:*, reg issues2:V, reg c17:V, reg c18:L, reg CRAN_check_issues:cls, reg r78:V, reg r80:cls, reg r81:cls, reg r82:cls, reg r83:cls, reg split:cls, reg issues3:*, reg issues4:V, reg c19:L, reg issues6:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg __3:cls, reg r84:V, reg p5:p(V +), reg issues7:*, reg issues8:V, reg c20:L, reg issues10:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg __4:cls, reg r86:V, reg p6:p(V +), reg r88:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r89:V, reg r90:V, reg packages9:*, reg packages10:V, reg length1:cls, reg r91:V, reg r92:V, reg c21:L, reg summarize:cls, reg packages11:*, reg packages12:V, reg p7:p(V +), reg results38:*, reg results39:V, reg p8:p(V +), reg details37:*, reg details38:V, reg p9:p(V +), reg issues11:*, reg issues12:V, reg c22:L, reg issues14:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg packages13:*, reg packages14:V, reg __5:cls, reg r96:V, reg p10:p(V +), reg r98:V, reg r99:V, reg split1:cls, reg results40:*, reg results41:V, reg p11:p(V +), reg factor:cls, reg results42:*, reg results43:V, reg c23:L, reg results45:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg r101:V, reg p12:p(V +), reg packages15:*, reg packages16:V, reg p13:p(V +), reg r104:V, reg p14:p(V +), reg r106:V, reg split2:cls, reg details39:*, reg details40:V, reg p15:p(V +), reg factor1:cls, reg details41:*, reg details42:V, reg c24:L, reg details44:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg r108:V, reg p16:p(V +), reg packages17:*, reg packages18:V, reg p17:p(V +), reg r111:V, reg p18:p(V +), reg r113:V, reg unlist:cls, reg lapply:cls, reg packages19:*, reg packages20:V, reg p19:p(V +), reg r115:cls, reg p20:p(V +), reg r117:V, reg p21:p(V +), reg r119:V, reg packages21:*, reg packages22:V, reg l5:*, reg names__2:cls, reg r120:V, reg l6:*, reg class__:cls, reg r121:V, reg s2:*, reg s3:V |
    mkenv;
    st packages = packages;
    results_isMissing = missing.0(results);
    if results_isMissing then L0(NULL) else L0(results);
  L0(results_orDefault):
    st results = results_orDefault;
    details_isMissing = missing.0(details);
    if details_isMissing then L1(NULL) else L1(details);
  L1(details_orDefault):
    st details = details_orDefault;
    issues_isMissing = missing.0(issues);
    if issues_isMissing then L2(NULL) else L2(issues);
  L2(issues_orDefault):
    st issues = issues_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L29() else L30();
  L3(r1):
    c1 = `as.logical`(r1);
    if c1 then L32() else L4();
  L29():
    results1 = ld results;
    check L31() else D0();
  L30():
    r = dyn base(<sym results>);
    goto L3(r);
  D0():
    deopt 1 [results1];
  L4():
    goto L5();
  L5():
    results3 = ld results;
    check L36() else D3();
  L31():
    results2 = force? results1;
    checkMissing(results2);
    c = `==`(results2, NULL);
    goto L3(c);
  L32():
    CRAN_check_results = ldf CRAN_check_results;
    check L33() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 10 [results3];
  L33():
    r2 = dyn CRAN_check_results();
    check L34() else D2();
  L36():
    results4 = force? results3;
    checkMissing(results4);
    c2 = `is.object`(results4);
    if c2 then L37() else L38(results4);
  D2():
    deopt 6 [r2];
  L6(dx1):
    st results = dx1;
    NROW = ldf NROW;
    check L60() else D10();
  L34():
    st results = r2;
    goto L5();
  L37():
    dr = tryDispatchBuiltin.1("[", results4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L39() else L38(dr);
  L38(results6):
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L40() else L41();
  D10():
    deopt 41 [];
  L7(results9, r5):
    r11 = `!`(r5);
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L52() else L53();
  L39():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L40():
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L42() else L43();
  L41():
    r4 = dyn base1(<lang match(`$`(results, Package), packages)>);
    goto L7(results6, r4);
  L60():
    p = prom<V +>{
      results32 = ld results;
      results33 = force? results32;
      checkMissing(results33);
      return results33;
    };
    r27 = dyn NROW(p);
    check L61() else D11();
  D11():
    deopt 43 [r27];
  L8(results12, r7):
    is_na = ldf `is.na` in base;
    r10 = dyn is_na(r7);
    check L51() else D7();
  L9(r15, r16):
    r23 = `!`(r16);
    r24 = `&&`(r15, r23);
    __ = ldf `[` in base;
    r25 = dyn __(results4, r24, <missing>);
    goto L6(r25);
  L42():
    results13 = ld results;
    check L44() else D4();
  L43():
    r6 = dyn base2(<lang `$`(results, Package)>, <sym packages>);
    goto L8(results6, r6);
  L52():
    results24 = ld results;
    check L54() else D8();
  L53():
    r14 = dyn base3(<lang `$`(results, Status)>);
    goto L9(r11, r14);
  L61():
    r28 = `!`(r27);
    c5 = `as.logical`(r28);
    if c5 then L62() else L10();
  D4():
    deopt 16 [results6, results13];
  D7():
    deopt 26 [results12, r10];
  D8():
    deopt 29 [results9, r11, results24];
  L10():
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L71() else L72();
  L44():
    results14 = force? results13;
    checkMissing(results14);
    c3 = `is.object`(results14);
    if c3 then L46() else L47(results6, results14);
  L51():
    goto L7(results12, r10);
  L54():
    results25 = force? results24;
    checkMissing(results25);
    c4 = `is.object`(results25);
    if c4 then L56() else L57(results9, r11, results25);
  L62():
    character = ldf character;
    check L63() else D12();
  D12():
    deopt 46 [];
  L12(r38):
    c7 = `as.logical`(r38);
    if c7 then L79() else L13();
  L45(results20, dx3):
    packages1 = ld packages;
    check L49() else D5();
  L46():
    dr2 = tryDispatchBuiltin.1("$", results14);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L48() else L47(results6, dr2);
  L47(results17, results18):
    r8 = `$`(results18, <sym Package>);
    goto L45(results17, r8);
  L55(results31, r20, dx5):
    is_na1 = ldf `is.na` in base;
    r22 = dyn is_na1(dx5);
    check L59() else D9();
  L56():
    dr4 = tryDispatchBuiltin.1("$", results25);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L58() else L57(results9, r11, dr4);
  L57(results28, r18, results29):
    r21 = `$`(results29, <sym Status>);
    goto L55(results28, r18, r21);
  L63():
    p1 = prom<V +>{
      sym4 = ldf length;
      base4 = ldf length in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      packages3 = ld packages;
      packages4 = force? packages3;
      checkMissing(packages4);
      length = ldf length in base;
      r31 = dyn length(packages4);
      goto L0(r31);
    L2():
      r29 = dyn base4(<sym packages>);
      goto L0(r29);
    };
    r33 = dyn character(p1);
    check L64() else D13();
  L71():
    results34 = ld results;
    check L73() else D18();
  L72():
    r37 = dyn base5(<lang `!=`(`$`(results, Status), "OK")>);
    goto L12(r37);
  D5():
    deopt 19 [results20, packages1];
  D9():
    deopt 33 [results31, r20, r22];
  D13():
    deopt 48 [r33];
  D18():
    deopt 64 [results34];
  L13():
    as_data_frame = ldf `as.data.frame`;
    check L119() else D32();
  L21():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L126() else L127();
  L48():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L45(results6, dx2);
  L49():
    packages2 = force? packages1;
    checkMissing(packages2);
    match = ldf match in base;
    r9 = dyn match(dx3, packages2, NA_INT, NULL);
    check L50() else D6();
  L58():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L55(results9, r11, dx4);
  L59():
    goto L9(r20, r22);
  L64():
    st s = r33;
    packages5 = ld packages;
    check L65() else D14();
  L73():
    results35 = force? results34;
    checkMissing(results35);
    c6 = `is.object`(results35);
    if c6 then L75() else L76(results35);
  L79():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L80() else L81();
  D6():
    deopt 24 [results20, r9];
  D14():
    deopt 50 [packages5];
  D32():
    deopt 124 [];
  L14(r43):
    c9 = `as.logical`(r43);
    if c9 then L83() else L15();
  L23(r77):
    c18 = `as.logical`(r77);
    if c18 then L129() else L24();
  L50():
    goto L8(results20, r9);
  L65():
    packages6 = force? packages5;
    checkMissing(packages6);
    l = ld s;
    names__ = ldf `names<-`;
    check L66() else D15();
  L74(dx7):
    r40 = `!=`(dx7, "OK");
    any = ldf any in base;
    r41 = dyn any(r40);
    check L78() else D19();
  L75():
    dr6 = tryDispatchBuiltin.1("$", results35);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L77() else L76(dr6);
  L76(results37):
    r39 = `$`(results37, <sym Status>);
    goto L74(r39);
  L80():
    details1 = ld details;
    check L82() else D20();
  L81():
    r42 = dyn base6(<sym details>);
    goto L14(r42);
  L119():
    p4 = prom<V +>{
      matrix = ldf matrix;
      p3 = prom<V +>{
        character1 = ldf character;
        r67 = dyn character1();
        return r67;
      };
      r69 = dyn matrix[, ncol](p3, 7);
      return r69;
    };
    r71 = dyn as_data_frame[, stringsAsFactors](p4, FALSE);
    check L120() else D33();
  L126():
    issues1 = ld issues;
    check L128() else D37();
  L127():
    r76 = dyn base10(<sym issues>);
    goto L23(r76);
  D15():
    deopt 53 [packages6, l, packages6];
  D19():
    deopt 70 [r41];
  D20():
    deopt 72 [details1];
  D33():
    deopt 128 [r71];
  D37():
    deopt 147 [issues1];
  L15():
    goto L16();
  L16():
    details3 = ld details;
    check L87() else D23();
  L24():
    goto L25();
  L25():
    r80 = clos inner1812223662;
    st summarize_results = r80;
    r81 = clos inner4283842336;
    st summarize_details = r81;
    r82 = clos inner3002224933;
    st summarize_issues = r82;
    r83 = clos inner1700110323;
    st summarize = r83;
    split = ldf split;
    check L133() else D40();
  L66():
    r34 = dyn names__(l, NULL, packages6);
    check L67() else D16();
  L77():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L74(dx6);
  L78():
    goto L12(r41);
  L82():
    details2 = force? details1;
    checkMissing(details2);
    c8 = `==`(details2, NULL);
    goto L14(c8);
  L83():
    CRAN_check_details = ldf CRAN_check_details;
    check L84() else D21();
  L120():
    st details = r71;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L121() else L122();
  L128():
    issues2 = force? issues1;
    checkMissing(issues2);
    c17 = `==`(issues2, NULL);
    goto L23(c17);
  L129():
    CRAN_check_issues = ldf CRAN_check_issues;
    check L130() else D38();
  D16():
    deopt 55 [packages6, r34];
  D21():
    deopt 76 [];
  D23():
    deopt 81 [details3];
  D38():
    deopt 151 [];
  D40():
    deopt 169 [];
  L22(r73):
    l4 = ld details;
    names__1 = ldf `names<-`;
    check L124() else D35();
  L67():
    st s = r34;
    s = ld s;
    check L68() else D17();
  L84():
    r44 = dyn CRAN_check_details();
    check L85() else D22();
  L87():
    details4 = force? details3;
    checkMissing(details4);
    c10 = `is.object`(details4);
    if c10 then L88() else L89(details4);
  L121():
    c16 = ldf c in base;
    r74 = dyn c16("Package", "Version", "Flavor", "Check", "Status", "Output", "Flags");
    check L123() else D34();
  L122():
    r72 = dyn base9("Package", "Version", "Flavor", "Check", "Status", "Output", "Flags");
    goto L22(r72);
  L130():
    r78 = dyn CRAN_check_issues();
    check L131() else D39();
  L133():
    p5 = prom<V +>{
      issues3 = ld issues;
      issues4 = force? issues3;
      checkMissing(issues4);
      c19 = `is.object`(issues4);
      if c19 then L1() else L2(issues4);
    L0(dx21):
      return dx21;
    L1():
      dr20 = tryDispatchBuiltin.1("[", issues4);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(issues6):
      __3 = ldf `[` in base;
      r84 = dyn __3(issues6, -1);
      goto L0(r84);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    };
    p6 = prom<V +>{
      issues7 = ld issues;
      issues8 = force? issues7;
      checkMissing(issues8);
      c20 = `is.object`(issues8);
      if c20 then L1() else L2(issues8);
    L0(dx23):
      return dx23;
    L1():
      dr22 = tryDispatchBuiltin.1("[[", issues8);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(issues10):
      __4 = ldf `[[` in base;
      r86 = dyn __4(issues10, 1);
      goto L0(r86);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx22);
    };
    r88 = dyn split(p5, p6);
    check L134() else D41();
  D17():
    deopt 57 [s];
  D22():
    deopt 77 [r44];
  D34():
    deopt 140 [r74];
  D35():
    deopt 142 [r73, l4, r73];
  D39():
    deopt 152 [r78];
  D41():
    deopt 172 [r88];
  L17(dx9):
    st details = dx9;
    details21 = ld details;
    check L103() else D28();
  L68():
    s1 = force? s;
    checkMissing(s1);
    popenv;
    return s1;
  L85():
    st details = r44;
    goto L16();
  L88():
    dr8 = tryDispatchBuiltin.1("[", details4);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L90() else L89(dr8);
  L89(details6):
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L91() else L92();
  L123():
    goto L22(r74);
  L124():
    r75 = dyn names__1(l4, NULL, r73);
    check L125() else D36();
  L131():
    st issues = r78;
    goto L25();
  L134():
    st issues = r88;
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L135() else L136();
  D28():
    deopt 103 [details21];
  D36():
    deopt 144 [r73, r75];
  L18(r47):
    r53 = `!`(r47);
    __1 = ldf `[` in base;
    r54 = dyn __1(details4, r53, <missing>);
    goto L17(r54);
  L26(r90):
    r92 = `==`(r90, 1);
    c21 = `as.logical`(r92);
    if c21 then L139() else L27();
  L90():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L17(dx8);
  L91():
    sym8 = ldf match;
    base8 = ldf match in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L93() else L94();
  L92():
    r46 = dyn base7(<lang match(`$`(details, Package), packages)>);
    goto L18(r46);
  L103():
    details22 = force? details21;
    checkMissing(details22);
    c12 = `is.object`(details22);
    if c12 then L104() else L105(details22);
  L125():
    st details = r75;
    goto L21();
  L135():
    packages9 = ld packages;
    check L137() else D42();
  L136():
    r89 = dyn base11(<sym packages>);
    goto L26(r89);
  D42():
    deopt 176 [packages9];
  L19(details12, r49):
    is_na2 = ldf `is.na` in base;
    r52 = dyn is_na2(r49);
    check L102() else D27();
  L20(dx13):
    st details = dx13;
    sub = ldf sub;
    check L112() else D30();
  L27():
    split1 = ldf split;
    check L143() else D46();
  L28(r99):
    st s = r99;
    packages21 = ld packages;
    check L149() else D52();
  L93():
    details13 = ld details;
    check L95() else D24();
  L94():
    r48 = dyn base8(<lang `$`(details, Package)>, <sym packages>);
    goto L19(details6, r48);
  L104():
    dr12 = tryDispatchBuiltin.1("[", details22);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L106() else L105(dr12);
  L105(details24):
    details25 = ld details;
    check L107() else D29();
  L137():
    packages10 = force? packages9;
    checkMissing(packages10);
    length1 = ldf length in base;
    r91 = dyn length1(packages10);
    check L138() else D43();
  L139():
    summarize = ldf summarize;
    check L140() else D44();
  D24():
    deopt 87 [details6, details13];
  D27():
    deopt 97 [details12, r52];
  D29():
    deopt 105 [details24, details25];
  D30():
    deopt 115 [];
  D43():
    deopt 179 [r91];
  D44():
    deopt 183 [];
  D46():
    deopt 190 [];
  D52():
    deopt 206 [packages21];
  L95():
    details14 = force? details13;
    checkMissing(details14);
    c11 = `is.object`(details14);
    if c11 then L97() else L98(details6, details14);
  L102():
    goto L18(r52);
  L106():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L20(dx12);
  L107():
    details26 = force? details25;
    checkMissing(details26);
    c13 = `is.object`(details26);
    if c13 then L109() else L110(details24, details26);
  L112():
    p2 = prom<V +>{
      details33 = ld details;
      details34 = force? details33;
      checkMissing(details34);
      c14 = `is.object`(details34);
      if c14 then L1() else L2(details34);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("$", details34);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(details36):
      r58 = `$`(details36, <sym Output>);
      goto L0(r58);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r60 = dyn sub("[[:space:]]+$", "", p2);
    check L113() else D31();
  L138():
    goto L26(r91);
  L140():
    p7 = prom<V +>{
      packages11 = ld packages;
      packages12 = force? packages11;
      checkMissing(packages12);
      return packages12;
    };
    p8 = prom<V +>{
      results38 = ld results;
      results39 = force? results38;
      checkMissing(results39);
      return results39;
    };
    p9 = prom<V +>{
      details37 = ld details;
      details38 = force? details37;
      checkMissing(details38);
      return details38;
    };
    p10 = prom<V +>{
      issues11 = ld issues;
      issues12 = force? issues11;
      checkMissing(issues12);
      c22 = `is.object`(issues12);
      if c22 then L1() else L2(issues12);
    L0(dx25):
      return dx25;
    L1():
      dr24 = tryDispatchBuiltin.1("[[", issues12);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(issues14):
      packages13 = ld packages;
      packages14 = force? packages13;
      __5 = ldf `[[` in base;
      r96 = dyn __5(issues14, packages14);
      goto L0(r96);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx24);
    };
    r98 = dyn summarize(p7, p8, p9, p10);
    check L141() else D45();
  L143():
    p11 = prom<V +>{
      results40 = ld results;
      results41 = force? results40;
      checkMissing(results41);
      return results41;
    };
    p14 = prom<V +>{
      factor = ldf factor;
      p12 = prom<V +>{
        results42 = ld results;
        results43 = force? results42;
        checkMissing(results43);
        c23 = `is.object`(results43);
        if c23 then L1() else L2(results43);
      L0(dx27):
        return dx27;
      L1():
        dr26 = tryDispatchBuiltin.1("$", results43);
        dc13 = getTryDispatchBuiltinDispatched(dr26);
        if dc13 then L3() else L2(dr26);
      L2(results45):
        r101 = `$`(results45, <sym Package>);
        goto L0(r101);
      L3():
        dx26 = getTryDispatchBuiltinValue(dr26);
        goto L0(dx26);
      };
      p13 = prom<V +>{
        packages15 = ld packages;
        packages16 = force? packages15;
        checkMissing(packages16);
        return packages16;
      };
      r104 = dyn factor(p12, p13);
      return r104;
    };
    r106 = dyn split1(p11, p14);
    check L144() else D47();
  L149():
    packages22 = force? packages21;
    checkMissing(packages22);
    l5 = ld s;
    names__2 = ldf `names<-`;
    check L150() else D53();
  D31():
    deopt 119 [r60];
  D45():
    deopt 188 [r98];
  D47():
    deopt 193 [r106];
  D53():
    deopt 209 [packages22, l5, packages22];
  L96(details20, dx11):
    packages7 = ld packages;
    check L100() else D25();
  L97():
    dr10 = tryDispatchBuiltin.1("$", details14);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L99() else L98(details6, dr10);
  L98(details17, details18):
    r50 = `$`(details18, <sym Package>);
    goto L96(details17, r50);
  L108(dx15):
    r56 = `!=`(dx15, "*");
    __2 = ldf `[` in base;
    r57 = dyn __2(details22, r56, <missing>);
    goto L20(r57);
  L109():
    dr14 = tryDispatchBuiltin.1("$", details26);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L111() else L110(details24, dr14);
  L110(details29, details30):
    r55 = `$`(details30, <sym Check>);
    goto L108(r55);
  L113():
    l1 = ld details;
    c15 = `is.object`(l1);
    if c15 then L115() else L116(r60, l1);
  L141():
    goto L28(r98);
  L144():
    st results = r106;
    split2 = ldf split;
    check L145() else D48();
  L150():
    r120 = dyn names__2(l5, NULL, packages22);
    check L151() else D54();
  D25():
    deopt 90 [details20, packages7];
  D48():
    deopt 196 [];
  D54():
    deopt 211 [packages22, r120];
  L99():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L96(details6, dx10);
  L100():
    packages8 = force? packages7;
    checkMissing(packages8);
    match1 = ldf match in base;
    r51 = dyn match1(dx11, packages8, NA_INT, NULL);
    check L101() else D26();
  L111():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L108(dx14);
  L114(r64, dx19):
    st details = dx19;
    goto L21();
  L115():
    dr18 = tryDispatchBuiltin.0("$<-", l1, r60);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L117() else L116(r60, dr18);
  L116(r62, l3):
    r65 = `$<-`(l3, <sym Output>, r60);
    goto L114(r62, r65);
  L145():
    p15 = prom<V +>{
      details39 = ld details;
      details40 = force? details39;
      checkMissing(details40);
      return details40;
    };
    p18 = prom<V +>{
      factor1 = ldf factor;
      p16 = prom<V +>{
        details41 = ld details;
        details42 = force? details41;
        checkMissing(details42);
        c24 = `is.object`(details42);
        if c24 then L1() else L2(details42);
      L0(dx29):
        return dx29;
      L1():
        dr28 = tryDispatchBuiltin.1("$", details42);
        dc14 = getTryDispatchBuiltinDispatched(dr28);
        if dc14 then L3() else L2(dr28);
      L2(details44):
        r108 = `$`(details44, <sym Package>);
        goto L0(r108);
      L3():
        dx28 = getTryDispatchBuiltinValue(dr28);
        goto L0(dx28);
      };
      p17 = prom<V +>{
        packages17 = ld packages;
        packages18 = force? packages17;
        checkMissing(packages18);
        return packages18;
      };
      r111 = dyn factor1(p16, p17);
      return r111;
    };
    r113 = dyn split2(p15, p18);
    check L146() else D49();
  L151():
    st s = r120;
    l6 = ld s;
    class__ = ldf `class<-`;
    check L152() else D55();
  D26():
    deopt 95 [details20, r51];
  D49():
    deopt 199 [r113];
  D55():
    deopt 216 ["summarize_CRAN_check_status", l6, "summarize_CRAN_check_status"];
  L101():
    goto L19(details20, r51);
  L117():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L114(r60, dx18);
  L146():
    st details = r113;
    unlist = ldf unlist;
    check L147() else D50();
  L152():
    r121 = dyn class__(l6, NULL, "summarize_CRAN_check_status");
    check L153() else D56();
  D50():
    deopt 202 [];
  D56():
    deopt 218 ["summarize_CRAN_check_status", r121];
  L147():
    p21 = prom<V +>{
      lapply = ldf lapply;
      p19 = prom<V +>{
        packages19 = ld packages;
        packages20 = force? packages19;
        checkMissing(packages20);
        return packages20;
      };
      p20 = prom<V +>{
        r115 = clos inner3913899244;
        return r115;
      };
      r117 = dyn lapply(p19, p20);
      return r117;
    };
    r119 = dyn unlist(p21);
    check L148() else D51();
  L153():
    st s = r121;
    s2 = ld s;
    check L154() else D57();
  D51():
    deopt 204 [r119];
  D57():
    deopt 220 [s2];
  L148():
    goto L28(r119);
  L154():
    s3 = force? s2;
    checkMissing(s3);
    popenv;
    return s3;
  }
}
fun inner1812223662(p, r) {
  (reg p:*, reg r:*) -+> V { var p:*, var r:*, reg NROW:cls, reg r1:*, reg r2:V, reg p1:p(V +), reg r4:V, reg r5:V, reg c:L, reg character:cls, reg r6:V, reg table:cls, reg r9:*, reg r10:V, reg c1:L, reg r12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r13:V, reg p2:p(V +), reg r15:V, reg c2:L, reg r17:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym:cls, reg base:cls, reg guard:L, reg r20:V, reg r21:V, reg r22:V, reg c3:cls, reg r23:V, reg __:cls, reg r24:V, reg tab:*, reg tab1:V, reg c4:L, reg tab3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg tab6:V, reg r26:V, reg tab7:*, reg tab8:V, reg is_na:cls, reg r27:V, reg r28:V, reg tab9:*, reg tab10:V, reg r29:V, reg r30:V, reg __1:cls, reg r31:V, reg paste:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r32:V, reg r33:V, reg sprintf:cls, reg paste1:cls, reg sprintf1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r34:V, reg r35:V, reg tab11:*, reg tab12:V, reg names:cls, reg r36:V, reg p3:p(V +), reg tab13:*, reg tab14:V, reg p4:p(V +), reg r39:V, reg p5:p(V +), reg r41:V, reg p6:p(V +), reg r43:V, reg sprintf2:cls, reg p7:*, reg p8:V, reg p9:p(V +), reg r45:V, reg c5:cls, reg r46:V, reg p10:p(V +), reg r48:V |
    mkenv;
    st p = p;
    st r = r;
    NROW = ldf NROW;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p1 = prom<V +>{
      r1 = ld r;
      r2 = force? r1;
      checkMissing(r2);
      return r2;
    };
    r4 = dyn NROW(p1);
    check L7() else D1();
  D1():
    deopt 3 [r4];
  L7():
    r5 = `!`(r4);
    c = `as.logical`(r5);
    if c then L8() else L0();
  L0():
    table = ldf table;
    check L13() else D4();
  L8():
    character = ldf character;
    check L9() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 12 [];
  L9():
    r6 = dyn character();
    check L10() else D3();
  L13():
    p2 = prom<V +>{
      r9 = ld r;
      r10 = force? r9;
      checkMissing(r10);
      c1 = `is.object`(r10);
      if c1 then L1() else L2(r10);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", r10);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r12):
      r13 = `$`(r12, <sym Status>);
      goto L0(r13);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r15 = dyn table(p2);
    check L14() else D5();
  D3():
    deopt 7 [r6];
  D5():
    deopt 14 [r15];
  L10():
    popenv;
    return r6;
  L14():
    c2 = `is.object`(r15);
    if c2 then L15() else L16(r15);
  L2(dx3):
    st tab = dx3;
    tab = ld tab;
    check L21() else D7();
  L15():
    dr2 = tryDispatchBuiltin.1("[", r15);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L17() else L16(dr2);
  L16(r17):
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  D7():
    deopt 26 [tab];
  L3(r21, r22):
    __ = ldf `[` in base;
    r24 = dyn __(r21, r22);
    goto L2(r24);
  L17():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L18():
    c3 = ldf c in base;
    r23 = dyn c3("OK", "NOTE", "WARNING", "ERROR", "FAILURE");
    check L20() else D6();
  L19():
    r20 = dyn base("OK", "NOTE", "WARNING", "ERROR", "FAILURE");
    goto L3(r17, r20);
  L21():
    tab1 = force? tab;
    checkMissing(tab1);
    c4 = `is.object`(tab1);
    if c4 then L22() else L23(tab1);
  D6():
    deopt 23 [r17, r23];
  L4(dx5):
    st tab = dx5;
    paste = ldf paste;
    check L30() else D11();
  L20():
    goto L3(r17, r23);
  L22():
    dr4 = tryDispatchBuiltin.1("[", tab1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L24() else L23(dr4);
  L23(tab3):
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  D11():
    deopt 42 [];
  L5(tab6, r26):
    r28 = `!`(r26);
    tab9 = ld tab;
    check L29() else D10();
  L24():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L4(dx4);
  L25():
    tab7 = ld tab;
    check L27() else D8();
  L26():
    r25 = dyn base1(<sym tab>);
    goto L5(tab3, r25);
  L30():
    p10 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      sprintf = ldf sprintf;
      p6 = prom<V +>{
        paste1 = ldf paste;
        p5 = prom<V +>{
          sprintf1 = ldf sprintf;
          p3 = prom<V +>{
            sym3 = ldf names;
            base3 = ldf names in base;
            guard3 = `==`.4(sym3, base3);
            if guard3 then L1() else L2();
          L0(r35):
            return r35;
          L1():
            tab11 = ld tab;
            tab12 = force? tab11;
            checkMissing(tab12);
            names = ldf names in base;
            r36 = dyn names(tab12);
            goto L0(r36);
          L2():
            r34 = dyn base3(<sym tab>);
            goto L0(r34);
          };
          p4 = prom<V +>{
            tab13 = ld tab;
            tab14 = force? tab13;
            checkMissing(tab14);
            return tab14;
          };
          r39 = dyn sprintf1("%s: %s", p3, p4);
          return r39;
        };
        r41 = dyn paste1[, collapse](p5, ", ");
        return r41;
      };
      r43 = dyn sprintf("Current CRAN status: %s", p6);
      sprintf2 = ldf sprintf;
      p9 = prom<V +>{
        p7 = ld p;
        p8 = force? p7;
        checkMissing(p8);
        return p8;
      };
      r45 = dyn sprintf2("See: <https://CRAN.R-project.org/web/checks/check_results_%s.html>", p9);
      c5 = ldf c in base;
      r46 = dyn c5(r43, r45);
      goto L0(r46);
    L2():
      r32 = dyn base2(<lang sprintf("Current CRAN status: %s", paste(sprintf("%s: %s", names(tab), tab), collapse=", "))>, <lang sprintf("See: <https://CRAN.R-project.org/web/checks/check_results_%s.html>", p)>);
      goto L0(r32);
    };
    r48 = dyn paste[, collapse](p10, "\n");
    check L31() else D12();
  D8():
    deopt 30 [tab3, tab7];
  D10():
    deopt 34 [tab6, r28, tab9];
  D12():
    deopt 46 [r48];
  L27():
    tab8 = force? tab7;
    checkMissing(tab8);
    is_na = ldf `is.na` in base;
    r27 = dyn is_na(tab8);
    check L28() else D9();
  L29():
    tab10 = force? tab9;
    checkMissing(tab10);
    r29 = `>`(tab10, 0.0);
    r30 = `&&`(r28, r29);
    __1 = ldf `[` in base;
    r31 = dyn __1(tab6, r30);
    goto L4(r31);
  L31():
    popenv;
    return r48;
  D9():
    deopt 33 [tab3, r27];
  L28():
    goto L5(tab3, r27);
  }
}
fun inner4283842336(p, d) {
  (reg p:*, reg d:*) -+> V { var p:*, var d:*, reg NROW:cls, reg d1:*, reg d2:V, reg p1:p(V +), reg r1:V, reg r2:V, reg c:L, reg character:cls, reg r3:V, reg which:cls, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg d3:*, reg d4:V, reg names:cls, reg r8:V, reg r9:V, reg p2:p(V +), reg r11:V, reg which1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg d5:*, reg d6:V, reg names1:cls, reg r14:V, reg r15:V, reg p3:p(V +), reg r17:V, reg d7:*, reg d8:V, reg c1:L, reg d10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r18:V, reg r19:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg ind:*, reg ind1:V, reg any:cls, reg r22:V, reg c2:L, reg sub:cls, reg d11:*, reg d12:V, reg c3:L, reg d14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ind2:*, reg ind3:V, reg poo:*, reg poo1:V, reg __:cls, reg r23:V, reg p4:p(V +), reg r25:V, reg l:*, reg c4:L, reg r27:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r29:V, reg dx5:V, reg ind4:*, reg ind5:V, reg poo2:*, reg poo3:V, reg ___:cls, reg r30:V, reg apply:cls, reg d15:*, reg d16:V, reg c5:L, reg d18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg pof:*, reg pof1:V, reg r32:V, reg __1:cls, reg r33:V, reg p5:p(V +), reg paste:*, reg paste1:V, reg p6:p(V +), reg r36:V, reg d19:*, reg d20:V, reg c6:L, reg d22:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r37:V, reg r38:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r39:V, reg r40:V, reg ind6:*, reg ind7:V, reg any1:cls, reg r41:V, reg c7:L, reg apply1:cls, reg d23:*, reg d24:V, reg c8:L, reg d26:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg ind8:*, reg ind9:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r42:V, reg d29:V, reg ind12:V, reg r43:V, reg pof2:*, reg pof3:V, reg poo4:*, reg poo5:V, reg c9:cls, reg r44:V, reg r45:V, reg __2:cls, reg r46:V, reg p7:p(V +), reg paste2:*, reg paste3:V, reg p8:p(V +), reg r49:V, reg l3:*, reg c10:L, reg r51:V, reg l5:*, reg dr12:V, reg dc6:L, reg dx12:V, reg r53:V, reg dx13:V, reg ind13:*, reg ind14:V, reg ___1:cls, reg r54:V, reg _canonicalize_quotes:cls, reg txt:*, reg txt1:V, reg p9:p(V +), reg r57:V, reg lapply:cls, reg split:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r58:V, reg r59:V, reg NROW1:cls, reg d30:*, reg d31:V, reg p10:p(V +), reg r61:V, reg r62:I, reg p11:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r64:V, reg r65:V, reg txt2:*, reg txt3:V, reg unique:cls, reg txt4:*, reg txt5:V, reg p12:p(V +), reg r67:V, reg match:cls, reg r68:V, reg p13:p(V +), reg r70:V, reg p14:p(V +), reg r72:cls, reg p15:p(V +), reg r74:V, reg paste4:cls, reg unlist:cls, reg lapply1:cls, reg out:*, reg out1:V, reg p16:p(V +), reg paste5:*, reg paste6:V, reg p17:p(V +), reg r77:V, reg p18:p(V +), reg r79:V, reg p19:p(V +), reg r81:V |
    mkenv;
    st p = p;
    st d = d;
    NROW = ldf NROW;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p1 = prom<V +>{
      d1 = ld d;
      d2 = force? d1;
      checkMissing(d2);
      return d2;
    };
    r1 = dyn NROW(p1);
    check L11() else D1();
  D1():
    deopt 3 [r1];
  L11():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L12() else L0();
  L0():
    which = ldf which;
    check L17() else D4();
  L12():
    character = ldf character;
    check L13() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 12 [];
  L13():
    r3 = dyn character();
    check L14() else D3();
  L17():
    p2 = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r7):
      r9 = `==`(r7, "Flavor");
      return r9;
    L1():
      d3 = ld d;
      d4 = force? d3;
      checkMissing(d4);
      names = ldf names in base;
      r8 = dyn names(d4);
      goto L0(r8);
    L2():
      r6 = dyn base(<sym d>);
      goto L0(r6);
    };
    r11 = dyn which(p2);
    check L18() else D5();
  D3():
    deopt 7 [r3];
  D5():
    deopt 14 [r11];
  L14():
    popenv;
    return r3;
  L18():
    st pof = r11;
    which1 = ldf which;
    check L19() else D6();
  D6():
    deopt 17 [];
  L19():
    p3 = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r13):
      r15 = `==`(r13, "Output");
      return r15;
    L1():
      d5 = ld d;
      d6 = force? d5;
      checkMissing(d6);
      names1 = ldf names in base;
      r14 = dyn names1(d6);
      goto L0(r14);
    L2():
      r12 = dyn base1(<sym d>);
      goto L0(r12);
    };
    r17 = dyn which1(p3);
    check L20() else D7();
  D7():
    deopt 19 [r17];
  L20():
    st poo = r17;
    d7 = ld d;
    check L21() else D8();
  D8():
    deopt 21 [d7];
  L21():
    d8 = force? d7;
    checkMissing(d8);
    c1 = `is.object`(d8);
    if c1 then L23() else L24(d8);
  L22(dx1):
    r19 = `==`(dx1, "whether package can be installed");
    st ind = r19;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  L23():
    dr = tryDispatchBuiltin.1("$", d8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(dr);
  L24(d10):
    r18 = `$`(d10, <sym Check>);
    goto L22(r18);
  L2(r21):
    c2 = `as.logical`(r21);
    if c2 then L30() else L3();
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L22(dx);
  L26():
    ind = ld ind;
    check L28() else D9();
  L27():
    r20 = dyn base2(<sym ind>);
    goto L2(r20);
  D9():
    deopt 29 [ind];
  L3():
    goto L5();
  L5():
    apply = ldf apply;
    check L39() else D15();
  L28():
    ind1 = force? ind;
    checkMissing(ind1);
    any = ldf any in base;
    r22 = dyn any(ind1);
    check L29() else D10();
  L30():
    sub = ldf sub;
    check L31() else D11();
  D10():
    deopt 32 [r22];
  D11():
    deopt 34 [];
  D15():
    deopt 48 [];
  L29():
    goto L2(r22);
  L31():
    p4 = prom<V +>{
      d11 = ld d;
      d12 = force? d11;
      checkMissing(d12);
      c3 = `is.object`(d12);
      if c3 then L1() else L2(d12);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", d12);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(d14):
      ind2 = ld ind;
      ind3 = force? ind2;
      poo = ld poo;
      poo1 = force? poo;
      __ = ldf `[` in base;
      r23 = dyn __(d14, ind3, poo1);
      goto L0(r23);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r25 = dyn sub("\nSee[^\n]*for details[.]$", "", p4);
    check L32() else D12();
  L39():
    p5 = prom<V +>{
      d15 = ld d;
      d16 = force? d15;
      checkMissing(d16);
      c5 = `is.object`(d16);
      if c5 then L1() else L2(d16);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", d16);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(d18):
      pof = ld pof;
      pof1 = force? pof;
      checkMissing(pof1);
      r32 = `-`(<missing>, pof1);
      __1 = ldf `[` in base;
      r33 = dyn __1(d18, r32);
      goto L0(r33);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p6 = prom<V +>{
      paste = ld paste;
      paste1 = force? paste;
      checkMissing(paste1);
      return paste1;
    };
    r36 = dyn apply[, , , collapse](p5, 1, p6, "\r");
    check L40() else D16();
  D12():
    deopt 38 [r25];
  D16():
    deopt 54 [r36];
  L32():
    l = ld d;
    c4 = `is.object`(l);
    if c4 then L33() else L34(r25, l);
  L40():
    st txt = r36;
    d19 = ld d;
    check L41() else D17();
  D17():
    deopt 56 [d19];
  L4(r29, dx5):
    st d = dx5;
    goto L5();
  L33():
    dr4 = tryDispatchBuiltin.0("[<-", l, r25);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L35() else L34(r25, dr4);
  L34(r27, l2):
    ind4 = ld ind;
    check L36() else D13();
  L41():
    d20 = force? d19;
    checkMissing(d20);
    c6 = `is.object`(d20);
    if c6 then L43() else L44(d20);
  D13():
    deopt 40 [r27, l2, r25, ind4];
  L35():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L4(r25, dx4);
  L36():
    ind5 = force? ind4;
    poo2 = ld poo;
    check L37() else D14();
  L42(dx9):
    r38 = `==`(dx9, "installed package size");
    st ind = r38;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L43():
    dr8 = tryDispatchBuiltin.1("$", d20);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L45() else L44(dr8);
  L44(d22):
    r37 = `$`(d22, <sym Check>);
    goto L42(r37);
  D14():
    deopt 41 [r27, l2, r25, ind5, poo2];
  L6(r40):
    c7 = `as.logical`(r40);
    if c7 then L50() else L7();
  L37():
    poo3 = force? poo2;
    ___ = ldf `[<-` in base;
    r30 = dyn ___(l2, r25, ind5, poo3);
    goto L4(r27, r30);
  L45():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L42(dx8);
  L46():
    ind6 = ld ind;
    check L48() else D18();
  L47():
    r39 = dyn base3(<sym ind>);
    goto L6(r39);
  D18():
    deopt 64 [ind6];
  L7():
    goto L9();
  L9():
    _canonicalize_quotes = ldf `.canonicalize_quotes`;
    check L58() else D23();
  L48():
    ind7 = force? ind6;
    checkMissing(ind7);
    any1 = ldf any in base;
    r41 = dyn any1(ind7);
    check L49() else D19();
  L50():
    apply1 = ldf apply;
    check L51() else D20();
  D19():
    deopt 67 [r41];
  D20():
    deopt 69 [];
  D23():
    deopt 84 [];
  L49():
    goto L6(r41);
  L51():
    p7 = prom<V +>{
      d23 = ld d;
      d24 = force? d23;
      checkMissing(d24);
      c8 = `is.object`(d24);
      if c8 then L2() else L3(d24);
    L0(dx11):
      return dx11;
    L2():
      dr10 = tryDispatchBuiltin.1("[", d24);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L4() else L3(dr10);
    L3(d26):
      ind8 = ld ind;
      ind9 = force? ind8;
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L5() else L6();
    L1(d29, ind12, r43):
      r45 = `-`(<missing>, r43);
      __2 = ldf `[` in base;
      r46 = dyn __2(d29, ind12, r45);
      goto L0(r46);
    L4():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    L5():
      pof2 = ld pof;
      pof3 = force? pof2;
      checkMissing(pof3);
      poo4 = ld poo;
      poo5 = force? poo4;
      checkMissing(poo5);
      c9 = ldf c in base;
      r44 = dyn c9(pof3, poo5);
      goto L1(d26, ind9, r44);
    L6():
      r42 = dyn base4(<sym pof>, <sym poo>);
      goto L1(d26, ind9, r42);
    };
    p8 = prom<V +>{
      paste2 = ld paste;
      paste3 = force? paste2;
      checkMissing(paste3);
      return paste3;
    };
    r49 = dyn apply1[, , , collapse](p7, 1, p8, "\r");
    check L52() else D21();
  L58():
    p9 = prom<V +>{
      txt = ld txt;
      txt1 = force? txt;
      checkMissing(txt1);
      return txt1;
    };
    r57 = dyn _canonicalize_quotes(p9);
    check L59() else D24();
  D21():
    deopt 75 [r49];
  D24():
    deopt 86 [r57];
  L52():
    l3 = ld txt;
    c10 = `is.object`(l3);
    if c10 then L53() else L54(r49, l3);
  L59():
    st txt = r57;
    lapply = ldf lapply;
    check L60() else D25();
  D25():
    deopt 89 [];
  L8(r53, dx13):
    st txt = dx13;
    goto L9();
  L53():
    dr12 = tryDispatchBuiltin.0("[<-", l3, r49);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L55() else L54(r49, dr12);
  L54(r51, l5):
    ind13 = ld ind;
    check L56() else D22();
  L60():
    p14 = prom<V +>{
      split = ldf split;
      p11 = prom<V +>{
        sym5 = ldf seq_len;
        base5 = ldf seq_len in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(r59):
        return r59;
      L1():
        NROW1 = ldf NROW;
        p10 = prom<V +>{
          d30 = ld d;
          d31 = force? d30;
          checkMissing(d31);
          return d31;
        };
        r61 = dyn NROW1(p10);
        r62 = seq_len(r61);
        goto L0(r62);
      L2():
        r58 = dyn base5(<lang NROW(d)>);
        goto L0(r58);
      };
      p13 = prom<V +>{
        sym6 = ldf match;
        base6 = ldf match in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r65):
        return r65;
      L1():
        txt2 = ld txt;
        txt3 = force? txt2;
        checkMissing(txt3);
        unique = ldf unique;
        p12 = prom<V +>{
          txt4 = ld txt;
          txt5 = force? txt4;
          checkMissing(txt5);
          return txt5;
        };
        r67 = dyn unique(p12);
        match = ldf match in base;
        r68 = dyn match(txt3, r67, NA_INT, NULL);
        goto L0(r68);
      L2():
        r64 = dyn base6(<sym txt>, <lang unique(txt)>);
        goto L0(r64);
      };
      r70 = dyn split(p11, p13);
      return r70;
    };
    p15 = prom<V +>{
      r72 = clos inner3708401697;
      return r72;
    };
    r74 = dyn lapply(p14, p15);
    check L61() else D26();
  D22():
    deopt 77 [r51, l5, r49, ind13];
  D26():
    deopt 92 [r74];
  L55():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L8(r49, dx12);
  L56():
    ind14 = force? ind13;
    ___1 = ldf `[<-` in base;
    r54 = dyn ___1(l5, r49, ind14);
    goto L8(r51, r54);
  L61():
    st out = r74;
    paste4 = ldf paste;
    check L62() else D27();
  D27():
    deopt 95 [];
  L62():
    p19 = prom<V +>{
      unlist = ldf unlist;
      p18 = prom<V +>{
        lapply1 = ldf lapply;
        p16 = prom<V +>{
          out = ld out;
          out1 = force? out;
          checkMissing(out1);
          return out1;
        };
        p17 = prom<V +>{
          paste5 = ld paste;
          paste6 = force? paste5;
          checkMissing(paste6);
          return paste6;
        };
        r77 = dyn lapply1[, , collapse](p16, p17, "\n");
        return r77;
      };
      r79 = dyn unlist(p18);
      return r79;
    };
    r81 = dyn paste4[, collapse](p19, "\n\n");
    check L63() else D28();
  D28():
    deopt 99 [r81];
  L63():
    popenv;
    return r81;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg d:*, reg d1:V, reg c:L, reg d3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg e1:*, reg e2:V, reg c1:L, reg d5:V, reg e4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r:V, reg __1:cls, reg r1:V, reg tmp:*, reg tmp1:V, reg c2:L, reg tmp3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r2:V, reg d8:*, reg d9:V, reg c3:L, reg d11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r3:V, reg c4:L, reg dx9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg e5:*, reg e6:V, reg __2:cls, reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg sprintf:cls, reg tmp4:*, reg tmp5:V, reg c5:L, reg tmp7:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg r7:V, reg p:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg flags:*, reg flags1:V, reg nzchar:cls, reg r12:V, reg c6:L, reg sprintf1:cls, reg flags2:*, reg flags3:V, reg p1:p(V +), reg r14:V, reg r15:V, reg sprintf2:cls, reg tmp8:*, reg tmp9:V, reg c7:L, reg tmp11:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg r16:V, reg p2:p(V +), reg tmp12:*, reg tmp13:V, reg c8:L, reg tmp15:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg r18:V, reg p3:p(V +), reg r20:V, reg sprintf3:cls, reg gsub:cls, reg tmp16:*, reg tmp17:V, reg c9:L, reg tmp19:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg r21:V, reg p4:p(V +), reg r23:V, reg p5:p(V +), reg r25:V, reg sprintf4:cls, reg paste:cls, reg sprintf5:cls, reg flavors:*, reg flavors1:V, reg p6:p(V +), reg p7:*, reg p8:V, reg p9:p(V +), reg r28:V, reg p10:p(V +), reg r30:V, reg p11:p(V +), reg r32:V, reg c10:cls, reg r33:V |
    mkenv;
    st e = e;
    d = ld d;
    check L7() else D0();
  D0():
    deopt 0 [d];
  L7():
    d1 = force? d;
    checkMissing(d1);
    c = `is.object`(d1);
    if c then L8() else L9(d1);
  L0(dx1):
    st tmp = dx1;
    tmp = ld tmp;
    check L15() else D2();
  L8():
    dr = tryDispatchBuiltin.1("[", d1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(d3):
    e1 = ld e;
    check L11() else D1();
  D1():
    deopt 2 [d3, e1];
  D2():
    deopt 11 [tmp];
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L11():
    e2 = force? e1;
    checkMissing(e2);
    c1 = `is.object`(e2);
    if c1 then L12() else L13(d3, e2);
  L15():
    tmp1 = force? tmp;
    checkMissing(tmp1);
    c2 = `is.object`(tmp1);
    if c2 then L17() else L18(tmp1);
  L1(dx3):
    __1 = ldf `[` in base;
    r1 = dyn __1(d1, dx3, <missing>);
    goto L0(r1);
  L12():
    dr2 = tryDispatchBuiltin.1("[", e2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L14() else L13(d3, dr2);
  L13(d5, e4):
    __ = ldf `[` in base;
    r = dyn __(e4, 1);
    goto L1(r);
  L16(dx5):
    st flags = dx5;
    d8 = ld d;
    check L20() else D3();
  L17():
    dr4 = tryDispatchBuiltin.1("$", tmp1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L19() else L18(dr4);
  L18(tmp3):
    r2 = `$`(tmp3, <sym Flags>);
    goto L16(r2);
  D3():
    deopt 15 [d8];
  L14():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx2);
  L19():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L16(dx4);
  L20():
    d9 = force? d8;
    checkMissing(d9);
    c3 = `is.object`(d9);
    if c3 then L22() else L23(d9);
  L21(dx7):
    c4 = `is.object`(dx7);
    if c4 then L25() else L26(dx7);
  L22():
    dr6 = tryDispatchBuiltin.1("$", d9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L24() else L23(dr6);
  L23(d11):
    r3 = `$`(d11, <sym Flavor>);
    goto L21(r3);
  L2(dx11):
    st flavors = dx11;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L29() else L30();
  L24():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L21(dx6);
  L25():
    dr8 = tryDispatchBuiltin.1("[", dx7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L27() else L26(dr8);
  L26(dx9):
    e5 = ld e;
    check L28() else D4();
  D4():
    deopt 18 [dx9, e5];
  L3(r6):
    popenv;
    return r6;
  L27():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L2(dx10);
  L28():
    e6 = force? e5;
    __2 = ldf `[` in base;
    r4 = dyn __2(dx9, e6);
    goto L2(r4);
  L29():
    sprintf = ldf sprintf;
    check L31() else D5();
  L30():
    r5 = dyn base(<lang sprintf("Version: %s", `$`(tmp, Version))>, <lang if(nzchar(flags), sprintf("Flags: %s", flags))>, <lang sprintf("Check: %s, Result: %s", `$`(tmp, Check), `$`(tmp, Status))>, <lang sprintf("  %s", gsub("\n", "\n  ", `$`(tmp, Output), perl=TRUE))>, <lang sprintf("See: %s", paste(sprintf("<https://www.r-project.org/nosvn/R.check/%s/%s-00check.html>", flavors, p), collapse=",\n     "))>);
    goto L3(r5);
  D5():
    deopt 25 [];
  L31():
    p = prom<V +>{
      tmp4 = ld tmp;
      tmp5 = force? tmp4;
      checkMissing(tmp5);
      c5 = `is.object`(tmp5);
      if c5 then L1() else L2(tmp5);
    L0(dx13):
      return dx13;
    L1():
      dr10 = tryDispatchBuiltin.1("$", tmp5);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(tmp7):
      r7 = `$`(tmp7, <sym Version>);
      goto L0(r7);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx12);
    };
    r9 = dyn sprintf("Version: %s", p);
    check L32() else D6();
  D6():
    deopt 28 [r9];
  L32():
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L4(r11):
    c6 = `as.logical`(r11);
    if c6 then L37() else L5();
  L33():
    flags = ld flags;
    check L35() else D7();
  L34():
    r10 = dyn base1(<sym flags>);
    goto L4(r10);
  D7():
    deopt 31 [flags];
  L5():
    goto L6(NULL);
  L6(r15):
    sprintf2 = ldf sprintf;
    check L41() else D11();
  L35():
    flags1 = force? flags;
    checkMissing(flags1);
    nzchar = ldf nzchar in base;
    r12 = dyn nzchar(flags1);
    check L36() else D8();
  L37():
    sprintf1 = ldf sprintf;
    check L38() else D9();
  D8():
    deopt 34 [r12];
  D9():
    deopt 36 [];
  D11():
    deopt 43 [];
  L36():
    goto L4(r12);
  L38():
    p1 = prom<V +>{
      flags2 = ld flags;
      flags3 = force? flags2;
      checkMissing(flags3);
      return flags3;
    };
    r14 = dyn sprintf1("Flags: %s", p1);
    check L39() else D10();
  L41():
    p2 = prom<V +>{
      tmp8 = ld tmp;
      tmp9 = force? tmp8;
      checkMissing(tmp9);
      c7 = `is.object`(tmp9);
      if c7 then L1() else L2(tmp9);
    L0(dx15):
      return dx15;
    L1():
      dr12 = tryDispatchBuiltin.1("$", tmp9);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(tmp11):
      r16 = `$`(tmp11, <sym Check>);
      goto L0(r16);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx14);
    };
    p3 = prom<V +>{
      tmp12 = ld tmp;
      tmp13 = force? tmp12;
      checkMissing(tmp13);
      c8 = `is.object`(tmp13);
      if c8 then L1() else L2(tmp13);
    L0(dx17):
      return dx17;
    L1():
      dr14 = tryDispatchBuiltin.1("$", tmp13);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(tmp15):
      r18 = `$`(tmp15, <sym Status>);
      goto L0(r18);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx16);
    };
    r20 = dyn sprintf2("Check: %s, Result: %s", p2, p3);
    check L42() else D12();
  D10():
    deopt 39 [r14];
  D12():
    deopt 47 [r20];
  L39():
    goto L6(r14);
  L42():
    sprintf3 = ldf sprintf;
    check L43() else D13();
  D13():
    deopt 49 [];
  L43():
    p5 = prom<V +>{
      gsub = ldf gsub;
      p4 = prom<V +>{
        tmp16 = ld tmp;
        tmp17 = force? tmp16;
        checkMissing(tmp17);
        c9 = `is.object`(tmp17);
        if c9 then L1() else L2(tmp17);
      L0(dx19):
        return dx19;
      L1():
        dr16 = tryDispatchBuiltin.1("$", tmp17);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L3() else L2(dr16);
      L2(tmp19):
        r21 = `$`(tmp19, <sym Output>);
        goto L0(r21);
      L3():
        dx18 = getTryDispatchBuiltinValue(dr16);
        goto L0(dx18);
      };
      r23 = dyn gsub[, , , perl]("\n", "\n  ", p4, TRUE);
      return r23;
    };
    r25 = dyn sprintf3("  %s", p5);
    check L44() else D14();
  D14():
    deopt 52 [r25];
  L44():
    sprintf4 = ldf sprintf;
    check L45() else D15();
  D15():
    deopt 54 [];
  L45():
    p11 = prom<V +>{
      paste = ldf paste;
      p10 = prom<V +>{
        sprintf5 = ldf sprintf;
        p6 = prom<V +>{
          flavors = ld flavors;
          flavors1 = force? flavors;
          checkMissing(flavors1);
          return flavors1;
        };
        p9 = prom<V +>{
          p7 = ld p;
          p8 = force? p7;
          checkMissing(p8);
          return p8;
        };
        r28 = dyn sprintf5("<https://www.r-project.org/nosvn/R.check/%s/%s-00check.html>", p6, p9);
        return r28;
      };
      r30 = dyn paste[, collapse](p10, ",\n     ");
      return r30;
    };
    r32 = dyn sprintf4("See: %s", p11);
    check L46() else D16();
  D16():
    deopt 57 [r32];
  L46():
    c10 = ldf c in base;
    r33 = dyn c10(r9, r15, r20, r25, r32);
    check L47() else D17();
  D17():
    deopt 59 [r33];
  L47():
    goto L3(r33);
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg i1:*, reg i2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg character:cls, reg r4:V, reg paste:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg sprintf:cls, reg i3:*, reg i4:V, reg c1:L, reg i6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r9:V, reg p:p(V +), reg i7:*, reg i8:V, reg c2:L, reg i10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r11:V, reg p1:p(V +), reg r13:V, reg c3:cls, reg r14:V, reg p2:p(V +), reg r16:V |
    mkenv;
    st i = i;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L7() else L1();
  L3():
    i1 = ld i;
    check L5() else D0();
  L4():
    r = dyn base(<sym i>);
    goto L0(r);
  D0():
    deopt 2 [i1];
  L1():
    paste = ldf paste;
    check L12() else D4();
  L5():
    i2 = force? i1;
    checkMissing(i2);
    length = ldf length in base;
    r2 = dyn length(i2);
    check L6() else D1();
  L7():
    character = ldf character;
    check L8() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [];
  D4():
    deopt 14 [];
  L6():
    goto L0(r2);
  L8():
    r4 = dyn character();
    check L9() else D3();
  L12():
    p2 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      sprintf = ldf sprintf;
      p = prom<V +>{
        i3 = ld i;
        i4 = force? i3;
        checkMissing(i4);
        c1 = `is.object`(i4);
        if c1 then L1() else L2(i4);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", i4);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(i6):
        r9 = `$`(i6, <sym kind>);
        goto L0(r9);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      p1 = prom<V +>{
        i7 = ld i;
        i8 = force? i7;
        checkMissing(i8);
        c2 = `is.object`(i8);
        if c2 then L1() else L2(i8);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", i8);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(i10):
        r11 = `$`(i10, <sym href>);
        goto L0(r11);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r13 = dyn sprintf("  %s <%s>", p, p1);
      c3 = ldf c in base;
      r14 = dyn c3("Additional issues:", r13);
      goto L0(r14);
    L2():
      r7 = dyn base1("Additional issues:", <lang sprintf("  %s <%s>", `$`(i, kind), `$`(i, href))>);
      goto L0(r7);
    };
    r16 = dyn paste[, collapse](p2, "\n");
    check L13() else D5();
  D3():
    deopt 9 [r4];
  D5():
    deopt 18 [r16];
  L9():
    popenv;
    return r4;
  L13():
    popenv;
    return r16;
  }
}
fun inner1700110323(p, r, d, i) {
  (reg p:*, reg r:*, reg d:*, reg i:*) -+> V { var p:*, var r:*, var d:*, var i:*, reg paste:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg summarize_results:cls, reg p1:*, reg p2:V, reg p3:p(V +), reg r4:*, reg r5:V, reg p4:p(V +), reg r7:V, reg summarize_issues:cls, reg i1:*, reg i2:V, reg p5:p(V +), reg r9:V, reg summarize_details:cls, reg p6:*, reg p7:V, reg p8:p(V +), reg d1:*, reg d2:V, reg p9:p(V +), reg r12:V, reg c:cls, reg r13:V, reg p10:p(V +), reg r15:V |
    mkenv;
    st p = p;
    st r = r;
    st d = d;
    st i = i;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p10 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      summarize_results = ldf summarize_results;
      p3 = prom<V +>{
        p1 = ld p;
        p2 = force? p1;
        checkMissing(p2);
        return p2;
      };
      p4 = prom<V +>{
        r4 = ld r;
        r5 = force? r4;
        checkMissing(r5);
        return r5;
      };
      r7 = dyn summarize_results(p3, p4);
      summarize_issues = ldf summarize_issues;
      p5 = prom<V +>{
        i1 = ld i;
        i2 = force? i1;
        checkMissing(i2);
        return i2;
      };
      r9 = dyn summarize_issues(p5);
      summarize_details = ldf summarize_details;
      p8 = prom<V +>{
        p6 = ld p;
        p7 = force? p6;
        checkMissing(p7);
        return p7;
      };
      p9 = prom<V +>{
        d1 = ld d;
        d2 = force? d1;
        checkMissing(d2);
        return d2;
      };
      r12 = dyn summarize_details(p8, p9);
      c = ldf c in base;
      r13 = dyn c(r7, r9, r12);
      goto L0(r13);
    L2():
      r1 = dyn base(<lang summarize_results(p, r)>, <lang summarize_issues(i)>, <lang summarize_details(p, d)>);
      goto L0(r1);
    };
    r15 = dyn paste[, collapse](p10, "\n\n");
    check L1() else D1();
  D1():
    deopt 5 [r15];
  L1():
    popenv;
    return r15;
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg summarize:cls, reg p1:*, reg p2:V, reg p3:p(V +), reg results:*, reg results1:V, reg c:L, reg results3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg p4:*, reg p5:V, reg __:cls, reg r1:V, reg p6:p(V +), reg details:*, reg details1:V, reg c1:L, reg details3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg p7:*, reg p8:V, reg __1:cls, reg r3:V, reg p9:p(V +), reg issues:*, reg issues1:V, reg c2:L, reg issues3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg p10:*, reg p11:V, reg __2:cls, reg r5:V, reg p12:p(V +), reg r7:V |
    mkenv;
    st p = p;
    summarize = ldf summarize;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p3 = prom<V +>{
      p1 = ld p;
      p2 = force? p1;
      checkMissing(p2);
      return p2;
    };
    p6 = prom<V +>{
      results = ld results;
      results1 = force? results;
      checkMissing(results1);
      c = `is.object`(results1);
      if c then L1() else L2(results1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", results1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(results3):
      p4 = ld p;
      p5 = force? p4;
      __ = ldf `[[` in base;
      r1 = dyn __(results3, p5);
      goto L0(r1);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p9 = prom<V +>{
      details = ld details;
      details1 = force? details;
      checkMissing(details1);
      c1 = `is.object`(details1);
      if c1 then L1() else L2(details1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", details1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(details3):
      p7 = ld p;
      p8 = force? p7;
      __1 = ldf `[[` in base;
      r3 = dyn __1(details3, p8);
      goto L0(r3);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p12 = prom<V +>{
      issues = ld issues;
      issues1 = force? issues;
      checkMissing(issues1);
      c2 = `is.object`(issues1);
      if c2 then L1() else L2(issues1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", issues1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(issues3):
      p10 = ld p;
      p11 = force? p10;
      __2 = ldf `[[` in base;
      r5 = dyn __2(issues3, p11);
      goto L0(r5);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r7 = dyn summarize(p3, p6, p9, p12);
    check L1() else D1();
  D1():
    deopt 6 [r7];
  L1():
    popenv;
    return r7;
  }
}