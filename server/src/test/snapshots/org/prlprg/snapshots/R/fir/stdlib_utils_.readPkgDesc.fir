fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2680730193;
    st `.readPkgDesc` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2680730193(lib, fields, pkgs) {
  (reg lib:*, reg fields:*, reg pkgs:*) -+> V { var lib:*, var fields:*, var pkgs:*, reg pkgs_isMissing:L, reg pkgs_orDefault:*, reg list_files:cls, reg lib1:*, reg lib2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg matrix:cls, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg pkgs1:*, reg pkgs2:V, reg length:cls, reg r5:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:I, reg r11:V, reg fields1:*, reg fields2:V, reg length1:cls, reg r12:V, reg r13:V, reg p3:p(V +), reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg pkgs3:*, reg pkgs4:V, reg r18:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg file_path:cls, reg lib3:*, reg lib4:V, reg p4:p(V +), reg pkgs5:*, reg pkgs6:V, reg c1:L, reg pkgs8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r20:V, reg p5:p(V +), reg r22:V, reg file_access:cls, reg pkgpath:*, reg pkgpath1:V, reg p6:p(V +), reg r24:V, reg c2:L, reg file_exists:cls, reg file_path1:cls, reg pkgpath2:*, reg pkgpath3:V, reg p7:p(V +), reg r27:V, reg p8:p(V +), reg r29:V, reg c3:L, reg try:cls, reg readRDS:cls, reg file:*, reg file1:V, reg p9:p(V +), reg r31:V, reg p10:p(V +), reg r33:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r34:V, reg i15:I, reg r35:V, reg md:*, reg md1:V, reg inherits:cls, reg r36:V, reg c4:L, reg md2:*, reg md3:V, reg c5:L, reg i21:I, reg md5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i23:I, reg dx3:V, reg r38:V, reg c6:L, reg i25:I, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg i27:I, reg dx7:V, reg fields3:*, reg fields4:V, reg __1:cls, reg r39:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r40:V, reg i30:I, reg r41:V, reg desc:*, reg desc1:V, reg length2:cls, reg r42:V, reg r43:V, reg c7:L, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg pkgpath4:*, reg pkgpath5:V, reg p11:p(V +), reg r45:V, reg p12:p(V +), reg r47:V, reg p13:p(V +), reg r49:V, reg _in_:cls, reg fields5:*, reg fields6:V, reg p14:p(V +), reg r52:V, reg c8:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r53:V, reg i39:I, reg r54:V, reg md6:*, reg md7:V, reg c9:L, reg i41:I, reg md9:V, reg dr6:V, reg dc3:L, reg dx8:V, reg i43:I, reg dx9:V, reg r55:V, reg c10:L, reg i45:I, reg dx11:V, reg dr8:V, reg dc4:L, reg dx12:V, reg i47:I, reg dx13:V, reg r56:V, reg c11:V, reg c12:L, reg i48:I, reg c13:V, reg _in_1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r57:V, reg r58:V, reg desc2:*, reg desc3:V, reg names:cls, reg r59:V, reg p15:p(V +), reg r61:V, reg r62:V, reg c15:L, reg c16:V, reg c18:L, reg warning1:cls, reg gettextf1:cls, reg sQuote1:cls, reg pkgpath6:*, reg pkgpath7:V, reg p16:p(V +), reg r64:V, reg p17:p(V +), reg r66:V, reg p18:p(V +), reg r68:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r70:V, reg i57:I, reg r71:V, reg md10:*, reg md11:V, reg c19:L, reg i59:I, reg md13:V, reg dr10:V, reg dc5:L, reg dx14:V, reg i61:I, reg dx15:V, reg r72:V, reg c20:L, reg i63:I, reg dx17:V, reg dr12:V, reg dc6:L, reg dx18:V, reg i65:I, reg dx19:V, reg r73:V, reg as_character:cls, reg r74:V, reg l1:*, reg c21:L, reg i67:I, reg r76:V, reg l3:*, reg dr14:V, reg dc7:L, reg dx20:V, reg i69:I, reg r78:V, reg dx21:V, reg ___:cls, reg r79:V, reg i70:I, reg sym8:cls, reg base8:cls, reg guard8:L, reg r81:V, reg i73:I, reg r82:V, reg pkgs9:*, reg pkgs10:V, reg c22:L, reg i75:I, reg pkgs12:V, reg dr16:V, reg dc8:L, reg dx22:V, reg i77:I, reg dx23:V, reg i78:*, reg i79:V, reg __2:cls, reg r83:V, reg lib5:*, reg lib6:V, reg desc4:*, reg desc5:V, reg c23:cls, reg r84:V, reg l4:*, reg c24:L, reg i81:I, reg r86:V, reg l6:*, reg dr18:V, reg dc9:L, reg dx24:V, reg i83:I, reg r88:V, reg dx25:V, reg i84:*, reg i85:V, reg ___1:cls, reg r89:V, reg i86:I, reg ret:*, reg ret1:V, reg c25:L, reg ret3:V, reg dr20:V, reg dc10:L, reg dx26:V, reg dx27:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r91:V, reg r92:V, reg ret7:*, reg ret8:V, reg c26:L, reg ret11:V, reg dr22:V, reg dc11:L, reg dx28:V, reg ret14:V, reg dx29:V, reg __3:cls, reg r93:V, reg is_na:cls, reg r94:V, reg r95:V, reg __4:cls, reg r96:V |
    mkenv;
    st lib = lib;
    st fields = fields;
    pkgs_isMissing = missing.0(pkgs);
    if pkgs_isMissing then L0() else L1(pkgs);
  L0():
    p1 = prom<V +>{
      list_files = ldf `list.files`;
      p = prom<V +>{
        lib1 = ld lib;
        lib2 = force? lib1;
        checkMissing(lib2);
        return lib2;
      };
      r1 = dyn list_files(p);
      return r1;
    };
    goto L1(p1);
  L1(pkgs_orDefault):
    st pkgs = pkgs_orDefault;
    matrix = ldf matrix;
    check L30() else D0();
  D0():
    deopt 1 [];
  L30():
    p2 = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      pkgs1 = ld pkgs;
      pkgs2 = force? pkgs1;
      checkMissing(pkgs2);
      length = ldf length in base;
      r5 = dyn length(pkgs2);
      goto L0(r5);
    L2():
      r3 = dyn base(<sym pkgs>);
      goto L0(r3);
    };
    p3 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r10, r11):
      r13 = `+`(r10, r11);
      return r13;
    L1():
      fields1 = ld fields;
      fields2 = force? fields1;
      checkMissing(fields2);
      length1 = ldf length in base;
      r12 = dyn length1(fields2);
      goto L0(2, r12);
    L2():
      r9 = dyn base1(<sym fields>);
      goto L0(2, r9);
    };
    r15 = dyn matrix(NA_STR, p2, p3);
    check L31() else D1();
  D1():
    deopt 5 [r15];
  L31():
    st ret = r15;
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L2(r17):
    s = toForSeq(r17);
    l = length(s);
    i = 0;
    goto L3(i);
  L32():
    pkgs3 = ld pkgs;
    check L34() else D2();
  L33():
    r16 = dyn base2(<sym pkgs>);
    goto L2(r16);
  D2():
    deopt 8 [pkgs3];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L35() else L26();
  L34():
    pkgs4 = force? pkgs3;
    checkMissing(pkgs4);
    r18 = seq_along(pkgs4);
    goto L2(r18);
  L26():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    file_path = ldf `file.path`;
    check L36() else D3();
  L35():
    ret = ld ret;
    check L127() else D34();
  D3():
    deopt 12 [i2];
  D34():
    deopt 139 [ret];
  L36():
    p4 = prom<V +>{
      lib3 = ld lib;
      lib4 = force? lib3;
      checkMissing(lib4);
      return lib4;
    };
    p5 = prom<V +>{
      pkgs5 = ld pkgs;
      pkgs6 = force? pkgs5;
      checkMissing(pkgs6);
      c1 = `is.object`(pkgs6);
      if c1 then L1() else L2(pkgs6);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", pkgs6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(pkgs8):
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[` in base;
      r20 = dyn __(pkgs8, i6);
      goto L0(r20);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r22 = dyn file_path(p4, p5);
    check L37() else D4();
  L127():
    ret1 = force? ret;
    checkMissing(ret1);
    c25 = `is.object`(ret1);
    if c25 then L128() else L129(ret1);
  D4():
    deopt 15 [i2, r22];
  L27(dx27):
    popenv;
    return dx27;
  L37():
    st pkgpath = r22;
    file_access = ldf `file.access`;
    check L38() else D5();
  L128():
    dr20 = tryDispatchBuiltin.1("[", ret1);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L130() else L129(dr20);
  L129(ret3):
    sym9 = ldf `is.na`;
    base9 = ldf `is.na` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L131() else L132();
  D5():
    deopt 18 [i2];
  L28(r92):
    r95 = `!`(r92);
    __4 = ldf `[` in base;
    r96 = dyn __4(ret1, r95, <missing>, FALSE);
    goto L27(r96);
  L38():
    p6 = prom<V +>{
      pkgpath = ld pkgpath;
      pkgpath1 = force? pkgpath;
      checkMissing(pkgpath1);
      return pkgpath1;
    };
    r24 = dyn file_access(p6, 5);
    check L39() else D6();
  L130():
    dx26 = getTryDispatchBuiltinValue(dr20);
    goto L27(dx26);
  L131():
    ret7 = ld ret;
    check L133() else D35();
  L132():
    r91 = dyn base9(<lang `[`(ret, , 1)>);
    goto L28(r91);
  D6():
    deopt 21 [i2, r24];
  D35():
    deopt 143 [ret3, ret7];
  L39():
    c2 = `as.logical`(r24);
    if c2 then L40() else L4();
  L133():
    ret8 = force? ret7;
    checkMissing(ret8);
    c26 = `is.object`(ret8);
    if c26 then L134() else L135(ret3);
  L4():
    file_exists = ldf `file.exists`;
    check L43() else D7();
  L29(ret14, dx29):
    is_na = ldf `is.na` in base;
    r94 = dyn is_na(dx29);
    check L137() else D36();
  L40():
    goto L3(i2);
  L134():
    dr22 = tryDispatchBuiltin.1("[", ret8);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L136() else L135(ret3);
  L135(ret11):
    __3 = ldf `[` in base;
    r93 = dyn __3(ret8, <missing>, 1);
    goto L29(ret11, r93);
  D7():
    deopt 27 [i2];
  D36():
    deopt 150 [ret14, r94];
  L43():
    p8 = prom<V +>{
      file_path1 = ldf `file.path`;
      p7 = prom<V +>{
        pkgpath2 = ld pkgpath;
        pkgpath3 = force? pkgpath2;
        checkMissing(pkgpath3);
        return pkgpath3;
      };
      r27 = dyn file_path1(p7, "Meta", "package.rds");
      st file = r27;
      invisible.0();
      return r27;
    };
    r29 = dyn file_exists(p8);
    check L44() else D8();
  L136():
    dx28 = getTryDispatchBuiltinValue(dr22);
    goto L29(ret3, dx28);
  L137():
    goto L28(r94);
  D8():
    deopt 29 [i2, r29];
  L44():
    c3 = `as.logical`(r29);
    if c3 then L45() else L6();
  L6():
    goto L25(i2);
  L25(i86):
    goto L3(i86);
  L45():
    try = ldf try;
    check L46() else D9();
  D9():
    deopt 31 [i2];
  L46():
    p10 = prom<V +>{
      readRDS = ldf readRDS;
      p9 = prom<V +>{
        file = ld file;
        file1 = force? file;
        checkMissing(file1);
        return file1;
      };
      r31 = dyn readRDS(p9);
      return r31;
    };
    r33 = dyn try(p10);
    check L47() else D10();
  D10():
    deopt 33 [i2, r33];
  L47():
    st md = r33;
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  L7(i15, r35):
    c4 = `as.logical`(r35);
    if c4 then L52() else L8();
  L48():
    md = ld md;
    check L50() else D11();
  L49():
    r34 = dyn base3(<sym md>, "try-error");
    goto L7(i2, r34);
  D11():
    deopt 37 [i2, md];
  L8():
    md2 = ld md;
    check L55() else D13();
  L50():
    md1 = force? md;
    checkMissing(md1);
    inherits = ldf inherits in base;
    r36 = dyn inherits(md1, "try-error", FALSE);
    check L51() else D12();
  L52():
    goto L3(i15);
  D12():
    deopt 42 [i2, r36];
  D13():
    deopt 47 [i15, md2];
  L51():
    goto L7(i2, r36);
  L55():
    md3 = force? md2;
    checkMissing(md3);
    c5 = `is.object`(md3);
    if c5 then L57() else L58(i15, md3);
  L56(i23, dx3):
    c6 = `is.object`(dx3);
    if c6 then L60() else L61(i23, dx3);
  L57():
    dr2 = tryDispatchBuiltin.1("$", md3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L59() else L58(i15, dr2);
  L58(i21, md5):
    r38 = `$`(md5, <sym DESCRIPTION>);
    goto L56(i21, r38);
  L10(i27, dx7):
    st desc = dx7;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L64() else L65();
  L59():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L56(i15, dx2);
  L60():
    dr4 = tryDispatchBuiltin.1("[", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L62() else L61(i23, dr4);
  L61(i25, dx5):
    fields3 = ld fields;
    check L63() else D14();
  D14():
    deopt 50 [i25, dx5, fields3];
  L11(i30, r41):
    r43 = `!`(r41);
    c7 = `as.logical`(r43);
    if c7 then L68() else L12();
  L62():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L10(i23, dx6);
  L63():
    fields4 = force? fields3;
    __1 = ldf `[` in base;
    r39 = dyn __1(dx5, fields4);
    goto L10(i25, r39);
  L64():
    desc = ld desc;
    check L66() else D15();
  L65():
    r40 = dyn base4(<sym desc>);
    goto L11(i27, r40);
  D15():
    deopt 56 [i27, desc];
  L12():
    _in_ = ldf `%in%`;
    check L73() else D19();
  L66():
    desc1 = force? desc;
    checkMissing(desc1);
    length2 = ldf length in base;
    r42 = dyn length2(desc1);
    check L67() else D16();
  L68():
    warning = ldf warning;
    check L69() else D17();
  D16():
    deopt 59 [i27, r42];
  D17():
    deopt 62 [i30];
  D19():
    deopt 72 [i30];
  L67():
    goto L11(i27, r42);
  L69():
    p13 = prom<V +>{
      gettextf = ldf gettextf;
      p12 = prom<V +>{
        sQuote = ldf sQuote;
        p11 = prom<V +>{
          pkgpath4 = ld pkgpath;
          pkgpath5 = force? pkgpath4;
          checkMissing(pkgpath5);
          return pkgpath5;
        };
        r45 = dyn sQuote(p11);
        return r45;
      };
      r47 = dyn gettextf("metadata of %s is corrupt", p12);
      return r47;
    };
    r49 = dyn warning[, domain](p13, NA_LGL);
    check L70() else D18();
  L73():
    p14 = prom<V +>{
      fields5 = ld fields;
      fields6 = force? fields5;
      checkMissing(fields6);
      return fields6;
    };
    r52 = dyn _in_("Built", p14);
    check L74() else D20();
  D18():
    deopt 66 [i30, r49];
  D20():
    deopt 75 [i30, r52];
  L70():
    goto L3(i30);
  L74():
    c8 = `as.logical`(r52);
    if c8 then L75() else L14();
  L14():
    goto L21(i30);
  L21(i70):
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L112() else L113();
  L75():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L76() else L77();
  L15(i39, r54):
    c12 = `as.logical`(r54);
    if c12 then L16(i39, c12) else L87();
  L22(i73, r82):
    l4 = ld ret;
    c24 = `is.object`(l4);
    if c24 then L122() else L123(i73, r82, l4);
  L76():
    md6 = ld md;
    check L78() else D21();
  L77():
    r53 = dyn base5(<lang `$`(`$`(md, Built), R)>);
    goto L15(i30, r53);
  L112():
    pkgs9 = ld pkgs;
    check L114() else D28();
  L113():
    r81 = dyn base8(<lang `[`(pkgs, i)>, <sym lib>, <sym desc>);
    goto L22(i70, r81);
  D21():
    deopt 77 [i30, md6];
  D28():
    deopt 116 [i70, pkgs9];
  L16(i48, c13):
    c18 = `as.logical`(c13);
    if c18 then L91() else L17();
  L24(i83, r88, dx25):
    st ret = dx25;
    goto L25(i83);
  L78():
    md7 = force? md6;
    checkMissing(md7);
    c9 = `is.object`(md7);
    if c9 then L80() else L81(i30, md7);
  L87():
    _in_1 = ldf `%in%`;
    check L88() else D22();
  L114():
    pkgs10 = force? pkgs9;
    checkMissing(pkgs10);
    c22 = `is.object`(pkgs10);
    if c22 then L115() else L116(i70, pkgs10);
  L122():
    dr18 = tryDispatchBuiltin.0("[<-", l4, r82);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L124() else L123(i73, r82, dr18);
  L123(i81, r86, l6):
    i84 = ld i;
    check L125() else D33();
  D22():
    deopt 83 [i39, c12];
  D33():
    deopt 128 [i81, r86, l6, r82, i84];
  L17():
    sym7 = ldf `as.character`;
    base7 = ldf `as.character` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L96() else L97();
  L23(i77, dx23):
    lib5 = ld lib;
    check L119() else D30();
  L79(i43, dx9):
    c10 = `is.object`(dx9);
    if c10 then L84() else L85(i43, dx9);
  L80():
    dr6 = tryDispatchBuiltin.1("$", md7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L82() else L81(i30, dr6);
  L81(i41, md9):
    r55 = `$`(md9, <sym Built>);
    goto L79(i41, r55);
  L88():
    p15 = prom<V +>{
      sym6 = ldf names;
      base6 = ldf names in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r58):
      return r58;
    L1():
      desc2 = ld desc;
      desc3 = force? desc2;
      checkMissing(desc3);
      names = ldf names in base;
      r59 = dyn names(desc3);
      goto L0(r59);
    L2():
      r57 = dyn base6(<sym desc>);
      goto L0(r57);
    };
    r61 = dyn _in_1("Built", p15);
    check L89() else D23();
  L91():
    warning1 = ldf warning;
    check L92() else D24();
  L115():
    dr16 = tryDispatchBuiltin.1("[", pkgs10);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L117() else L116(i70, dr16);
  L116(i75, pkgs12):
    i78 = ld i;
    check L118() else D29();
  L124():
    dx24 = getTryDispatchBuiltinValue(dr18);
    goto L24(i73, r82, dx24);
  L125():
    i85 = force? i84;
    ___1 = ldf `[<-` in base;
    r89 = dyn ___1(l4, i85, <missing>, r82);
    goto L24(i81, r86, r89);
  D23():
    deopt 86 [i39, c12, r61];
  D24():
    deopt 90 [i48];
  D29():
    deopt 118 [i75, pkgs12, i78];
  D30():
    deopt 121 [i77, lib5];
  L19(i57, r71):
    l1 = ld desc;
    c21 = `is.object`(l1);
    if c21 then L108() else L109(i57, r71, l1);
  L82():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L79(i30, dx8);
  L83(i47, dx13):
    c11 = `==`(dx13, NULL);
    goto L15(i47, c11);
  L84():
    dr8 = tryDispatchBuiltin.1("$", dx9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L86() else L85(i43, dr8);
  L85(i45, dx11):
    r56 = `$`(dx11, <sym R>);
    goto L83(i45, r56);
  L89():
    r62 = `!`(r61);
    c15 = `as.logical`(r62);
    c16 = `||`(c12, c15);
    goto L16(i39, c16);
  L92():
    p18 = prom<V +>{
      gettextf1 = ldf gettextf;
      p17 = prom<V +>{
        sQuote1 = ldf sQuote;
        p16 = prom<V +>{
          pkgpath6 = ld pkgpath;
          pkgpath7 = force? pkgpath6;
          checkMissing(pkgpath7);
          return pkgpath7;
        };
        r64 = dyn sQuote1(p16);
        return r64;
      };
      r66 = dyn gettextf1("metadata of %s is corrupt", p17);
      return r66;
    };
    r68 = dyn warning1[, domain](p18, NA_LGL);
    check L93() else D25();
  L96():
    md10 = ld md;
    check L98() else D26();
  L97():
    r70 = dyn base7(<lang `$`(`$`(md, Built), R)>);
    goto L19(i48, r70);
  L117():
    dx22 = getTryDispatchBuiltinValue(dr16);
    goto L23(i70, dx22);
  L118():
    i79 = force? i78;
    __2 = ldf `[` in base;
    r83 = dyn __2(pkgs12, i79);
    goto L23(i75, r83);
  L119():
    lib6 = force? lib5;
    checkMissing(lib6);
    desc4 = ld desc;
    check L120() else D31();
  D25():
    deopt 94 [i48, r68];
  D26():
    deopt 101 [i48, md10];
  D31():
    deopt 123 [i77, desc4];
  L20(i69, r78, dx21):
    st desc = dx21;
    goto L21(i69);
  L86():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L83(i43, dx12);
  L93():
    goto L3(i48);
  L98():
    md11 = force? md10;
    checkMissing(md11);
    c19 = `is.object`(md11);
    if c19 then L100() else L101(i48, md11);
  L108():
    dr14 = tryDispatchBuiltin.0("[<-", l1, r71);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L110() else L109(i57, r71, dr14);
  L109(i67, r76, l3):
    ___ = ldf `[<-` in base;
    r79 = dyn ___(l3, r71, "Built");
    goto L20(i67, r76, r79);
  L120():
    desc5 = force? desc4;
    checkMissing(desc5);
    c23 = ldf c in base;
    r84 = dyn c23(dx23, lib6, desc5);
    check L121() else D32();
  D32():
    deopt 126 [i77, r84];
  L99(i61, dx15):
    c20 = `is.object`(dx15);
    if c20 then L104() else L105(i61, dx15);
  L100():
    dr10 = tryDispatchBuiltin.1("$", md11);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L102() else L101(i48, dr10);
  L101(i59, md13):
    r72 = `$`(md13, <sym Built>);
    goto L99(i59, r72);
  L110():
    dx20 = getTryDispatchBuiltinValue(dr14);
    goto L20(i57, r71, dx20);
  L121():
    goto L22(i77, r84);
  L102():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L99(i48, dx14);
  L103(i65, dx19):
    as_character = ldf `as.character` in base;
    r74 = dyn as_character(dx19);
    check L107() else D27();
  L104():
    dr12 = tryDispatchBuiltin.1("$", dx15);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L106() else L105(i61, dr12);
  L105(i63, dx17):
    r73 = `$`(dx17, <sym R>);
    goto L103(i63, r73);
  D27():
    deopt 106 [i65, r74];
  L106():
    dx18 = getTryDispatchBuiltinValue(dr12);
    goto L103(i61, dx18);
  L107():
    goto L19(i65, r74);
  }
}