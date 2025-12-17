fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1425494698;
    st setRepositories = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1425494698(graphics, ind, addURLs, name) {
  (reg graphics:*, reg ind:*, reg addURLs:*, reg name:*) -+> V { var graphics:*, reg graphics_isMissing:L, reg graphics_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var ind:*, reg ind_isMissing:L, reg ind_orDefault:*, var addURLs:*, reg addURLs_isMissing:L, reg addURLs_orDefault:*, reg character:cls, reg r2:V, reg p1:p(V +), var name:*, reg name_isMissing:L, reg name_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg name1:*, reg name2:V, reg c:V, reg c1:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg c6:L, reg r7:V, reg ind1:*, reg ind2:V, reg c7:V, reg c8:L, reg c9:V, reg c11:L, reg c13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg c16:L, reg r9:V, reg interactive:cls, reg r10:V, reg r11:V, reg c17:L, reg c18:V, reg c20:L, reg stop:cls, reg r12:V, reg _get_repositories:cls, reg r14:V, reg getOption1:cls, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg pkgType:*, reg pkgType1:V, reg c21:L, reg r18:V, reg c22:L, reg stop1:cls, reg r19:V, reg pkgType2:*, reg pkgType3:V, reg r21:V, reg c23:L, reg pkgType4:*, reg pkgType5:V, reg r23:V, reg c24:L, reg _Platform:*, reg _Platform1:V, reg c25:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r24:V, reg startsWith:cls, reg pkgType6:*, reg pkgType7:V, reg p2:p(V +), reg r26:V, reg c26:L, reg a:*, reg a1:V, reg c27:L, reg a3:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg pkgType8:*, reg pkgType9:V, reg __:cls, reg r28:V, reg a4:*, reg a5:V, reg c28:L, reg a7:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg thisType:*, reg thisType1:V, reg __1:cls, reg r29:V, reg getOption2:cls, reg r30:V, reg _in_:cls, reg row_names:cls, reg a8:*, reg a9:V, reg p3:p(V +), reg r32:V, reg p4:p(V +), reg r34:V, reg c29:L, reg c31:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg c34:L, reg r36:V, reg repos:*, reg repos1:V, reg c35:L, reg c37:L, reg repos3:V, reg dr6:V, reg dc3:L, reg dx7:V, reg c39:L, reg dx8:V, reg __2:cls, reg r37:V, reg is_na:cls, reg r38:V, reg r39:V, reg c40:L, reg c41:V, reg c43:L, reg CRAN:*, reg CRAN1:V, reg l:*, reg c44:L, reg CRAN3:V, reg l2:*, reg dr8:V, reg dc4:L, reg dx9:V, reg CRAN5:V, reg dx10:V, reg ___:cls, reg r40:V, reg l3:*, reg c45:L, reg r42:L, reg l5:*, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg _in_1:cls, reg a10:*, reg a11:V, reg c46:L, reg a13:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg __3:cls, reg r45:V, reg p5:p(V +), reg repos4:*, reg repos5:V, reg p6:p(V +), reg r48:V, reg ___1:cls, reg r49:V, reg _in_2:cls, reg repos6:*, reg repos7:V, reg p7:p(V +), reg a14:*, reg a15:V, reg c47:L, reg a17:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg __4:cls, reg r51:V, reg p8:p(V +), reg r53:V, reg r54:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r55:V, reg r56:V, reg new:*, reg new1:V, reg any:cls, reg r57:V, reg c48:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r58:V, reg r59:V, reg repos8:*, reg repos9:V, reg c49:L, reg repos11:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg new2:*, reg new3:V, reg __5:cls, reg r60:V, reg names:cls, reg r61:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r62:V, reg r63:V, reg aa:*, reg aa1:V, reg c50:V, reg c51:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r64:V, reg r65:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r66:V, reg r67:V, reg repos12:*, reg repos13:V, reg c52:L, reg repos15:V, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg new4:*, reg new5:V, reg __6:cls, reg r68:V, reg length:cls, reg r69:V, reg rep_int:cls, reg r70:V, reg repos16:*, reg repos17:V, reg c53:L, reg repos19:V, reg dr20:V, reg dc10:L, reg dx21:V, reg dx22:V, reg new6:*, reg new7:V, reg __7:cls, reg r72:V, reg c54:L, reg dx24:V, reg dr22:V, reg dc11:L, reg dx25:V, reg dx26:V, reg aa2:*, reg aa3:V, reg r73:V, reg __8:cls, reg r74:V, reg l6:*, reg c55:L, reg dx28:V, reg l8:*, reg dr24:V, reg dc12:L, reg dx30:V, reg dx32:V, reg aa4:*, reg aa5:V, reg r75:V, reg ___2:cls, reg r76:V, reg data_frame:cls, reg aa6:*, reg aa7:V, reg p9:p(V +), reg repos20:*, reg repos21:V, reg c56:L, reg repos23:V, reg dr26:V, reg dc13:L, reg dx33:V, reg dx34:V, reg new8:*, reg new9:V, reg __9:cls, reg r78:V, reg p10:p(V +), reg r80:V, reg aa8:*, reg aa9:V, reg l9:*, reg row_names__:cls, reg r81:V, reg rbind:cls, reg a18:*, reg a19:V, reg p11:p(V +), reg newa:*, reg newa1:V, reg p12:p(V +), reg r84:V, reg a20:*, reg a21:V, reg c57:L, reg a23:V, reg dr28:V, reg dc14:L, reg dx35:V, reg dx36:V, reg __10:cls, reg r86:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r87:V, reg r88:V, reg name3:*, reg name4:V, reg length1:cls, reg r89:V, reg c58:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r90:V, reg r91:V, reg tolower:cls, reg name5:*, reg name6:V, reg p13:p(V +), reg r93:V, reg tolower1:cls, reg row_names1:cls, reg a24:*, reg a25:V, reg p14:p(V +), reg r95:V, reg p15:p(V +), reg r97:V, reg match:cls, reg r98:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r99:V, reg r100:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r101:V, reg r102:V, reg m:*, reg m1:V, reg is_na1:cls, reg r103:V, reg any1:cls, reg r104:V, reg c59:L, reg stop2:cls, reg paste:cls, reg name7:*, reg name8:V, reg c60:L, reg name10:V, reg dr30:V, reg dc15:L, reg dx37:V, reg dx38:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r105:V, reg name13:V, reg r106:V, reg m2:*, reg m3:V, reg is_na2:cls, reg r107:V, reg __11:cls, reg r108:V, reg p16:p(V +), reg r110:V, reg p17:p(V +), reg r112:V, reg m4:*, reg m5:V, reg m6:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r114:V, reg r115:V, reg ind3:*, reg ind4:V, reg length2:cls, reg r116:V, reg c61:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r117:V, reg r118:V, reg ind5:*, reg ind6:V, reg as_integer:cls, reg r119:V, reg graphics1:*, reg graphics2:V, reg c62:L, reg r120:V, reg gettext:cls, reg r121:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r122:V, reg select_list:cls, reg a26:*, reg a27:V, reg c63:L, reg dr32:V, reg dc16:L, reg dx39:V, reg dx40:V, reg __12:cls, reg r123:V, reg p18:p(V +), reg a30:*, reg a31:V, reg c64:L, reg a33:V, reg dr34:V, reg dc17:L, reg dx41:V, reg dx42:V, reg default:*, reg default1:V, reg __13:cls, reg r125:V, reg p19:p(V +), reg title:*, reg title1:V, reg p20:p(V +), reg graphics3:*, reg graphics4:V, reg p21:p(V +), reg r129:V, reg a34:*, reg a35:V, reg c65:L, reg dr36:V, reg dc18:L, reg dx43:V, reg dx44:V, reg __14:cls, reg r130:V, reg match1:cls, reg r131:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r132:V, reg r133:V, reg res:*, reg res1:V, reg length3:cls, reg r134:V, reg c66:L, reg c67:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r135:V, reg c71:L, reg r136:V, reg addURLs1:*, reg addURLs2:V, reg length4:cls, reg r137:V, reg c72:L, reg c73:V, reg c75:L, reg a38:*, reg a39:V, reg c76:L, reg a41:V, reg dr38:V, reg dc19:L, reg dx45:V, reg dx46:V, reg __15:cls, reg r138:V, reg row_names2:cls, reg a42:*, reg a43:V, reg p22:p(V +), reg r140:V, reg l10:*, reg names__:cls, reg r141:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r142:V, reg r143:V, reg repos24:*, reg repos25:V, reg c77:L, reg repos27:V, reg dr40:V, reg dc20:L, reg dx47:V, reg dx48:V, reg res2:*, reg res3:V, reg __16:cls, reg r144:V, reg addURLs3:*, reg addURLs4:V, reg c78:cls, reg r145:V, reg options:cls, reg repos28:*, reg repos29:V, reg p23:p(V +), reg r147:V |
    mkenv;
    graphics_isMissing = missing.0(graphics);
    if graphics_isMissing then L0() else L1(graphics);
  L0():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("menu.graphics");
      return r;
    };
    goto L1(p);
  L1(graphics_orDefault):
    st graphics = graphics_orDefault;
    ind_isMissing = missing.0(ind);
    if ind_isMissing then L2(NULL) else L2(ind);
  L2(ind_orDefault):
    st ind = ind_orDefault;
    addURLs_isMissing = missing.0(addURLs);
    if addURLs_isMissing then L3() else L4(addURLs);
  L3():
    p1 = prom<V +>{
      character = ldf character;
      r2 = dyn character();
      return r2;
    };
    goto L4(p1);
  L4(addURLs_orDefault):
    st addURLs = addURLs_orDefault;
    name_isMissing = missing.0(name);
    if name_isMissing then L5(NULL) else L5(name);
  L5(name_orDefault):
    st name = name_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L67() else L68();
  L6(r5):
    c1 = `as.logical`(r5);
    if c1 then L70() else L7(c1);
  L67():
    name1 = ld name;
    check L69() else D0();
  L68():
    r4 = dyn base(<sym name>);
    goto L6(r4);
  D0():
    deopt 1 [name1];
  L7(c3):
    c11 = `as.logical`(c3);
    if c11 then L75() else L9(c11);
  L69():
    name2 = force? name1;
    checkMissing(name2);
    c = `==`(name2, NULL);
    goto L6(c);
  L70():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L71() else L72();
  L8(c6, r7):
    c8 = `as.logical`(r7);
    c9 = `&&`(c6, c8);
    goto L7(c9);
  L9(c13):
    c20 = `as.logical`(c13);
    if c20 then L80() else L11();
  L71():
    ind1 = ld ind;
    check L73() else D1();
  L72():
    r6 = dyn base1(<sym ind>);
    goto L8(c1, r6);
  L75():
    sym2 = ldf interactive;
    base2 = ldf interactive in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L76() else L77();
  D1():
    deopt 5 [c1, ind1];
  L10(c16, r9):
    r11 = `!`(r9);
    c17 = `as.logical`(r11);
    c18 = `&&`(c16, c17);
    goto L9(c18);
  L11():
    goto L12();
  L12():
    _get_repositories = ldf `.get_repositories`;
    check L84() else D5();
  L73():
    ind2 = force? ind1;
    checkMissing(ind2);
    c7 = `==`(ind2, NULL);
    goto L8(c1, c7);
  L76():
    interactive = ldf interactive in base;
    r10 = dyn interactive();
    check L78() else D2();
  L77():
    r8 = dyn base2();
    goto L10(c11, r8);
  L80():
    stop = ldf stop;
    check L81() else D3();
  D2():
    deopt 12 [c11, r10];
  D3():
    deopt 16 [];
  D5():
    deopt 22 [];
  L78():
    goto L10(c11, r10);
  L81():
    r12 = dyn stop("cannot set repositories non-interactively");
    check L82() else D4();
  L84():
    r14 = dyn _get_repositories();
    check L85() else D6();
  D4():
    deopt 18 [r12];
  D6():
    deopt 23 [r14];
  L82():
    goto L12();
  L85():
    st a = r14;
    getOption1 = ldf getOption;
    check L86() else D7();
  D7():
    deopt 26 [];
  L86():
    r15 = dyn getOption1("pkgType");
    check L87() else D8();
  D8():
    deopt 28 [r15];
  L87():
    st pkgType = r15;
    sym3 = ldf `is.character`;
    base3 = ldf `is.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L88() else L89();
  L13(r17):
    r18 = `!`(r17);
    c22 = `as.logical`(r18);
    if c22 then L91() else L14();
  L88():
    pkgType = ld pkgType;
    check L90() else D9();
  L89():
    r16 = dyn base3(<sym pkgType>);
    goto L13(r16);
  D9():
    deopt 31 [pkgType];
  L14():
    goto L15();
  L15():
    pkgType2 = ld pkgType;
    check L95() else D12();
  L90():
    pkgType1 = force? pkgType;
    checkMissing(pkgType1);
    c21 = `is.character`(pkgType1);
    goto L13(c21);
  L91():
    stop1 = ldf stop;
    check L92() else D10();
  D10():
    deopt 36 [];
  D12():
    deopt 41 [pkgType2];
  L92():
    r19 = dyn stop1("invalid options(\"pkgType\"); must be a character string");
    check L93() else D11();
  L95():
    pkgType3 = force? pkgType2;
    checkMissing(pkgType3);
    r21 = `==`(pkgType3, "both");
    c23 = `as.logical`(r21);
    if c23 then L96() else L16();
  D11():
    deopt 38 [r19];
  L16():
    goto L17();
  L17():
    pkgType4 = ld pkgType;
    check L98() else D13();
  L93():
    goto L15();
  L96():
    st pkgType = "source";
    goto L17();
  D13():
    deopt 50 [pkgType4];
  L98():
    pkgType5 = force? pkgType4;
    checkMissing(pkgType5);
    r23 = `==`(pkgType5, "binary");
    c24 = `as.logical`(r23);
    if c24 then L99() else L18();
  L18():
    goto L19();
  L19():
    startsWith = ldf startsWith;
    check L106() else D15();
  L99():
    _Platform = ld `.Platform`;
    check L100() else D14();
  D14():
    deopt 54 [_Platform];
  D15():
    deopt 61 [];
  L100():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c25 = `is.object`(_Platform1);
    if c25 then L102() else L103(_Platform1);
  L106():
    p2 = prom<V +>{
      pkgType6 = ld pkgType;
      pkgType7 = force? pkgType6;
      checkMissing(pkgType7);
      return pkgType7;
    };
    r26 = dyn startsWith(p2, "mac.binary");
    check L107() else D16();
  D16():
    deopt 64 [r26];
  L101(dx1):
    st pkgType = dx1;
    goto L19();
  L102():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L104() else L103(dr);
  L103(_Platform3):
    r24 = `$`(_Platform3, <sym pkgType>);
    goto L101(r24);
  L107():
    c26 = `as.logical`(r26);
    if c26 then L108() else L20();
  L20():
    goto L21();
  L21():
    a = ld a;
    check L110() else D17();
  L104():
    dx = getTryDispatchBuiltinValue(dr);
    goto L101(dx);
  L108():
    st pkgType = "mac.binary";
    goto L21();
  D17():
    deopt 70 [a];
  L110():
    a1 = force? a;
    checkMissing(a1);
    c27 = `is.object`(a1);
    if c27 then L111() else L112(a1);
  L22(dx4):
    st thisType = dx4;
    a4 = ld a;
    check L115() else D19();
  L111():
    dr2 = tryDispatchBuiltin.1("[[", a1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L113() else L112(dr2);
  L112(a3):
    pkgType8 = ld pkgType;
    check L114() else D18();
  D18():
    deopt 72 [a3, pkgType8];
  D19():
    deopt 76 [a4];
  L113():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L22(dx3);
  L114():
    pkgType9 = force? pkgType8;
    __ = ldf `[[` in base;
    r28 = dyn __(a3, pkgType9);
    goto L22(r28);
  L115():
    a5 = force? a4;
    checkMissing(a5);
    c28 = `is.object`(a5);
    if c28 then L116() else L117(a5);
  L23(dx6):
    st a = dx6;
    getOption2 = ldf getOption;
    check L120() else D21();
  L116():
    dr4 = tryDispatchBuiltin.1("[", a5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L118() else L117(dr4);
  L117(a7):
    thisType = ld thisType;
    check L119() else D20();
  D20():
    deopt 78 [a7, thisType];
  D21():
    deopt 84 [];
  L118():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L23(dx5);
  L119():
    thisType1 = force? thisType;
    __1 = ldf `[` in base;
    r29 = dyn __1(a7, thisType1, <int 1, 2, 3>);
    goto L23(r29);
  L120():
    r30 = dyn getOption2("repos");
    check L121() else D22();
  D22():
    deopt 86 [r30];
  L121():
    st repos = r30;
    _in_ = ldf `%in%`;
    check L122() else D23();
  D23():
    deopt 89 [];
  L122():
    p4 = prom<V +>{
      row_names = ldf `row.names`;
      p3 = prom<V +>{
        a8 = ld a;
        a9 = force? a8;
        checkMissing(a9);
        return a9;
      };
      r32 = dyn row_names(p3);
      return r32;
    };
    r34 = dyn _in_("CRAN", p4);
    check L123() else D24();
  D24():
    deopt 92 [r34];
  L123():
    c29 = `as.logical`(r34);
    if c29 then L124() else L24(c29);
  L24(c31):
    c43 = `as.logical`(c31);
    if c43 then L133() else L27();
  L124():
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L125() else L126();
  L25(c34, r36):
    r39 = `!`(r36);
    c40 = `as.logical`(r39);
    c41 = `&&`(c34, c40);
    goto L24(c41);
  L27():
    goto L29();
  L29():
    l3 = ld a;
    c45 = `is.object`(l3);
    if c45 then L139() else L140(TRUE, l3);
  L125():
    repos = ld repos;
    check L127() else D25();
  L126():
    r35 = dyn base4(<lang `<-`(CRAN, `[`(repos, "CRAN"))>);
    goto L25(c29, r35);
  L133():
    CRAN = ld CRAN;
    check L134() else D27();
  D25():
    deopt 95 [c29, repos];
  D27():
    deopt 105 [CRAN];
  L30(dx12):
    st a = dx12;
    _in_2 = ldf `%in%`;
    check L144() else D30();
  L127():
    repos1 = force? repos;
    checkMissing(repos1);
    c35 = `is.object`(repos1);
    if c35 then L128() else L129(c29, repos1);
  L134():
    CRAN1 = force? CRAN;
    checkMissing(CRAN1);
    l = ld a;
    c44 = `is.object`(l);
    if c44 then L135() else L136(CRAN1, l);
  L139():
    dr10 = tryDispatchBuiltin.0("[<-", l3, TRUE);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L141() else L140(TRUE, dr10);
  L140(r42, l5):
    _in_1 = ldf `%in%`;
    check L142() else D28();
  D28():
    deopt 119 [r42, l5, TRUE];
  D30():
    deopt 127 [];
  L26(c39, dx8):
    st CRAN = dx8;
    is_na = ldf `is.na` in base;
    r38 = dyn is_na(dx8);
    check L131() else D26();
  L28(CRAN5, dx10):
    st a = dx10;
    goto L29();
  L128():
    dr6 = tryDispatchBuiltin.1("[", repos1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L130() else L129(c29, dr6);
  L129(c37, repos3):
    __2 = ldf `[` in base;
    r37 = dyn __2(repos3, "CRAN");
    goto L26(c37, r37);
  L135():
    dr8 = tryDispatchBuiltin.0("[<-", l, CRAN1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L137() else L136(CRAN1, dr8);
  L136(CRAN3, l2):
    ___ = ldf `[<-` in base;
    r40 = dyn ___(l2, CRAN1, "CRAN", "URL");
    goto L28(CRAN3, r40);
  L141():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L30(dx11);
  L142():
    p5 = prom<V +>{
      a10 = ld a;
      a11 = force? a10;
      checkMissing(a11);
      c46 = `is.object`(a11);
      if c46 then L1() else L2(a11);
    L0(dx14):
      return dx14;
    L1():
      dr12 = tryDispatchBuiltin.1("[[", a11);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(a13):
      __3 = ldf `[[` in base;
      r45 = dyn __3(a13, "URL");
      goto L0(r45);
    L3():
      dx13 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx13);
    };
    p6 = prom<V +>{
      repos4 = ld repos;
      repos5 = force? repos4;
      checkMissing(repos5);
      return repos5;
    };
    r48 = dyn _in_1(p5, p6);
    check L143() else D29();
  L144():
    p7 = prom<V +>{
      repos6 = ld repos;
      repos7 = force? repos6;
      checkMissing(repos7);
      return repos7;
    };
    p8 = prom<V +>{
      a14 = ld a;
      a15 = force? a14;
      checkMissing(a15);
      c47 = `is.object`(a15);
      if c47 then L1() else L2(a15);
    L0(dx16):
      return dx16;
    L1():
      dr14 = tryDispatchBuiltin.1("[[", a15);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(a17):
      __4 = ldf `[[` in base;
      r51 = dyn __4(a17, "URL");
      goto L0(r51);
    L3():
      dx15 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx15);
    };
    r53 = dyn _in_2(p7, p8);
    check L145() else D31();
  D26():
    deopt 102 [c39, r38];
  D29():
    deopt 122 [r42, l5, TRUE, r48];
  D31():
    deopt 130 [r53];
  L130():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L26(c29, dx7);
  L131():
    goto L25(c39, r38);
  L137():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L28(CRAN1, dx9);
  L143():
    ___1 = ldf `[<-` in base;
    r49 = dyn ___1(l5, TRUE, r48, "default");
    goto L30(r49);
  L145():
    r54 = `!`(r53);
    st new = r54;
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L146() else L147();
  L31(r56):
    c48 = `as.logical`(r56);
    if c48 then L150() else L32();
  L146():
    new = ld new;
    check L148() else D32();
  L147():
    r55 = dyn base5(<sym new>);
    goto L31(r55);
  D32():
    deopt 135 [new];
  L32():
    goto L44();
  L44():
    a20 = ld a;
    check L196() else D53();
  L148():
    new1 = force? new;
    checkMissing(new1);
    any = ldf any in base;
    r57 = dyn any(new1);
    check L149() else D33();
  L150():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L151() else L152();
  D33():
    deopt 138 [r57];
  D53():
    deopt 214 [a20];
  L33(r59):
    st aa = r59;
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L159() else L160();
  L149():
    goto L31(r57);
  L151():
    repos8 = ld repos;
    check L153() else D34();
  L152():
    r58 = dyn base6(<lang `[`(repos, new)>);
    goto L33(r58);
  L196():
    a21 = force? a20;
    checkMissing(a21);
    c57 = `is.object`(a21);
    if c57 then L197() else L198(a21);
  D34():
    deopt 141 [repos8];
  L35(r63):
    c51 = `as.logical`(r63);
    if c51 then L162() else L36();
  L45(dx36):
    st default = dx36;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L200() else L201();
  L153():
    repos9 = force? repos8;
    checkMissing(repos9);
    c49 = `is.object`(repos9);
    if c49 then L154() else L155(repos9);
  L159():
    aa = ld aa;
    check L161() else D37();
  L160():
    r62 = dyn base7(<sym aa>);
    goto L35(r62);
  L197():
    dr28 = tryDispatchBuiltin.1("[[", a21);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L199() else L198(dr28);
  L198(a23):
    __10 = ldf `[[` in base;
    r86 = dyn __10(a23, "default");
    goto L45(r86);
  D37():
    deopt 150 [aa];
  L34(dx18):
    names = ldf names in base;
    r61 = dyn names(dx18);
    check L158() else D36();
  L36():
    goto L40();
  L40():
    repos16 = ld repos;
    check L175() else D42();
  L46(r88):
    c58 = `as.logical`(r88);
    if c58 then L204() else L47();
  L154():
    dr16 = tryDispatchBuiltin.1("[", repos9);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L156() else L155(dr16);
  L155(repos11):
    new2 = ld new;
    check L157() else D35();
  L161():
    aa1 = force? aa;
    checkMissing(aa1);
    c50 = `==`(aa1, NULL);
    goto L35(c50);
  L162():
    sym8 = ldf `rep.int`;
    base8 = ldf `rep.int` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L163() else L164();
  L199():
    dx35 = getTryDispatchBuiltinValue(dr28);
    goto L45(dx35);
  L200():
    name3 = ld name;
    check L202() else D54();
  L201():
    r87 = dyn base10(<sym name>);
    goto L46(r87);
  D35():
    deopt 143 [repos11, new2];
  D36():
    deopt 147 [r61];
  D42():
    deopt 170 [repos16];
  D54():
    deopt 222 [name3];
  L37(r65):
    st aa = r65;
    goto L40();
  L47():
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L225() else L226();
  L53(m6):
    st res = m6;
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L249() else L250();
  L156():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L34(dx17);
  L157():
    new3 = force? new2;
    __5 = ldf `[` in base;
    r60 = dyn __5(repos11, new3);
    goto L34(r60);
  L158():
    goto L33(r61);
  L163():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L165() else L166();
  L164():
    r64 = dyn base8("", <lang length(`[`(repos, new))>);
    goto L37(r64);
  L175():
    repos17 = force? repos16;
    checkMissing(repos17);
    c53 = `is.object`(repos17);
    if c53 then L176() else L177(repos17);
  L202():
    name4 = force? name3;
    checkMissing(name4);
    length1 = ldf length in base;
    r89 = dyn length1(name4);
    check L203() else D55();
  L204():
    sym11 = ldf match;
    base11 = ldf match in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L205() else L206();
  D55():
    deopt 225 [r89];
  L38(r67):
    rep_int = ldf `rep.int` in base;
    r70 = dyn rep_int("", r67);
    check L173() else D41();
  L41(dx22):
    c54 = `is.object`(dx22);
    if c54 then L180() else L181(dx22);
  L48(r91):
    st m = r91;
    sym12 = ldf any;
    base12 = ldf any in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L212() else L213();
  L54(r115):
    c61 = `as.logical`(r115);
    if c61 then L229() else L55();
  L60(r133):
    c66 = `as.logical`(r133);
    if c66 then L61(c66) else L253();
  L165():
    repos12 = ld repos;
    check L167() else D38();
  L166():
    r66 = dyn base9(<lang `[`(repos, new)>);
    goto L38(r66);
  L176():
    dr20 = tryDispatchBuiltin.1("[", repos17);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L178() else L177(dr20);
  L177(repos19):
    new6 = ld new;
    check L179() else D43();
  L203():
    goto L46(r89);
  L205():
    tolower = ldf tolower;
    check L207() else D56();
  L206():
    r90 = dyn base11(<lang tolower(name)>, <lang tolower(row.names(a))>);
    goto L48(r90);
  L225():
    ind3 = ld ind;
    check L227() else D67();
  L226():
    r114 = dyn base15(<sym ind>);
    goto L54(r114);
  L249():
    res = ld res;
    check L251() else D78();
  L250():
    r132 = dyn base18(<sym res>);
    goto L60(r132);
  D38():
    deopt 158 [repos12];
  D41():
    deopt 166 [r70];
  D43():
    deopt 172 [repos19, new6];
  D56():
    deopt 229 [];
  D67():
    deopt 262 [ind3];
  D78():
    deopt 306 [res];
  L42(dx26):
    l6 = ld aa;
    c55 = `is.object`(l6);
    if c55 then L184() else L185(dx26, l6);
  L49(r100):
    c59 = `as.logical`(r100);
    if c59 then L219() else L51();
  L55():
    graphics1 = ld graphics;
    check L235() else D71();
  L61(c67):
    c75 = `as.logical`(c67);
    if c75 then L259() else L63();
  L167():
    repos13 = force? repos12;
    checkMissing(repos13);
    c52 = `is.object`(repos13);
    if c52 then L168() else L169(repos13);
  L173():
    goto L37(r70);
  L178():
    dx21 = getTryDispatchBuiltinValue(dr20);
    goto L41(dx21);
  L179():
    new7 = force? new6;
    __7 = ldf `[` in base;
    r72 = dyn __7(repos19, new7);
    goto L41(r72);
  L180():
    dr22 = tryDispatchBuiltin.1("[", dx22);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L182() else L181(dr22);
  L181(dx24):
    aa2 = ld aa;
    check L183() else D44();
  L207():
    p13 = prom<V +>{
      name5 = ld name;
      name6 = force? name5;
      checkMissing(name6);
      return name6;
    };
    r93 = dyn tolower(p13);
    check L208() else D57();
  L212():
    sym13 = ldf `is.na`;
    base13 = ldf `is.na` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L214() else L215();
  L213():
    r99 = dyn base12(<lang is.na(m)>);
    goto L49(r99);
  L227():
    ind4 = force? ind3;
    checkMissing(ind4);
    length2 = ldf length in base;
    r116 = dyn length2(ind4);
    check L228() else D68();
  L229():
    sym16 = ldf `as.integer`;
    base16 = ldf `as.integer` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L230() else L231();
  L251():
    res1 = force? res;
    checkMissing(res1);
    length3 = ldf length in base;
    r134 = dyn length3(res1);
    check L252() else D79();
  L253():
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L254() else L255();
  D44():
    deopt 175 [dx24, aa2];
  D57():
    deopt 231 [r93];
  D68():
    deopt 265 [r116];
  D71():
    deopt 272 [graphics1];
  D79():
    deopt 309 [r134];
  L39(dx20):
    length = ldf length in base;
    r69 = dyn length(dx20);
    check L172() else D40();
  L43(dx32):
    st aa = dx32;
    data_frame = ldf `data.frame`;
    check L188() else D46();
  L50(r102):
    any1 = ldf any in base;
    r104 = dyn any1(r102);
    check L218() else D63();
  L51():
    goto L52();
  L52():
    m4 = ld m;
    check L223() else D66();
  L56(r118):
    goto L53(r118);
  L62(c71, r136):
    c72 = `as.logical`(r136);
    c73 = `||`(c71, c72);
    goto L61(c73);
  L63():
    invisible.0();
    popenv;
    return NULL;
  L168():
    dr18 = tryDispatchBuiltin.1("[", repos13);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L170() else L169(dr18);
  L169(repos15):
    new4 = ld new;
    check L171() else D39();
  L182():
    dx25 = getTryDispatchBuiltinValue(dr22);
    goto L42(dx25);
  L183():
    aa3 = force? aa2;
    checkMissing(aa3);
    r73 = `==`(aa3, "");
    __8 = ldf `[` in base;
    r74 = dyn __8(dx24, r73);
    goto L42(r74);
  L184():
    dr24 = tryDispatchBuiltin.0("[<-", l6, dx26);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L186() else L185(dx26, dr24);
  L185(dx28, l8):
    aa4 = ld aa;
    check L187() else D45();
  L208():
    tolower1 = ldf tolower;
    check L209() else D58();
  L214():
    m = ld m;
    check L216() else D61();
  L215():
    r101 = dyn base13(<sym m>);
    goto L50(r101);
  L219():
    stop2 = ldf stop;
    check L220() else D64();
  L228():
    goto L54(r116);
  L230():
    ind5 = ld ind;
    check L232() else D69();
  L231():
    r117 = dyn base16(<sym ind>);
    goto L56(r117);
  L235():
    graphics2 = force? graphics1;
    checkMissing(graphics2);
    c62 = `as.logical`(graphics2);
    if c62 then L236() else L57();
  L252():
    goto L60(r134);
  L254():
    addURLs1 = ld addURLs;
    check L256() else D80();
  L255():
    r135 = dyn base19(<sym addURLs>);
    goto L62(c66, r135);
  L259():
    a38 = ld a;
    check L260() else D82();
  D39():
    deopt 160 [repos15, new4];
  D40():
    deopt 164 [r69];
  D45():
    deopt 181 [dx28, l8, dx26, aa4];
  D46():
    deopt 188 [];
  D58():
    deopt 233 [];
  D61():
    deopt 245 [m];
  D63():
    deopt 250 [r104];
  D64():
    deopt 252 [];
  D66():
    deopt 258 [m4];
  D69():
    deopt 268 [ind5];
  D80():
    deopt 312 [c66, addURLs1];
  D82():
    deopt 317 [a38];
  L57():
    gettext = ldf gettext;
    check L238() else D72();
  L58(r120):
    st title = r120;
    sym17 = ldf match;
    base17 = ldf match in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L240() else L241();
  L170():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L39(dx19);
  L171():
    new5 = force? new4;
    __6 = ldf `[` in base;
    r68 = dyn __6(repos15, new5);
    goto L39(r68);
  L172():
    goto L38(r69);
  L186():
    dx30 = getTryDispatchBuiltinValue(dr24);
    goto L43(dx30);
  L187():
    aa5 = force? aa4;
    checkMissing(aa5);
    r75 = `==`(aa5, "");
    ___2 = ldf `[<-` in base;
    r76 = dyn ___2(l8, dx26, r75);
    goto L43(r76);
  L188():
    p9 = prom<V +>{
      aa6 = ld aa;
      aa7 = force? aa6;
      checkMissing(aa7);
      return aa7;
    };
    p10 = prom<V +>{
      repos20 = ld repos;
      repos21 = force? repos20;
      checkMissing(repos21);
      c56 = `is.object`(repos21);
      if c56 then L1() else L2(repos21);
    L0(dx34):
      return dx34;
    L1():
      dr26 = tryDispatchBuiltin.1("[", repos21);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(repos23):
      new8 = ld new;
      new9 = force? new8;
      __9 = ldf `[` in base;
      r78 = dyn __9(repos23, new9);
      goto L0(r78);
    L3():
      dx33 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx33);
    };
    r80 = dyn data_frame[menu_name, URL, default](p9, p10, TRUE);
    check L189() else D47();
  L209():
    p15 = prom<V +>{
      row_names1 = ldf `row.names`;
      p14 = prom<V +>{
        a24 = ld a;
        a25 = force? a24;
        checkMissing(a25);
        return a25;
      };
      r95 = dyn row_names1(p14);
      return r95;
    };
    r97 = dyn tolower1(p15);
    check L210() else D59();
  L216():
    m1 = force? m;
    checkMissing(m1);
    is_na1 = ldf `is.na` in base;
    r103 = dyn is_na1(m1);
    check L217() else D62();
  L218():
    goto L49(r104);
  L220():
    p17 = prom<V +>{
      paste = ldf paste;
      p16 = prom<V +>{
        name7 = ld name;
        name8 = force? name7;
        checkMissing(name8);
        c60 = `is.object`(name8);
        if c60 then L2() else L3(name8);
      L0(dx38):
        return dx38;
      L2():
        dr30 = tryDispatchBuiltin.1("[", name8);
        dc15 = getTryDispatchBuiltinDispatched(dr30);
        if dc15 then L4() else L3(dr30);
      L3(name10):
        sym14 = ldf `is.na`;
        base14 = ldf `is.na` in base;
        guard14 = `==`.4(sym14, base14);
        if guard14 then L5() else L6();
      L1(name13, r106):
        __11 = ldf `[` in base;
        r108 = dyn __11(name13, r106);
        goto L0(r108);
      L4():
        dx37 = getTryDispatchBuiltinValue(dr30);
        goto L0(dx37);
      L5():
        m2 = ld m;
        m3 = force? m2;
        checkMissing(m3);
        is_na2 = ldf `is.na` in base;
        r107 = dyn is_na2(m3);
        goto L1(name10, r107);
      L6():
        r105 = dyn base14(<sym m>);
        goto L1(name10, r105);
      };
      r110 = dyn paste[, collapse](p16, ", ");
      return r110;
    };
    r112 = dyn stop2("No matching repositories found for ", p17);
    check L221() else D65();
  L223():
    m5 = force? m4;
    checkMissing(m5);
    goto L53(m5);
  L232():
    ind6 = force? ind5;
    checkMissing(ind6);
    as_integer = ldf `as.integer` in base;
    r119 = dyn as_integer(ind6);
    check L233() else D70();
  L236():
    goto L58("Repositories");
  L256():
    addURLs2 = force? addURLs1;
    checkMissing(addURLs2);
    length4 = ldf length in base;
    r137 = dyn length4(addURLs2);
    check L257() else D81();
  L260():
    a39 = force? a38;
    checkMissing(a39);
    c76 = `is.object`(a39);
    if c76 then L261() else L262(a39);
  D47():
    deopt 195 [r80];
  D59():
    deopt 235 [r97];
  D62():
    deopt 248 [r103];
  D65():
    deopt 255 [r112];
  D70():
    deopt 271 [r119];
  D72():
    deopt 277 [];
  D81():
    deopt 315 [c66, r137];
  L64(dx46):
    st repos = dx46;
    row_names2 = ldf `row.names`;
    check L264() else D83();
  L189():
    st newa = r80;
    aa8 = ld aa;
    check L190() else D48();
  L210():
    match = ldf match in base;
    r98 = dyn match(r93, r97, NA_INT, NULL);
    check L211() else D60();
  L217():
    goto L50(r103);
  L221():
    goto L52();
  L233():
    goto L56(r119);
  L238():
    r121 = dyn gettext("--- Please select repositories for use in this session ---\n");
    check L239() else D73();
  L240():
    select_list = ldf `select.list`;
    check L242() else D74();
  L241():
    r122 = dyn base17(<lang select.list(`[`(a, , 1), `[`(a, default, 1), multiple=TRUE, title, graphics=graphics)>, <lang `[`(a, , 1)>);
    goto L53(r122);
  L257():
    goto L62(c66, r137);
  L261():
    dr38 = tryDispatchBuiltin.1("[[", a39);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L263() else L262(dr38);
  L262(a41):
    __15 = ldf `[[` in base;
    r138 = dyn __15(a41, "URL");
    goto L64(r138);
  D48():
    deopt 197 [aa8];
  D60():
    deopt 239 [r98];
  D73():
    deopt 279 [r121];
  D74():
    deopt 284 [];
  D83():
    deopt 324 [];
  L190():
    aa9 = force? aa8;
    checkMissing(aa9);
    l9 = ld newa;
    row_names__ = ldf `row.names<-`;
    check L191() else D49();
  L211():
    goto L48(r98);
  L239():
    goto L58(r121);
  L242():
    p18 = prom<V +>{
      a26 = ld a;
      a27 = force? a26;
      checkMissing(a27);
      c63 = `is.object`(a27);
      if c63 then L1() else L2();
    L0(dx40):
      return dx40;
    L1():
      dr32 = tryDispatchBuiltin.1("[", a27);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2();
    L2():
      __12 = ldf `[` in base;
      r123 = dyn __12(a27, <missing>, 1);
      goto L0(r123);
    L3():
      dx39 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx39);
    };
    p19 = prom<V +>{
      a30 = ld a;
      a31 = force? a30;
      checkMissing(a31);
      c64 = `is.object`(a31);
      if c64 then L1() else L2(a31);
    L0(dx42):
      return dx42;
    L1():
      dr34 = tryDispatchBuiltin.1("[", a31);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(a33):
      default = ld default;
      default1 = force? default;
      __13 = ldf `[` in base;
      r125 = dyn __13(a33, default1, 1);
      goto L0(r125);
    L3():
      dx41 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx41);
    };
    p20 = prom<V +>{
      title = ld title;
      title1 = force? title;
      checkMissing(title1);
      return title1;
    };
    p21 = prom<V +>{
      graphics3 = ld graphics;
      graphics4 = force? graphics3;
      checkMissing(graphics4);
      return graphics4;
    };
    r129 = dyn select_list[, , multiple, , graphics](p18, p19, TRUE, p20, p21);
    check L243() else D75();
  L263():
    dx45 = getTryDispatchBuiltinValue(dr38);
    goto L64(dx45);
  L264():
    p22 = prom<V +>{
      a42 = ld a;
      a43 = force? a42;
      checkMissing(a43);
      return a43;
    };
    r140 = dyn row_names2(p22);
    check L265() else D84();
  D49():
    deopt 200 [aa9, l9, aa9];
  D75():
    deopt 292 [r129];
  D84():
    deopt 326 [r140];
  L191():
    r81 = dyn row_names__(l9, NULL, aa9);
    check L192() else D50();
  L243():
    a34 = ld a;
    check L244() else D76();
  L265():
    l10 = ld repos;
    names__ = ldf `names<-`;
    check L266() else D85();
  D50():
    deopt 202 [aa9, r81];
  D76():
    deopt 293 [a34];
  D85():
    deopt 328 [r140, l10, r140];
  L192():
    st newa = r81;
    rbind = ldf rbind;
    check L193() else D51();
  L244():
    a35 = force? a34;
    checkMissing(a35);
    c65 = `is.object`(a35);
    if c65 then L245() else L246();
  L266():
    r141 = dyn names__(l10, NULL, r140);
    check L267() else D86();
  D51():
    deopt 205 [];
  D86():
    deopt 330 [r140, r141];
  L59(dx44):
    match1 = ldf match in base;
    r131 = dyn match1(r129, dx44, NA_INT, NULL);
    check L248() else D77();
  L193():
    p11 = prom<V +>{
      a18 = ld a;
      a19 = force? a18;
      checkMissing(a19);
      return a19;
    };
    p12 = prom<V +>{
      newa = ld newa;
      newa1 = force? newa;
      checkMissing(newa1);
      return newa1;
    };
    r84 = dyn rbind[, , `deparse.level`](p11, p12, 0);
    check L194() else D52();
  L245():
    dr36 = tryDispatchBuiltin.1("[", a35);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L247() else L246();
  L246():
    __14 = ldf `[` in base;
    r130 = dyn __14(a35, <missing>, 1);
    goto L59(r130);
  L267():
    st repos = r141;
    sym20 = ldf c;
    base20 = ldf c in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L268() else L269();
  D52():
    deopt 210 [r84];
  D77():
    deopt 302 [r131];
  L65(r143):
    st repos = r143;
    options = ldf options;
    check L277() else D91();
  L194():
    st a = r84;
    goto L44();
  L247():
    dx43 = getTryDispatchBuiltinValue(dr36);
    goto L59(dx43);
  L248():
    goto L53(r131);
  L268():
    repos24 = ld repos;
    check L270() else D87();
  L269():
    r142 = dyn base20(<lang `[`(repos, res)>, <sym addURLs>);
    goto L65(r142);
  D87():
    deopt 334 [repos24];
  D91():
    deopt 345 [];
  L270():
    repos25 = force? repos24;
    checkMissing(repos25);
    c77 = `is.object`(repos25);
    if c77 then L271() else L272(repos25);
  L277():
    p23 = prom<V +>{
      repos28 = ld repos;
      repos29 = force? repos28;
      checkMissing(repos29);
      return repos29;
    };
    r147 = dyn options[repos](p23);
    check L278() else D92();
  D92():
    deopt 348 [r147];
  L66(dx48):
    addURLs3 = ld addURLs;
    check L275() else D89();
  L271():
    dr40 = tryDispatchBuiltin.1("[", repos25);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L273() else L272(dr40);
  L272(repos27):
    res2 = ld res;
    check L274() else D88();
  L278():
    popenv;
    return r147;
  D88():
    deopt 336 [repos27, res2];
  D89():
    deopt 339 [addURLs3];
  L273():
    dx47 = getTryDispatchBuiltinValue(dr40);
    goto L66(dx47);
  L274():
    res3 = force? res2;
    __16 = ldf `[` in base;
    r144 = dyn __16(repos27, res3);
    goto L66(r144);
  L275():
    addURLs4 = force? addURLs3;
    checkMissing(addURLs4);
    c78 = ldf c in base;
    r145 = dyn c78(dx48, addURLs4);
    check L276() else D90();
  D90():
    deopt 342 [r145];
  L276():
    goto L65(r145);
  }
}