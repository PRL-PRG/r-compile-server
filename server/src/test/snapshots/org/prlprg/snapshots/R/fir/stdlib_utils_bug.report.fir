fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1822848463;
    st `bug.report` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1822848463(subject, address, file, package, `lib.loc`, `...`) {
  (reg subject:*, reg address:*, reg file:*, reg package:*, reg lib_loc:*, reg ddd:dots) -+> V { var subject:*, reg subject_isMissing:L, reg subject_orDefault:*, var address:*, var file:*, reg file_isMissing:L, reg file_orDefault:*, var package:*, reg package_isMissing:L, reg package_orDefault:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var `...`:dots?, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg package1:*, reg package2:V, reg c:V, reg c1:L, reg baseR:cls, reg r3:V, reg packageDescription:cls, reg package3:*, reg package4:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg DESC:*, reg DESC1:V, reg inherits:cls, reg r11:V, reg r12:V, reg c2:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg package5:*, reg package6:V, reg p2:p(V +), reg r14:V, reg p3:p(V +), reg r16:V, reg p4:p(V +), reg r18:V, reg paste0:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg c3:cls, reg r22:V, reg p5:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg DESC2:*, reg DESC3:V, reg c4:L, reg DESC5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r26:V, reg DESC6:*, reg DESC7:V, reg c5:L, reg DESC9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r27:V, reg DESC10:*, reg DESC11:V, reg c6:L, reg DESC13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r28:V, reg DESC14:*, reg DESC15:V, reg c7:L, reg DESC17:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r29:V, reg c8:cls, reg r30:V, reg p6:p(V +), reg r32:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg info:*, reg info1:V, reg bug_report_info:cls, reg r35:V, reg c9:cls, reg r36:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg DESC18:*, reg DESC19:V, reg c10:L, reg DESC21:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r39:V, reg identical:cls, reg r40:V, reg c11:L, reg baseR1:cls, reg r41:V, reg r44:cls, reg DESC22:*, reg DESC23:V, reg c12:L, reg DESC25:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r45:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r46:V, reg r47:V, reg BR:*, reg BR1:V, reg c13:V, reg r48:V, reg c14:L, reg c16:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r49:V, reg c19:L, reg r50:V, reg BR2:*, reg BR3:V, reg nzchar:cls, reg r51:V, reg c20:L, reg c21:V, reg c23:L, reg trimws:cls, reg BR4:*, reg BR5:V, reg p7:p(V +), reg r53:V, reg grepl:cls, reg BR6:*, reg BR7:V, reg p8:p(V +), reg r55:V, reg c24:L, reg writeLines:cls, reg info2:*, reg info3:V, reg p9:p(V +), reg r57:V, reg cat:cls, reg DESC26:*, reg DESC27:V, reg c25:L, reg DESC29:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r58:V, reg p10:p(V +), reg r60:V, reg flush_console:cls, reg r61:V, reg Sys_sleep:cls, reg r62:V, reg browseURL:cls, reg BR8:*, reg BR9:V, reg p11:p(V +), reg r64:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r65:V, reg r66:V, reg invisible:cls, reg r67:V, reg cat1:cls, reg BR10:*, reg BR11:V, reg p12:p(V +), reg r71:V, reg findEmail2:cls, reg BR12:*, reg BR13:V, reg p13:p(V +), reg r73:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r74:V, reg r75:V, reg em:*, reg em1:V, reg is_na:cls, reg r76:V, reg r77:V, reg c26:L, reg cat2:cls, reg r78:V, reg em2:*, reg em3:V, reg cat3:cls, reg r79:V, reg flush_console1:cls, reg r80:V, reg Sys_sleep1:cls, reg r81:V, reg DESC30:*, reg DESC31:V, reg c27:L, reg DESC33:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r83:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r84:V, reg r85:V, reg CT:*, reg CT1:V, reg c28:V, reg r86:V, reg c29:L, reg c31:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r87:V, reg c34:L, reg r88:V, reg CT2:*, reg CT3:V, reg nzchar1:cls, reg r89:V, reg c35:L, reg c36:V, reg c38:L, reg cat4:cls, reg CT4:*, reg CT5:V, reg p14:p(V +), reg r91:V, reg findEmail3:cls, reg CT6:*, reg CT7:V, reg p15:p(V +), reg r93:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r94:V, reg r95:V, reg em5:*, reg em6:V, reg is_na1:cls, reg r96:V, reg r97:V, reg c39:L, reg cat5:cls, reg r98:V, reg em7:*, reg em8:V, reg cat6:cls, reg r99:V, reg flush_console2:cls, reg r100:V, reg Sys_sleep2:cls, reg r101:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r103:V, reg r104:V, reg missing:cls, reg r105:V, reg c40:L, reg r106:cls, reg findEmail4:cls, reg DESC34:*, reg DESC35:V, reg c41:L, reg DESC37:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r107:V, reg p16:p(V +), reg r109:V, reg create_post:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r111:V, reg r112:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r113:V, reg r114:V, reg rep_int:cls, reg r115:V, reg c42:cls, reg r116:V, reg p17:p(V +), reg subject1:*, reg subject2:V, reg p18:p(V +), reg address1:*, reg address2:V, reg p19:p(V +), reg file1:*, reg file2:V, reg p20:p(V +), reg info4:*, reg info5:V, reg p21:p(V +), reg ddd1:dots?, reg r122:V |
    mkenv;
    subject_isMissing = missing.0(subject);
    if subject_isMissing then L0("") else L0(subject);
  L0(subject_orDefault):
    st subject = subject_orDefault;
    st address = address;
    file_isMissing = missing.0(file);
    if file_isMissing then L1("R.bug.report") else L1(file);
  L1(file_orDefault):
    st file = file_orDefault;
    package_isMissing = missing.0(package);
    if package_isMissing then L2(NULL) else L2(package);
  L2(package_orDefault):
    st package = package_orDefault;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L3(NULL) else L3(lib_loc);
  L3(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    st `...` = ddd;
    r = clos inner2708337952;
    st baseR = r;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L36() else L37();
  L4(r2):
    c1 = `as.logical`(r2);
    if c1 then L39() else L5();
  L36():
    package1 = ld package;
    check L38() else D0();
  L37():
    r1 = dyn base(<sym package>);
    goto L4(r1);
  D0():
    deopt 4 [package1];
  L5():
    packageDescription = ldf packageDescription;
    check L44() else D3();
  L38():
    package2 = force? package1;
    checkMissing(package2);
    c = `==`(package2, NULL);
    goto L4(c);
  L39():
    baseR = ldf baseR;
    check L40() else D1();
  D1():
    deopt 8 [];
  D3():
    deopt 14 [];
  L40():
    r3 = dyn baseR();
    check L41() else D2();
  L44():
    p = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    p1 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r8 = dyn packageDescription(p, p1);
    check L45() else D4();
  D2():
    deopt 9 [r3];
  D4():
    deopt 17 [r8];
  L41():
    popenv;
    return r3;
  L45():
    st DESC = r8;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L46() else L47();
  L7(r10):
    r12 = `!`(r10);
    c2 = `as.logical`(r12);
    if c2 then L50() else L8();
  L46():
    DESC = ld DESC;
    check L48() else D5();
  L47():
    r9 = dyn base1(<sym DESC>, "packageDescription");
    goto L7(r9);
  D5():
    deopt 21 [DESC];
  L8():
    goto L9();
  L9():
    paste0 = ldf paste0;
    check L54() else D9();
  L48():
    DESC1 = force? DESC;
    checkMissing(DESC1);
    inherits = ldf inherits in base;
    r11 = dyn inherits(DESC1, "packageDescription", FALSE);
    check L49() else D6();
  L50():
    stop = ldf stop;
    check L51() else D7();
  D6():
    deopt 26 [r11];
  D7():
    deopt 29 [];
  D9():
    deopt 37 [];
  L49():
    goto L7(r11);
  L51():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        sQuote = ldf sQuote;
        p2 = prom<V +>{
          package5 = ld package;
          package6 = force? package5;
          checkMissing(package6);
          return package6;
        };
        r14 = dyn sQuote(p2);
        return r14;
      };
      r16 = dyn gettextf("Package %s: DESCRIPTION file not found", p3);
      return r16;
    };
    r18 = dyn stop[, domain](p4, NA_LGL);
    check L52() else D8();
  L54():
    p5 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      c3 = ldf c in base;
      r22 = dyn c3("Package", " Version", " Maintainer", " Built");
      goto L0(r22);
    L2():
      r20 = dyn base2("Package", " Version", " Maintainer", " Built");
      goto L0(r20);
    };
    p6 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r25):
      return r25;
    L1():
      DESC2 = ld DESC;
      DESC3 = force? DESC2;
      checkMissing(DESC3);
      c4 = `is.object`(DESC3);
      if c4 then L4() else L5(DESC3);
    L2():
      r24 = dyn base3(<lang `$`(DESC, Package)>, <lang `$`(DESC, Version)>, <lang `$`(DESC, Maintainer)>, <lang `$`(DESC, Built)>);
      goto L0(r24);
    L3(dx1):
      DESC6 = ld DESC;
      DESC7 = force? DESC6;
      checkMissing(DESC7);
      c5 = `is.object`(DESC7);
      if c5 then L8() else L9(DESC7);
    L4():
      dr = tryDispatchBuiltin.1("$", DESC3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(DESC5):
      r26 = `$`(DESC5, <sym Package>);
      goto L3(r26);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L3(dx);
    L7(dx3):
      DESC10 = ld DESC;
      DESC11 = force? DESC10;
      checkMissing(DESC11);
      c6 = `is.object`(DESC11);
      if c6 then L12() else L13(DESC11);
    L8():
      dr2 = tryDispatchBuiltin.1("$", DESC7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L10() else L9(dr2);
    L9(DESC9):
      r27 = `$`(DESC9, <sym Version>);
      goto L7(r27);
    L10():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L7(dx2);
    L11(dx5):
      DESC14 = ld DESC;
      DESC15 = force? DESC14;
      checkMissing(DESC15);
      c7 = `is.object`(DESC15);
      if c7 then L16() else L17(DESC15);
    L12():
      dr4 = tryDispatchBuiltin.1("$", DESC11);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L14() else L13(dr4);
    L13(DESC13):
      r28 = `$`(DESC13, <sym Maintainer>);
      goto L11(r28);
    L14():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L11(dx4);
    L15(dx7):
      c8 = ldf c in base;
      r30 = dyn c8(dx1, dx3, dx5, dx7);
      goto L0(r30);
    L16():
      dr6 = tryDispatchBuiltin.1("$", DESC15);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L18() else L17(dr6);
    L17(DESC17):
      r29 = `$`(DESC17, <sym Built>);
      goto L15(r29);
    L18():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L15(dx6);
    };
    r32 = dyn paste0(p5, ": ", p6);
    check L55() else D10();
  D8():
    deopt 33 [r18];
  D10():
    deopt 41 [r32];
  L52():
    goto L9();
  L55():
    st info = r32;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L10(r34):
    st info = r34;
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L62() else L63();
  L56():
    info = ld info;
    check L58() else D11();
  L57():
    r33 = dyn base4(<sym info>, "", <lang bug.report.info()>);
    goto L10(r33);
  D11():
    deopt 45 [info];
  L11(r38):
    c11 = `as.logical`(r38);
    if c11 then L70() else L12();
  L58():
    info1 = force? info;
    checkMissing(info1);
    bug_report_info = ldf `bug.report.info`;
    check L59() else D12();
  L62():
    DESC18 = ld DESC;
    check L64() else D15();
  L63():
    r37 = dyn base5(<lang `$`(DESC, Priority)>, "base");
    goto L11(r37);
  D12():
    deopt 49 [];
  D15():
    deopt 56 [DESC18];
  L12():
    r44 = clos inner2501545716;
    st findEmail2 = r44;
    DESC22 = ld DESC;
    check L75() else D19();
  L59():
    r35 = dyn bug_report_info();
    check L60() else D13();
  L64():
    DESC19 = force? DESC18;
    checkMissing(DESC19);
    c10 = `is.object`(DESC19);
    if c10 then L66() else L67(DESC19);
  L70():
    baseR1 = ldf baseR;
    check L71() else D17();
  D13():
    deopt 50 [r35];
  D17():
    deopt 70 [];
  D19():
    deopt 78 [DESC22];
  L60():
    c9 = ldf c in base;
    r36 = dyn c9(info1, "", r35);
    check L61() else D14();
  L65(dx9):
    identical = ldf identical in base;
    r40 = dyn identical(dx9, "base", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L69() else D16();
  L66():
    dr8 = tryDispatchBuiltin.1("$", DESC19);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L68() else L67(dr8);
  L67(DESC21):
    r39 = `$`(DESC21, <sym Priority>);
    goto L65(r39);
  L71():
    r41 = dyn baseR1();
    check L72() else D18();
  L75():
    DESC23 = force? DESC22;
    checkMissing(DESC23);
    c12 = `is.object`(DESC23);
    if c12 then L77() else L78(DESC23);
  D14():
    deopt 52 [r36];
  D16():
    deopt 68 [r40];
  D18():
    deopt 71 [r41];
  L61():
    goto L10(r36);
  L68():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L65(dx8);
  L69():
    goto L11(r40);
  L72():
    popenv;
    return r41;
  L76(dx11):
    st BR = dx11;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L80() else L81();
  L77():
    dr10 = tryDispatchBuiltin.1("$", DESC23);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L79() else L78(dr10);
  L78(DESC25):
    r45 = `$`(DESC25, <sym BugReports>);
    goto L76(r45);
  L14(r47):
    r48 = `!`(r47);
    c14 = `as.logical`(r48);
    if c14 then L83() else L15(c14);
  L79():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L76(dx10);
  L80():
    BR = ld BR;
    check L82() else D20();
  L81():
    r46 = dyn base6(<sym BR>);
    goto L14(r46);
  D20():
    deopt 83 [BR];
  L15(c16):
    c23 = `as.logical`(c16);
    if c23 then L89() else L17();
  L82():
    BR1 = force? BR;
    checkMissing(BR1);
    c13 = `==`(BR1, NULL);
    goto L14(c13);
  L83():
    sym7 = ldf nzchar;
    base7 = ldf nzchar in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L84() else L85();
  L16(c19, r50):
    c20 = `as.logical`(r50);
    c21 = `&&`(c19, c20);
    goto L15(c21);
  L17():
    goto L24();
  L24():
    DESC30 = ld DESC;
    check L130() else D53();
  L84():
    BR2 = ld BR;
    check L86() else D21();
  L85():
    r49 = dyn base7(<sym BR>);
    goto L16(c14, r49);
  L89():
    trimws = ldf trimws;
    check L90() else D23();
  D21():
    deopt 89 [c14, BR2];
  D23():
    deopt 95 [];
  D53():
    deopt 175 [DESC30];
  L86():
    BR3 = force? BR2;
    checkMissing(BR3);
    nzchar = ldf nzchar in base;
    r51 = dyn nzchar(BR3);
    check L87() else D22();
  L90():
    p7 = prom<V +>{
      BR4 = ld BR;
      BR5 = force? BR4;
      checkMissing(BR5);
      return BR5;
    };
    r53 = dyn trimws(p7);
    check L91() else D24();
  L130():
    DESC31 = force? DESC30;
    checkMissing(DESC31);
    c27 = `is.object`(DESC31);
    if c27 then L132() else L133(DESC31);
  D22():
    deopt 92 [c14, r51];
  D24():
    deopt 97 [r53];
  L87():
    goto L16(c14, r51);
  L91():
    st BR = r53;
    grepl = ldf grepl;
    check L92() else D25();
  L131(dx15):
    st CT = dx15;
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L135() else L136();
  L132():
    dr14 = tryDispatchBuiltin.1("$", DESC31);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L134() else L133(dr14);
  L133(DESC33):
    r83 = `$`(DESC33, <sym Contact>);
    goto L131(r83);
  D25():
    deopt 100 [];
  L25(r85):
    r86 = `!`(r85);
    c29 = `as.logical`(r86);
    if c29 then L138() else L26(c29);
  L92():
    p8 = prom<V +>{
      BR6 = ld BR;
      BR7 = force? BR6;
      checkMissing(BR7);
      return BR7;
    };
    r55 = dyn grepl("^https?://", p8);
    check L93() else D26();
  L134():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L131(dx14);
  L135():
    CT = ld CT;
    check L137() else D54();
  L136():
    r84 = dyn base10(<sym CT>);
    goto L25(r84);
  D26():
    deopt 103 [r55];
  D54():
    deopt 180 [CT];
  L26(c31):
    c38 = `as.logical`(c31);
    if c38 then L144() else L28();
  L93():
    c24 = `as.logical`(r55);
    if c24 then L94() else L18();
  L137():
    CT1 = force? CT;
    checkMissing(CT1);
    c28 = `==`(CT1, NULL);
    goto L25(c28);
  L138():
    sym11 = ldf nzchar;
    base11 = ldf nzchar in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L139() else L140();
  L18():
    cat1 = ldf cat;
    check L110() else D38();
  L27(c34, r88):
    c35 = `as.logical`(r88);
    c36 = `&&`(c34, c35);
    goto L26(c36);
  L28():
    goto L32();
  L32():
    sym13 = ldf missing;
    base13 = ldf missing in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L165() else L166();
  L94():
    writeLines = ldf writeLines;
    check L95() else D27();
  L139():
    CT2 = ld CT;
    check L141() else D55();
  L140():
    r87 = dyn base11(<sym CT>);
    goto L27(c29, r87);
  L144():
    cat4 = ldf cat;
    check L145() else D57();
  D27():
    deopt 105 [];
  D38():
    deopt 135 [];
  D55():
    deopt 186 [c29, CT2];
  D57():
    deopt 192 [];
  L33(r104):
    c40 = `as.logical`(r104);
    if c40 then L167() else L34();
  L95():
    p9 = prom<V +>{
      info2 = ld info;
      info3 = force? info2;
      checkMissing(info3);
      return info3;
    };
    r57 = dyn writeLines(p9);
    check L96() else D28();
  L110():
    p12 = prom<V +>{
      BR10 = ld BR;
      BR11 = force? BR10;
      checkMissing(BR11);
      return BR11;
    };
    r71 = dyn cat1[, , , , sep]("This package has a BugReports field which is not the URL of a web page:\n\n", "  BugReports: ", p12, "\n\n", "");
    check L111() else D39();
  L141():
    CT3 = force? CT2;
    checkMissing(CT3);
    nzchar1 = ldf nzchar in base;
    r89 = dyn nzchar1(CT3);
    check L142() else D56();
  L145():
    p14 = prom<V +>{
      CT4 = ld CT;
      CT5 = force? CT4;
      checkMissing(CT5);
      return CT5;
    };
    r91 = dyn cat4[, , , , sep]("This package has a Contact field:\n\n", "  Contact: ", p14, "\n\n", "");
    check L146() else D58();
  L165():
    missing = ldf missing in base;
    r105 = dyn missing(<sym address>);
    goto L33(r105);
  L166():
    r103 = dyn base13(<sym address>);
    goto L33(r103);
  D28():
    deopt 107 [r57];
  D39():
    deopt 142 [r71];
  D56():
    deopt 189 [c29, r89];
  D58():
    deopt 199 [r91];
  L34():
    goto L35();
  L35():
    create_post = ldf `create.post`;
    check L171() else D74();
  L96():
    cat = ldf cat;
    check L97() else D29();
  L111():
    findEmail2 = ldf findEmail2;
    check L112() else D40();
  L142():
    goto L27(c29, r89);
  L146():
    findEmail3 = ldf findEmail2;
    check L147() else D59();
  L167():
    r106 = clos inner2501545716;
    st findEmail = r106;
    findEmail4 = ldf findEmail;
    check L168() else D72();
  D29():
    deopt 109 [];
  D40():
    deopt 144 [];
  D59():
    deopt 201 [];
  D72():
    deopt 239 [];
  D74():
    deopt 246 [];
  L97():
    p10 = prom<V +>{
      DESC26 = ld DESC;
      DESC27 = force? DESC26;
      checkMissing(DESC27);
      c25 = `is.object`(DESC27);
      if c25 then L1() else L2(DESC27);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("$", DESC27);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(DESC29):
      r58 = `$`(DESC29, <sym Maintainer>);
      goto L0(r58);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r60 = dyn cat[, , , , , sep]("\nThis package has a bug submission web page, which we will now attempt\n", "to open.  The information above may be useful in your report.\n", "If the web page does not work, you should send email to the maintainer,\n", p10, ".\n", "");
    check L98() else D30();
  L112():
    p13 = prom<V +>{
      BR12 = ld BR;
      BR13 = force? BR12;
      checkMissing(BR13);
      return BR13;
    };
    r73 = dyn findEmail2(p13);
    check L113() else D41();
  L147():
    p15 = prom<V +>{
      CT6 = ld CT;
      CT7 = force? CT6;
      checkMissing(CT7);
      return CT7;
    };
    r93 = dyn findEmail3(p15);
    check L148() else D60();
  L168():
    p16 = prom<V +>{
      DESC34 = ld DESC;
      DESC35 = force? DESC34;
      checkMissing(DESC35);
      c41 = `is.object`(DESC35);
      if c41 then L1() else L2(DESC35);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("$", DESC35);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(DESC37):
      r107 = `$`(DESC37, <sym Maintainer>);
      goto L0(r107);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r109 = dyn findEmail4(p16);
    check L169() else D73();
  L171():
    p17 = prom<V +>{
      sym14 = ldf c;
      base14 = ldf c in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L2() else L3();
    L0(r112):
      return r112;
    L2():
      sym15 = ldf `rep.int`;
      base15 = ldf `rep.int` in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L4() else L5();
    L3():
      r111 = dyn base14("", "<<insert bug report here>>", <lang rep.int("", 3.0)>);
      goto L0(r111);
    L1(r114):
      c42 = ldf c in base;
      r116 = dyn c42("", "<<insert bug report here>>", r114);
      goto L0(r116);
    L4():
      rep_int = ldf `rep.int` in base;
      r115 = dyn rep_int("", 3.0);
      goto L1(r115);
    L5():
      r113 = dyn base15("", 3.0);
      goto L1(r113);
    };
    p18 = prom<V +>{
      subject1 = ld subject;
      subject2 = force? subject1;
      checkMissing(subject2);
      return subject2;
    };
    p19 = prom<V +>{
      address1 = ld address;
      address2 = force? address1;
      checkMissing(address2);
      return address2;
    };
    p20 = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    p21 = prom<V +>{
      info4 = ld info;
      info5 = force? info4;
      checkMissing(info5);
      return info5;
    };
    ddd1 = ld `...`;
    r122 = dyn create_post[instructions, description, subject, address, filename, info, `...`](p17, "bug report", p18, p19, p20, p21, ddd1);
    check L172() else D75();
  D30():
    deopt 117 [r60];
  D41():
    deopt 146 [r73];
  D60():
    deopt 203 [r93];
  D73():
    deopt 241 [r109];
  D75():
    deopt 260 [r122];
  L98():
    flush_console = ldf `flush.console`;
    check L99() else D31();
  L113():
    st em = r73;
    sym9 = ldf `is.na`;
    base9 = ldf `is.na` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L114() else L115();
  L148():
    st em = r93;
    sym12 = ldf `is.na`;
    base12 = ldf `is.na` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L149() else L150();
  L169():
    st address = r109;
    goto L35();
  L172():
    popenv;
    return r122;
  D31():
    deopt 119 [];
  L21(r75):
    r77 = `!`(r75);
    c26 = `as.logical`(r77);
    if c26 then L118() else L22();
  L29(r95):
    r97 = `!`(r95);
    c39 = `as.logical`(r97);
    if c39 then L153() else L30();
  L99():
    r61 = dyn flush_console();
    check L100() else D32();
  L114():
    em = ld em;
    check L116() else D42();
  L115():
    r74 = dyn base9(<sym em>);
    goto L21(r74);
  L149():
    em5 = ld em;
    check L151() else D61();
  L150():
    r94 = dyn base12(<sym em>);
    goto L29(r94);
  D32():
    deopt 120 [r61];
  D42():
    deopt 150 [em];
  D61():
    deopt 207 [em5];
  L22():
    cat3 = ldf cat;
    check L123() else D47();
  L23():
    flush_console1 = ldf `flush.console`;
    check L125() else D49();
  L30():
    cat6 = ldf cat;
    check L158() else D66();
  L31():
    flush_console2 = ldf `flush.console`;
    check L160() else D68();
  L100():
    Sys_sleep = ldf `Sys.sleep`;
    check L101() else D33();
  L116():
    em1 = force? em;
    checkMissing(em1);
    is_na = ldf `is.na` in base;
    r76 = dyn is_na(em1);
    check L117() else D43();
  L118():
    cat2 = ldf cat;
    check L119() else D44();
  L151():
    em6 = force? em5;
    checkMissing(em6);
    is_na1 = ldf `is.na` in base;
    r96 = dyn is_na1(em6);
    check L152() else D62();
  L153():
    cat5 = ldf cat;
    check L154() else D63();
  D33():
    deopt 122 [];
  D43():
    deopt 153 [r76];
  D44():
    deopt 156 [];
  D47():
    deopt 163 [];
  D49():
    deopt 167 [];
  D62():
    deopt 210 [r96];
  D63():
    deopt 213 [];
  D66():
    deopt 220 [];
  D68():
    deopt 224 [];
  L101():
    r62 = dyn Sys_sleep(2.0);
    check L102() else D34();
  L117():
    goto L21(r76);
  L119():
    r78 = dyn cat2("It appears to contain an email address, so we will try that.\n\n");
    check L120() else D45();
  L123():
    r79 = dyn cat3("We will ignore it and email the maintainer.\n\n");
    check L124() else D48();
  L125():
    r80 = dyn flush_console1();
    check L126() else D50();
  L152():
    goto L29(r96);
  L154():
    r98 = dyn cat5("That appears to contain an email address, so we will try that\n");
    check L155() else D64();
  L158():
    r99 = dyn cat6("We cannot make sense of that, so will ignore it.\n\n");
    check L159() else D67();
  L160():
    r100 = dyn flush_console2();
    check L161() else D69();
  D34():
    deopt 124 [r62];
  D45():
    deopt 158 [r78];
  D48():
    deopt 165 [r79];
  D50():
    deopt 168 [r80];
  D64():
    deopt 215 [r98];
  D67():
    deopt 222 [r99];
  D69():
    deopt 225 [r100];
  L102():
    browseURL = ldf browseURL;
    check L103() else D35();
  L120():
    em2 = ld em;
    check L121() else D46();
  L124():
    goto L23();
  L126():
    Sys_sleep1 = ldf `Sys.sleep`;
    check L127() else D51();
  L155():
    em7 = ld em;
    check L156() else D65();
  L159():
    goto L31();
  L161():
    Sys_sleep2 = ldf `Sys.sleep`;
    check L162() else D70();
  D35():
    deopt 126 [];
  D46():
    deopt 159 [em2];
  D51():
    deopt 170 [];
  D65():
    deopt 216 [em7];
  D70():
    deopt 227 [];
  L103():
    p11 = prom<V +>{
      BR8 = ld BR;
      BR9 = force? BR8;
      checkMissing(BR9);
      return BR9;
    };
    r64 = dyn browseURL(p11);
    check L104() else D36();
  L121():
    em3 = force? em2;
    checkMissing(em3);
    st address = em3;
    goto L23();
  L127():
    r81 = dyn Sys_sleep1(2.0);
    check L128() else D52();
  L156():
    em8 = force? em7;
    checkMissing(em8);
    st address = em8;
    goto L31();
  L162():
    r101 = dyn Sys_sleep2(2.0);
    check L163() else D71();
  D36():
    deopt 128 [r64];
  D52():
    deopt 172 [r81];
  D71():
    deopt 229 [r101];
  L104():
    sym8 = ldf invisible;
    base8 = ldf invisible in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L105() else L106();
  L128():
    goto L24();
  L163():
    goto L32();
  L19(r66):
    popenv;
    return r66;
  L105():
    invisible = ldf invisible in base;
    r67 = dyn invisible();
    check L107() else D37();
  L106():
    r65 = dyn base8();
    goto L19(r65);
  D37():
    deopt 132 [r67];
  L107():
    goto L19(r67);
  }
}
fun inner2708337952() {
  () -+> V { reg writeLines:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg r4:V, reg flush_console:cls, reg r5:V, reg Sys_sleep:cls, reg r6:V, reg browseURL:cls, reg r7:V |
    mkenv;
    writeLines = ldf writeLines;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("  Bug reports on R and the base packages need to be submitted", "  to the tracker at <https://bugs.R-project.org/>.", "", "  We will now try to open that website in a browser");
      goto L0(r2);
    L2():
      r = dyn base("  Bug reports on R and the base packages need to be submitted", "  to the tracker at <https://bugs.R-project.org/>.", "", "  We will now try to open that website in a browser");
      goto L0(r);
    };
    r4 = dyn writeLines(p);
    check L1() else D1();
  D1():
    deopt 3 [r4];
  L1():
    flush_console = ldf `flush.console`;
    check L2() else D2();
  D2():
    deopt 5 [];
  L2():
    r5 = dyn flush_console();
    check L3() else D3();
  D3():
    deopt 6 [r5];
  L3():
    Sys_sleep = ldf `Sys.sleep`;
    check L4() else D4();
  D4():
    deopt 8 [];
  L4():
    r6 = dyn Sys_sleep(2.0);
    check L5() else D5();
  D5():
    deopt 10 [r6];
  L5():
    browseURL = ldf browseURL;
    check L6() else D6();
  D6():
    deopt 12 [];
  L6():
    r7 = dyn browseURL("https://bugs.r-project.org/index.cgi");
    check L7() else D7();
  D7():
    deopt 14 [r7];
  L7():
    popenv;
    return r7;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg paste:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg grepl:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r3:V, reg c:L, reg sub:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r5:V, reg grepl1:cls, reg x7:*, reg x8:V, reg p3:p(V +), reg r7:V, reg c1:L, reg sub1:cls, reg x9:*, reg x10:V, reg p4:p(V +), reg r9:V, reg grepl2:cls, reg x11:*, reg x12:V, reg p5:p(V +), reg r11:V, reg c2:L, reg sub2:cls, reg x13:*, reg x14:V, reg p6:p(V +), reg r13:V |
    mkenv;
    st x = x;
    paste = ldf paste;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn paste[, collapse](p, " ");
    check L4() else D1();
  D1():
    deopt 5 [r1];
  L4():
    st x = r1;
    grepl = ldf grepl;
    check L5() else D2();
  D2():
    deopt 8 [];
  L5():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn grepl("mailto:", p1);
    check L6() else D3();
  D3():
    deopt 11 [r3];
  L6():
    c = `as.logical`(r3);
    if c then L7() else L0();
  L0():
    grepl1 = ldf grepl;
    check L11() else D6();
  L7():
    sub = ldf sub;
    check L8() else D4();
  D4():
    deopt 13 [];
  D6():
    deopt 19 [];
  L8():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r5 = dyn sub(".*mailto:([^ ]+).*", "\\1", p2);
    check L9() else D5();
  L11():
    p3 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r7 = dyn grepl1("[^<]*<([^>]+)", p3);
    check L12() else D7();
  D5():
    deopt 17 [r5];
  D7():
    deopt 22 [r7];
  L9():
    popenv;
    return r5;
  L12():
    c1 = `as.logical`(r7);
    if c1 then L13() else L1();
  L1():
    grepl2 = ldf grepl;
    check L17() else D10();
  L13():
    sub1 = ldf sub;
    check L14() else D8();
  D8():
    deopt 24 [];
  D10():
    deopt 30 [];
  L14():
    p4 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r9 = dyn sub1("[^<]*<([^>]+)>.*", "\\1", p4);
    check L15() else D9();
  L17():
    p5 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r11 = dyn grepl2("(^|.* )[^ ]+@[[:alnum:]._]+", p5);
    check L18() else D11();
  D9():
    deopt 28 [r9];
  D11():
    deopt 33 [r11];
  L15():
    popenv;
    return r9;
  L18():
    c2 = `as.logical`(r11);
    if c2 then L19() else L2();
  L2():
    popenv;
    return NA_STR;
  L19():
    sub2 = ldf sub;
    check L20() else D12();
  D12():
    deopt 35 [];
  L20():
    p6 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r13 = dyn sub2("(^|.* )([^ ]+@[[:alnum:]._]+).*", "\\2", p6);
    check L21() else D13();
  D13():
    deopt 39 [r13];
  L21():
    popenv;
    return r13;
  }
}