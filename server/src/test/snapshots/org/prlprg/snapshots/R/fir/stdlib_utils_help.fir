fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner252976790;
    st help = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner252976790(topic, package, `lib.loc`, verbose, `try.all.packages`, help_type) {
  (reg topic:*, reg package:*, reg lib_loc:*, reg verbose:*, reg try_all_packages:*, reg help_type:*) -+> V { var topic:*, var package:*, reg package_isMissing:L, reg package_orDefault:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var `try.all.packages`:*, reg try_all_packages_isMissing:L, reg try_all_packages_orDefault:*, reg getOption1:cls, reg r2:V, reg p1:p(V +), var help_type:*, reg help_type_isMissing:L, reg help_type_orDefault:*, reg getOption2:cls, reg r4:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg c:cls, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg help_type1:*, reg help_type2:V, reg length:cls, reg r11:V, reg r12:V, reg c1:L, reg r13:V, reg match_arg:cls, reg tolower:cls, reg help_type3:*, reg help_type4:V, reg p3:p(V +), reg r15:V, reg p4:p(V +), reg types:*, reg types1:V, reg p5:p(V +), reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg missing:cls, reg r21:V, reg r22:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg substitute:cls, reg r27:V, reg c3:L, reg c4:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg y:*, reg y1:V, reg as_character:cls, reg r30:V, reg r31:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg r34:V, reg missing1:cls, reg r35:V, reg c5:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg package1:*, reg package2:V, reg c6:V, reg r38:V, reg c7:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg r40:V, reg interactive:cls, reg r41:V, reg c8:L, reg c10:V, reg help_type5:*, reg help_type6:V, reg r42:V, reg c11:L, reg c12:V, reg c14:L, reg __:cls, reg r43:V, reg r44:cls, reg r45:V, reg port:*, reg port1:V, reg r46:V, reg c15:L, reg library:cls, reg package3:*, reg package4:V, reg p6:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p7:p(V +), reg r49:V, reg _Platform:*, reg _Platform1:V, reg c16:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r52:V, reg r53:V, reg c17:L, reg get:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r54:V, reg r55:V, reg as_environment:cls, reg r56:V, reg p8:p(V +), reg r58:V, reg r59:V, reg getOption3:cls, reg r60:V, reg browseURL:cls, reg paste0:cls, reg port2:*, reg port3:V, reg p9:p(V +), reg package5:*, reg package6:V, reg p10:p(V +), reg r63:V, reg p11:p(V +), reg browser:*, reg browser1:V, reg p12:p(V +), reg r66:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r67:V, reg r68:V, reg invisible:cls, reg r69:V, reg library1:cls, reg package7:*, reg package8:V, reg p13:p(V +), reg lib_loc3:*, reg lib_loc4:V, reg p14:p(V +), reg r74:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r76:V, reg r77:V, reg lib_loc5:*, reg lib_loc6:V, reg c18:V, reg r78:V, reg c19:L, reg library2:cls, reg lib_loc7:*, reg lib_loc8:V, reg p15:p(V +), reg r80:V, reg _Library:*, reg _Library1:V, reg tryCatch:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r83:V, reg r84:V, reg topic1:*, reg topic2:V, reg c20:L, reg c21:L, reg c23:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r85:V, reg c26:L, reg r86:V, reg topic3:*, reg topic4:V, reg length1:cls, reg r87:V, reg r88:V, reg c27:L, reg c28:V, reg p16:p(V +), reg r90:cls, reg p17:p(V +), reg r92:V, reg ischar:*, reg ischar1:V, reg r93:V, reg c30:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r94:V, reg r95:V, reg c31:cls, reg r96:V, reg deparse1:cls, reg sym15:cls, reg base15:cls, reg guard15:L, reg r97:V, reg r98:V, reg substitute1:cls, reg r99:V, reg p18:p(V +), reg r101:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r102:V, reg r103:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r104:V, reg r105:V, reg substitute2:cls, reg r106:V, reg c32:L, reg r107:V, reg c33:L, reg c35:V, reg _in_:cls, reg stopic:*, reg stopic1:V, reg p19:p(V +), reg reserved:*, reg reserved1:V, reg p20:p(V +), reg r110:V, reg r111:V, reg c36:L, reg c37:V, reg c39:L, reg stop:cls, reg r112:V, reg stopic2:*, reg stopic3:V, reg index_search:cls, reg topic5:*, reg topic6:V, reg p21:p(V +), reg find_package:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r115:V, reg r116:V, reg package9:*, reg package10:V, reg c40:V, reg c41:L, reg loadedNamespaces:cls, reg r117:V, reg package11:*, reg package12:V, reg p22:p(V +), reg lib_loc9:*, reg lib_loc10:V, reg p23:p(V +), reg verbose1:*, reg verbose2:V, reg p24:p(V +), reg r121:V, reg p25:p(V +), reg r123:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r124:V, reg r125:V, reg paths:*, reg paths1:V, reg length2:cls, reg r126:V, reg r127:V, reg c42:L, reg c44:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r128:V, reg c47:L, reg r129:V, reg try_all_packages1:*, reg try_all_packages2:V, reg c48:L, reg c49:L, reg c50:V, reg c52:L, reg c54:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r130:V, reg c57:L, reg r131:V, reg try_all_packages3:*, reg try_all_packages4:V, reg is_na:cls, reg r132:V, reg r133:V, reg c58:L, reg c59:V, reg c61:L, reg c63:V, reg try_all_packages5:*, reg try_all_packages6:V, reg c64:L, reg c65:V, reg c67:L, reg c69:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r134:V, reg c72:L, reg r135:V, reg package13:*, reg package14:V, reg c73:V, reg c74:L, reg c75:V, reg c77:L, reg c79:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r136:V, reg c82:L, reg r137:V, reg lib_loc11:*, reg lib_loc12:V, reg c83:V, reg c84:L, reg c85:V, reg try_all_packages7:*, reg try_all_packages8:V, reg c87:L, reg _libPaths:cls, reg r138:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c88:L, reg x:V, reg _packages:cls, reg lib:*, reg lib1:V, reg p26:p(V +), reg r140:V, reg packages:*, reg packages1:V, reg c89:L, reg i6:I, reg packages3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i8:I, reg dx3:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r141:V, reg i11:I, reg packages6:V, reg r142:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r143:V, reg i14:I, reg packages9:V, reg r144:V, reg packages10:*, reg packages11:V, reg _packages1:cls, reg r145:V, reg match:cls, reg r146:V, reg is_na1:cls, reg r147:V, reg __1:cls, reg r148:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r149:V, reg i17:I, reg r150:V, reg paths2:*, reg paths3:V, reg index_search1:cls, reg topic7:*, reg topic8:V, reg p27:p(V +), reg file_path:cls, reg lib2:*, reg lib3:V, reg p28:p(V +), reg packages12:*, reg packages13:V, reg p29:p(V +), reg r154:V, reg p30:p(V +), reg r156:V, reg c90:cls, reg r157:V, reg paths4:*, reg paths5:V, reg c91:L, reg paths7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r158:V, reg paths10:V, reg r159:V, reg paths11:*, reg paths12:V, reg nzchar:cls, reg r160:V, reg __2:cls, reg r161:V, reg structure:cls, reg unique:cls, reg paths13:*, reg paths14:V, reg p31:p(V +), reg r163:V, reg p32:p(V +), reg match_call:cls, reg r165:V, reg p33:p(V +), reg topic9:*, reg topic10:V, reg p34:p(V +), reg try_all_packages9:*, reg try_all_packages10:V, reg p35:p(V +), reg help_type7:*, reg help_type8:V, reg p36:p(V +), reg r170:V |
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
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L2() else L3(verbose);
  L2():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("verbose");
      return r;
    };
    goto L3(p);
  L3(verbose_orDefault):
    st verbose = verbose_orDefault;
    try_all_packages_isMissing = missing.0(try_all_packages);
    if try_all_packages_isMissing then L4() else L5(try_all_packages);
  L4():
    p1 = prom<V +>{
      getOption1 = ldf getOption;
      r2 = dyn getOption1("help.try.all.packages");
      return r2;
    };
    goto L5(p1);
  L5(try_all_packages_orDefault):
    st `try.all.packages` = try_all_packages_orDefault;
    help_type_isMissing = missing.0(help_type);
    if help_type_isMissing then L6() else L7(help_type);
  L6():
    p2 = prom<V +>{
      getOption2 = ldf getOption;
      r4 = dyn getOption2("help_type");
      return r4;
    };
    goto L7(p2);
  L7(help_type_orDefault):
    st help_type = help_type_orDefault;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L66() else L67();
  L8(r7):
    st types = r7;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L69() else L70();
  L66():
    c = ldf c in base;
    r8 = dyn c("text", "html", "pdf");
    check L68() else D0();
  L67():
    r6 = dyn base("text", "html", "pdf");
    goto L8(r6);
  D0():
    deopt 6 [r8];
  L9(r10):
    r12 = `!`(r10);
    c1 = `as.logical`(r12);
    if c1 then L73() else L10();
  L68():
    goto L8(r8);
  L69():
    help_type1 = ld help_type;
    check L71() else D1();
  L70():
    r9 = dyn base1(<sym help_type>);
    goto L9(r9);
  D1():
    deopt 10 [help_type1];
  L10():
    match_arg = ldf `match.arg`;
    check L75() else D3();
  L11(r13):
    st help_type = r13;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L77() else L78();
  L71():
    help_type2 = force? help_type1;
    checkMissing(help_type2);
    length = ldf length in base;
    r11 = dyn length(help_type2);
    check L72() else D2();
  L73():
    goto L11("text");
  D2():
    deopt 13 [r11];
  D3():
    deopt 18 [];
  L12(r20):
    r22 = `!`(r20);
    c2 = `as.logical`(r22);
    if c2 then L79() else L13();
  L72():
    goto L9(r11);
  L75():
    p4 = prom<V +>{
      tolower = ldf tolower;
      p3 = prom<V +>{
        help_type3 = ld help_type;
        help_type4 = force? help_type3;
        checkMissing(help_type4);
        return help_type4;
      };
      r15 = dyn tolower(p3);
      return r15;
    };
    p5 = prom<V +>{
      types = ld types;
      types1 = force? types;
      checkMissing(types1);
      return types1;
    };
    r18 = dyn match_arg(p4, p5);
    check L76() else D4();
  L77():
    missing = ldf missing in base;
    r21 = dyn missing(<sym package>);
    goto L12(r21);
  L78():
    r19 = dyn base2(<sym package>);
    goto L12(r19);
  D4():
    deopt 21 [r18];
  L13():
    goto L19();
  L19():
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L91() else L92();
  L76():
    goto L11(r18);
  L79():
    sym3 = ldf `is.name`;
    base3 = ldf `is.name` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L80() else L81();
  L14(r24):
    c4 = `as.logical`(r24);
    if c4 then L84() else L16();
  L20(r34):
    c5 = `as.logical`(r34);
    if c5 then L93() else L21();
  L80():
    sym4 = ldf substitute;
    base4 = ldf substitute in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L82() else L83();
  L81():
    r23 = dyn base3(<lang `<-`(y, substitute(package))>);
    goto L14(r23);
  L91():
    missing1 = ldf missing in base;
    r35 = dyn missing1(<sym topic>);
    goto L20(r35);
  L92():
    r33 = dyn base6(<sym topic>);
    goto L20(r33);
  L15(r26):
    st y = r26;
    c3 = `is.symbol`(r26);
    goto L14(c3);
  L16():
    goto L18(NULL);
  L18(r31):
    goto L19();
  L21():
    goto L37();
  L37():
    tryCatch = ldf tryCatch;
    check L146() else D30();
  L82():
    substitute = ldf substitute in base;
    r27 = dyn substitute(<sym package>);
    goto L15(r27);
  L83():
    r25 = dyn base4(<sym package>);
    goto L15(r25);
  L84():
    sym5 = ldf `as.character`;
    base5 = ldf `as.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L85() else L86();
  L93():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L94() else L95();
  D30():
    deopt 149 [];
  L17(r29):
    st package = r29;
    goto L18(r29);
  L22(r37):
    r38 = `!`(r37);
    c7 = `as.logical`(r38);
    if c7 then L97() else L23();
  L85():
    y = ld y;
    check L87() else D5();
  L86():
    r28 = dyn base5(<sym y>);
    goto L17(r28);
  L94():
    package1 = ld package;
    check L96() else D7();
  L95():
    r36 = dyn base7(<sym package>);
    goto L22(r36);
  L146():
    p16 = prom<V +>{
      sym12 = ldf `is.character`;
      base12 = ldf `is.character` in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L3() else L4();
    L0(r84):
      c21 = `as.logical`(r84);
      if c21 then L5() else L1(c21);
    L3():
      topic1 = ld topic;
      topic2 = force? topic1;
      checkMissing(topic2);
      c20 = `is.character`(topic2);
      goto L0(c20);
    L4():
      r83 = dyn base12(<sym topic>);
      goto L0(r83);
    L1(c23):
      return c23;
    L5():
      sym13 = ldf length;
      base13 = ldf length in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L6() else L7();
    L2(c26, r86):
      r88 = `==`(r86, 1);
      c27 = `as.logical`(r88);
      c28 = `&&`(c26, c27);
      goto L1(c28);
    L6():
      topic3 = ld topic;
      topic4 = force? topic3;
      checkMissing(topic4);
      length1 = ldf length in base;
      r87 = dyn length1(topic4);
      goto L2(c21, r87);
    L7():
      r85 = dyn base13(<sym topic>);
      goto L2(c21, r85);
    };
    p17 = prom<V +>{
      r90 = clos inner3708401697;
      return r90;
    };
    r92 = dyn tryCatch[, error](p16, p17);
    check L147() else D31();
  D5():
    deopt 35 [y];
  D7():
    deopt 48 [package1];
  D31():
    deopt 153 [r92];
  L23():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L136() else L137();
  L87():
    y1 = force? y;
    checkMissing(y1);
    as_character = ldf `as.character` in base;
    r30 = dyn as_character(y1);
    check L88() else D6();
  L96():
    package2 = force? package1;
    checkMissing(package2);
    c6 = `==`(package2, NULL);
    goto L22(c6);
  L97():
    sym8 = ldf interactive;
    base8 = ldf interactive in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L98() else L99();
  L147():
    st ischar = r92;
    ischar = ld ischar;
    check L148() else D32();
  D6():
    deopt 38 [r30];
  D32():
    deopt 155 [ischar];
  L24(r40):
    c8 = `as.logical`(r40);
    if c8 then L101() else L25(c8);
  L34(r77):
    r78 = `!`(r77);
    c19 = `as.logical`(r78);
    if c19 then L139() else L35();
  L88():
    goto L17(r30);
  L98():
    interactive = ldf interactive in base;
    r41 = dyn interactive();
    check L100() else D8();
  L99():
    r39 = dyn base8();
    goto L24(r39);
  L136():
    lib_loc5 = ld `lib.loc`;
    check L138() else D26();
  L137():
    r76 = dyn base11(<sym lib.loc>);
    goto L34(r76);
  L148():
    ischar1 = force? ischar;
    checkMissing(ischar1);
    r93 = `!`(ischar1);
    c30 = `as.logical`(r93);
    if c30 then L149() else L38();
  D8():
    deopt 55 [r41];
  D26():
    deopt 125 [lib_loc5];
  L25(c10):
    c14 = `as.logical`(c10);
    if c14 then L104() else L26();
  L35():
    st topic = "help";
    st package = "utils";
    _Library = ld `.Library`;
    check L144() else D29();
  L38():
    goto L45();
  L45():
    index_search = ldf `index.search`;
    check L169() else D41();
  L100():
    goto L24(r41);
  L101():
    help_type5 = ld help_type;
    check L102() else D9();
  L138():
    lib_loc6 = force? lib_loc5;
    checkMissing(lib_loc6);
    c18 = `==`(lib_loc6, NULL);
    goto L34(c18);
  L139():
    library2 = ldf library;
    check L140() else D27();
  L149():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L150() else L151();
  D9():
    deopt 56 [c8, help_type5];
  D27():
    deopt 130 [];
  D29():
    deopt 143 [_Library];
  D41():
    deopt 203 [];
  L26():
    library1 = ldf library;
    check L132() else D24();
  L39(r95):
    st reserved = r95;
    deparse1 = ldf deparse1;
    check L153() else D34();
  L102():
    help_type6 = force? help_type5;
    checkMissing(help_type6);
    r42 = `==`(help_type6, "html");
    c11 = `as.logical`(r42);
    c12 = `&&`(c8, c11);
    goto L25(c12);
  L104():
    __ = ldf `::`;
    check L105() else D10();
  L140():
    p15 = prom<V +>{
      lib_loc7 = ld `lib.loc`;
      lib_loc8 = force? lib_loc7;
      checkMissing(lib_loc8);
      return lib_loc8;
    };
    r80 = dyn library2[`lib.loc`](p15);
    check L141() else D28();
  L144():
    _Library1 = force? _Library;
    checkMissing(_Library1);
    st `lib.loc` = _Library1;
    goto L37();
  L150():
    c31 = ldf c in base;
    r96 = dyn c31("TRUE", "FALSE", "NULL", "Inf", "NaN", "NA", "NA_integer_", "NA_real_", "NA_complex_", "NA_character_");
    check L152() else D33();
  L151():
    r94 = dyn base14("TRUE", "FALSE", "NULL", "Inf", "NaN", "NA", "NA_integer_", "NA_real_", "NA_complex_", "NA_character_");
    goto L39(r94);
  L169():
    p21 = prom<V +>{
      topic5 = ld topic;
      topic6 = force? topic5;
      checkMissing(topic6);
      return topic6;
    };
    p25 = prom<V +>{
      find_package = ldf `find.package`;
      p22 = prom<V +>{
        sym18 = ldf `is.null`;
        base18 = ldf `is.null` in base;
        guard18 = `==`.4(sym18, base18);
        if guard18 then L2() else L3();
      L0(r116):
        c41 = `as.logical`(r116);
        if c41 then L4() else L1();
      L2():
        package9 = ld package;
        package10 = force? package9;
        checkMissing(package10);
        c40 = `==`(package10, NULL);
        goto L0(c40);
      L3():
        r115 = dyn base18(<sym package>);
        goto L0(r115);
      L1():
        package11 = ld package;
        package12 = force? package11;
        checkMissing(package12);
        return package12;
      L4():
        loadedNamespaces = ldf loadedNamespaces;
        r117 = dyn loadedNamespaces();
        return r117;
      };
      p23 = prom<V +>{
        lib_loc9 = ld `lib.loc`;
        lib_loc10 = force? lib_loc9;
        checkMissing(lib_loc10);
        return lib_loc10;
      };
      p24 = prom<V +>{
        verbose1 = ld verbose;
        verbose2 = force? verbose1;
        checkMissing(verbose2);
        return verbose2;
      };
      r121 = dyn find_package[, , verbose](p22, p23, p24);
      return r121;
    };
    r123 = dyn index_search(p21, p25);
    check L170() else D42();
  D10():
    deopt 62 [];
  D24():
    deopt 113 [];
  D28():
    deopt 133 [r80];
  D33():
    deopt 171 [r96];
  D34():
    deopt 174 [];
  D42():
    deopt 206 [r123];
  L105():
    r43 = dyn __("tools", "startDynamicHelp");
    check L106() else D11();
  L132():
    p13 = prom<V +>{
      package7 = ld package;
      package8 = force? package7;
      checkMissing(package8);
      return package8;
    };
    p14 = prom<V +>{
      lib_loc3 = ld `lib.loc`;
      lib_loc4 = force? lib_loc3;
      checkMissing(lib_loc4);
      return lib_loc4;
    };
    r74 = dyn library1[help, `lib.loc`, `character.only`](p13, p14, TRUE);
    check L133() else D25();
  L141():
    popenv;
    return r80;
  L152():
    goto L39(r96);
  L153():
    p18 = prom<V +>{
      sym15 = ldf substitute;
      base15 = ldf substitute in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r98):
      return r98;
    L1():
      substitute1 = ldf substitute in base;
      r99 = dyn substitute1(<sym topic>);
      goto L0(r99);
    L2():
      r97 = dyn base15(<sym topic>);
      goto L0(r97);
    };
    r101 = dyn deparse1(p18);
    check L154() else D35();
  L170():
    st paths = r123;
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L171() else L172();
  D11():
    deopt 65 [r43];
  D25():
    deopt 120 [r74];
  D35():
    deopt 176 [r101];
  L46(r125):
    r127 = `!`(r125);
    c42 = `as.logical`(r127);
    if c42 then L175() else L47(c42);
  L106():
    checkFun.0(r43);
    r44 = r43 as cls;
    r45 = dyn r44(NA_LGL);
    check L107() else D12();
  L133():
    popenv;
    return r74;
  L154():
    st stopic = r101;
    sym16 = ldf `is.name`;
    base16 = ldf `is.name` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L155() else L156();
  L171():
    paths = ld paths;
    check L173() else D43();
  L172():
    r124 = dyn base19(<sym paths>);
    goto L46(r124);
  D12():
    deopt 68 [r45];
  D43():
    deopt 210 [paths];
  L40(r103):
    r107 = `!`(r103);
    c33 = `as.logical`(r107);
    if c33 then L159() else L42(c33);
  L47(c44):
    c52 = `as.logical`(c44);
    if c52 then L180() else L49(c52);
  L107():
    st port = r45;
    port = ld port;
    check L108() else D13();
  L155():
    sym17 = ldf substitute;
    base17 = ldf substitute in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L157() else L158();
  L156():
    r102 = dyn base16(<lang substitute(topic)>);
    goto L40(r102);
  L173():
    paths1 = force? paths;
    checkMissing(paths1);
    length2 = ldf length in base;
    r126 = dyn length2(paths1);
    check L174() else D44();
  L175():
    sym20 = ldf `is.logical`;
    base20 = ldf `is.logical` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L176() else L177();
  D13():
    deopt 70 [port];
  D44():
    deopt 213 [r126];
  L41(r105):
    c32 = `is.symbol`(r105);
    goto L40(c32);
  L42(c35):
    c39 = `as.logical`(c35);
    if c39 then L163() else L43();
  L48(c47, r129):
    c49 = `as.logical`(r129);
    c50 = `&&`(c47, c49);
    goto L47(c50);
  L49(c54):
    c61 = `as.logical`(c54);
    if c61 then L186() else L51(c61);
  L108():
    port1 = force? port;
    checkMissing(port1);
    r46 = `<=`(port1, 0);
    c15 = `as.logical`(r46);
    if c15 then L109() else L27();
  L157():
    substitute2 = ldf substitute in base;
    r106 = dyn substitute2(<sym topic>);
    goto L41(r106);
  L158():
    r104 = dyn base17(<sym topic>);
    goto L41(r104);
  L159():
    _in_ = ldf `%in%`;
    check L160() else D36();
  L174():
    goto L46(r126);
  L176():
    try_all_packages1 = ld `try.all.packages`;
    check L178() else D45();
  L177():
    r128 = dyn base20(<sym try.all.packages>);
    goto L48(c42, r128);
  L180():
    sym21 = ldf `is.na`;
    base21 = ldf `is.na` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L181() else L182();
  D36():
    deopt 185 [c33];
  D45():
    deopt 216 [c42, try_all_packages1];
  L27():
    _Platform = ld `.Platform`;
    check L114() else D16();
  L43():
    goto L44();
  L44():
    stopic2 = ld stopic;
    check L167() else D40();
  L50(c57, r131):
    r133 = `!`(r131);
    c58 = `as.logical`(r133);
    c59 = `&&`(c57, c58);
    goto L49(c59);
  L51(c63):
    c67 = `as.logical`(c63);
    if c67 then L189() else L52(c67);
  L109():
    library = ldf library;
    check L110() else D14();
  L160():
    p19 = prom<V +>{
      stopic = ld stopic;
      stopic1 = force? stopic;
      checkMissing(stopic1);
      return stopic1;
    };
    p20 = prom<V +>{
      reserved = ld reserved;
      reserved1 = force? reserved;
      checkMissing(reserved1);
      return reserved1;
    };
    r110 = dyn _in_(p19, p20);
    check L161() else D37();
  L163():
    stop = ldf stop;
    check L164() else D38();
  L178():
    try_all_packages2 = force? try_all_packages1;
    checkMissing(try_all_packages2);
    c48 = `is.logical`(try_all_packages2);
    goto L48(c42, c48);
  L181():
    try_all_packages3 = ld `try.all.packages`;
    check L183() else D46();
  L182():
    r130 = dyn base21(<sym try.all.packages>);
    goto L50(c52, r130);
  L186():
    try_all_packages5 = ld `try.all.packages`;
    check L187() else D48();
  D14():
    deopt 75 [];
  D16():
    deopt 86 [_Platform];
  D37():
    deopt 188 [c33, r110];
  D38():
    deopt 192 [];
  D40():
    deopt 197 [stopic2];
  D46():
    deopt 222 [c52, try_all_packages3];
  D48():
    deopt 228 [c61, try_all_packages5];
  L52(c69):
    c77 = `as.logical`(c69);
    if c77 then L194() else L54(c77);
  L110():
    p6 = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    p7 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r49 = dyn library[help, `lib.loc`, `character.only`](p6, p7, TRUE);
    check L111() else D15();
  L114():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c16 = `is.object`(_Platform1);
    if c16 then L116() else L117(_Platform1);
  L161():
    r111 = `!`(r110);
    c36 = `as.logical`(r111);
    c37 = `&&`(c33, c36);
    goto L42(c37);
  L164():
    r112 = dyn stop("'topic' should be a name, length-one character vector or reserved word");
    check L165() else D39();
  L167():
    stopic3 = force? stopic2;
    checkMissing(stopic3);
    st topic = stopic3;
    goto L45();
  L183():
    try_all_packages4 = force? try_all_packages3;
    checkMissing(try_all_packages4);
    is_na = ldf `is.na` in base;
    r132 = dyn is_na(try_all_packages4);
    check L184() else D47();
  L187():
    try_all_packages6 = force? try_all_packages5;
    checkMissing(try_all_packages6);
    c64 = `as.logical`(try_all_packages6);
    c65 = `&&`(c61, c64);
    goto L51(c65);
  L189():
    sym22 = ldf `is.null`;
    base22 = ldf `is.null` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L190() else L191();
  D15():
    deopt 82 [r49];
  D39():
    deopt 194 [r112];
  D47():
    deopt 225 [c52, r132];
  L53(c72, r135):
    c74 = `as.logical`(r135);
    c75 = `&&`(c72, c74);
    goto L52(c75);
  L54(c79):
    st `try.all.packages` = c79;
    try_all_packages7 = ld `try.all.packages`;
    check L199() else D51();
  L111():
    popenv;
    return r49;
  L115(dx1):
    r53 = `==`(dx1, "AQUA");
    c17 = `as.logical`(r53);
    if c17 then L119() else L29();
  L116():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L118() else L117(dr);
  L117(_Platform3):
    r52 = `$`(_Platform3, <sym GUI>);
    goto L115(r52);
  L165():
    goto L44();
  L184():
    goto L50(c52, r132);
  L190():
    package13 = ld package;
    check L192() else D49();
  L191():
    r134 = dyn base22(<sym package>);
    goto L53(c67, r134);
  L194():
    sym23 = ldf `is.null`;
    base23 = ldf `is.null` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L195() else L196();
  D49():
    deopt 232 [c67, package13];
  D51():
    deopt 242 [try_all_packages7];
  L29():
    getOption3 = ldf getOption;
    check L123() else D19();
  L30(r59):
    st browser = r59;
    browseURL = ldf browseURL;
    check L125() else D21();
  L55(c82, r137):
    c84 = `as.logical`(r137);
    c85 = `&&`(c82, c84);
    goto L54(c85);
  L118():
    dx = getTryDispatchBuiltinValue(dr);
    goto L115(dx);
  L119():
    get = ldf get;
    check L120() else D17();
  L192():
    package14 = force? package13;
    checkMissing(package14);
    c73 = `==`(package14, NULL);
    goto L53(c67, c73);
  L195():
    lib_loc11 = ld `lib.loc`;
    check L197() else D50();
  L196():
    r136 = dyn base23(<sym lib.loc>);
    goto L55(c77, r136);
  L199():
    try_all_packages8 = force? try_all_packages7;
    checkMissing(try_all_packages8);
    c87 = `as.logical`(try_all_packages8);
    if c87 then L200() else L56();
  D17():
    deopt 92 [];
  D19():
    deopt 98 [];
  D21():
    deopt 103 [];
  D50():
    deopt 237 [c77, lib_loc11];
  L56():
    goto L65();
  L65():
    structure = ldf structure;
    check L234() else D69();
  L120():
    p8 = prom<V +>{
      sym9 = ldf `as.environment`;
      base9 = ldf `as.environment` in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r55):
      return r55;
    L1():
      as_environment = ldf `as.environment` in base;
      r56 = dyn as_environment("tools:RGUI");
      goto L0(r56);
    L2():
      r54 = dyn base9("tools:RGUI");
      goto L0(r54);
    };
    r58 = dyn get[, envir]("aqua.browser", p8);
    check L121() else D18();
  L123():
    r60 = dyn getOption3("browser");
    check L124() else D20();
  L125():
    p11 = prom<V +>{
      paste0 = ldf paste0;
      p9 = prom<V +>{
        port2 = ld port;
        port3 = force? port2;
        checkMissing(port3);
        return port3;
      };
      p10 = prom<V +>{
        package5 = ld package;
        package6 = force? package5;
        checkMissing(package6);
        return package6;
      };
      r63 = dyn paste0("http://127.0.0.1:", p9, "/library/", p10, "/html/00Index.html");
      return r63;
    };
    p12 = prom<V +>{
      browser = ld browser;
      browser1 = force? browser;
      checkMissing(browser1);
      return browser1;
    };
    r66 = dyn browseURL(p11, p12);
    check L126() else D22();
  L197():
    lib_loc12 = force? lib_loc11;
    checkMissing(lib_loc12);
    c83 = `==`(lib_loc12, NULL);
    goto L55(c77, c83);
  L200():
    _libPaths = ldf `.libPaths`;
    check L201() else D52();
  D18():
    deopt 96 [r58];
  D20():
    deopt 100 [r60];
  D22():
    deopt 106 [r66];
  D52():
    deopt 245 [];
  D69():
    deopt 300 [];
  L121():
    goto L30(r58);
  L124():
    goto L30(r60);
  L126():
    sym10 = ldf invisible;
    base10 = ldf invisible in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L127() else L128();
  L201():
    r138 = dyn _libPaths();
    check L202() else D53();
  L234():
    p32 = prom<V +>{
      unique = ldf unique;
      p31 = prom<V +>{
        paths13 = ld paths;
        paths14 = force? paths13;
        checkMissing(paths14);
        return paths14;
      };
      r163 = dyn unique(p31);
      return r163;
    };
    p33 = prom<V +>{
      match_call = ldf `match.call`;
      r165 = dyn match_call();
      return r165;
    };
    p34 = prom<V +>{
      topic9 = ld topic;
      topic10 = force? topic9;
      checkMissing(topic10);
      return topic10;
    };
    p35 = prom<V +>{
      try_all_packages9 = ld `try.all.packages`;
      try_all_packages10 = force? try_all_packages9;
      checkMissing(try_all_packages10);
      return try_all_packages10;
    };
    p36 = prom<V +>{
      help_type7 = ld help_type;
      help_type8 = force? help_type7;
      checkMissing(help_type8);
      return help_type8;
    };
    r170 = dyn structure[, call, topic, tried_all_packages, type, class](p32, p33, p34, p35, p36, "help_files_with_topic");
    check L235() else D70();
  D53():
    deopt 246 [r138];
  D70():
    deopt 312 [r170];
  L31(r68):
    popenv;
    return r68;
  L127():
    invisible = ldf invisible in base;
    r69 = dyn invisible();
    check L129() else D23();
  L128():
    r67 = dyn base10();
    goto L31(r67);
  L202():
    s = toForSeq(r138);
    l = length(s);
    i = 0;
    goto L57(i);
  L235():
    popenv;
    return r170;
  D23():
    deopt 110 [r69];
  L57(i1):
    i2 = `+`.1(i1, 1);
    c88 = `<`.1(l, i2);
    if c88 then L203() else L62();
  L129():
    goto L31(r69);
  L62():
    x = `[[`(s, i2, NULL, TRUE);
    st lib = x;
    _packages = ldf `.packages`;
    check L204() else D54();
  L203():
    paths4 = ld paths;
    check L225() else D66();
  D54():
    deopt 248 [i2];
  D66():
    deopt 287 [paths4];
  L204():
    p26 = prom<V +>{
      lib = ld lib;
      lib1 = force? lib;
      checkMissing(lib1);
      return lib1;
    };
    r140 = dyn _packages(TRUE, p26);
    check L205() else D55();
  L225():
    paths5 = force? paths4;
    checkMissing(paths5);
    c91 = `is.object`(paths5);
    if c91 then L226() else L227(paths5);
  D55():
    deopt 251 [i2, r140];
  L63(dx5):
    st paths = dx5;
    goto L65();
  L205():
    st packages = r140;
    packages = ld packages;
    check L206() else D56();
  L226():
    dr4 = tryDispatchBuiltin.1("[", paths5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L228() else L227(dr4);
  L227(paths7):
    sym27 = ldf nzchar;
    base27 = ldf nzchar in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L229() else L230();
  D56():
    deopt 253 [i2, packages];
  L64(paths10, r159):
    __2 = ldf `[` in base;
    r161 = dyn __2(paths10, r159);
    goto L63(r161);
  L206():
    packages1 = force? packages;
    checkMissing(packages1);
    c89 = `is.object`(packages1);
    if c89 then L207() else L208(i2, packages1);
  L228():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L63(dx4);
  L229():
    paths11 = ld paths;
    check L231() else D67();
  L230():
    r158 = dyn base27(<sym paths>);
    goto L64(paths7, r158);
  D67():
    deopt 291 [paths7, paths11];
  L58(i8, dx3):
    st packages = dx3;
    sym26 = ldf c;
    base26 = ldf c in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L219() else L220();
  L207():
    dr2 = tryDispatchBuiltin.1("[", packages1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L209() else L208(i2, dr2);
  L208(i6, packages3):
    sym24 = ldf `is.na`;
    base24 = ldf `is.na` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L210() else L211();
  L231():
    paths12 = force? paths11;
    checkMissing(paths12);
    nzchar = ldf nzchar in base;
    r160 = dyn nzchar(paths12);
    check L232() else D68();
  D68():
    deopt 294 [paths7, r160];
  L59(i11, packages6, r142):
    __1 = ldf `[` in base;
    r148 = dyn __1(packages6, r142);
    goto L58(i11, r148);
  L61(i17, r150):
    st paths = r150;
    goto L57(i17);
  L209():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L58(i2, dx2);
  L210():
    sym25 = ldf match;
    base25 = ldf match in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L212() else L213();
  L211():
    r141 = dyn base24(<lang match(packages, .packages())>);
    goto L59(i6, packages3, r141);
  L219():
    paths2 = ld paths;
    check L221() else D62();
  L220():
    r149 = dyn base26(<sym paths>, <lang index.search(topic, file.path(lib, packages))>);
    goto L61(i8, r149);
  L232():
    goto L64(paths7, r160);
  D62():
    deopt 274 [i8, paths2];
  L60(i14, packages9, r144):
    is_na1 = ldf `is.na` in base;
    r147 = dyn is_na1(r144);
    check L218() else D61();
  L212():
    packages10 = ld packages;
    check L214() else D57();
  L213():
    r143 = dyn base25(<sym packages>, <lang .packages()>);
    goto L60(i6, packages3, r143);
  L221():
    paths3 = force? paths2;
    checkMissing(paths3);
    index_search1 = ldf `index.search`;
    check L222() else D63();
  D57():
    deopt 259 [i6, packages3, packages10];
  D61():
    deopt 269 [i14, packages9, r147];
  D63():
    deopt 277 [i8];
  L214():
    packages11 = force? packages10;
    checkMissing(packages11);
    _packages1 = ldf `.packages`;
    check L215() else D58();
  L218():
    goto L59(i14, packages9, r147);
  L222():
    p27 = prom<V +>{
      topic7 = ld topic;
      topic8 = force? topic7;
      checkMissing(topic8);
      return topic8;
    };
    p30 = prom<V +>{
      file_path = ldf `file.path`;
      p28 = prom<V +>{
        lib2 = ld lib;
        lib3 = force? lib2;
        checkMissing(lib3);
        return lib3;
      };
      p29 = prom<V +>{
        packages12 = ld packages;
        packages13 = force? packages12;
        checkMissing(packages13);
        return packages13;
      };
      r154 = dyn file_path(p28, p29);
      return r154;
    };
    r156 = dyn index_search1(p27, p30);
    check L223() else D64();
  D58():
    deopt 262 [i6, packages3];
  D64():
    deopt 280 [i8, r156];
  L215():
    r145 = dyn _packages1();
    check L216() else D59();
  L223():
    c90 = ldf c in base;
    r157 = dyn c90(paths3, r156);
    check L224() else D65();
  D59():
    deopt 263 [i6, packages3, r145];
  D65():
    deopt 282 [i8, r157];
  L216():
    match = ldf match in base;
    r146 = dyn match(packages11, r145, NA_INT, NULL);
    check L217() else D60();
  L224():
    goto L61(i8, r157);
  D60():
    deopt 267 [i6, packages3, r146];
  L217():
    goto L60(i6, packages3, r146);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:* |
    mkenv;
    st e = e;
    popenv;
    return FALSE;
  }
}