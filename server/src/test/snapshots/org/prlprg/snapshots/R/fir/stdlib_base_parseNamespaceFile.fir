fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-2001143915`;
    st parseNamespaceFile = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-2001143915`(package, `package.lib`, mustExist) {
  (reg package:*, reg package_lib:*, reg mustExist:*) -+> V { var package:*, var `package.lib`:*, var mustExist:*, reg mustExist_isMissing:L, reg mustExist_orDefault:*, reg r:cls, reg r1:cls, reg r2:cls, reg namespaceFilePath:cls, reg package1:*, reg package2:V, reg p:p(V +), reg package_lib1:*, reg package_lib2:V, reg p1:p(V +), reg r5:V, reg file_path:cls, reg package_lib3:*, reg package_lib4:V, reg p2:p(V +), reg package3:*, reg package4:V, reg p3:p(V +), reg r8:V, reg file_exists:cls, reg descfile:*, reg descfile1:V, reg p4:p(V +), reg r10:V, reg c:L, reg read_dcf:cls, reg descfile2:*, reg descfile3:V, reg p5:p(V +), reg r12:V, reg c1:L, reg r14:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r15:V, reg dx2:V, reg file_exists1:cls, reg nsFile:*, reg nsFile1:V, reg p6:p(V +), reg r17:V, reg c2:L, reg sym:cls, reg base:cls, reg guard:L, reg r18:V, reg r19:V, reg enc:*, reg enc1:V, reg is_na:cls, reg r20:V, reg r21:V, reg c3:L, reg c5:V, reg _in_:cls, reg Sys_getlocale:cls, reg r22:V, reg p7:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r24:V, reg r25:V, reg c6:cls, reg r26:V, reg p8:p(V +), reg r28:V, reg r29:V, reg c7:L, reg c8:V, reg c10:L, reg readLines:cls, reg nsFile2:*, reg nsFile3:V, reg p9:p(V +), reg r31:V, reg iconv:cls, reg lines:*, reg lines1:V, reg p10:p(V +), reg enc2:*, reg enc3:V, reg p11:p(V +), reg r34:V, reg which:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r35:V, reg r36:V, reg tmp:*, reg tmp1:V, reg is_na1:cls, reg r37:V, reg p12:p(V +), reg r39:V, reg grep:cls, reg lines2:*, reg lines3:V, reg c11:L, reg lines5:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg bad:*, reg bad1:V, reg __1:cls, reg r40:V, reg p13:p(V +), reg r42:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r43:V, reg r44:V, reg bad2:*, reg bad3:V, reg c12:L, reg bad5:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg comm:*, reg comm1:V, reg __2:cls, reg r45:V, reg length:cls, reg r46:V, reg c13:L, reg stop:cls, reg r47:V, reg iconv1:cls, reg lines6:*, reg lines7:V, reg p14:p(V +), reg enc4:*, reg enc5:V, reg p15:p(V +), reg r51:V, reg textConnection:cls, reg tmp2:*, reg tmp3:V, reg p16:p(V +), reg r53:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r54:V, reg on_exit:cls, reg r56:V, reg parse:cls, reg con:*, reg con1:V, reg p17:p(V +), reg r58:V, reg r59:V, reg parse1:cls, reg nsFile4:*, reg nsFile5:V, reg p18:p(V +), reg r61:V, reg mustExist1:*, reg mustExist2:V, reg c14:L, reg stop1:cls, reg gettextf:cls, reg sQuote:cls, reg package5:*, reg package6:V, reg p19:p(V +), reg r64:V, reg p20:p(V +), reg r66:V, reg p21:p(V +), reg r68:V, reg character:cls, reg r69:V, reg character1:cls, reg r70:V, reg character2:cls, reg r71:V, reg character3:cls, reg r72:V, reg character4:cls, reg r73:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r74:V, reg r75:V, reg list:cls, reg r76:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r77:V, reg r78:V, reg list1:cls, reg r79:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r80:V, reg r81:V, reg list2:cls, reg r82:V, reg character5:cls, reg r83:V, reg matrix:cls, reg nS3methods:*, reg nS3methods1:V, reg p22:p(V +), reg r85:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r86:V, reg r87:V, reg list3:cls, reg r88:V, reg r89:cls, reg directives:*, reg directives1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c15:L, reg x:V, reg parseDirective:cls, reg e:*, reg e1:V, reg p23:p(V +), reg r91:V, reg dynlibs:*, reg dynlibs1:V, reg c16:L, reg dynlibs3:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg duplicated:cls, reg dynlibs4:*, reg dynlibs5:V, reg p24:p(V +), reg r93:V, reg r94:V, reg __3:cls, reg r95:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r96:V, reg r97:V, reg imports:*, reg imports1:V, reg exports:*, reg exports1:V, reg unique:cls, reg exportPatterns:*, reg exportPatterns1:V, reg p25:p(V +), reg r99:V, reg importClasses:*, reg importClasses1:V, reg importMethods:*, reg importMethods1:V, reg unique1:cls, reg exportClasses:*, reg exportClasses1:V, reg p26:p(V +), reg r101:V, reg unique2:cls, reg exportMethods:*, reg exportMethods1:V, reg p27:p(V +), reg r103:V, reg unique3:cls, reg exportClassPatterns:*, reg exportClassPatterns1:V, reg p28:p(V +), reg r105:V, reg dynlibs6:*, reg dynlibs7:V, reg nativeRoutines:*, reg nativeRoutines1:V, reg unique4:cls, reg S3methods:*, reg S3methods1:V, reg c17:L, reg S3methods3:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r106:V, reg r107:V, reg nS3:*, reg nS4:V, reg r108:I, reg __4:cls, reg r109:V, reg p29:p(V +), reg r111:V, reg list4:cls, reg r112:V |
    mkenv;
    st package = package;
    st `package.lib` = package_lib;
    mustExist_isMissing = missing.0(mustExist);
    if mustExist_isMissing then L0(TRUE) else L0(mustExist);
  L0(mustExist_orDefault):
    st mustExist = mustExist_orDefault;
    r = clos `inner-906430652`;
    st namespaceFilePath = r;
    r1 = clos inner1517476880;
    st nativeRoutineMap = r1;
    r2 = clos `inner-1809457052`;
    st mergeNativeRoutineMaps = r2;
    namespaceFilePath = ldf namespaceFilePath;
    check L24() else D0();
  D0():
    deopt 10 [];
  L24():
    p = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    p1 = prom<V +>{
      package_lib1 = ld `package.lib`;
      package_lib2 = force? package_lib1;
      checkMissing(package_lib2);
      return package_lib2;
    };
    r5 = dyn namespaceFilePath(p, p1);
    check L25() else D1();
  D1():
    deopt 13 [r5];
  L25():
    st nsFile = r5;
    file_path = ldf `file.path`;
    check L26() else D2();
  D2():
    deopt 16 [];
  L26():
    p2 = prom<V +>{
      package_lib3 = ld `package.lib`;
      package_lib4 = force? package_lib3;
      checkMissing(package_lib4);
      return package_lib4;
    };
    p3 = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    r8 = dyn file_path(p2, p3, "DESCRIPTION");
    check L27() else D3();
  D3():
    deopt 20 [r8];
  L27():
    st descfile = r8;
    file_exists = ldf `file.exists`;
    check L28() else D4();
  D4():
    deopt 23 [];
  L28():
    p4 = prom<V +>{
      descfile = ld descfile;
      descfile1 = force? descfile;
      checkMissing(descfile1);
      return descfile1;
    };
    r10 = dyn file_exists(p4);
    check L29() else D5();
  D5():
    deopt 25 [r10];
  L29():
    c = `as.logical`(r10);
    if c then L30() else L1();
  L1():
    goto L3(NA_STR);
  L3(dx2):
    st enc = dx2;
    file_exists1 = ldf `file.exists`;
    check L37() else D8();
  L30():
    read_dcf = ldf `read.dcf`;
    check L31() else D6();
  D6():
    deopt 27 [];
  D8():
    deopt 39 [];
  L31():
    p5 = prom<V +>{
      descfile2 = ld descfile;
      descfile3 = force? descfile2;
      checkMissing(descfile3);
      return descfile3;
    };
    r12 = dyn read_dcf[file, ](p5, "Encoding");
    check L32() else D7();
  L37():
    p6 = prom<V +>{
      nsFile = ld nsFile;
      nsFile1 = force? nsFile;
      checkMissing(nsFile1);
      return nsFile1;
    };
    r17 = dyn file_exists1(p6);
    check L38() else D9();
  D7():
    deopt 31 [r12];
  D9():
    deopt 41 [r17];
  L32():
    c1 = `is.object`(r12);
    if c1 then L33() else L34(r12);
  L38():
    c2 = `as.logical`(r17);
    if c2 then L39() else L4();
  L2(dx1):
    goto L3(dx1);
  L4():
    mustExist1 = ld mustExist;
    check L81() else D35();
  L14():
    character = ldf character;
    check L86() else D38();
  L33():
    dr = tryDispatchBuiltin.1("[", r12);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L35() else L34(dr);
  L34(r14):
    __ = ldf `[` in base;
    r15 = dyn __(r14, 1);
    goto L2(r15);
  L39():
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L40() else L41();
  D35():
    deopt 138 [mustExist1];
  D38():
    deopt 150 [];
  L5(r19):
    r21 = `!`(r19);
    c3 = `as.logical`(r21);
    if c3 then L44() else L6(c3);
  L35():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L40():
    enc = ld enc;
    check L42() else D10();
  L41():
    r18 = dyn base(<sym enc>);
    goto L5(r18);
  L81():
    mustExist2 = force? mustExist1;
    checkMissing(mustExist2);
    c14 = `as.logical`(mustExist2);
    if c14 then L82() else L15();
  L86():
    r69 = dyn character();
    check L87() else D39();
  D10():
    deopt 44 [enc];
  D39():
    deopt 151 [r69];
  L6(c5):
    c10 = `as.logical`(c5);
    if c10 then L48() else L7();
  L15():
    st directives = NULL;
    goto L14();
  L42():
    enc1 = force? enc;
    checkMissing(enc1);
    is_na = ldf `is.na` in base;
    r20 = dyn is_na(enc1);
    check L43() else D11();
  L44():
    _in_ = ldf `%in%`;
    check L45() else D12();
  L82():
    stop1 = ldf stop;
    check L83() else D36();
  L87():
    st exports = r69;
    character1 = ldf character;
    check L88() else D40();
  D11():
    deopt 47 [r20];
  D12():
    deopt 50 [c3];
  D36():
    deopt 141 [];
  D40():
    deopt 154 [];
  L7():
    parse1 = ldf parse;
    check L78() else D33();
  L13(r59):
    st directives = r59;
    goto L14();
  L43():
    goto L5(r20);
  L45():
    p7 = prom<V +>{
      Sys_getlocale = ldf `Sys.getlocale`;
      r22 = dyn Sys_getlocale("LC_CTYPE");
      return r22;
    };
    p8 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r25):
      return r25;
    L1():
      c6 = ldf c in base;
      r26 = dyn c6("C", "POSIX");
      goto L0(r26);
    L2():
      r24 = dyn base1("C", "POSIX");
      goto L0(r24);
    };
    r28 = dyn _in_(p7, p8);
    check L46() else D13();
  L48():
    readLines = ldf readLines;
    check L49() else D14();
  L83():
    p21 = prom<V +>{
      gettextf = ldf gettextf;
      p20 = prom<V +>{
        sQuote = ldf sQuote;
        p19 = prom<V +>{
          package5 = ld package;
          package6 = force? package5;
          checkMissing(package6);
          return package6;
        };
        r64 = dyn sQuote(p19);
        return r64;
      };
      r66 = dyn gettextf("package %s has no 'NAMESPACE' file", p20);
      return r66;
    };
    r68 = dyn stop1[, domain](p21, NA_LGL);
    check L84() else D37();
  L88():
    r70 = dyn character1();
    check L89() else D41();
  D13():
    deopt 53 [c3, r28];
  D14():
    deopt 57 [];
  D33():
    deopt 130 [];
  D37():
    deopt 145 [r68];
  D41():
    deopt 155 [r70];
  L46():
    r29 = `!`(r28);
    c7 = `as.logical`(r29);
    c8 = `&&`(c3, c7);
    goto L6(c8);
  L49():
    p9 = prom<V +>{
      nsFile2 = ld nsFile;
      nsFile3 = force? nsFile2;
      checkMissing(nsFile3);
      return nsFile3;
    };
    r31 = dyn readLines[, warn](p9, FALSE);
    check L50() else D15();
  L78():
    p18 = prom<V +>{
      nsFile4 = ld nsFile;
      nsFile5 = force? nsFile4;
      checkMissing(nsFile5);
      return nsFile5;
    };
    r61 = dyn parse1[, `keep.source`, srcfile](p18, FALSE, NULL);
    check L79() else D34();
  L84():
    goto L14();
  L89():
    st exportPatterns = r70;
    character2 = ldf character;
    check L90() else D42();
  D15():
    deopt 61 [r31];
  D34():
    deopt 136 [r61];
  D42():
    deopt 158 [];
  L50():
    st lines = r31;
    iconv = ldf iconv;
    check L51() else D16();
  L79():
    goto L13(r61);
  L90():
    r71 = dyn character2();
    check L91() else D43();
  D16():
    deopt 64 [];
  D43():
    deopt 159 [r71];
  L51():
    p10 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    p11 = prom<V +>{
      enc2 = ld enc;
      enc3 = force? enc2;
      checkMissing(enc3);
      return enc3;
    };
    r34 = dyn iconv[, from, to](p10, p11, "");
    check L52() else D17();
  L91():
    st exportClasses = r71;
    character3 = ldf character;
    check L92() else D44();
  D17():
    deopt 70 [r34];
  D44():
    deopt 162 [];
  L52():
    st tmp = r34;
    which = ldf which;
    check L53() else D18();
  L92():
    r72 = dyn character3();
    check L93() else D45();
  D18():
    deopt 73 [];
  D45():
    deopt 163 [r72];
  L53():
    p12 = prom<V +>{
      sym2 = ldf `is.na`;
      base2 = ldf `is.na` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r36):
      return r36;
    L1():
      tmp = ld tmp;
      tmp1 = force? tmp;
      checkMissing(tmp1);
      is_na1 = ldf `is.na` in base;
      r37 = dyn is_na1(tmp1);
      goto L0(r37);
    L2():
      r35 = dyn base2(<sym tmp>);
      goto L0(r35);
    };
    r39 = dyn which(p12);
    check L54() else D19();
  L93():
    st exportClassPatterns = r72;
    character4 = ldf character;
    check L94() else D46();
  D19():
    deopt 75 [r39];
  D46():
    deopt 166 [];
  L54():
    st bad = r39;
    grep = ldf grep;
    check L55() else D20();
  L94():
    r73 = dyn character4();
    check L95() else D47();
  D20():
    deopt 78 [];
  D47():
    deopt 167 [r73];
  L55():
    p13 = prom<V +>{
      lines2 = ld lines;
      lines3 = force? lines2;
      checkMissing(lines3);
      c11 = `is.object`(lines3);
      if c11 then L1() else L2(lines3);
    L0(dx4):
      return dx4;
    L1():
      dr2 = tryDispatchBuiltin.1("[", lines3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(lines5):
      bad = ld bad;
      bad1 = force? bad;
      __1 = ldf `[` in base;
      r40 = dyn __1(lines5, bad1);
      goto L0(r40);
    L3():
      dx3 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx3);
    };
    r42 = dyn grep[, , invert, useBytes]("^[[:space:]]*#", p13, TRUE, TRUE);
    check L56() else D21();
  L95():
    st exportMethods = r73;
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L96() else L97();
  D21():
    deopt 85 [r42];
  L16(r75):
    st imports = r75;
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L99() else L100();
  L56():
    st comm = r42;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L57() else L58();
  L96():
    list = ldf list in base;
    r76 = dyn list();
    check L98() else D48();
  L97():
    r74 = dyn base5();
    goto L16(r74);
  D48():
    deopt 172 [r76];
  L8(r44):
    c13 = `as.logical`(r44);
    if c13 then L65() else L10();
  L17(r78):
    st importMethods = r78;
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L102() else L103();
  L57():
    bad2 = ld bad;
    check L59() else D22();
  L58():
    r43 = dyn base3(<lang `[`(bad, comm)>);
    goto L8(r43);
  L98():
    goto L16(r76);
  L99():
    list1 = ldf list in base;
    r79 = dyn list1();
    check L101() else D49();
  L100():
    r77 = dyn base6();
    goto L17(r77);
  D22():
    deopt 89 [bad2];
  D49():
    deopt 177 [r79];
  L10():
    goto L11();
  L11():
    iconv1 = ldf iconv;
    check L69() else D27();
  L18(r81):
    st importClasses = r81;
    character5 = ldf character;
    check L105() else D51();
  L59():
    bad3 = force? bad2;
    checkMissing(bad3);
    c12 = `is.object`(bad3);
    if c12 then L60() else L61(bad3);
  L65():
    stop = ldf stop;
    check L66() else D25();
  L101():
    goto L17(r79);
  L102():
    list2 = ldf list in base;
    r82 = dyn list2();
    check L104() else D50();
  L103():
    r80 = dyn base7();
    goto L18(r80);
  D25():
    deopt 97 [];
  D27():
    deopt 103 [];
  D50():
    deopt 182 [r82];
  D51():
    deopt 185 [];
  L9(dx6):
    length = ldf length in base;
    r46 = dyn length(dx6);
    check L64() else D24();
  L60():
    dr4 = tryDispatchBuiltin.1("[", bad3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L62() else L61(dr4);
  L61(bad5):
    comm = ld comm;
    check L63() else D23();
  L66():
    r47 = dyn stop("unable to re-encode some lines in NAMESPACE file");
    check L67() else D26();
  L69():
    p14 = prom<V +>{
      lines6 = ld lines;
      lines7 = force? lines6;
      checkMissing(lines7);
      return lines7;
    };
    p15 = prom<V +>{
      enc4 = ld enc;
      enc5 = force? enc4;
      checkMissing(enc5);
      return enc5;
    };
    r51 = dyn iconv1[, from, to, sub](p14, p15, "", "byte");
    check L70() else D28();
  L104():
    goto L18(r82);
  L105():
    r83 = dyn character5();
    check L106() else D52();
  D23():
    deopt 91 [bad5, comm];
  D24():
    deopt 95 [r46];
  D26():
    deopt 99 [r47];
  D28():
    deopt 111 [r51];
  D52():
    deopt 186 [r83];
  L62():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L9(dx5);
  L63():
    comm1 = force? comm;
    __2 = ldf `[` in base;
    r45 = dyn __2(bad5, comm1);
    goto L9(r45);
  L64():
    goto L8(r46);
  L67():
    goto L11();
  L70():
    st tmp = r51;
    textConnection = ldf textConnection;
    check L71() else D29();
  L106():
    st dynlibs = r83;
    st nS3methods = 1000;
    matrix = ldf matrix;
    check L107() else D53();
  D29():
    deopt 114 [];
  D53():
    deopt 192 [];
  L71():
    p16 = prom<V +>{
      tmp2 = ld tmp;
      tmp3 = force? tmp2;
      checkMissing(tmp3);
      return tmp3;
    };
    r53 = dyn textConnection(p16);
    check L72() else D30();
  L107():
    p22 = prom<V +>{
      nS3methods = ld nS3methods;
      nS3methods1 = force? nS3methods;
      checkMissing(nS3methods1);
      return nS3methods1;
    };
    r85 = dyn matrix(NA_STR, p22, 4);
    check L108() else D54();
  D30():
    deopt 116 [r53];
  D54():
    deopt 196 [r85];
  L72():
    st con = r53;
    sym4 = ldf `on.exit`;
    base4 = ldf `on.exit` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L73() else L74();
  L108():
    st S3methods = r85;
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L109() else L110();
  L12():
    parse = ldf parse;
    check L75() else D31();
  L19(r87):
    st nativeRoutines = r87;
    st nS3 = 0;
    r89 = clos inner1560918050;
    st parseDirective = r89;
    directives = ld directives;
    check L112() else D56();
  L73():
    on_exit = ldf `on.exit` in base;
    r56 = dyn on_exit(<lang close(con)>);
    goto L12();
  L74():
    r54 = dyn base4(<lang close(con)>);
    goto L12();
  L109():
    list3 = ldf list in base;
    r88 = dyn list3();
    check L111() else D55();
  L110():
    r86 = dyn base8();
    goto L19(r86);
  D31():
    deopt 122 [];
  D55():
    deopt 201 [r88];
  D56():
    deopt 209 [directives];
  L75():
    p17 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    r58 = dyn parse[, `keep.source`, srcfile](p17, FALSE, NULL);
    check L76() else D32();
  L111():
    goto L19(r88);
  L112():
    directives1 = force? directives;
    checkMissing(directives1);
    s = toForSeq(directives1);
    l = length(s);
    i = 0;
    goto L20(i);
  D32():
    deopt 128 [r58];
  L20(i1):
    i2 = `+`.1(i1, 1);
    c15 = `<`.1(l, i2);
    if c15 then L113() else L21();
  L76():
    goto L13(r58);
  L21():
    x = `[[`(s, i2, NULL, TRUE);
    st e = x;
    parseDirective = ldf parseDirective;
    check L114() else D57();
  L113():
    dynlibs = ld dynlibs;
    check L116() else D59();
  D57():
    deopt 212 [i2];
  D59():
    deopt 218 [dynlibs];
  L114():
    p23 = prom<V +>{
      e = ld e;
      e1 = force? e;
      checkMissing(e1);
      return e1;
    };
    r91 = dyn parseDirective(p23);
    check L115() else D58();
  L116():
    dynlibs1 = force? dynlibs;
    checkMissing(dynlibs1);
    c16 = `is.object`(dynlibs1);
    if c16 then L117() else L118(dynlibs1);
  D58():
    deopt 214 [i2, r91];
  L22(dx8):
    st dynlibs = dx8;
    sym9 = ldf list;
    base9 = ldf list in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L122() else L123();
  L115():
    goto L20(i2);
  L117():
    dr6 = tryDispatchBuiltin.1("[", dynlibs1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L119() else L118(dr6);
  L118(dynlibs3):
    duplicated = ldf duplicated;
    check L120() else D60();
  D60():
    deopt 221 [dynlibs3];
  L23(r97):
    popenv;
    return r97;
  L119():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L22(dx7);
  L120():
    p24 = prom<V +>{
      dynlibs4 = ld dynlibs;
      dynlibs5 = force? dynlibs4;
      checkMissing(dynlibs5);
      return dynlibs5;
    };
    r93 = dyn duplicated(p24);
    check L121() else D61();
  L122():
    imports = ld imports;
    check L124() else D62();
  L123():
    r96 = dyn base9[imports, exports, exportPatterns, importClasses, importMethods, exportClasses, exportMethods, exportClassPatterns, dynlibs, nativeRoutines, S3methods](<sym imports>, <sym exports>, <lang unique(exportPatterns)>, <sym importClasses>, <sym importMethods>, <lang unique(exportClasses)>, <lang unique(exportMethods)>, <lang unique(exportClassPatterns)>, <sym dynlibs>, <sym nativeRoutines>, <lang unique(`[`(S3methods, seq_len(nS3), , drop=FALSE))>);
    goto L23(r96);
  D61():
    deopt 223 [dynlibs3, r93];
  D62():
    deopt 229 [imports];
  L121():
    r94 = `!`(r93);
    __3 = ldf `[` in base;
    r95 = dyn __3(dynlibs3, r94);
    goto L22(r95);
  L124():
    imports1 = force? imports;
    checkMissing(imports1);
    exports = ld exports;
    check L125() else D63();
  D63():
    deopt 232 [exports];
  L125():
    exports1 = force? exports;
    checkMissing(exports1);
    unique = ldf unique;
    check L126() else D64();
  D64():
    deopt 236 [];
  L126():
    p25 = prom<V +>{
      exportPatterns = ld exportPatterns;
      exportPatterns1 = force? exportPatterns;
      checkMissing(exportPatterns1);
      return exportPatterns1;
    };
    r99 = dyn unique(p25);
    check L127() else D65();
  D65():
    deopt 238 [r99];
  L127():
    importClasses = ld importClasses;
    check L128() else D66();
  D66():
    deopt 240 [importClasses];
  L128():
    importClasses1 = force? importClasses;
    checkMissing(importClasses1);
    importMethods = ld importMethods;
    check L129() else D67();
  D67():
    deopt 243 [importMethods];
  L129():
    importMethods1 = force? importMethods;
    checkMissing(importMethods1);
    unique1 = ldf unique;
    check L130() else D68();
  D68():
    deopt 247 [];
  L130():
    p26 = prom<V +>{
      exportClasses = ld exportClasses;
      exportClasses1 = force? exportClasses;
      checkMissing(exportClasses1);
      return exportClasses1;
    };
    r101 = dyn unique1(p26);
    check L131() else D69();
  D69():
    deopt 249 [r101];
  L131():
    unique2 = ldf unique;
    check L132() else D70();
  D70():
    deopt 252 [];
  L132():
    p27 = prom<V +>{
      exportMethods = ld exportMethods;
      exportMethods1 = force? exportMethods;
      checkMissing(exportMethods1);
      return exportMethods1;
    };
    r103 = dyn unique2(p27);
    check L133() else D71();
  D71():
    deopt 254 [r103];
  L133():
    unique3 = ldf unique;
    check L134() else D72();
  D72():
    deopt 257 [];
  L134():
    p28 = prom<V +>{
      exportClassPatterns = ld exportClassPatterns;
      exportClassPatterns1 = force? exportClassPatterns;
      checkMissing(exportClassPatterns1);
      return exportClassPatterns1;
    };
    r105 = dyn unique3(p28);
    check L135() else D73();
  D73():
    deopt 259 [r105];
  L135():
    dynlibs6 = ld dynlibs;
    check L136() else D74();
  D74():
    deopt 261 [dynlibs6];
  L136():
    dynlibs7 = force? dynlibs6;
    checkMissing(dynlibs7);
    nativeRoutines = ld nativeRoutines;
    check L137() else D75();
  D75():
    deopt 264 [nativeRoutines];
  L137():
    nativeRoutines1 = force? nativeRoutines;
    checkMissing(nativeRoutines1);
    unique4 = ldf unique;
    check L138() else D76();
  D76():
    deopt 268 [];
  L138():
    p29 = prom<V +>{
      S3methods = ld S3methods;
      S3methods1 = force? S3methods;
      checkMissing(S3methods1);
      c17 = `is.object`(S3methods1);
      if c17 then L2() else L3(S3methods1);
    L0(dx10):
      return dx10;
    L2():
      dr8 = tryDispatchBuiltin.1("[", S3methods1);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L4() else L3(dr8);
    L3(S3methods3):
      sym10 = ldf seq_len;
      base10 = ldf seq_len in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L5() else L6();
    L1(r107):
      __4 = ldf `[` in base;
      r109 = dyn __4(S3methods1, r107, <missing>, FALSE);
      goto L0(r109);
    L4():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx9);
    L5():
      nS3 = ld nS3;
      nS4 = force? nS3;
      checkMissing(nS4);
      r108 = seq_len(nS4);
      goto L1(r108);
    L6():
      r106 = dyn base10(<sym nS3>);
      goto L1(r106);
    };
    r111 = dyn unique4(p29);
    check L139() else D77();
  D77():
    deopt 270 [r111];
  L139():
    list4 = ldf list in base;
    r112 = dyn list4(imports1, exports1, r99, importClasses1, importMethods1, r101, r103, r105, dynlibs7, nativeRoutines1, r111);
    check L140() else D78();
  D78():
    deopt 273 [r112];
  L140():
    goto L23(r112);
  }
}
fun `inner-906430652`(package, `package.lib`) {
  (reg package:*, reg package_lib:*) -+> V { var package:*, var `package.lib`:*, reg file_path:cls, reg package_lib1:*, reg package_lib2:V, reg p:p(V +), reg package1:*, reg package2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st package = package;
    st `package.lib` = package_lib;
    file_path = ldf `file.path`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      package_lib1 = ld `package.lib`;
      package_lib2 = force? package_lib1;
      checkMissing(package_lib2);
      return package_lib2;
    };
    p1 = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    r2 = dyn file_path(p, p1, "NAMESPACE");
    check L1() else D1();
  D1():
    deopt 5 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner1517476880(useRegistration, symbolNames, fixes) {
  (reg useRegistration:*, reg symbolNames:*, reg fixes:*) -+> V { var useRegistration:*, var symbolNames:*, var fixes:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg character:cls, reg r2:V, reg list:cls, reg r3:V, reg l:*, reg class__:cls, reg r4:V, reg mergeNativeRoutineMaps:cls, reg proto:*, reg proto1:V, reg p:p(V +), reg useRegistration1:*, reg useRegistration2:V, reg p1:p(V +), reg symbolNames1:*, reg symbolNames2:V, reg p2:p(V +), reg fixes1:*, reg fixes2:V, reg p3:p(V +), reg r9:V |
    mkenv;
    st useRegistration = useRegistration;
    st symbolNames = symbolNames;
    st fixes = fixes;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    st proto = r1;
    l = ld proto;
    class__ = ldf `class<-`;
    check L6() else D3();
  L1():
    character = ldf character;
    check L3() else D0();
  L2():
    r = dyn base[useRegistration, symbolNames](FALSE, <lang character()>);
    goto L0(r);
  D0():
    deopt 5 [];
  D3():
    deopt 14 ["NativeRoutineMap", l, "NativeRoutineMap"];
  L3():
    r2 = dyn character();
    check L4() else D1();
  L6():
    r4 = dyn class__(l, NULL, "NativeRoutineMap");
    check L7() else D4();
  D1():
    deopt 6 [r2];
  D4():
    deopt 16 ["NativeRoutineMap", r4];
  L4():
    list = ldf list in base;
    r3 = dyn list(FALSE, r2);
    check L5() else D2();
  L7():
    st proto = r4;
    mergeNativeRoutineMaps = ldf mergeNativeRoutineMaps;
    check L8() else D5();
  D2():
    deopt 9 [r3];
  D5():
    deopt 19 [];
  L5():
    goto L0(r3);
  L8():
    p = prom<V +>{
      proto = ld proto;
      proto1 = force? proto;
      checkMissing(proto1);
      return proto1;
    };
    p1 = prom<V +>{
      useRegistration1 = ld useRegistration;
      useRegistration2 = force? useRegistration1;
      checkMissing(useRegistration2);
      return useRegistration2;
    };
    p2 = prom<V +>{
      symbolNames1 = ld symbolNames;
      symbolNames2 = force? symbolNames1;
      checkMissing(symbolNames2);
      return symbolNames2;
    };
    p3 = prom<V +>{
      fixes1 = ld fixes;
      fixes2 = force? fixes1;
      checkMissing(fixes2);
      return fixes2;
    };
    r9 = dyn mergeNativeRoutineMaps(p, p1, p2, p3);
    check L9() else D6();
  D6():
    deopt 24 [r9];
  L9():
    popenv;
    return r9;
  }
}
fun `inner-1809457052`(map, useRegistration, symbolNames, fixes) {
  (reg map:*, reg useRegistration:*, reg symbolNames:*, reg fixes:*) -+> V { var map:*, var useRegistration:*, var symbolNames:*, var fixes:*, reg useRegistration1:*, reg useRegistration2:V, reg r:V, reg c:L, reg paste0:cls, reg fixes1:*, reg fixes2:V, reg c1:L, reg fixes4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg symbolNames1:*, reg symbolNames2:V, reg names:cls, reg r5:V, reg p1:p(V +), reg fixes5:*, reg fixes6:V, reg c2:L, reg fixes8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r7:V, reg p2:p(V +), reg r9:V, reg l:*, reg names__:cls, reg r10:V, reg fixes9:*, reg fixes10:V, reg l1:*, reg c3:L, reg fixes12:V, reg l3:*, reg dr4:V, reg dc2:L, reg dx4:V, reg fixes14:V, reg dx5:V, reg r12:V, reg map1:*, reg map2:V, reg c4:L, reg map4:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r13:V, reg c5:L, reg c6:V, reg useRegistration3:*, reg useRegistration4:V, reg c8:L, reg c9:V, reg l4:*, reg c11:L, reg c13:V, reg l6:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg map5:*, reg map6:V, reg c16:L, reg map8:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r17:V, reg symbolNames3:*, reg symbolNames4:V, reg c17:cls, reg r18:V, reg l7:*, reg c18:L, reg r20:V, reg l9:*, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r23:V, reg map9:*, reg map10:V |
    mkenv;
    st map = map;
    st useRegistration = useRegistration;
    st symbolNames = symbolNames;
    st fixes = fixes;
    useRegistration1 = ld useRegistration;
    check L4() else D0();
  D0():
    deopt 0 [useRegistration1];
  L4():
    useRegistration2 = force? useRegistration1;
    checkMissing(useRegistration2);
    r = `!`(useRegistration2);
    c = `as.logical`(r);
    if c then L5() else L0();
  L0():
    fixes9 = ld fixes;
    check L11() else D5();
  L1():
    map1 = ld map;
    check L16() else D6();
  L5():
    paste0 = ldf paste0;
    check L6() else D1();
  D1():
    deopt 4 [];
  D5():
    deopt 14 [fixes9];
  D6():
    deopt 19 [map1];
  L6():
    p = prom<V +>{
      fixes1 = ld fixes;
      fixes2 = force? fixes1;
      checkMissing(fixes2);
      c1 = `is.object`(fixes2);
      if c1 then L1() else L2(fixes2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", fixes2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(fixes4):
      __ = ldf `[` in base;
      r1 = dyn __(fixes4, 1);
      goto L0(r1);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      symbolNames1 = ld symbolNames;
      symbolNames2 = force? symbolNames1;
      checkMissing(symbolNames2);
      names = ldf names in base;
      r5 = dyn names(symbolNames2);
      goto L0(r5);
    L2():
      r3 = dyn base(<sym symbolNames>);
      goto L0(r3);
    };
    p2 = prom<V +>{
      fixes5 = ld fixes;
      fixes6 = force? fixes5;
      checkMissing(fixes6);
      c2 = `is.object`(fixes6);
      if c2 then L1() else L2(fixes6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", fixes6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(fixes8):
      __1 = ldf `[` in base;
      r7 = dyn __1(fixes8, 2);
      goto L0(r7);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r9 = dyn paste0(p, p1, p2);
    check L7() else D2();
  L11():
    fixes10 = force? fixes9;
    checkMissing(fixes10);
    l1 = ld map;
    c3 = `is.object`(l1);
    if c3 then L13() else L14(fixes10, l1);
  L16():
    map2 = force? map1;
    checkMissing(map2);
    c4 = `is.object`(map2);
    if c4 then L18() else L19(map2);
  D2():
    deopt 8 [r9];
  L7():
    l = ld symbolNames;
    names__ = ldf `names<-`;
    check L8() else D3();
  L12(fixes14, dx5):
    st map = dx5;
    goto L1();
  L13():
    dr4 = tryDispatchBuiltin.0("$<-", l1, fixes10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L15() else L14(fixes10, dr4);
  L14(fixes12, l3):
    r12 = `$<-`(l3, <sym registrationFixes>, fixes10);
    goto L12(fixes12, r12);
  L17(dx7):
    c5 = `as.logical`(dx7);
    if c5 then L2(c5) else L21();
  L18():
    dr6 = tryDispatchBuiltin.1("$", map2);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L20() else L19(dr6);
  L19(map4):
    r13 = `$`(map4, <sym useRegistration>);
    goto L17(r13);
  D3():
    deopt 10 [r9, l, r9];
  L2(c6):
    l4 = ld map;
    c11 = `is.object`(l4);
    if c11 then L25() else L26(c6, l4);
  L8():
    r10 = dyn names__(l, NULL, r9);
    check L9() else D4();
  L15():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L12(fixes10, dx4);
  L20():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L17(dx6);
  L21():
    useRegistration3 = ld useRegistration;
    check L22() else D7();
  D4():
    deopt 12 [r9, r10];
  D7():
    deopt 22 [c5, useRegistration3];
  L9():
    st symbolNames = r10;
    goto L1();
  L22():
    useRegistration4 = force? useRegistration3;
    checkMissing(useRegistration4);
    c8 = `as.logical`(useRegistration4);
    c9 = `||`(c5, c8);
    goto L2(c9);
  L24(dx9):
    st map = dx9;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L25():
    dr8 = tryDispatchBuiltin.0("$<-", l4, c6);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L27() else L26(c6, dr8);
  L26(c13, l6):
    r14 = `$<-`(l6, <sym useRegistration>, c6);
    goto L24(r14);
  L3(r16):
    l7 = ld map;
    c18 = `is.object`(l7);
    if c18 then L38() else L39(r16, l7);
  L27():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L24(dx8);
  L28():
    map5 = ld map;
    check L30() else D8();
  L29():
    r15 = dyn base1(<lang `$`(map, symbolNames)>, <sym symbolNames>);
    goto L3(r15);
  D8():
    deopt 30 [map5];
  L30():
    map6 = force? map5;
    checkMissing(map6);
    c16 = `is.object`(map6);
    if c16 then L32() else L33(map6);
  L37(dx13):
    st map = dx13;
    map9 = ld map;
    check L41() else D11();
  L38():
    dr12 = tryDispatchBuiltin.0("$<-", l7, r16);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L40() else L39(r16, dr12);
  L39(r20, l9):
    r23 = `$<-`(l9, <sym symbolNames>, r16);
    goto L37(r23);
  D11():
    deopt 40 [map9];
  L31(dx11):
    symbolNames3 = ld symbolNames;
    check L35() else D9();
  L32():
    dr10 = tryDispatchBuiltin.1("$", map6);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L34() else L33(dr10);
  L33(map8):
    r17 = `$`(map8, <sym symbolNames>);
    goto L31(r17);
  L40():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L37(dx12);
  L41():
    map10 = force? map9;
    checkMissing(map10);
    popenv;
    return map10;
  D9():
    deopt 33 [symbolNames3];
  L34():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L31(dx10);
  L35():
    symbolNames4 = force? symbolNames3;
    checkMissing(symbolNames4);
    c17 = ldf c in base;
    r18 = dyn c17(dx11, symbolNames4);
    check L36() else D10();
  D10():
    deopt 36 [r18];
  L36():
    goto L3(r18);
  }
}
fun inner1560918050(e) {
  (reg e:*) -+> V { var e:*, reg r:cls, reg r1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg e1:*, reg e2:V, reg c:L, reg e4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V, reg as_character:cls, reg r5:V, reg c1:L, reg c2:L, reg c3:L, reg c4:L, reg c5:L, reg c6:L, reg c7:L, reg c8:L, reg c9:L, reg c10:L, reg c11:L, reg c12:L, reg c13:L, reg c14:L, reg c15:L, reg c16:L, reg c17:L, reg c18:L, reg c19:L, reg c20:L, reg i_ddd:dots, reg i:V, reg c21:L, reg c22:L, reg c23:L, reg c24:L, reg c25:L, reg c26:L, reg c27:L, reg c28:L, reg c29:L, reg c30:L, reg c31:L, reg c32:L, reg c33:L, reg c34:L, reg c35:L, reg c36:L, reg c37:L, reg c38:L, reg stop:cls, reg r6:V, reg eval:cls, reg e5:*, reg e6:V, reg c39:L, reg e8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r7:V, reg p:p(V +), reg _GlobalEnv:*, reg _GlobalEnv1:V, reg p1:p(V +), reg r10:V, reg c40:L, reg parseDirective:cls, reg e9:*, reg e10:V, reg c41:L, reg e12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r11:V, reg p2:p(V +), reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg e13:*, reg e14:V, reg length:cls, reg r16:V, reg r17:V, reg c42:L, reg parseDirective1:cls, reg e15:*, reg e16:V, reg c43:L, reg e18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r18:V, reg p3:p(V +), reg r20:V, reg as_list:cls, reg e19:*, reg e20:V, reg c44:L, reg e22:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r21:V, reg p4:p(V +), reg r23:V, reg s:V, reg l:I, reg i1:I, reg i2:I, reg i3:I, reg c45:L, reg x:V, reg parseDirective2:cls, reg ee:*, reg ee1:V, reg p5:p(V +), reg r25:V, reg parseDirective3:cls, reg e23:*, reg e24:V, reg c46:L, reg e26:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __5:cls, reg r26:V, reg p6:p(V +), reg r28:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg r30:V, reg e27:*, reg e28:V, reg c47:L, reg e30:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __6:cls, reg r31:V, reg c48:L, reg dx15:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg __7:cls, reg r32:V, reg as_character1:cls, reg r33:V, reg r34:V, reg c49:L, reg asChar:cls, reg e31:*, reg e32:V, reg c50:L, reg e34:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg __8:cls, reg r35:V, reg p7:p(V +), reg r37:V, reg l1:*, reg names:cls, reg r38:V, reg c51:L, reg r41:V, reg l3:*, reg r42:V, reg dr18:V, reg dc9:L, reg dx20:V, reg r44:V, reg l5:*, reg dx21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r51:V, reg r52:V, reg l8:*, reg r53:V, reg r54:V, reg r55:V, reg dynlibs:*, reg dynlibs1:V, reg length1:cls, reg r56:V, reg ___:cls, reg r57:V, reg names__:cls, reg r58:V, reg e35:*, reg e36:V, reg c52:L, reg e38:V, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg __9:cls, reg r59:V, reg structure:cls, reg asChar1:cls, reg exp:*, reg exp1:V, reg p8:p(V +), reg r61:V, reg p9:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r63:V, reg r64:V, reg exp2:*, reg exp3:V, reg names1:cls, reg r65:V, reg p10:p(V +), reg r67:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r68:V, reg r69:V, reg exports:*, reg exports1:V, reg exp4:*, reg exp5:V, reg c53:cls, reg r70:V, reg asChar2:cls, reg e39:*, reg e40:V, reg c54:L, reg e42:V, reg dr22:V, reg dc11:L, reg dx24:V, reg dx25:V, reg __10:cls, reg r71:V, reg p11:p(V +), reg r73:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r74:V, reg r75:V, reg pat:*, reg pat1:V, reg exportPatterns:*, reg exportPatterns1:V, reg c55:cls, reg r76:V, reg asChar3:cls, reg e43:*, reg e44:V, reg c56:L, reg e46:V, reg dr24:V, reg dc12:L, reg dx26:V, reg dx27:V, reg __11:cls, reg r77:V, reg p12:p(V +), reg r79:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r80:V, reg r81:V, reg pat2:*, reg pat3:V, reg exportClassPatterns:*, reg exportClassPatterns1:V, reg c57:cls, reg r82:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r83:V, reg r84:V, reg asChar4:cls, reg e47:*, reg e48:V, reg c58:L, reg e50:V, reg dr26:V, reg dc13:L, reg dx28:V, reg dx29:V, reg __12:cls, reg r85:V, reg p13:p(V +), reg r87:V, reg exportClasses:*, reg exportClasses1:V, reg c59:cls, reg r88:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r89:V, reg r90:V, reg asChar5:cls, reg e51:*, reg e52:V, reg c60:L, reg e54:V, reg dr28:V, reg dc14:L, reg dx30:V, reg dx31:V, reg __13:cls, reg r91:V, reg p14:p(V +), reg r93:V, reg exportMethods:*, reg exportMethods1:V, reg c61:cls, reg r94:V, reg e55:*, reg e56:V, reg c62:L, reg e58:V, reg dr30:V, reg dc15:L, reg dx32:V, reg dx33:V, reg r95:V, reg l9:*, reg c63:L, reg r97:dots, reg l11:*, reg dr32:V, reg dc16:L, reg dx34:V, reg dx35:V, reg r100:V, reg as_list1:cls, reg asChar6:cls, reg e59:*, reg e60:V, reg c64:L, reg e62:V, reg dr34:V, reg dc17:L, reg dx36:V, reg dx37:V, reg __14:cls, reg r101:V, reg p15:p(V +), reg r103:V, reg p16:p(V +), reg r105:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r106:V, reg r107:V, reg except:*, reg except1:V, reg c65:V, reg r108:V, reg c66:L, reg lapply:cls, reg pkgs:*, reg pkgs1:V, reg p17:p(V +), reg list:*, reg list1:V, reg p18:p(V +), reg evalToChar:cls, reg except2:*, reg except3:V, reg p19:p(V +), reg r112:V, reg p20:p(V +), reg r114:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r116:V, reg r117:V, reg imports:*, reg imports1:V, reg pkgs2:*, reg pkgs3:V, reg c67:cls, reg r118:V, reg e63:*, reg e64:V, reg c68:L, reg e66:V, reg dr36:V, reg dc18:L, reg dx38:V, reg dx39:V, reg __15:cls, reg r119:V, reg imp:*, reg imp1:V, reg c69:L, reg imp3:V, reg dr38:V, reg dc19:L, reg dx40:V, reg dx41:V, reg __16:cls, reg r120:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r121:V, reg r122:V, reg ivars:*, reg ivars1:V, reg names2:cls, reg r123:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r124:V, reg r125:V, reg asChar7:cls, reg imp4:*, reg imp5:V, reg c70:L, reg imp7:V, reg dr40:V, reg dc20:L, reg dx42:V, reg dx43:V, reg __17:cls, reg r126:V, reg p21:p(V +), reg r128:V, reg structure1:cls, reg asChar8:cls, reg ivars2:*, reg ivars3:V, reg p22:p(V +), reg r130:V, reg p23:p(V +), reg inames:*, reg inames1:V, reg p24:p(V +), reg r133:V, reg list2:cls, reg r134:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r135:V, reg r136:V, reg imports2:*, reg imports3:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r137:V, reg r138:V, reg imp8:*, reg imp9:V, reg list3:cls, reg r139:V, reg c71:cls, reg r140:V, reg asChar9:cls, reg e67:*, reg e68:V, reg c72:L, reg e70:V, reg dr42:V, reg dc21:L, reg dx44:V, reg dx45:V, reg __18:cls, reg r141:V, reg p25:p(V +), reg r143:V, reg imp10:*, reg imp11:V, reg c73:L, reg imp13:V, reg dr44:V, reg dc22:L, reg dx46:V, reg dx47:V, reg __19:cls, reg r144:V, reg imp14:*, reg imp15:V, reg c74:L, reg imp17:V, reg dr46:V, reg dc23:L, reg dx48:V, reg dx49:V, reg __20:cls, reg r145:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r146:V, reg r147:V, reg asChar10:cls, reg pkg:*, reg pkg1:V, reg p26:p(V +), reg r149:V, reg asChar11:cls, reg impClasses:*, reg impClasses1:V, reg p27:p(V +), reg r151:V, reg list4:cls, reg r152:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r153:V, reg r154:V, reg importClasses:*, reg importClasses1:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r155:V, reg r156:V, reg imp18:*, reg imp19:V, reg list5:cls, reg r157:V, reg c75:cls, reg r158:V, reg asChar12:cls, reg e71:*, reg e72:V, reg c76:L, reg e74:V, reg dr48:V, reg dc24:L, reg dx50:V, reg dx51:V, reg __21:cls, reg r159:V, reg p28:p(V +), reg r161:V, reg imp20:*, reg imp21:V, reg c77:L, reg imp23:V, reg dr50:V, reg dc25:L, reg dx52:V, reg dx53:V, reg __22:cls, reg r162:V, reg imp24:*, reg imp25:V, reg c78:L, reg imp27:V, reg dr52:V, reg dc26:L, reg dx54:V, reg dx55:V, reg __23:cls, reg r163:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r164:V, reg r165:V, reg asChar13:cls, reg pkg2:*, reg pkg3:V, reg p29:p(V +), reg r167:V, reg asChar14:cls, reg impMethods:*, reg impMethods1:V, reg p30:p(V +), reg r169:V, reg list6:cls, reg r170:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r171:V, reg r172:V, reg importMethods:*, reg importMethods1:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r173:V, reg r174:V, reg imp28:*, reg imp29:V, reg list7:cls, reg r175:V, reg c79:cls, reg r176:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r177:V, reg r178:V, reg e75:*, reg e76:V, reg c80:L, reg e78:V, reg dr54:V, reg dc27:L, reg dx56:V, reg dx57:V, reg __24:cls, reg r179:V, reg as_character2:cls, reg r180:V, reg structure2:cls, reg sym23:cls, reg base23:cls, reg guard23:L, reg r181:V, reg r182:V, reg dynlibs2:*, reg dynlibs3:V, reg dyl:*, reg dyl1:V, reg c81:cls, reg r183:V, reg p31:p(V +), reg sym24:cls, reg base24:cls, reg guard24:L, reg r185:V, reg r186:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r187:V, reg r188:V, reg dynlibs4:*, reg dynlibs5:V, reg names3:cls, reg r189:V, reg ifelse:cls, reg sym26:cls, reg base26:cls, reg guard26:L, reg r190:V, reg r191:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r192:V, reg r193:V, reg e79:*, reg e80:V, reg names4:cls, reg r194:V, reg c82:V, reg r195:V, reg c83:L, reg c85:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r196:V, reg c88:L, reg r197:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r198:V, reg c91:L, reg r199:V, reg e81:*, reg e82:V, reg names5:cls, reg r200:V, reg c92:L, reg c94:L, reg r202:V, reg dr56:V, reg dc28:L, reg dx58:V, reg c96:L, reg dx59:V, reg __25:cls, reg r203:V, reg nzchar:cls, reg r204:V, reg c97:L, reg c98:V, reg p32:p(V +), reg sym30:cls, reg base30:cls, reg guard30:L, reg r206:V, reg r207:V, reg e83:*, reg e84:V, reg names6:cls, reg r208:V, reg c100:L, reg r210:V, reg dr58:V, reg dc29:L, reg dx60:V, reg dx61:V, reg __26:cls, reg r211:V, reg p33:p(V +), reg r213:V, reg c101:cls, reg r214:V, reg p34:p(V +), reg r216:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r217:V, reg r218:V, reg e85:*, reg e86:V, reg length2:cls, reg r219:V, reg r220:V, reg c102:L, reg sym32:cls, reg base32:cls, reg guard32:L, reg r221:V, reg r222:V, reg e87:*, reg e88:V, reg c103:L, reg e90:V, reg dr60:V, reg dc30:L, reg dx62:V, reg dx63:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r223:V, reg e93:V, reg r224:V, reg c104:cls, reg r225:V, reg r226:V, reg __27:cls, reg r227:V, reg as_character3:cls, reg r228:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r229:V, reg r230:V, reg e94:*, reg e95:V, reg c105:L, reg e97:V, reg dr62:V, reg dc31:L, reg dx64:V, reg dx65:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r231:V, reg e100:V, reg r232:V, reg c106:cls, reg r233:V, reg r234:V, reg __28:cls, reg r235:V, reg names7:cls, reg r236:V, reg l12:*, reg names__1:cls, reg r237:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r238:V, reg r239:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r240:V, reg r241:V, reg symNames:*, reg symNames1:V, reg names8:cls, reg r242:V, reg length3:cls, reg r243:V, reg r244:V, reg c107:L, reg symNames2:*, reg symNames3:V, reg l13:*, reg names__2:cls, reg r245:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r246:V, reg r247:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r248:V, reg r249:V, reg symNames5:*, reg symNames6:V, reg names9:cls, reg r250:V, reg r251:V, reg any:cls, reg r252:V, reg c108:L, reg symNames7:*, reg symNames8:V, reg c109:L, reg symNames10:V, reg dr64:V, reg dc32:L, reg dx66:V, reg dx67:V, reg w:*, reg w1:V, reg __29:cls, reg r253:V, reg l14:*, reg names10:cls, reg r254:V, reg c110:L, reg dx69:V, reg l16:*, reg r256:V, reg dr66:V, reg dc33:L, reg dx71:V, reg dx72:V, reg l18:*, reg dx73:V, reg w2:*, reg w3:V, reg ___1:cls, reg r257:V, reg names__3:cls, reg r258:V, reg duplicated:cls, reg sym40:cls, reg base40:cls, reg guard40:L, reg r259:V, reg r260:V, reg symNames11:*, reg symNames12:V, reg names11:cls, reg r261:V, reg p35:p(V +), reg r263:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r264:V, reg r265:V, reg dup:*, reg dup1:V, reg any1:cls, reg r266:V, reg c111:L, reg warning:cls, reg gettextf:cls, reg paste:cls, reg sQuote:cls, reg sym42:cls, reg base42:cls, reg guard42:L, reg r267:V, reg r268:V, reg symNames13:*, reg symNames14:V, reg names12:cls, reg r269:V, reg c112:L, reg r271:V, reg dr68:V, reg dc34:L, reg dx74:V, reg dx75:V, reg dup2:*, reg dup3:V, reg __30:cls, reg r272:V, reg p36:p(V +), reg r274:V, reg p37:p(V +), reg r276:V, reg p38:p(V +), reg dyl2:*, reg dyl3:V, reg p39:p(V +), reg r279:V, reg p40:p(V +), reg r281:V, reg symNames15:*, reg symNames16:V, reg c113:L, reg symNames18:V, reg dr70:V, reg dc35:L, reg dx76:V, reg dx77:V, reg dup4:*, reg dup5:V, reg r283:V, reg __31:cls, reg r284:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r285:V, reg r286:V, reg c114:cls, reg r287:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r288:V, reg r289:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r290:V, reg r291:V, reg symNames19:*, reg symNames20:V, reg names13:cls, reg r292:V, reg match:cls, reg r293:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r294:V, reg r295:V, reg idx:*, reg idx1:V, reg is_na:cls, reg r296:V, reg r297:V, reg c115:L, reg sym47:cls, reg base47:cls, reg guard47:L, reg r298:V, reg r299:V, reg symNames21:*, reg symNames22:V, reg c116:L, reg symNames24:V, reg dr72:V, reg dc36:L, reg dx78:V, reg dx79:V, reg idx2:*, reg idx3:V, reg __32:cls, reg r300:V, reg nzchar1:cls, reg r301:V, reg c117:L, reg parse:cls, reg symNames25:*, reg symNames26:V, reg c118:L, reg symNames28:V, reg dr74:V, reg dc37:L, reg dx80:V, reg dx81:V, reg idx4:*, reg idx5:V, reg __33:cls, reg r302:V, reg p41:p(V +), reg r304:V, reg c119:L, reg r306:V, reg dr76:V, reg dc38:L, reg dx82:V, reg dx83:V, reg __34:cls, reg r307:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r308:V, reg r309:V, reg e101:*, reg e102:V, reg is_call:cls, reg r310:V, reg c120:L, reg eval1:cls, reg e103:*, reg e104:V, reg p42:p(V +), reg _GlobalEnv2:*, reg _GlobalEnv3:V, reg p43:p(V +), reg r313:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r315:V, reg r316:V, reg e105:*, reg e106:V, reg as_character4:cls, reg r317:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r318:V, reg r319:V, reg val:*, reg val1:V, reg length4:cls, reg r320:V, reg c121:L, reg val2:*, reg val3:V, reg l19:*, reg c122:L, reg val5:V, reg l21:*, reg dr78:V, reg dc39:L, reg dx84:V, reg val7:V, reg dx85:V, reg sym51:cls, reg base51:cls, reg guard51:L, reg r321:V, reg val12:V, reg l24:*, reg val13:V, reg r322:V, reg val14:*, reg val15:V, reg r323:I, reg ___2:cls, reg r324:V, reg val16:V, reg symNames29:*, reg symNames30:V, reg c123:L, reg symNames32:V, reg dr80:V, reg dc40:L, reg dx86:V, reg dx87:V, reg idx6:*, reg idx7:V, reg r325:V, reg __35:cls, reg r326:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r327:V, reg r328:V, reg sym53:cls, reg base53:cls, reg guard53:L, reg r329:V, reg r330:V, reg symNames33:*, reg symNames34:V, reg names14:cls, reg r331:V, reg match1:cls, reg r332:V, reg sym54:cls, reg base54:cls, reg guard54:L, reg r333:V, reg r334:V, reg idx8:*, reg idx9:V, reg is_na1:cls, reg r335:V, reg r336:V, reg c124:L, reg sym55:cls, reg base55:cls, reg guard55:L, reg r337:V, reg r338:V, reg symNames35:*, reg symNames36:V, reg c125:L, reg symNames38:V, reg dr82:V, reg dc41:L, reg dx89:V, reg dx90:V, reg idx10:*, reg idx11:V, reg __36:cls, reg r339:V, reg as_logical:cls, reg r340:V, reg symNames39:*, reg symNames40:V, reg c126:L, reg symNames42:V, reg dr84:V, reg dc42:L, reg dx91:V, reg dx92:V, reg idx12:*, reg idx13:V, reg r341:V, reg __37:cls, reg r342:V, reg _in_:cls, reg dyl4:*, reg dyl5:V, reg p44:p(V +), reg sym56:cls, reg base56:cls, reg guard56:L, reg r344:V, reg r345:V, reg nativeRoutines:*, reg nativeRoutines1:V, reg names15:cls, reg r346:V, reg p45:p(V +), reg r348:V, reg c127:L, reg mergeNativeRoutineMaps:cls, reg nativeRoutines2:*, reg nativeRoutines3:V, reg c128:L, reg nativeRoutines5:V, reg dr86:V, reg dc43:L, reg dx94:V, reg dx95:V, reg dyl6:*, reg dyl7:V, reg __38:cls, reg r349:V, reg p46:p(V +), reg useRegistration:*, reg useRegistration1:V, reg p47:p(V +), reg symNames43:*, reg symNames44:V, reg p48:p(V +), reg fixes:*, reg fixes1:V, reg p49:p(V +), reg r354:V, reg r355:V, reg nativeRoutineMap:cls, reg useRegistration2:*, reg useRegistration3:V, reg p50:p(V +), reg symNames45:*, reg symNames46:V, reg p51:p(V +), reg fixes2:*, reg fixes3:V, reg p52:p(V +), reg r359:V, reg l25:*, reg c129:L, reg r361:V, reg l27:*, reg dr88:V, reg dc44:L, reg dx96:V, reg r363:V, reg dx97:V, reg dyl8:*, reg dyl9:V, reg ____:cls, reg r364:V, reg e107:*, reg e108:V, reg c130:L, reg e110:V, reg dr90:V, reg dc45:L, reg dx98:V, reg dx99:V, reg __39:cls, reg r365:V, reg sym57:cls, reg base57:cls, reg guard57:L, reg r366:V, reg r367:V, reg spec:*, reg spec1:V, reg length5:cls, reg r368:V, reg r369:V, reg c131:L, reg c133:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r370:V, reg c136:L, reg r371:V, reg spec2:*, reg spec3:V, reg length6:cls, reg r372:V, reg r373:V, reg c137:L, reg c138:V, reg c140:L, reg stop1:cls, reg gettextf1:cls, reg deparse:cls, reg e111:*, reg e112:V, reg p53:p(V +), reg r375:V, reg p54:p(V +), reg r377:V, reg p55:p(V +), reg r379:V, reg nS3:*, reg nS4:V, reg r381:V, reg nS5:*, reg nS6:V, reg nS3methods:*, reg nS3methods1:V, reg r382:V, reg c141:L, reg S3methods:*, reg S3methods1:V, reg nS3methods2:*, reg nS3methods3:V, reg nS3methods4:*, reg nS3methods5:V, reg r383:V, reg matrix:cls, reg nS3methods6:*, reg nS3methods7:V, reg p56:p(V +), reg r385:V, reg sym59:cls, reg base59:cls, reg guard59:L, reg r386:V, reg r387:V, reg nold:*, reg nold1:V, reg r388:I, reg s1:V, reg l28:I, reg i6:I, reg i7:I, reg i8:I, reg c142:L, reg x1:V, reg old:*, reg old1:V, reg c143:L, reg i12:I, reg old3:V, reg dr92:V, reg dc46:L, reg dx100:V, reg i14:I, reg dx101:V, reg ind:*, reg ind1:V, reg i15:*, reg i16:V, reg __40:cls, reg r389:V, reg l29:*, reg c144:L, reg i18:I, reg dx103:V, reg l31:*, reg dr94:V, reg dc47:L, reg dx105:V, reg i20:I, reg dx107:V, reg ind2:*, reg ind3:V, reg i21:*, reg i22:V, reg ___3:cls, reg r390:V, reg new:*, reg new1:V, reg rm:cls, reg old4:*, reg old5:V, reg p57:p(V +), reg new2:*, reg new3:V, reg p58:p(V +), reg r393:V, reg sym60:cls, reg base60:cls, reg guard60:L, reg r395:V, reg r396:V, reg spec4:*, reg spec5:V, reg c145:L, reg spec7:V, reg dr96:V, reg dc48:L, reg dx108:V, reg dx109:V, reg __41:cls, reg r397:V, reg is_call1:cls, reg r398:V, reg c146:L, reg c148:V, reg sym61:cls, reg base61:cls, reg guard61:L, reg r399:V, reg c151:L, reg r400:V, reg sym62:cls, reg base62:cls, reg guard62:L, reg r401:V, reg c154:L, reg r402:V, reg gen:*, reg gen1:V, reg c155:L, reg c157:L, reg gen3:V, reg dr98:V, reg dc49:L, reg dx110:V, reg c159:L, reg dx111:V, reg __42:cls, reg r403:V, reg as_character5:cls, reg r404:V, reg identical:cls, reg r405:V, reg c160:L, reg c161:V, reg c163:L, reg sym63:cls, reg base63:cls, reg guard63:L, reg r406:V, reg r407:V, reg gen4:*, reg gen5:V, reg c164:L, reg gen7:V, reg dr100:V, reg dc50:L, reg dx112:V, reg dx113:V, reg __43:cls, reg r408:V, reg as_character6:cls, reg r409:V, reg c165:L, reg r411:V, reg dr102:V, reg dc51:L, reg dx114:V, reg dx115:V, reg __44:cls, reg r412:V, reg sym64:cls, reg base64:cls, reg guard64:L, reg r413:V, reg r414:V, reg gen8:*, reg gen9:V, reg c166:L, reg gen11:V, reg dr104:V, reg dc52:L, reg dx116:V, reg dx117:V, reg __45:cls, reg r415:V, reg as_character7:cls, reg r416:V, reg c167:L, reg r418:V, reg dr106:V, reg dc53:L, reg dx118:V, reg dx119:V, reg __46:cls, reg r419:V, reg sym65:cls, reg base65:cls, reg guard65:L, reg r420:V, reg r421:V, reg gen12:*, reg gen13:V, reg asChar15:cls, reg spec8:*, reg spec9:V, reg c168:L, reg spec11:V, reg dr108:V, reg dc54:L, reg dx120:V, reg dx121:V, reg __47:cls, reg r422:V, reg p59:p(V +), reg r424:V, reg pkg4:*, reg pkg5:V, reg c169:cls, reg r425:V, reg l32:*, reg c170:L, reg r427:V, reg l34:*, reg dr110:V, reg dc55:L, reg dx122:V, reg r429:V, reg dx123:V, reg nS7:*, reg nS8:V, reg sym66:cls, reg base66:cls, reg guard66:L, reg r434:V, reg r435:V, reg l37:*, reg r436:V, reg nS11:V, reg r437:V, reg sym67:cls, reg base67:cls, reg guard67:L, reg r442:V, reg r443:V, reg l40:*, reg r444:V, reg nS14:V, reg r445:V, reg spec12:*, reg spec13:V, reg r446:I, reg c171:cls, reg r447:V, reg ___4:cls, reg r448:V, reg asChar16:cls, reg spec14:*, reg spec15:V, reg p60:p(V +), reg r450:V, reg l41:*, reg c172:L, reg r452:V, reg l43:*, reg dr112:V, reg dc56:L, reg dx124:V, reg r454:V, reg dx125:V, reg nS15:*, reg nS16:V, reg sym68:cls, reg base68:cls, reg guard68:L, reg r459:V, reg r460:V, reg l46:*, reg r461:V, reg nS19:V, reg r462:V, reg spec16:*, reg spec17:V, reg r463:I, reg ___5:cls, reg r464:V, reg stop2:cls, reg gettextf2:cls, reg deparse1:cls, reg e113:*, reg e114:V, reg p61:p(V +), reg r466:V, reg p62:p(V +), reg r468:V, reg p63:p(V +), reg r470:V |
    mkenv;
    st e = e;
    r = clos inner912049409;
    st asChar = r;
    r1 = clos inner912049409;
    st evalToChar = r1;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L143() else L144();
  L0(r3):
    c1 = `is.vector`(r3, "any");
    if c1 then L150() else L151();
  L143():
    e1 = ld e;
    check L145() else D0();
  L144():
    r2 = dyn base(<lang `[[`(e, 1)>);
    goto L0(r2);
  D0():
    deopt 8 [e1];
  L145():
    e2 = force? e1;
    checkMissing(e2);
    c = `is.object`(e2);
    if c then L146() else L147(e2);
  L150():
    c2 = inherits(r3, "factor", FALSE);
    if c2 then L152() else L153();
  L151():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L1(dx1):
    as_character = ldf `as.character` in base;
    r5 = dyn as_character(dx1);
    check L149() else D1();
  L146():
    dr = tryDispatchBuiltin.1("[[", e2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L148() else L147(dr);
  L147(e4):
    __ = ldf `[[` in base;
    r4 = dyn __(e4, 1);
    goto L1(r4);
  L152():
    c3 = `is.character`(r3);
    if c3 then L154() else L155();
  L153():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L152();
  D1():
    deopt 14 [r5];
  L2():
    eval = ldf eval;
    check L195() else D4();
  L3():
    as_list = ldf `as.list`;
    check L210() else D12();
  L4():
    parseDirective3 = ldf parseDirective;
    check L216() else D16();
  L5():
    e35 = ld e;
    check L244() else D28();
  L6():
    asChar2 = ldf asChar;
    check L256() else D34();
  L7():
    asChar3 = ldf asChar;
    check L264() else D39();
  L8():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L272() else L273();
  L9():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L279() else L280();
  L10():
    e55 = ld e;
    check L286() else D52();
  L11():
    e63 = ld e;
    check L310() else D61();
  L12():
    asChar9 = ldf asChar;
    check L338() else D74();
  L13():
    asChar12 = ldf asChar;
    check L364() else D87();
  L14():
    sym22 = ldf `as.character`;
    base22 = ldf `as.character` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L390() else L391();
  L15():
    e107 = ld e;
    check L576() else D178();
  L16():
    stop2 = ldf stop;
    check L690() else D223();
  L148():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L149():
    goto L0(r5);
  L154():
    c4 = `==`.6(r3, "if");
    if c4 then L2() else L156();
  L155():
    i_ddd = dots[r3];
    i = `as.integer`(i_ddd);
    c21 = `==`.5(i, 1);
    if c21 then L2() else L173();
  D4():
    deopt 23 [];
  D12():
    deopt 47 [];
  D16():
    deopt 59 [];
  D28():
    deopt 100 [e35];
  D34():
    deopt 124 [];
  D39():
    deopt 139 [];
  D52():
    deopt 177 [e55];
  D61():
    deopt 216 [e63];
  D74():
    deopt 265 [];
  D87():
    deopt 309 [];
  D178():
    deopt 657 [e107];
  D223():
    deopt 847 [];
  L34(r84):
    sst exportClasses = r84;
    invisible.0();
    popenv;
    return r84;
  L35(r90):
    sst exportMethods = r90;
    invisible.0();
    popenv;
    return r90;
  L56(r178):
    st dyl = r178;
    structure2 = ldf structure;
    check L397() else D102();
  L156():
    c5 = `==`.6(r3, "{");
    if c5 then L3() else L157();
  L173():
    c22 = `==`.5(i, 2);
    if c22 then L3() else L174();
  L195():
    p = prom<V +>{
      e5 = ld e;
      e6 = force? e5;
      checkMissing(e6);
      c39 = `is.object`(e6);
      if c39 then L1() else L2(e6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", e6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(e8):
      __1 = ldf `[[` in base;
      r7 = dyn __1(e8, 2);
      goto L0(r7);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p1 = prom<V +>{
      _GlobalEnv = ld `.GlobalEnv`;
      _GlobalEnv1 = force? _GlobalEnv;
      checkMissing(_GlobalEnv1);
      return _GlobalEnv1;
    };
    r10 = dyn eval(p, p1);
    check L196() else D5();
  L210():
    p4 = prom<V +>{
      e19 = ld e;
      e20 = force? e19;
      checkMissing(e20);
      c44 = `is.object`(e20);
      if c44 then L1() else L2(e20);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", e20);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(e22):
      __4 = ldf `[` in base;
      r21 = dyn __4(e22, -1);
      goto L0(r21);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r23 = dyn as_list(p4);
    check L211() else D13();
  L216():
    p6 = prom<V +>{
      e23 = ld e;
      e24 = force? e23;
      checkMissing(e24);
      c46 = `is.object`(e24);
      if c46 then L1() else L2(e24);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[[", e24);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(e26):
      __5 = ldf `[[` in base;
      r26 = dyn __5(e26, 3);
      goto L0(r26);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r28 = dyn parseDirective3(p6);
    check L217() else D17();
  L244():
    e36 = force? e35;
    checkMissing(e36);
    c52 = `is.object`(e36);
    if c52 then L245() else L246(e36);
  L256():
    p11 = prom<V +>{
      e39 = ld e;
      e40 = force? e39;
      checkMissing(e40);
      c54 = `is.object`(e40);
      if c54 then L1() else L2(e40);
    L0(dx25):
      return dx25;
    L1():
      dr22 = tryDispatchBuiltin.1("[", e40);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(e42):
      __10 = ldf `[` in base;
      r71 = dyn __10(e42, -1);
      goto L0(r71);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx24);
    };
    r73 = dyn asChar2(p11);
    check L257() else D35();
  L264():
    p12 = prom<V +>{
      e43 = ld e;
      e44 = force? e43;
      checkMissing(e44);
      c56 = `is.object`(e44);
      if c56 then L1() else L2(e44);
    L0(dx27):
      return dx27;
    L1():
      dr24 = tryDispatchBuiltin.1("[", e44);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(e46):
      __11 = ldf `[` in base;
      r77 = dyn __11(e46, -1);
      goto L0(r77);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx26);
    };
    r79 = dyn asChar3(p12);
    check L265() else D40();
  L272():
    asChar4 = ldf asChar;
    check L274() else D44();
  L273():
    r83 = dyn base8(<lang asChar(`[`(e, `-`(1)))>, <sym exportClasses>);
    goto L34(r83);
  L279():
    asChar5 = ldf asChar;
    check L281() else D48();
  L280():
    r89 = dyn base9(<lang asChar(`[`(e, `-`(1)))>, <sym exportMethods>);
    goto L35(r89);
  L286():
    e56 = force? e55;
    checkMissing(e56);
    c62 = `is.object`(e56);
    if c62 then L288() else L289(e56);
  L310():
    e64 = force? e63;
    checkMissing(e64);
    c68 = `is.object`(e64);
    if c68 then L311() else L312(e64);
  L338():
    p25 = prom<V +>{
      e67 = ld e;
      e68 = force? e67;
      checkMissing(e68);
      c72 = `is.object`(e68);
      if c72 then L1() else L2(e68);
    L0(dx45):
      return dx45;
    L1():
      dr42 = tryDispatchBuiltin.1("[", e68);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L3() else L2(dr42);
    L2(e70):
      __18 = ldf `[` in base;
      r141 = dyn __18(e70, -1);
      goto L0(r141);
    L3():
      dx44 = getTryDispatchBuiltinValue(dr42);
      goto L0(dx44);
    };
    r143 = dyn asChar9(p25);
    check L339() else D75();
  L364():
    p28 = prom<V +>{
      e71 = ld e;
      e72 = force? e71;
      checkMissing(e72);
      c76 = `is.object`(e72);
      if c76 then L1() else L2(e72);
    L0(dx51):
      return dx51;
    L1():
      dr48 = tryDispatchBuiltin.1("[", e72);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L3() else L2(dr48);
    L2(e74):
      __21 = ldf `[` in base;
      r159 = dyn __21(e74, -1);
      goto L0(r159);
    L3():
      dx50 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx50);
    };
    r161 = dyn asChar12(p28);
    check L365() else D88();
  L390():
    e75 = ld e;
    check L392() else D100();
  L391():
    r177 = dyn base22(<lang `[`(e, 2)>);
    goto L56(r177);
  L576():
    e108 = force? e107;
    checkMissing(e108);
    c130 = `is.object`(e108);
    if c130 then L577() else L578(e108);
  L690():
    p63 = prom<V +>{
      gettextf2 = ldf gettextf;
      p62 = prom<V +>{
        deparse1 = ldf deparse;
        p61 = prom<V +>{
          e113 = ld e;
          e114 = force? e113;
          checkMissing(e114);
          return e114;
        };
        r466 = dyn deparse1[, nlines](p61, 1);
        return r466;
      };
      r468 = dyn gettextf2("unknown namespace directive: %s", p62);
      return r468;
    };
    r470 = dyn stop2[, `call.`, domain](p63, FALSE, NA_LGL);
    check L691() else D224();
  D5():
    deopt 26 [r10];
  D13():
    deopt 49 [r23];
  D17():
    deopt 61 [r28];
  D35():
    deopt 126 [r73];
  D40():
    deopt 141 [r79];
  D44():
    deopt 156 [];
  D48():
    deopt 168 [];
  D75():
    deopt 267 [r143];
  D88():
    deopt 311 [r161];
  D100():
    deopt 354 [e75];
  D102():
    deopt 363 [];
  D224():
    deopt 853 [r470];
  L30(dx23):
    st exp = dx23;
    structure = ldf structure;
    check L248() else D29();
  L40(dx39):
    st imp = dx39;
    imp = ld imp;
    check L314() else D62();
  L111(dx99):
    st spec = dx99;
    sym57 = ldf length;
    base57 = ldf length in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L580() else L581();
  L157():
    c6 = `==`.6(r3, "=");
    if c6 then L4() else L158();
  L174():
    c23 = `==`.5(i, 3);
    if c23 then L17() else L175();
  L196():
    c40 = `as.logical`(r10);
    if c40 then L197() else L19();
  L211():
    s = toForSeq(r23);
    l = length(s);
    i1 = 0;
    goto L22(i1);
  L217():
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L218() else L219();
  L245():
    dr20 = tryDispatchBuiltin.1("[", e36);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L247() else L246(dr20);
  L246(e38):
    __9 = ldf `[` in base;
    r59 = dyn __9(e38, -1);
    goto L30(r59);
  L257():
    st pat = r73;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L258() else L259();
  L265():
    st pat = r79;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L266() else L267();
  L274():
    p13 = prom<V +>{
      e47 = ld e;
      e48 = force? e47;
      checkMissing(e48);
      c58 = `is.object`(e48);
      if c58 then L1() else L2(e48);
    L0(dx29):
      return dx29;
    L1():
      dr26 = tryDispatchBuiltin.1("[", e48);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(e50):
      __12 = ldf `[` in base;
      r85 = dyn __12(e50, -1);
      goto L0(r85);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx28);
    };
    r87 = dyn asChar4(p13);
    check L275() else D45();
  L281():
    p14 = prom<V +>{
      e51 = ld e;
      e52 = force? e51;
      checkMissing(e52);
      c60 = `is.object`(e52);
      if c60 then L1() else L2(e52);
    L0(dx31):
      return dx31;
    L1():
      dr28 = tryDispatchBuiltin.1("[", e52);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(e54):
      __13 = ldf `[` in base;
      r91 = dyn __13(e54, -1);
      goto L0(r91);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx30);
    };
    r93 = dyn asChar5(p14);
    check L282() else D49();
  L287(dx33):
    st except = dx33;
    l9 = ld e;
    c63 = `is.object`(l9);
    if c63 then L292() else L293(NULL, l9);
  L288():
    dr30 = tryDispatchBuiltin.1("$", e56);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L290() else L289(dr30);
  L289(e58):
    r95 = `$`(e58, <sym except>);
    goto L287(r95);
  L311():
    dr36 = tryDispatchBuiltin.1("[", e64);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L313() else L312(dr36);
  L312(e66):
    __15 = ldf `[` in base;
    r119 = dyn __15(e66, -1);
    goto L40(r119);
  L339():
    st imp = r143;
    imp10 = ld imp;
    check L340() else D76();
  L365():
    st imp = r161;
    imp20 = ld imp;
    check L366() else D89();
  L392():
    e76 = force? e75;
    checkMissing(e76);
    c80 = `is.object`(e76);
    if c80 then L393() else L394(e76);
  L397():
    p31 = prom<V +>{
      sym23 = ldf c;
      base23 = ldf c in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L1() else L2();
    L0(r182):
      return r182;
    L1():
      dynlibs2 = ld dynlibs;
      dynlibs3 = force? dynlibs2;
      checkMissing(dynlibs3);
      dyl = ld dyl;
      dyl1 = force? dyl;
      checkMissing(dyl1);
      c81 = ldf c in base;
      r183 = dyn c81(dynlibs3, dyl1);
      goto L0(r183);
    L2():
      r181 = dyn base23(<sym dynlibs>, <sym dyl>);
      goto L0(r181);
    };
    p34 = prom<V +>{
      sym24 = ldf c;
      base24 = ldf c in base;
      guard24 = `==`.4(sym24, base24);
      if guard24 then L2() else L3();
    L0(r186):
      return r186;
    L2():
      sym25 = ldf names;
      base25 = ldf names in base;
      guard25 = `==`.4(sym25, base25);
      if guard25 then L4() else L5();
    L3():
      r185 = dyn base24(<lang names(dynlibs)>, <lang ifelse(`&&`(`!`(is.null(names(e))), nzchar(`[`(names(e), 2))), `[`(names(e), 2), "")>);
      goto L0(r185);
    L1(r188):
      ifelse = ldf ifelse;
      p32 = prom<V +>{
        sym26 = ldf `is.null`;
        base26 = ldf `is.null` in base;
        guard26 = `==`.4(sym26, base26);
        if guard26 then L6() else L7();
      L0(r191):
        r195 = `!`(r191);
        c83 = `as.logical`(r195);
        if c83 then L10() else L2(c83);
      L6():
        sym27 = ldf names;
        base27 = ldf names in base;
        guard27 = `==`.4(sym27, base27);
        if guard27 then L8() else L9();
      L7():
        r190 = dyn base26(<lang names(e)>);
        goto L0(r190);
      L1(r193):
        c82 = `==`(r193, NULL);
        goto L0(c82);
      L2(c85):
        return c85;
      L8():
        e79 = ld e;
        e80 = force? e79;
        checkMissing(e80);
        names4 = ldf names in base;
        r194 = dyn names4(e80);
        goto L1(r194);
      L9():
        r192 = dyn base27(<sym e>);
        goto L1(r192);
      L10():
        sym28 = ldf nzchar;
        base28 = ldf nzchar in base;
        guard28 = `==`.4(sym28, base28);
        if guard28 then L11() else L12();
      L3(c88, r197):
        c97 = `as.logical`(r197);
        c98 = `&&`(c88, c97);
        goto L2(c98);
      L11():
        sym29 = ldf names;
        base29 = ldf names in base;
        guard29 = `==`.4(sym29, base29);
        if guard29 then L13() else L14();
      L12():
        r196 = dyn base28(<lang `[`(names(e), 2)>);
        goto L3(c83, r196);
      L4(c91, r199):
        c92 = `is.object`(r199);
        if c92 then L15() else L16(c91, r199);
      L13():
        e81 = ld e;
        e82 = force? e81;
        checkMissing(e82);
        names5 = ldf names in base;
        r200 = dyn names5(e82);
        goto L4(c83, r200);
      L14():
        r198 = dyn base29(<sym e>);
        goto L4(c83, r198);
      L5(c96, dx59):
        nzchar = ldf nzchar in base;
        r204 = dyn nzchar(dx59);
        goto L3(c96, r204);
      L15():
        dr56 = tryDispatchBuiltin.1("[", r199);
        dc28 = getTryDispatchBuiltinDispatched(dr56);
        if dc28 then L17() else L16(c91, dr56);
      L16(c94, r202):
        __25 = ldf `[` in base;
        r203 = dyn __25(r202, 2);
        goto L5(c94, r203);
      L17():
        dx58 = getTryDispatchBuiltinValue(dr56);
        goto L5(c91, dx58);
      };
      p33 = prom<V +>{
        sym30 = ldf names;
        base30 = ldf names in base;
        guard30 = `==`.4(sym30, base30);
        if guard30 then L2() else L3();
      L0(r207):
        c100 = `is.object`(r207);
        if c100 then L4() else L5(r207);
      L2():
        e83 = ld e;
        e84 = force? e83;
        checkMissing(e84);
        names6 = ldf names in base;
        r208 = dyn names6(e84);
        goto L0(r208);
      L3():
        r206 = dyn base30(<sym e>);
        goto L0(r206);
      L1(dx61):
        return dx61;
      L4():
        dr58 = tryDispatchBuiltin.1("[", r207);
        dc29 = getTryDispatchBuiltinDispatched(dr58);
        if dc29 then L6() else L5(dr58);
      L5(r210):
        __26 = ldf `[` in base;
        r211 = dyn __26(r210, 2);
        goto L1(r211);
      L6():
        dx60 = getTryDispatchBuiltinValue(dr58);
        goto L1(dx60);
      };
      r213 = dyn ifelse(p32, p33, "");
      c101 = ldf c in base;
      r214 = dyn c101(r188, r213);
      goto L0(r214);
    L4():
      dynlibs4 = ld dynlibs;
      dynlibs5 = force? dynlibs4;
      checkMissing(dynlibs5);
      names3 = ldf names in base;
      r189 = dyn names3(dynlibs5);
      goto L1(r189);
    L5():
      r187 = dyn base25(<sym dynlibs>);
      goto L1(r187);
    };
    r216 = dyn structure2[, names](p31, p34);
    check L398() else D103();
  L577():
    dr90 = tryDispatchBuiltin.1("[", e108);
    dc45 = getTryDispatchBuiltinDispatched(dr90);
    if dc45 then L579() else L578(dr90);
  L578(e110):
    __39 = ldf `[` in base;
    r365 = dyn __39(e110, -1);
    goto L111(r365);
  L691():
    popenv;
    return r470;
  D29():
    deopt 107 [];
  D45():
    deopt 158 [r87];
  D49():
    deopt 170 [r93];
  D62():
    deopt 222 [imp];
  D76():
    deopt 269 [imp10];
  D89():
    deopt 313 [imp20];
  D103():
    deopt 367 [r216];
  L17():
    stop = ldf stop;
    check L191() else D2();
  L19():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L201() else L202();
  L22(i2):
    i3 = `+`.1(i2, 1);
    c45 = `<`.1(l, i3);
    if c45 then L212() else L23();
  L24(r30):
    r34 = `==`(r30, "useDynLib");
    c49 = `as.logical`(r34);
    if c49 then L228() else L27();
  L32(r75):
    sst exportPatterns = r75;
    invisible.0();
    popenv;
    return r75;
  L33(r81):
    sst exportClassPatterns = r81;
    invisible.0();
    popenv;
    return r81;
  L57(dx57):
    as_character2 = ldf `as.character` in base;
    r180 = dyn as_character2(dx57);
    check L396() else D101();
  L112(r367):
    r369 = `!=`(r367, 2);
    c131 = `as.logical`(r369);
    if c131 then L584() else L113(c131);
  L158():
    c7 = `==`.6(r3, "<-");
    if c7 then L4() else L159();
  L175():
    c24 = `==`.5(i, 4);
    if c24 then L4() else L176();
  L197():
    parseDirective = ldf parseDirective;
    check L198() else D6();
  L218():
    e27 = ld e;
    check L220() else D18();
  L219():
    r29 = dyn base2(<lang `[[`(`[[`(e, 3), 1)>);
    goto L24(r29);
  L247():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L30(dx22);
  L248():
    p9 = prom<V +>{
      asChar1 = ldf asChar;
      p8 = prom<V +>{
        exp = ld exp;
        exp1 = force? exp;
        checkMissing(exp1);
        return exp1;
      };
      r61 = dyn asChar1(p8);
      return r61;
    };
    p10 = prom<V +>{
      sym4 = ldf names;
      base4 = ldf names in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r64):
      return r64;
    L1():
      exp2 = ld exp;
      exp3 = force? exp2;
      checkMissing(exp3);
      names1 = ldf names in base;
      r65 = dyn names1(exp3);
      goto L0(r65);
    L2():
      r63 = dyn base4(<sym exp>);
      goto L0(r63);
    };
    r67 = dyn structure[, names](p9, p10);
    check L249() else D30();
  L258():
    pat = ld pat;
    check L260() else D36();
  L259():
    r74 = dyn base6(<sym pat>, <sym exportPatterns>);
    goto L32(r74);
  L266():
    pat2 = ld pat;
    check L268() else D41();
  L267():
    r80 = dyn base7(<sym pat>, <sym exportClassPatterns>);
    goto L33(r80);
  L275():
    exportClasses = ld exportClasses;
    check L276() else D46();
  L282():
    exportMethods = ld exportMethods;
    check L283() else D50();
  L290():
    dx32 = getTryDispatchBuiltinValue(dr30);
    goto L287(dx32);
  L291(dx35):
    st e = dx35;
    as_list1 = ldf `as.list`;
    check L295() else D53();
  L292():
    dr32 = tryDispatchBuiltin.0("$<-", l9, NULL);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L294() else L293(NULL, dr32);
  L293(r97, l11):
    r100 = `$<-`(l11, <sym except>, NULL);
    goto L291(r100);
  L313():
    dx38 = getTryDispatchBuiltinValue(dr36);
    goto L40(dx38);
  L314():
    imp1 = force? imp;
    checkMissing(imp1);
    c69 = `is.object`(imp1);
    if c69 then L315() else L316(imp1);
  L340():
    imp11 = force? imp10;
    checkMissing(imp11);
    c73 = `is.object`(imp11);
    if c73 then L341() else L342(imp11);
  L366():
    imp21 = force? imp20;
    checkMissing(imp21);
    c77 = `is.object`(imp21);
    if c77 then L367() else L368(imp21);
  L393():
    dr54 = tryDispatchBuiltin.1("[", e76);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L395() else L394(dr54);
  L394(e78):
    __24 = ldf `[` in base;
    r179 = dyn __24(e78, 2);
    goto L57(r179);
  L398():
    sst dynlibs = r216;
    sym31 = ldf length;
    base31 = ldf length in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L399() else L400();
  L579():
    dx98 = getTryDispatchBuiltinValue(dr90);
    goto L111(dx98);
  L580():
    spec = ld spec;
    check L582() else D179();
  L581():
    r366 = dyn base57(<sym spec>);
    goto L112(r366);
  D2():
    deopt 16 [];
  D6():
    deopt 28 [];
  D18():
    deopt 64 [e27];
  D30():
    deopt 111 [r67];
  D36():
    deopt 130 [pat];
  D41():
    deopt 145 [pat2];
  D46():
    deopt 159 [exportClasses];
  D50():
    deopt 171 [exportMethods];
  D53():
    deopt 187 [];
  D101():
    deopt 360 [r180];
  D179():
    deopt 665 [spec];
  L20(r15):
    r17 = `==`(r15, 4);
    c42 = `as.logical`(r17);
    if c42 then L205() else L21();
  L23():
    x = `[[`(s, i3, NULL, TRUE);
    st ee = x;
    parseDirective2 = ldf parseDirective;
    check L213() else D14();
  L27():
    invisible.0();
    popenv;
    return NULL;
  L41(dx41):
    st ivars = dx41;
    sym12 = ldf names;
    base12 = ldf names in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L318() else L319();
  L46(dx47):
    st pkg = dx47;
    imp14 = ld imp;
    check L344() else D77();
  L51(dx53):
    st pkg = dx53;
    imp24 = ld imp;
    check L370() else D90();
  L58(r218):
    r220 = `>`(r218, 2);
    c102 = `as.logical`(r220);
    if c102 then L403() else L59();
  L113(c133):
    c140 = `as.logical`(c133);
    if c140 then L590() else L115();
  L159():
    c8 = `==`.6(r3, "export");
    if c8 then L5() else L160();
  L176():
    c25 = `==`.5(i, 5);
    if c25 then L5() else L177();
  L191():
    r6 = dyn stop("empty alternative in numeric switch");
    check L192() else D3();
  L198():
    p2 = prom<V +>{
      e9 = ld e;
      e10 = force? e9;
      checkMissing(e10);
      c41 = `is.object`(e10);
      if c41 then L1() else L2(e10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", e10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(e12):
      __2 = ldf `[[` in base;
      r11 = dyn __2(e12, 3);
      goto L0(r11);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r13 = dyn parseDirective(p2);
    check L199() else D7();
  L201():
    e13 = ld e;
    check L203() else D8();
  L202():
    r14 = dyn base1(<sym e>);
    goto L20(r14);
  L212():
    invisible.0();
    popenv;
    return i3;
  L220():
    e28 = force? e27;
    checkMissing(e28);
    c47 = `is.object`(e28);
    if c47 then L221() else L222(e28);
  L228():
    asChar = ldf asChar;
    check L229() else D20();
  L249():
    st exp = r67;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L250() else L251();
  L260():
    pat1 = force? pat;
    checkMissing(pat1);
    exportPatterns = ld exportPatterns;
    check L261() else D37();
  L268():
    pat3 = force? pat2;
    checkMissing(pat3);
    exportClassPatterns = ld exportClassPatterns;
    check L269() else D42();
  L276():
    exportClasses1 = force? exportClasses;
    checkMissing(exportClasses1);
    c59 = ldf c in base;
    r88 = dyn c59(r87, exportClasses1);
    check L277() else D47();
  L283():
    exportMethods1 = force? exportMethods;
    checkMissing(exportMethods1);
    c61 = ldf c in base;
    r94 = dyn c61(r93, exportMethods1);
    check L284() else D51();
  L294():
    dx34 = getTryDispatchBuiltinValue(dr32);
    goto L291(dx34);
  L295():
    p16 = prom<V +>{
      asChar6 = ldf asChar;
      p15 = prom<V +>{
        e59 = ld e;
        e60 = force? e59;
        checkMissing(e60);
        c64 = `is.object`(e60);
        if c64 then L1() else L2(e60);
      L0(dx37):
        return dx37;
      L1():
        dr34 = tryDispatchBuiltin.1("[", e60);
        dc17 = getTryDispatchBuiltinDispatched(dr34);
        if dc17 then L3() else L2(dr34);
      L2(e62):
        __14 = ldf `[` in base;
        r101 = dyn __14(e62, -1);
        goto L0(r101);
      L3():
        dx36 = getTryDispatchBuiltinValue(dr34);
        goto L0(dx36);
      };
      r103 = dyn asChar6(p15);
      return r103;
    };
    r105 = dyn as_list1(p16);
    check L296() else D54();
  L315():
    dr38 = tryDispatchBuiltin.1("[", imp1);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L317() else L316(dr38);
  L316(imp3):
    __16 = ldf `[` in base;
    r120 = dyn __16(imp3, -1);
    goto L41(r120);
  L341():
    dr44 = tryDispatchBuiltin.1("[[", imp11);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L343() else L342(dr44);
  L342(imp13):
    __19 = ldf `[[` in base;
    r144 = dyn __19(imp13, 1);
    goto L46(r144);
  L367():
    dr50 = tryDispatchBuiltin.1("[[", imp21);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L369() else L368(dr50);
  L368(imp23):
    __22 = ldf `[[` in base;
    r162 = dyn __22(imp23, 1);
    goto L51(r162);
  L395():
    dx56 = getTryDispatchBuiltinValue(dr54);
    goto L57(dx56);
  L396():
    goto L56(r180);
  L399():
    e85 = ld e;
    check L401() else D104();
  L400():
    r217 = dyn base31(<sym e>);
    goto L58(r217);
  L582():
    spec1 = force? spec;
    checkMissing(spec1);
    length5 = ldf length in base;
    r368 = dyn length5(spec1);
    check L583() else D180();
  L584():
    sym58 = ldf length;
    base58 = ldf length in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L585() else L586();
  D3():
    deopt 18 [r6];
  D7():
    deopt 30 [r13];
  D8():
    deopt 33 [e13];
  D14():
    deopt 51 [i3];
  D20():
    deopt 77 [];
  D37():
    deopt 132 [exportPatterns];
  D42():
    deopt 147 [exportClassPatterns];
  D47():
    deopt 162 [r88];
  D51():
    deopt 174 [r94];
  D54():
    deopt 189 [r105];
  D77():
    deopt 275 [imp14];
  D90():
    deopt 319 [imp24];
  D104():
    deopt 371 [e85];
  D180():
    deopt 668 [r368];
  L21():
    invisible.0();
    popenv;
    return NULL;
  L25(dx13):
    c48 = `is.object`(dx13);
    if c48 then L224() else L225(dx13);
  L31(r69):
    sst exports = r69;
    invisible.0();
    popenv;
    return r69;
  L42(r122):
    st inames = r122;
    sym13 = ldf list;
    base13 = ldf list in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L322() else L323();
  L59():
    invisible.0();
    popenv;
    return NULL;
  L114(c136, r371):
    r373 = `!=`(r371, 3);
    c137 = `as.logical`(r373);
    c138 = `&&`(c136, c137);
    goto L113(c138);
  L115():
    goto L116();
  L116():
    nS3 = ld nS3;
    check L594() else D185();
  L160():
    c9 = `==`.6(r3, "exportPattern");
    if c9 then L6() else L161();
  L177():
    c26 = `==`.5(i, 6);
    if c26 then L6() else L178();
  L192():
    popenv;
    return r6;
  L199():
    popenv;
    return r13;
  L203():
    e14 = force? e13;
    checkMissing(e14);
    length = ldf length in base;
    r16 = dyn length(e14);
    check L204() else D9();
  L205():
    parseDirective1 = ldf parseDirective;
    check L206() else D10();
  L213():
    p5 = prom<V +>{
      ee = ld ee;
      ee1 = force? ee;
      checkMissing(ee1);
      return ee1;
    };
    r25 = dyn parseDirective2(p5);
    check L214() else D15();
  L221():
    dr12 = tryDispatchBuiltin.1("[[", e28);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L223() else L222(dr12);
  L222(e30):
    __6 = ldf `[[` in base;
    r31 = dyn __6(e30, 3);
    goto L25(r31);
  L229():
    p7 = prom<V +>{
      e31 = ld e;
      e32 = force? e31;
      checkMissing(e32);
      c50 = `is.object`(e32);
      if c50 then L1() else L2(e32);
    L0(dx19):
      return dx19;
    L1():
      dr16 = tryDispatchBuiltin.1("[[", e32);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(e34):
      __8 = ldf `[[` in base;
      r35 = dyn __8(e34, 2);
      goto L0(r35);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx18);
    };
    r37 = dyn asChar(p7);
    check L230() else D21();
  L250():
    exports = ld exports;
    check L252() else D31();
  L251():
    r68 = dyn base5(<sym exports>, <sym exp>);
    goto L31(r68);
  L261():
    exportPatterns1 = force? exportPatterns;
    checkMissing(exportPatterns1);
    c55 = ldf c in base;
    r76 = dyn c55(pat1, exportPatterns1);
    check L262() else D38();
  L269():
    exportClassPatterns1 = force? exportClassPatterns;
    checkMissing(exportClassPatterns1);
    c57 = ldf c in base;
    r82 = dyn c57(pat3, exportClassPatterns1);
    check L270() else D43();
  L277():
    goto L34(r88);
  L284():
    goto L35(r94);
  L296():
    st pkgs = r105;
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L297() else L298();
  L317():
    dx40 = getTryDispatchBuiltinValue(dr38);
    goto L41(dx40);
  L318():
    ivars = ld ivars;
    check L320() else D63();
  L319():
    r121 = dyn base12(<sym ivars>);
    goto L42(r121);
  L343():
    dx46 = getTryDispatchBuiltinValue(dr44);
    goto L46(dx46);
  L344():
    imp15 = force? imp14;
    checkMissing(imp15);
    c74 = `is.object`(imp15);
    if c74 then L345() else L346(imp15);
  L369():
    dx52 = getTryDispatchBuiltinValue(dr50);
    goto L51(dx52);
  L370():
    imp25 = force? imp24;
    checkMissing(imp25);
    c78 = `is.object`(imp25);
    if c78 then L371() else L372(imp25);
  L401():
    e86 = force? e85;
    checkMissing(e86);
    length2 = ldf length in base;
    r219 = dyn length2(e86);
    check L402() else D105();
  L403():
    sym32 = ldf `as.character`;
    base32 = ldf `as.character` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L404() else L405();
  L583():
    goto L112(r368);
  L585():
    spec2 = ld spec;
    check L587() else D181();
  L586():
    r370 = dyn base58(<sym spec>);
    goto L114(c131, r370);
  L590():
    stop1 = ldf stop;
    check L591() else D183();
  D9():
    deopt 36 [r16];
  D10():
    deopt 40 [];
  D15():
    deopt 53 [i3, r25];
  D21():
    deopt 79 [r37];
  D31():
    deopt 115 [exports];
  D38():
    deopt 135 [r76];
  D43():
    deopt 150 [r82];
  D63():
    deopt 230 [ivars];
  D105():
    deopt 374 [r219];
  D181():
    deopt 673 [c131, spec2];
  D183():
    deopt 681 [];
  D185():
    deopt 690 [nS3];
  L26(dx17):
    as_character1 = ldf `as.character` in base;
    r33 = dyn as_character1(dx17);
    check L227() else D19();
  L36(r107):
    r108 = `!`(r107);
    c66 = `as.logical`(r108);
    if c66 then L300() else L37();
  L43(r125):
    st imp = r125;
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L329() else L330();
  L47(dx49):
    st impClasses = dx49;
    sym16 = ldf list;
    base16 = ldf list in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L348() else L349();
  L52(dx55):
    st impMethods = dx55;
    sym19 = ldf list;
    base19 = ldf list in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L374() else L375();
  L60(r222):
    st symNames = r222;
    sym34 = ldf names;
    base34 = ldf names in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L414() else L415();
  L161():
    c10 = `==`.6(r3, "exportClassPattern");
    if c10 then L7() else L162();
  L178():
    c27 = `==`.5(i, 7);
    if c27 then L7() else L179();
  L204():
    goto L20(r16);
  L206():
    p3 = prom<V +>{
      e15 = ld e;
      e16 = force? e15;
      checkMissing(e16);
      c43 = `is.object`(e16);
      if c43 then L1() else L2(e16);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", e16);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(e18):
      __3 = ldf `[[` in base;
      r18 = dyn __3(e18, 4);
      goto L0(r18);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r20 = dyn parseDirective1(p3);
    check L207() else D11();
  L214():
    goto L22(i3);
  L223():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L25(dx12);
  L224():
    dr14 = tryDispatchBuiltin.1("[[", dx13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L226() else L225(dr14);
  L225(dx15):
    __7 = ldf `[[` in base;
    r32 = dyn __7(dx15, 1);
    goto L26(r32);
  L230():
    l1 = sld dynlibs;
    names = ldf names;
    check L231() else D22();
  L252():
    exports1 = force? exports;
    checkMissing(exports1);
    exp4 = ld exp;
    check L253() else D32();
  L262():
    goto L32(r76);
  L270():
    goto L33(r82);
  L297():
    except = ld except;
    check L299() else D55();
  L298():
    r106 = dyn base10(<sym except>);
    goto L36(r106);
  L320():
    ivars1 = force? ivars;
    checkMissing(ivars1);
    names2 = ldf names in base;
    r123 = dyn names2(ivars1);
    check L321() else D64();
  L322():
    asChar7 = ldf asChar;
    check L324() else D65();
  L323():
    r124 = dyn base13(<lang asChar(`[`(imp, 1))>, <lang structure(asChar(ivars), names=inames)>);
    goto L43(r124);
  L345():
    dr46 = tryDispatchBuiltin.1("[", imp15);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L347() else L346(dr46);
  L346(imp17):
    __20 = ldf `[` in base;
    r145 = dyn __20(imp17, -1);
    goto L47(r145);
  L371():
    dr52 = tryDispatchBuiltin.1("[", imp25);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L373() else L372(dr52);
  L372(imp27):
    __23 = ldf `[` in base;
    r163 = dyn __23(imp27, -1);
    goto L52(r163);
  L402():
    goto L58(r219);
  L404():
    e87 = ld e;
    check L406() else D106();
  L405():
    r221 = dyn base32(<lang `[`(e, `-`(c(1, 2)))>);
    goto L60(r221);
  L587():
    spec3 = force? spec2;
    checkMissing(spec3);
    length6 = ldf length in base;
    r372 = dyn length6(spec3);
    check L588() else D182();
  L591():
    p55 = prom<V +>{
      gettextf1 = ldf gettextf;
      p54 = prom<V +>{
        deparse = ldf deparse;
        p53 = prom<V +>{
          e111 = ld e;
          e112 = force? e111;
          checkMissing(e112);
          return e112;
        };
        r375 = dyn deparse(p53);
        return r375;
      };
      r377 = dyn gettextf1("bad 'S3method' directive: %s", p54);
      return r377;
    };
    r379 = dyn stop1[, `call.`, domain](p55, FALSE, NA_LGL);
    check L592() else D184();
  L594():
    nS4 = force? nS3;
    checkMissing(nS4);
    r381 = `+`(nS4, 1);
    sst nS3 = r381;
    nS5 = ld nS3;
    check L595() else D186();
  D11():
    deopt 42 [r20];
  D19():
    deopt 73 [r33];
  D22():
    deopt 81 [r37, l1, r37];
  D32():
    deopt 117 [exp4];
  D55():
    deopt 192 [except];
  D64():
    deopt 233 [r123];
  D65():
    deopt 238 [];
  D106():
    deopt 379 [e87];
  D182():
    deopt 676 [c131, r372];
  D184():
    deopt 687 [r379];
  D186():
    deopt 695 [nS5];
  L37():
    goto L38();
  L38():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L304() else L305();
  L44(r136):
    sst imports = r136;
    invisible.0();
    popenv;
    return r136;
  L48(r147):
    st imp = r147;
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L355() else L356();
  L53(r165):
    st imp = r165;
    sym20 = ldf c;
    base20 = ldf c in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L381() else L382();
  L63(r230):
    l12 = ld symNames;
    names__1 = ldf `names<-`;
    check L424() else D112();
  L162():
    c11 = `==`.6(r3, "exportClass");
    if c11 then L8() else L163();
  L179():
    c28 = `==`.5(i, 8);
    if c28 then L17() else L180();
  L207():
    popenv;
    return r20;
  L226():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L26(dx16);
  L227():
    goto L24(r33);
  L231():
    r38 = dyn names(r37, NULL);
    check L232() else D23();
  L253():
    exp5 = force? exp4;
    checkMissing(exp5);
    c53 = ldf c in base;
    r70 = dyn c53(exports1, exp5);
    check L254() else D33();
  L299():
    except1 = force? except;
    checkMissing(except1);
    c65 = `==`(except1, NULL);
    goto L36(c65);
  L300():
    lapply = ldf lapply;
    check L301() else D56();
  L321():
    goto L42(r123);
  L324():
    p21 = prom<V +>{
      imp4 = ld imp;
      imp5 = force? imp4;
      checkMissing(imp5);
      c70 = `is.object`(imp5);
      if c70 then L1() else L2(imp5);
    L0(dx43):
      return dx43;
    L1():
      dr40 = tryDispatchBuiltin.1("[", imp5);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L3() else L2(dr40);
    L2(imp7):
      __17 = ldf `[` in base;
      r126 = dyn __17(imp7, 1);
      goto L0(r126);
    L3():
      dx42 = getTryDispatchBuiltinValue(dr40);
      goto L0(dx42);
    };
    r128 = dyn asChar7(p21);
    check L325() else D66();
  L329():
    imports2 = ld imports;
    check L331() else D70();
  L330():
    r135 = dyn base14(<sym imports>, <lang list(imp)>);
    goto L44(r135);
  L347():
    dx48 = getTryDispatchBuiltinValue(dr46);
    goto L47(dx48);
  L348():
    asChar10 = ldf asChar;
    check L350() else D78();
  L349():
    r146 = dyn base16(<lang asChar(pkg)>, <lang asChar(impClasses)>);
    goto L48(r146);
  L373():
    dx54 = getTryDispatchBuiltinValue(dr52);
    goto L52(dx54);
  L374():
    asChar13 = ldf asChar;
    check L376() else D91();
  L375():
    r164 = dyn base19(<lang asChar(pkg)>, <lang asChar(impMethods)>);
    goto L53(r164);
  L406():
    e88 = force? e87;
    checkMissing(e88);
    c103 = `is.object`(e88);
    if c103 then L407() else L408(e88);
  L414():
    e94 = ld e;
    check L416() else D109();
  L415():
    r229 = dyn base34(<lang `[`(e, `-`(c(1.0, 2.0)))>);
    goto L63(r229);
  L588():
    goto L114(c131, r372);
  L592():
    goto L116();
  L595():
    nS6 = force? nS5;
    checkMissing(nS6);
    nS3methods = ld nS3methods;
    check L596() else D187();
  D23():
    deopt 83 [r37, l1, r37, r38];
  D33():
    deopt 120 [r70];
  D56():
    deopt 197 [];
  D66():
    deopt 240 [r128];
  D70():
    deopt 252 [imports2];
  D78():
    deopt 284 [];
  D91():
    deopt 328 [];
  D109():
    deopt 394 [e94];
  D112():
    deopt 407 [r230, l12, r230];
  D187():
    deopt 696 [nS6, nS3methods];
  L39(r117):
    sst imports = r117;
    invisible.0();
    popenv;
    return r117;
  L49(r154):
    sst importClasses = r154;
    invisible.0();
    popenv;
    return r154;
  L54(r172):
    sst importMethods = r172;
    invisible.0();
    popenv;
    return r172;
  L61(dx63):
    as_character3 = ldf `as.character` in base;
    r228 = dyn as_character3(dx63);
    check L413() else D108();
  L163():
    c12 = `==`.6(r3, "exportClasses");
    if c12 then L8() else L164();
  L180():
    c29 = `==`.5(i, 9);
    if c29 then L8() else L181();
  L232():
    c51 = `is.object`(r38);
    if c51 then L233() else L234(r37, l1, r38);
  L254():
    goto L31(r70);
  L301():
    p17 = prom<V +>{
      pkgs = ld pkgs;
      pkgs1 = force? pkgs;
      checkMissing(pkgs1);
      return pkgs1;
    };
    p18 = prom<V +>{
      list = ld list;
      list1 = force? list;
      checkMissing(list1);
      return list1;
    };
    p20 = prom<V +>{
      evalToChar = ldf evalToChar;
      p19 = prom<V +>{
        except2 = ld except;
        except3 = force? except2;
        checkMissing(except3);
        return except3;
      };
      r112 = dyn evalToChar(p19);
      return r112;
    };
    r114 = dyn lapply[, , except](p17, p18, p20);
    check L302() else D57();
  L304():
    imports = ld imports;
    check L306() else D58();
  L305():
    r116 = dyn base11(<sym imports>, <sym pkgs>);
    goto L39(r116);
  L325():
    structure1 = ldf structure;
    check L326() else D67();
  L331():
    imports3 = force? imports2;
    checkMissing(imports3);
    sym15 = ldf list;
    base15 = ldf list in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L332() else L333();
  L350():
    p26 = prom<V +>{
      pkg = ld pkg;
      pkg1 = force? pkg;
      checkMissing(pkg1);
      return pkg1;
    };
    r149 = dyn asChar10(p26);
    check L351() else D79();
  L355():
    importClasses = ld importClasses;
    check L357() else D83();
  L356():
    r153 = dyn base17(<sym importClasses>, <lang list(imp)>);
    goto L49(r153);
  L376():
    p29 = prom<V +>{
      pkg2 = ld pkg;
      pkg3 = force? pkg2;
      checkMissing(pkg3);
      return pkg3;
    };
    r167 = dyn asChar13(p29);
    check L377() else D92();
  L381():
    importMethods = ld importMethods;
    check L383() else D96();
  L382():
    r171 = dyn base20(<sym importMethods>, <lang list(imp)>);
    goto L54(r171);
  L407():
    dr60 = tryDispatchBuiltin.1("[", e88);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L409() else L408(dr60);
  L408(e90):
    sym33 = ldf c;
    base33 = ldf c in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L410() else L411();
  L416():
    e95 = force? e94;
    checkMissing(e95);
    c105 = `is.object`(e95);
    if c105 then L417() else L418(e95);
  L424():
    r237 = dyn names__1(l12, NULL, r230);
    check L425() else D113();
  L596():
    nS3methods1 = force? nS3methods;
    checkMissing(nS3methods1);
    r382 = `>`(nS6, nS3methods1);
    c141 = `as.logical`(r382);
    if c141 then L597() else L117();
  D57():
    deopt 202 [r114];
  D58():
    deopt 208 [imports];
  D67():
    deopt 242 [];
  D79():
    deopt 286 [r149];
  D83():
    deopt 296 [importClasses];
  D92():
    deopt 330 [r167];
  D96():
    deopt 340 [importMethods];
  D108():
    deopt 390 [r228];
  D113():
    deopt 409 [r230, r237];
  L28(r44, l5, dx21):
    names__ = ldf `names<-`;
    check L240() else D26();
  L45(r138):
    c71 = ldf c in base;
    r140 = dyn c71(imports3, r138);
    check L336() else D73();
  L62(e93, r224):
    r226 = `-`(<missing>, r224);
    __27 = ldf `[` in base;
    r227 = dyn __27(e93, r226);
    goto L61(r227);
  L64(dx65):
    names7 = ldf names in base;
    r236 = dyn names7(dx65);
    check L423() else D111();
  L117():
    goto L123();
  L123():
    sym60 = ldf `is.call`;
    base60 = ldf `is.call` in base;
    guard60 = `==`.4(sym60, base60);
    if guard60 then L622() else L623();
  L164():
    c13 = `==`.6(r3, "exportMethods");
    if c13 then L9() else L165();
  L181():
    c30 = `==`.5(i, 10);
    if c30 then L9() else L182();
  L233():
    dr18 = tryDispatchBuiltin.0("[<-", r38, r37);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L235() else L234(r37, l1, dr18);
  L234(r41, l3, r42):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L236() else L237();
  L302():
    st pkgs = r114;
    goto L38();
  L306():
    imports1 = force? imports;
    checkMissing(imports1);
    pkgs2 = ld pkgs;
    check L307() else D59();
  L326():
    p23 = prom<V +>{
      asChar8 = ldf asChar;
      p22 = prom<V +>{
        ivars2 = ld ivars;
        ivars3 = force? ivars2;
        checkMissing(ivars3);
        return ivars3;
      };
      r130 = dyn asChar8(p22);
      return r130;
    };
    p24 = prom<V +>{
      inames = ld inames;
      inames1 = force? inames;
      checkMissing(inames1);
      return inames1;
    };
    r133 = dyn structure1[, names](p23, p24);
    check L327() else D68();
  L332():
    imp8 = ld imp;
    check L334() else D71();
  L333():
    r137 = dyn base15(<sym imp>);
    goto L45(r137);
  L351():
    asChar11 = ldf asChar;
    check L352() else D80();
  L357():
    importClasses1 = force? importClasses;
    checkMissing(importClasses1);
    sym18 = ldf list;
    base18 = ldf list in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L358() else L359();
  L377():
    asChar14 = ldf asChar;
    check L378() else D93();
  L383():
    importMethods1 = force? importMethods;
    checkMissing(importMethods1);
    sym21 = ldf list;
    base21 = ldf list in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L384() else L385();
  L409():
    dx62 = getTryDispatchBuiltinValue(dr60);
    goto L61(dx62);
  L410():
    c104 = ldf c in base;
    r225 = dyn c104(1, 2);
    check L412() else D107();
  L411():
    r223 = dyn base33(1, 2);
    goto L62(e90, r223);
  L413():
    goto L60(r228);
  L417():
    dr62 = tryDispatchBuiltin.1("[", e95);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L419() else L418(dr62);
  L418(e97):
    sym35 = ldf c;
    base35 = ldf c in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L420() else L421();
  L425():
    st symNames = r237;
    sym36 = ldf length;
    base36 = ldf length in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L426() else L427();
  L597():
    S3methods = ld S3methods;
    check L598() else D188();
  D26():
    deopt 92 [r44, l5, dx21];
  D59():
    deopt 210 [pkgs2];
  D68():
    deopt 246 [r133];
  D71():
    deopt 256 [imp8];
  D73():
    deopt 261 [r140];
  D80():
    deopt 288 [];
  D93():
    deopt 332 [];
  D107():
    deopt 386 [e90, r225];
  D111():
    deopt 405 [r236];
  D188():
    deopt 699 [S3methods];
  L29(r52, l8, r53, r54, r55):
    ___ = ldf `[<-` in base;
    r57 = dyn ___(r53, r54, r55);
    goto L28(r52, l8, r57);
  L50(r156):
    c75 = ldf c in base;
    r158 = dyn c75(importClasses1, r156);
    check L362() else D86();
  L55(r174):
    c79 = ldf c in base;
    r176 = dyn c79(importMethods1, r174);
    check L388() else D99();
  L65(e100, r232):
    r234 = `-`(<missing>, r232);
    __28 = ldf `[` in base;
    r235 = dyn __28(e100, r234);
    goto L64(r235);
  L66(r239):
    r244 = `==`(r239, 0);
    c107 = `as.logical`(r244);
    if c107 then L433() else L68();
  L124(r396):
    c146 = `as.logical`(r396);
    if c146 then L629() else L126(c146);
  L165():
    c14 = `==`.6(r3, "import");
    if c14 then L10() else L166();
  L182():
    c31 = `==`.5(i, 11);
    if c31 then L10() else L183();
  L235():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L28(r37, l1, dx20);
  L236():
    dynlibs = ld dynlibs;
    check L238() else D24();
  L237():
    r51 = dyn base3(<sym dynlibs>);
    goto L29(r41, l3, r42, r37, r51);
  L240():
    r58 = dyn names__(l5, NULL, dx21);
    check L241() else D27();
  L307():
    pkgs3 = force? pkgs2;
    checkMissing(pkgs3);
    c67 = ldf c in base;
    r118 = dyn c67(imports1, pkgs3);
    check L308() else D60();
  L327():
    list2 = ldf list in base;
    r134 = dyn list2(r128, r133);
    check L328() else D69();
  L334():
    imp9 = force? imp8;
    checkMissing(imp9);
    list3 = ldf list in base;
    r139 = dyn list3(imp9);
    check L335() else D72();
  L336():
    goto L44(r140);
  L352():
    p27 = prom<V +>{
      impClasses = ld impClasses;
      impClasses1 = force? impClasses;
      checkMissing(impClasses1);
      return impClasses1;
    };
    r151 = dyn asChar11(p27);
    check L353() else D81();
  L358():
    imp18 = ld imp;
    check L360() else D84();
  L359():
    r155 = dyn base18(<sym imp>);
    goto L50(r155);
  L378():
    p30 = prom<V +>{
      impMethods = ld impMethods;
      impMethods1 = force? impMethods;
      checkMissing(impMethods1);
      return impMethods1;
    };
    r169 = dyn asChar14(p30);
    check L379() else D94();
  L384():
    imp28 = ld imp;
    check L386() else D97();
  L385():
    r173 = dyn base21(<sym imp>);
    goto L55(r173);
  L412():
    goto L62(e90, r225);
  L419():
    dx64 = getTryDispatchBuiltinValue(dr62);
    goto L64(dx64);
  L420():
    c106 = ldf c in base;
    r233 = dyn c106(1.0, 2.0);
    check L422() else D110();
  L421():
    r231 = dyn base35(1.0, 2.0);
    goto L65(e97, r231);
  L423():
    goto L63(r236);
  L426():
    sym37 = ldf names;
    base37 = ldf names in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L428() else L429();
  L427():
    r238 = dyn base36(<lang names(symNames)>);
    goto L66(r238);
  L598():
    S3methods1 = force? S3methods;
    checkMissing(S3methods1);
    st old = S3methods1;
    nS3methods2 = ld nS3methods;
    check L599() else D189();
  L622():
    spec4 = ld spec;
    check L624() else D202();
  L623():
    r395 = dyn base60(<lang `<-`(gen, `[[`(spec, 1))>);
    goto L124(r395);
  D24():
    deopt 87 [r41, l3, r42, r37, dynlibs];
  D27():
    deopt 94 [r44, r58];
  D60():
    deopt 213 [r118];
  D69():
    deopt 248 [r134];
  D72():
    deopt 259 [r139];
  D81():
    deopt 290 [r151];
  D84():
    deopt 300 [imp18];
  D86():
    deopt 305 [r158];
  D94():
    deopt 334 [r169];
  D97():
    deopt 344 [imp28];
  D99():
    deopt 349 [r176];
  D110():
    deopt 401 [e97, r233];
  D189():
    deopt 702 [nS3methods2];
  D202():
    deopt 751 [spec4];
  L67(r241):
    length3 = ldf length in base;
    r243 = dyn length3(r241);
    check L432() else D116();
  L68():
    sym38 = ldf any;
    base38 = ldf any in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L438() else L439();
  L69():
    duplicated = ldf duplicated;
    check L460() else D130();
  L126(c148):
    c163 = `as.logical`(c148);
    if c163 then L641() else L130();
  L166():
    c15 = `==`.6(r3, "importFrom");
    if c15 then L11() else L167();
  L183():
    c32 = `==`.5(i, 12);
    if c32 then L11() else L184();
  L238():
    dynlibs1 = force? dynlibs;
    checkMissing(dynlibs1);
    length1 = ldf length in base;
    r56 = dyn length1(dynlibs1);
    check L239() else D25();
  L241():
    sst dynlibs = r58;
    invisible.0();
    popenv;
    return r44;
  L308():
    goto L39(r118);
  L328():
    goto L43(r134);
  L335():
    goto L45(r139);
  L353():
    list4 = ldf list in base;
    r152 = dyn list4(r149, r151);
    check L354() else D82();
  L360():
    imp19 = force? imp18;
    checkMissing(imp19);
    list5 = ldf list in base;
    r157 = dyn list5(imp19);
    check L361() else D85();
  L362():
    goto L49(r158);
  L379():
    list6 = ldf list in base;
    r170 = dyn list6(r167, r169);
    check L380() else D95();
  L386():
    imp29 = force? imp28;
    checkMissing(imp29);
    list7 = ldf list in base;
    r175 = dyn list7(imp29);
    check L387() else D98();
  L388():
    goto L54(r176);
  L422():
    goto L65(e97, r233);
  L428():
    symNames = ld symNames;
    check L430() else D114();
  L429():
    r240 = dyn base37(<sym symNames>);
    goto L67(r240);
  L433():
    symNames2 = ld symNames;
    check L434() else D117();
  L599():
    nS3methods3 = force? nS3methods2;
    checkMissing(nS3methods3);
    st nold = nS3methods3;
    nS3methods4 = ld nS3methods;
    check L600() else D190();
  L624():
    spec5 = force? spec4;
    checkMissing(spec5);
    c145 = `is.object`(spec5);
    if c145 then L625() else L626(spec5);
  L629():
    sym61 = ldf identical;
    base61 = ldf identical in base;
    guard61 = `==`.4(sym61, base61);
    if guard61 then L630() else L631();
  D25():
    deopt 90 [r41, l3, r42, r37, r56];
  D82():
    deopt 292 [r152];
  D85():
    deopt 303 [r157];
  D95():
    deopt 336 [r170];
  D98():
    deopt 347 [r175];
  D114():
    deopt 415 [symNames];
  D116():
    deopt 420 [r243];
  D117():
    deopt 423 [symNames2];
  D130():
    deopt 463 [];
  D190():
    deopt 705 [nS3methods4];
  L70(r247):
    c108 = `as.logical`(r247);
    if c108 then L445() else L72();
  L125(dx109):
    st gen = dx109;
    is_call1 = ldf `is.call` in base;
    r398 = dyn is_call1(dx109);
    check L628() else D203();
  L127(c151, r400):
    c160 = `as.logical`(r400);
    c161 = `&&`(c151, c160);
    goto L126(c161);
  L130():
    asChar16 = ldf asChar;
    check L680() else D219();
  L167():
    c16 = `==`.6(r3, "importClassFrom");
    if c16 then L12() else L168();
  L184():
    c33 = `==`.5(i, 13);
    if c33 then L17() else L185();
  L239():
    goto L29(r41, l3, r42, r37, r56);
  L354():
    goto L48(r152);
  L361():
    goto L50(r157);
  L380():
    goto L53(r170);
  L387():
    goto L55(r175);
  L430():
    symNames1 = force? symNames;
    checkMissing(symNames1);
    names8 = ldf names in base;
    r242 = dyn names8(symNames1);
    check L431() else D115();
  L432():
    goto L66(r243);
  L434():
    symNames3 = force? symNames2;
    checkMissing(symNames3);
    l13 = ld symNames;
    names__2 = ldf `names<-`;
    check L435() else D118();
  L438():
    sym39 = ldf names;
    base39 = ldf names in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L440() else L441();
  L439():
    r246 = dyn base38(<lang `<-`(w, `==`(names(symNames), ""))>);
    goto L70(r246);
  L460():
    p35 = prom<V +>{
      sym40 = ldf names;
      base40 = ldf names in base;
      guard40 = `==`.4(sym40, base40);
      if guard40 then L1() else L2();
    L0(r260):
      return r260;
    L1():
      symNames11 = ld symNames;
      symNames12 = force? symNames11;
      checkMissing(symNames12);
      names11 = ldf names in base;
      r261 = dyn names11(symNames12);
      goto L0(r261);
    L2():
      r259 = dyn base40(<sym symNames>);
      goto L0(r259);
    };
    r263 = dyn duplicated(p35);
    check L461() else D131();
  L600():
    nS3methods5 = force? nS3methods4;
    checkMissing(nS3methods5);
    r383 = `*`(nS3methods5, 2);
    sst nS3methods = r383;
    matrix = ldf matrix;
    check L601() else D191();
  L625():
    dr96 = tryDispatchBuiltin.1("[[", spec5);
    dc48 = getTryDispatchBuiltinDispatched(dr96);
    if dc48 then L627() else L626(dr96);
  L626(spec7):
    __41 = ldf `[[` in base;
    r397 = dyn __41(spec7, 1);
    goto L125(r397);
  L630():
    sym62 = ldf `as.character`;
    base62 = ldf `as.character` in base;
    guard62 = `==`.4(sym62, base62);
    if guard62 then L632() else L633();
  L631():
    r399 = dyn base61(<lang as.character(`[[`(gen, 1))>, "::");
    goto L127(c146, r399);
  L641():
    sym63 = ldf `as.character`;
    base63 = ldf `as.character` in base;
    guard63 = `==`.4(sym63, base63);
    if guard63 then L642() else L643();
  D115():
    deopt 418 [r242];
  D118():
    deopt 426 [symNames3, l13, symNames3];
  D131():
    deopt 465 [r263];
  D191():
    deopt 711 [];
  D203():
    deopt 758 [r398];
  D219():
    deopt 834 [];
  L71(r249):
    r251 = `==`(r249, "");
    st w = r251;
    any = ldf any in base;
    r252 = dyn any(r251);
    check L444() else D122();
  L72():
    goto L69();
  L128(c154, r402):
    identical = ldf identical in base;
    r405 = dyn identical(r402, "::", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L639() else D206();
  L131(r407):
    c165 = `is.object`(r407);
    if c165 then L649() else L650(r407);
  L168():
    c17 = `==`.6(r3, "importClassesFrom");
    if c17 then L12() else L169();
  L185():
    c34 = `==`.5(i, 14);
    if c34 then L12() else L186();
  L431():
    goto L67(r242);
  L435():
    r245 = dyn names__2(l13, NULL, symNames3);
    check L436() else D119();
  L440():
    symNames5 = ld symNames;
    check L442() else D120();
  L441():
    r248 = dyn base39(<sym symNames>);
    goto L71(r248);
  L445():
    symNames7 = ld symNames;
    check L446() else D123();
  L461():
    st dup = r263;
    sym41 = ldf any;
    base41 = ldf any in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L462() else L463();
  L601():
    p56 = prom<V +>{
      nS3methods6 = ld nS3methods;
      nS3methods7 = force? nS3methods6;
      checkMissing(nS3methods7);
      return nS3methods7;
    };
    r385 = dyn matrix(NA_STR, p56, 4);
    check L602() else D192();
  L627():
    dx108 = getTryDispatchBuiltinValue(dr96);
    goto L125(dx108);
  L628():
    goto L124(r398);
  L632():
    gen = ld gen;
    check L634() else D204();
  L633():
    r401 = dyn base62(<lang `[[`(gen, 1)>);
    goto L128(c146, r401);
  L642():
    gen4 = ld gen;
    check L644() else D207();
  L643():
    r406 = dyn base63(<lang `[[`(gen, 2)>);
    goto L131(r406);
  L680():
    p60 = prom<V +>{
      spec14 = ld spec;
      spec15 = force? spec14;
      checkMissing(spec15);
      return spec15;
    };
    r450 = dyn asChar16(p60);
    check L681() else D220();
  D119():
    deopt 428 [symNames3, r245];
  D120():
    deopt 434 [symNames5];
  D122():
    deopt 442 [r252];
  D123():
    deopt 443 [symNames7];
  D192():
    deopt 715 [r385];
  D204():
    deopt 763 [c146, gen];
  D206():
    deopt 779 [c154, r405];
  D207():
    deopt 783 [gen4];
  D220():
    deopt 836 [r450];
  L75(r265):
    c111 = `as.logical`(r265);
    if c111 then L466() else L76();
  L133(dx115):
    st pkg = dx115;
    sym64 = ldf `as.character`;
    base64 = ldf `as.character` in base;
    guard64 = `==`.4(sym64, base64);
    if guard64 then L652() else L653();
  L169():
    c18 = `==`.6(r3, "importMethodsFrom");
    if c18 then L13() else L170();
  L186():
    c35 = `==`.5(i, 15);
    if c35 then L13() else L187();
  L436():
    st symNames = r245;
    goto L69();
  L442():
    symNames6 = force? symNames5;
    checkMissing(symNames6);
    names9 = ldf names in base;
    r250 = dyn names9(symNames6);
    check L443() else D121();
  L444():
    goto L70(r252);
  L446():
    symNames8 = force? symNames7;
    checkMissing(symNames8);
    c109 = `is.object`(symNames8);
    if c109 then L447() else L448(symNames8);
  L462():
    dup = ld dup;
    check L464() else D132();
  L463():
    r264 = dyn base41(<sym dup>);
    goto L75(r264);
  L602():
    st new = r385;
    sym59 = ldf seq_len;
    base59 = ldf seq_len in base;
    guard59 = `==`.4(sym59, base59);
    if guard59 then L603() else L604();
  L634():
    gen1 = force? gen;
    checkMissing(gen1);
    c155 = `is.object`(gen1);
    if c155 then L635() else L636(c146, gen1);
  L639():
    goto L127(c154, r405);
  L644():
    gen5 = force? gen4;
    checkMissing(gen5);
    c164 = `is.object`(gen5);
    if c164 then L645() else L646(gen5);
  L649():
    dr102 = tryDispatchBuiltin.1("[", r407);
    dc51 = getTryDispatchBuiltinDispatched(dr102);
    if dc51 then L651() else L650(dr102);
  L650(r411):
    __44 = ldf `[` in base;
    r412 = dyn __44(r411, 1);
    goto L133(r412);
  L681():
    l41 = sld S3methods;
    c172 = `is.object`(l41);
    if c172 then L682() else L683(r450, l41);
  D121():
    deopt 437 [r250];
  D132():
    deopt 469 [dup];
  L73(dx67):
    l14 = ld symNames;
    names10 = ldf names;
    check L451() else D125();
  L76():
    goto L77();
  L77():
    symNames15 = ld symNames;
    check L470() else D136();
  L118(r387):
    st ind = r387;
    s1 = toForSeq(<int 1, 2, 3, 4>);
    l28 = length(s1);
    i6 = 0;
    goto L119(i6);
  L129(c159, dx111):
    as_character5 = ldf `as.character` in base;
    r404 = dyn as_character5(dx111);
    check L638() else D205();
  L132(dx113):
    as_character6 = ldf `as.character` in base;
    r409 = dyn as_character6(dx113);
    check L648() else D208();
  L134(r414):
    c167 = `is.object`(r414);
    if c167 then L659() else L660(r414);
  L141(r454, dx125):
    sst S3methods = dx125;
    invisible.0();
    popenv;
    return r454;
  L170():
    c19 = `==`.6(r3, "useDynLib");
    if c19 then L14() else L171();
  L187():
    c36 = `==`.5(i, 16);
    if c36 then L14() else L188();
  L443():
    goto L71(r250);
  L447():
    dr64 = tryDispatchBuiltin.1("[", symNames8);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L449() else L448(dr64);
  L448(symNames10):
    w = ld w;
    check L450() else D124();
  L464():
    dup1 = force? dup;
    checkMissing(dup1);
    any1 = ldf any in base;
    r266 = dyn any1(dup1);
    check L465() else D133();
  L466():
    warning = ldf warning;
    check L467() else D134();
  L603():
    nold = ld nold;
    check L605() else D193();
  L604():
    r386 = dyn base59(<sym nold>);
    goto L118(r386);
  L635():
    dr98 = tryDispatchBuiltin.1("[[", gen1);
    dc49 = getTryDispatchBuiltinDispatched(dr98);
    if dc49 then L637() else L636(c146, dr98);
  L636(c157, gen3):
    __42 = ldf `[[` in base;
    r403 = dyn __42(gen3, 1);
    goto L129(c157, r403);
  L645():
    dr100 = tryDispatchBuiltin.1("[[", gen5);
    dc50 = getTryDispatchBuiltinDispatched(dr100);
    if dc50 then L647() else L646(dr100);
  L646(gen7):
    __43 = ldf `[[` in base;
    r408 = dyn __43(gen7, 2);
    goto L132(r408);
  L651():
    dx114 = getTryDispatchBuiltinValue(dr102);
    goto L133(dx114);
  L652():
    gen8 = ld gen;
    check L654() else D209();
  L653():
    r413 = dyn base64(<lang `[[`(gen, 3)>);
    goto L134(r413);
  L682():
    dr112 = tryDispatchBuiltin.0("[<-", l41, r450);
    dc56 = getTryDispatchBuiltinDispatched(dr112);
    if dc56 then L684() else L683(r450, dr112);
  L683(r452, l43):
    nS15 = ld nS3;
    check L685() else D221();
  D124():
    deopt 445 [symNames10, w];
  D125():
    deopt 449 [dx67, l14, dx67];
  D133():
    deopt 472 [r266];
  D134():
    deopt 474 [];
  D136():
    deopt 483 [symNames15];
  D193():
    deopt 718 [nold];
  D205():
    deopt 769 [c159, r404];
  D208():
    deopt 789 [r409];
  D209():
    deopt 796 [gen8];
  D221():
    deopt 838 [r452, l43, r450, nS15];
  L119(i7):
    i8 = `+`.1(i7, 1);
    c142 = `<`.1(l28, i8);
    if c142 then L606() else L122();
  L136(dx119):
    st gen = dx119;
    sym65 = ldf c;
    base65 = ldf c in base;
    guard65 = `==`.4(sym65, base65);
    if guard65 then L662() else L663();
  L171():
    c20 = `==`.6(r3, "S3method");
    if c20 then L15() else L172();
  L188():
    c37 = `==`.5(i, 17);
    if c37 then L15() else L189();
  L449():
    dx66 = getTryDispatchBuiltinValue(dr64);
    goto L73(dx66);
  L450():
    w1 = force? w;
    __29 = ldf `[` in base;
    r253 = dyn __29(symNames10, w1);
    goto L73(r253);
  L451():
    r254 = dyn names10(dx67, NULL);
    check L452() else D126();
  L465():
    goto L75(r266);
  L467():
    p40 = prom<V +>{
      gettextf = ldf gettextf;
      p38 = prom<V +>{
        paste = ldf paste;
        p37 = prom<V +>{
          sQuote = ldf sQuote;
          p36 = prom<V +>{
            sym42 = ldf names;
            base42 = ldf names in base;
            guard42 = `==`.4(sym42, base42);
            if guard42 then L2() else L3();
          L0(r268):
            c112 = `is.object`(r268);
            if c112 then L4() else L5(r268);
          L2():
            symNames13 = ld symNames;
            symNames14 = force? symNames13;
            checkMissing(symNames14);
            names12 = ldf names in base;
            r269 = dyn names12(symNames14);
            goto L0(r269);
          L3():
            r267 = dyn base42(<sym symNames>);
            goto L0(r267);
          L1(dx75):
            return dx75;
          L4():
            dr68 = tryDispatchBuiltin.1("[", r268);
            dc34 = getTryDispatchBuiltinDispatched(dr68);
            if dc34 then L6() else L5(dr68);
          L5(r271):
            dup2 = ld dup;
            dup3 = force? dup2;
            __30 = ldf `[` in base;
            r272 = dyn __30(r271, dup3);
            goto L1(r272);
          L6():
            dx74 = getTryDispatchBuiltinValue(dr68);
            goto L1(dx74);
          };
          r274 = dyn sQuote(p36);
          return r274;
        };
        r276 = dyn paste[, collapse](p37, ", ");
        return r276;
      };
      p39 = prom<V +>{
        dyl2 = ld dyl;
        dyl3 = force? dyl2;
        checkMissing(dyl3);
        return dyl3;
      };
      r279 = dyn gettextf("duplicate symbol names %s in useDynLib(\"%s\")", p38, p39);
      return r279;
    };
    r281 = dyn warning[, domain, `call.`](p40, NA_LGL, FALSE);
    check L468() else D135();
  L470():
    symNames16 = force? symNames15;
    checkMissing(symNames16);
    c113 = `is.object`(symNames16);
    if c113 then L471() else L472(symNames16);
  L605():
    nold1 = force? nold;
    checkMissing(nold1);
    r388 = seq_len(nold1);
    goto L118(r388);
  L637():
    dx110 = getTryDispatchBuiltinValue(dr98);
    goto L129(c146, dx110);
  L638():
    goto L128(c159, r404);
  L647():
    dx112 = getTryDispatchBuiltinValue(dr100);
    goto L132(dx112);
  L648():
    goto L131(r409);
  L654():
    gen9 = force? gen8;
    checkMissing(gen9);
    c166 = `is.object`(gen9);
    if c166 then L655() else L656(gen9);
  L659():
    dr106 = tryDispatchBuiltin.1("[", r414);
    dc53 = getTryDispatchBuiltinDispatched(dr106);
    if dc53 then L661() else L660(dr106);
  L660(r418):
    __46 = ldf `[` in base;
    r419 = dyn __46(r418, 1);
    goto L136(r419);
  L684():
    dx124 = getTryDispatchBuiltinValue(dr112);
    goto L141(r450, dx124);
  L685():
    nS16 = force? nS15;
    sym68 = ldf seq_along;
    base68 = ldf seq_along in base;
    guard68 = `==`.4(sym68, base68);
    if guard68 then L686() else L687();
  D126():
    deopt 451 [dx67, l14, dx67, r254];
  D135():
    deopt 480 [r281];
  L78(dx77):
    st symNames = dx77;
    sym43 = ldf c;
    base43 = ldf c in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L475() else L476();
  L122():
    x1 = `[[`(s1, i8, NULL, TRUE);
    st i = x1;
    old = ld old;
    check L607() else D194();
  L135(dx117):
    as_character7 = ldf `as.character` in base;
    r416 = dyn as_character7(dx117);
    check L658() else D210();
  L137(r421):
    l32 = sld S3methods;
    c170 = `is.object`(l32);
    if c170 then L669() else L670(r421, l32);
  L142(r460, l46, r461, nS19, r462):
    ___5 = ldf `[<-` in base;
    r464 = dyn ___5(l46, r461, nS19, r462);
    goto L141(r460, r464);
  L172():
    goto L16();
  L189():
    c38 = `==`.5(i, 18);
    if c38 then L16() else L190();
  L452():
    c110 = `is.object`(r254);
    if c110 then L453() else L454(dx67, l14, r254);
  L468():
    goto L77();
  L471():
    dr70 = tryDispatchBuiltin.1("[", symNames16);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L473() else L472(dr70);
  L472(symNames18):
    dup4 = ld dup;
    check L474() else D137();
  L606():
    new = ld new;
    check L618() else D199();
  L655():
    dr104 = tryDispatchBuiltin.1("[[", gen9);
    dc52 = getTryDispatchBuiltinDispatched(dr104);
    if dc52 then L657() else L656(dr104);
  L656(gen11):
    __45 = ldf `[[` in base;
    r415 = dyn __45(gen11, 3);
    goto L135(r415);
  L661():
    dx118 = getTryDispatchBuiltinValue(dr106);
    goto L136(dx118);
  L662():
    gen12 = ld gen;
    check L664() else D211();
  L663():
    r420 = dyn base65(<sym gen>, <lang asChar(`[`(spec, `-`(1)))>, <sym pkg>);
    goto L137(r420);
  L686():
    spec16 = ld spec;
    check L688() else D222();
  L687():
    r459 = dyn base68(<sym spec>);
    goto L142(r452, l43, r450, nS16, r459);
  D137():
    deopt 485 [symNames18, dup4];
  D194():
    deopt 724 [i8, old];
  D199():
    deopt 739 [new];
  D210():
    deopt 802 [r416];
  D211():
    deopt 809 [gen12];
  D222():
    deopt 840 [r452, l43, r450, nS16, spec16];
  L74(dx72, l18, dx73):
    names__3 = ldf `names<-`;
    check L457() else D128();
  L79(r286):
    st fixes = r286;
    sym44 = ldf match;
    base44 = ldf match in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L478() else L479();
  L138(r429, dx123):
    sst S3methods = dx123;
    invisible.0();
    popenv;
    return r429;
  L190():
    invisible.0();
    popenv;
    return NULL;
  L453():
    dr66 = tryDispatchBuiltin.0("[<-", r254, dx67);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L455() else L454(dx67, l14, dr66);
  L454(dx69, l16, r256):
    w2 = ld w;
    check L456() else D127();
  L473():
    dx76 = getTryDispatchBuiltinValue(dr70);
    goto L78(dx76);
  L474():
    dup5 = force? dup4;
    checkMissing(dup5);
    r283 = `!`(dup5);
    __31 = ldf `[` in base;
    r284 = dyn __31(symNames18, r283);
    goto L78(r284);
  L475():
    c114 = ldf c in base;
    r287 = dyn c114("", "");
    check L477() else D138();
  L476():
    r285 = dyn base43("", "");
    goto L79(r285);
  L607():
    old1 = force? old;
    checkMissing(old1);
    c143 = `is.object`(old1);
    if c143 then L608() else L609(i8, old1);
  L618():
    new1 = force? new;
    checkMissing(new1);
    sst S3methods = new1;
    rm = ldf rm;
    check L619() else D200();
  L657():
    dx116 = getTryDispatchBuiltinValue(dr104);
    goto L135(dx116);
  L658():
    goto L134(r416);
  L664():
    gen13 = force? gen12;
    checkMissing(gen13);
    asChar15 = ldf asChar;
    check L665() else D212();
  L669():
    dr110 = tryDispatchBuiltin.0("[<-", l32, r421);
    dc55 = getTryDispatchBuiltinDispatched(dr110);
    if dc55 then L671() else L670(r421, dr110);
  L670(r427, l34):
    nS7 = ld nS3;
    check L672() else D216();
  L688():
    spec17 = force? spec16;
    checkMissing(spec17);
    r463 = seq_along(spec17);
    goto L142(r452, l43, r450, nS16, r463);
  D127():
    deopt 453 [dx69, l16, r256, dx67, w2];
  D128():
    deopt 456 [dx72, l18, dx73];
  D138():
    deopt 495 [r287];
  D200():
    deopt 743 [];
  D212():
    deopt 812 [];
  D216():
    deopt 820 [r427, l34, r421, nS7];
  L80(r289):
    st idx = r289;
    sym46 = ldf `is.na`;
    base46 = ldf `is.na` in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L485() else L486();
  L120(i14, dx101):
    l29 = ld new;
    c144 = `is.object`(l29);
    if c144 then L613() else L614(i14, dx101, l29);
  L455():
    dx71 = getTryDispatchBuiltinValue(dr66);
    goto L74(dx67, l14, dx71);
  L456():
    w3 = force? w2;
    ___1 = ldf `[<-` in base;
    r257 = dyn ___1(r256, dx67, w3);
    goto L74(dx69, l16, r257);
  L457():
    r258 = dyn names__3(l18, NULL, dx73);
    check L458() else D129();
  L477():
    goto L79(r287);
  L478():
    sym45 = ldf names;
    base45 = ldf names in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L480() else L481();
  L479():
    r288 = dyn base44(".fixes", <lang names(symNames)>);
    goto L80(r288);
  L608():
    dr92 = tryDispatchBuiltin.1("[", old1);
    dc46 = getTryDispatchBuiltinDispatched(dr92);
    if dc46 then L610() else L609(i8, dr92);
  L609(i12, old3):
    ind = ld ind;
    check L611() else D195();
  L619():
    p57 = prom<V +>{
      old4 = ld old;
      old5 = force? old4;
      checkMissing(old5);
      return old5;
    };
    p58 = prom<V +>{
      new2 = ld new;
      new3 = force? new2;
      checkMissing(new3);
      return new3;
    };
    r393 = dyn rm(p57, p58);
    check L620() else D201();
  L665():
    p59 = prom<V +>{
      spec8 = ld spec;
      spec9 = force? spec8;
      checkMissing(spec9);
      c168 = `is.object`(spec9);
      if c168 then L1() else L2(spec9);
    L0(dx121):
      return dx121;
    L1():
      dr108 = tryDispatchBuiltin.1("[", spec9);
      dc54 = getTryDispatchBuiltinDispatched(dr108);
      if dc54 then L3() else L2(dr108);
    L2(spec11):
      __47 = ldf `[` in base;
      r422 = dyn __47(spec11, -1);
      goto L0(r422);
    L3():
      dx120 = getTryDispatchBuiltinValue(dr108);
      goto L0(dx120);
    };
    r424 = dyn asChar15(p59);
    check L666() else D213();
  L671():
    dx122 = getTryDispatchBuiltinValue(dr110);
    goto L138(r421, dx122);
  L672():
    nS8 = force? nS7;
    sym66 = ldf c;
    base66 = ldf c in base;
    guard66 = `==`.4(sym66, base66);
    if guard66 then L673() else L674();
  D129():
    deopt 458 [dx72, r258];
  D195():
    deopt 726 [i12, old3, ind];
  D201():
    deopt 746 [r393];
  D213():
    deopt 814 [r424];
  L81(r291):
    match = ldf match in base;
    r293 = dyn match(".fixes", r291, NA_INT, NULL);
    check L484() else D141();
  L82(r295):
    r297 = `!`(r295);
    c115 = `as.logical`(r297);
    if c115 then L489() else L83();
  L121(i20, dx107):
    st new = dx107;
    goto L119(i20);
  L139(r435, l37, r436, nS11, r437):
    ___4 = ldf `[<-` in base;
    r448 = dyn ___4(l37, r436, nS11, r437);
    goto L138(r435, r448);
  L458():
    st symNames = r258;
    goto L69();
  L480():
    symNames19 = ld symNames;
    check L482() else D139();
  L481():
    r290 = dyn base45(<sym symNames>);
    goto L81(r290);
  L485():
    idx = ld idx;
    check L487() else D142();
  L486():
    r294 = dyn base46(<sym idx>);
    goto L82(r294);
  L610():
    dx100 = getTryDispatchBuiltinValue(dr92);
    goto L120(i8, dx100);
  L611():
    ind1 = force? ind;
    i15 = ld i;
    check L612() else D196();
  L613():
    dr94 = tryDispatchBuiltin.0("[<-", l29, dx101);
    dc47 = getTryDispatchBuiltinDispatched(dr94);
    if dc47 then L615() else L614(i14, dx101, dr94);
  L614(i18, dx103, l31):
    ind2 = ld ind;
    check L616() else D197();
  L620():
    goto L123();
  L666():
    pkg4 = ld pkg;
    check L667() else D214();
  L673():
    sym67 = ldf seq_along;
    base67 = ldf seq_along in base;
    guard67 = `==`.4(sym67, base67);
    if guard67 then L675() else L676();
  L674():
    r434 = dyn base66(<lang seq_along(spec)>, 4);
    goto L139(r427, l34, r421, nS8, r434);
  D139():
    deopt 502 [symNames19];
  D141():
    deopt 509 [r293];
  D142():
    deopt 513 [idx];
  D196():
    deopt 727 [i12, old3, ind1, i15];
  D197():
    deopt 731 [i18, dx103, l31, dx101, ind2];
  D214():
    deopt 815 [pkg4];
  L83():
    goto L99();
  L99():
    st useRegistration = FALSE;
    sym52 = ldf match;
    base52 = ldf match in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L536() else L537();
  L140(r443, l40, r444, nS14, r445):
    c171 = ldf c in base;
    r447 = dyn c171(r445, 4);
    check L678() else D218();
  L482():
    symNames20 = force? symNames19;
    checkMissing(symNames20);
    names13 = ldf names in base;
    r292 = dyn names13(symNames20);
    check L483() else D140();
  L484():
    goto L80(r293);
  L487():
    idx1 = force? idx;
    checkMissing(idx1);
    is_na = ldf `is.na` in base;
    r296 = dyn is_na(idx1);
    check L488() else D143();
  L489():
    sym47 = ldf nzchar;
    base47 = ldf nzchar in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L490() else L491();
  L612():
    i16 = force? i15;
    __40 = ldf `[` in base;
    r389 = dyn __40(old3, ind1, i16);
    goto L120(i12, r389);
  L615():
    dx105 = getTryDispatchBuiltinValue(dr94);
    goto L121(i14, dx105);
  L616():
    ind3 = force? ind2;
    i21 = ld i;
    check L617() else D198();
  L667():
    pkg5 = force? pkg4;
    checkMissing(pkg5);
    c169 = ldf c in base;
    r425 = dyn c169(gen13, r424, pkg5);
    check L668() else D215();
  L675():
    spec12 = ld spec;
    check L677() else D217();
  L676():
    r442 = dyn base67(<sym spec>);
    goto L140(r427, l34, r421, nS8, r442);
  D140():
    deopt 505 [r292];
  D143():
    deopt 516 [r296];
  D198():
    deopt 732 [i18, dx103, l31, dx101, ind3, i21];
  D215():
    deopt 818 [r425];
  D217():
    deopt 824 [r427, l34, r421, nS8, spec12];
  D218():
    deopt 829 [r443, l40, r444, nS14, r447];
  L84(r299):
    c117 = `as.logical`(r299);
    if c117 then L498() else L86();
  L100(r328):
    st idx = r328;
    sym54 = ldf `is.na`;
    base54 = ldf `is.na` in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L543() else L544();
  L483():
    goto L81(r292);
  L488():
    goto L82(r296);
  L490():
    symNames21 = ld symNames;
    check L492() else D144();
  L491():
    r298 = dyn base47(<lang `[`(symNames, idx)>);
    goto L84(r298);
  L536():
    sym53 = ldf names;
    base53 = ldf names in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L538() else L539();
  L537():
    r327 = dyn base52(".registration", <lang names(symNames)>);
    goto L100(r327);
  L617():
    i22 = force? i21;
    ___3 = ldf `[<-` in base;
    r390 = dyn ___3(l31, dx101, ind3, i22);
    goto L121(i18, r390);
  L668():
    goto L137(r425);
  L677():
    spec13 = force? spec12;
    checkMissing(spec13);
    r446 = seq_along(spec13);
    goto L140(r427, l34, r421, nS8, r446);
  L678():
    goto L139(r443, l40, r444, nS14, r447);
  D144():
    deopt 520 [symNames21];
  L86():
    goto L97();
  L97():
    symNames29 = ld symNames;
    check L530() else D159();
  L101(r330):
    match1 = ldf match in base;
    r332 = dyn match1(".registration", r330, NA_INT, NULL);
    check L542() else D163();
  L102(r334):
    r336 = `!`(r334);
    c124 = `as.logical`(r336);
    if c124 then L547() else L103();
  L492():
    symNames22 = force? symNames21;
    checkMissing(symNames22);
    c116 = `is.object`(symNames22);
    if c116 then L493() else L494(symNames22);
  L498():
    parse = ldf parse;
    check L499() else D147();
  L538():
    symNames33 = ld symNames;
    check L540() else D161();
  L539():
    r329 = dyn base53(<sym symNames>);
    goto L101(r329);
  L543():
    idx8 = ld idx;
    check L545() else D164();
  L544():
    r333 = dyn base54(<sym idx>);
    goto L102(r333);
  D147():
    deopt 528 [];
  D159():
    deopt 578 [symNames29];
  D161():
    deopt 595 [symNames33];
  D163():
    deopt 602 [r332];
  D164():
    deopt 606 [idx8];
  L85(dx79):
    nzchar1 = ldf nzchar in base;
    r301 = dyn nzchar1(dx79);
    check L497() else D146();
  L103():
    goto L107();
  L107():
    _in_ = ldf `%in%`;
    check L562() else D171();
  L493():
    dr72 = tryDispatchBuiltin.1("[", symNames22);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L495() else L494(dr72);
  L494(symNames24):
    idx2 = ld idx;
    check L496() else D145();
  L499():
    p41 = prom<V +>{
      symNames25 = ld symNames;
      symNames26 = force? symNames25;
      checkMissing(symNames26);
      c118 = `is.object`(symNames26);
      if c118 then L1() else L2(symNames26);
    L0(dx81):
      return dx81;
    L1():
      dr74 = tryDispatchBuiltin.1("[", symNames26);
      dc37 = getTryDispatchBuiltinDispatched(dr74);
      if dc37 then L3() else L2(dr74);
    L2(symNames28):
      idx4 = ld idx;
      idx5 = force? idx4;
      __33 = ldf `[` in base;
      r302 = dyn __33(symNames28, idx5);
      goto L0(r302);
    L3():
      dx80 = getTryDispatchBuiltinValue(dr74);
      goto L0(dx80);
    };
    r304 = dyn parse[text, `keep.source`, srcfile](p41, FALSE, NULL);
    check L500() else D148();
  L530():
    symNames30 = force? symNames29;
    checkMissing(symNames30);
    c123 = `is.object`(symNames30);
    if c123 then L531() else L532(symNames30);
  L540():
    symNames34 = force? symNames33;
    checkMissing(symNames34);
    names14 = ldf names in base;
    r331 = dyn names14(symNames34);
    check L541() else D162();
  L542():
    goto L100(r332);
  L545():
    idx9 = force? idx8;
    checkMissing(idx9);
    is_na1 = ldf `is.na` in base;
    r335 = dyn is_na1(idx9);
    check L546() else D165();
  L547():
    sym55 = ldf `as.logical`;
    base55 = ldf `as.logical` in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L548() else L549();
  D145():
    deopt 522 [symNames24, idx2];
  D146():
    deopt 526 [r301];
  D148():
    deopt 535 [r304];
  D162():
    deopt 598 [r331];
  D165():
    deopt 609 [r335];
  D171():
    deopt 631 [];
  L98(dx87):
    st symNames = dx87;
    goto L99();
  L104(r338):
    st useRegistration = r338;
    symNames39 = ld symNames;
    check L556() else D169();
  L495():
    dx78 = getTryDispatchBuiltinValue(dr72);
    goto L85(dx78);
  L496():
    idx3 = force? idx2;
    __32 = ldf `[` in base;
    r300 = dyn __32(symNames24, idx3);
    goto L85(r300);
  L497():
    goto L84(r301);
  L500():
    c119 = `is.object`(r304);
    if c119 then L501() else L502(r304);
  L531():
    dr80 = tryDispatchBuiltin.1("[", symNames30);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L533() else L532(dr80);
  L532(symNames32):
    idx6 = ld idx;
    check L534() else D160();
  L541():
    goto L101(r331);
  L546():
    goto L102(r335);
  L548():
    symNames35 = ld symNames;
    check L550() else D166();
  L549():
    r337 = dyn base55(<lang `[`(symNames, idx)>);
    goto L104(r337);
  L562():
    p44 = prom<V +>{
      dyl4 = ld dyl;
      dyl5 = force? dyl4;
      checkMissing(dyl5);
      return dyl5;
    };
    p45 = prom<V +>{
      sym56 = ldf names;
      base56 = ldf names in base;
      guard56 = `==`.4(sym56, base56);
      if guard56 then L1() else L2();
    L0(r345):
      return r345;
    L1():
      nativeRoutines = ld nativeRoutines;
      nativeRoutines1 = force? nativeRoutines;
      checkMissing(nativeRoutines1);
      names15 = ldf names in base;
      r346 = dyn names15(nativeRoutines1);
      goto L0(r346);
    L2():
      r344 = dyn base56(<sym nativeRoutines>);
      goto L0(r344);
    };
    r348 = dyn _in_(p44, p45);
    check L563() else D172();
  D160():
    deopt 580 [symNames32, idx6];
  D166():
    deopt 613 [symNames35];
  D169():
    deopt 621 [symNames39];
  D172():
    deopt 634 [r348];
  L87(dx83):
    st e = dx83;
    sym48 = ldf `is.call`;
    base48 = ldf `is.call` in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L504() else L505();
  L501():
    dr76 = tryDispatchBuiltin.1("[[", r304);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L503() else L502(dr76);
  L502(r306):
    __34 = ldf `[[` in base;
    r307 = dyn __34(r306, 1);
    goto L87(r307);
  L533():
    dx86 = getTryDispatchBuiltinValue(dr80);
    goto L98(dx86);
  L534():
    idx7 = force? idx6;
    checkMissing(idx7);
    r325 = `-`(<missing>, idx7);
    __35 = ldf `[` in base;
    r326 = dyn __35(symNames32, r325);
    goto L98(r326);
  L550():
    symNames36 = force? symNames35;
    checkMissing(symNames36);
    c125 = `is.object`(symNames36);
    if c125 then L551() else L552(symNames36);
  L556():
    symNames40 = force? symNames39;
    checkMissing(symNames40);
    c126 = `is.object`(symNames40);
    if c126 then L557() else L558(symNames40);
  L563():
    c127 = `as.logical`(r348);
    if c127 then L564() else L108();
  L88(r309):
    c120 = `as.logical`(r309);
    if c120 then L508() else L89();
  L105(dx90):
    as_logical = ldf `as.logical` in base;
    r340 = dyn as_logical(dx90);
    check L555() else D168();
  L106(dx92):
    st symNames = dx92;
    goto L107();
  L108():
    nativeRoutineMap = ldf nativeRoutineMap;
    check L568() else D175();
  L109(r355):
    l25 = sld nativeRoutines;
    c129 = `is.object`(l25);
    if c129 then L570() else L571(r355, l25);
  L503():
    dx82 = getTryDispatchBuiltinValue(dr76);
    goto L87(dx82);
  L504():
    e101 = ld e;
    check L506() else D149();
  L505():
    r308 = dyn base48(<sym e>);
    goto L88(r308);
  L551():
    dr82 = tryDispatchBuiltin.1("[", symNames36);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L553() else L552(dr82);
  L552(symNames38):
    idx10 = ld idx;
    check L554() else D167();
  L557():
    dr84 = tryDispatchBuiltin.1("[", symNames40);
    dc42 = getTryDispatchBuiltinDispatched(dr84);
    if dc42 then L559() else L558(dr84);
  L558(symNames42):
    idx12 = ld idx;
    check L560() else D170();
  L564():
    mergeNativeRoutineMaps = ldf mergeNativeRoutineMaps;
    check L565() else D173();
  D149():
    deopt 542 [e101];
  D167():
    deopt 615 [symNames38, idx10];
  D168():
    deopt 619 [r340];
  D170():
    deopt 623 [symNames42, idx12];
  D173():
    deopt 636 [];
  D175():
    deopt 643 [];
  L89():
    sym49 = ldf `as.character`;
    base49 = ldf `as.character` in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L512() else L513();
  L90():
    sym50 = ldf length;
    base50 = ldf length in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L516() else L517();
  L110(r363, dx97):
    sst nativeRoutines = dx97;
    invisible.0();
    popenv;
    return r363;
  L506():
    e102 = force? e101;
    checkMissing(e102);
    is_call = ldf `is.call` in base;
    r310 = dyn is_call(e102);
    check L507() else D150();
  L508():
    eval1 = ldf eval;
    check L509() else D151();
  L553():
    dx89 = getTryDispatchBuiltinValue(dr82);
    goto L105(dx89);
  L554():
    idx11 = force? idx10;
    __36 = ldf `[` in base;
    r339 = dyn __36(symNames38, idx11);
    goto L105(r339);
  L555():
    goto L104(r340);
  L559():
    dx91 = getTryDispatchBuiltinValue(dr84);
    goto L106(dx91);
  L560():
    idx13 = force? idx12;
    checkMissing(idx13);
    r341 = `-`(<missing>, idx13);
    __37 = ldf `[` in base;
    r342 = dyn __37(symNames42, r341);
    goto L106(r342);
  L565():
    p46 = prom<V +>{
      nativeRoutines2 = ld nativeRoutines;
      nativeRoutines3 = force? nativeRoutines2;
      checkMissing(nativeRoutines3);
      c128 = `is.object`(nativeRoutines3);
      if c128 then L1() else L2(nativeRoutines3);
    L0(dx95):
      return dx95;
    L1():
      dr86 = tryDispatchBuiltin.1("[[", nativeRoutines3);
      dc43 = getTryDispatchBuiltinDispatched(dr86);
      if dc43 then L3() else L2(dr86);
    L2(nativeRoutines5):
      dyl6 = ld dyl;
      dyl7 = force? dyl6;
      __38 = ldf `[[` in base;
      r349 = dyn __38(nativeRoutines5, dyl7);
      goto L0(r349);
    L3():
      dx94 = getTryDispatchBuiltinValue(dr86);
      goto L0(dx94);
    };
    p47 = prom<V +>{
      useRegistration = ld useRegistration;
      useRegistration1 = force? useRegistration;
      checkMissing(useRegistration1);
      return useRegistration1;
    };
    p48 = prom<V +>{
      symNames43 = ld symNames;
      symNames44 = force? symNames43;
      checkMissing(symNames44);
      return symNames44;
    };
    p49 = prom<V +>{
      fixes = ld fixes;
      fixes1 = force? fixes;
      checkMissing(fixes1);
      return fixes1;
    };
    r354 = dyn mergeNativeRoutineMaps(p46, p47, p48, p49);
    check L566() else D174();
  L568():
    p50 = prom<V +>{
      useRegistration2 = ld useRegistration;
      useRegistration3 = force? useRegistration2;
      checkMissing(useRegistration3);
      return useRegistration3;
    };
    p51 = prom<V +>{
      symNames45 = ld symNames;
      symNames46 = force? symNames45;
      checkMissing(symNames46);
      return symNames46;
    };
    p52 = prom<V +>{
      fixes2 = ld fixes;
      fixes3 = force? fixes2;
      checkMissing(fixes3);
      return fixes3;
    };
    r359 = dyn nativeRoutineMap(p50, p51, p52);
    check L569() else D176();
  L570():
    dr88 = tryDispatchBuiltin.0("[[<-", l25, r355);
    dc44 = getTryDispatchBuiltinDispatched(dr88);
    if dc44 then L572() else L571(r355, dr88);
  L571(r361, l27):
    dyl8 = ld dyl;
    check L573() else D177();
  D150():
    deopt 545 [r310];
  D151():
    deopt 547 [];
  D174():
    deopt 641 [r354];
  D176():
    deopt 647 [r359];
  D177():
    deopt 649 [r361, l27, r355, dyl8];
  L91(r316):
    st val = r316;
    goto L90();
  L92(r319):
    c121 = `as.logical`(r319);
    if c121 then L520() else L93();
  L507():
    goto L88(r310);
  L509():
    p42 = prom<V +>{
      e103 = ld e;
      e104 = force? e103;
      checkMissing(e104);
      return e104;
    };
    p43 = prom<V +>{
      _GlobalEnv2 = ld `.GlobalEnv`;
      _GlobalEnv3 = force? _GlobalEnv2;
      checkMissing(_GlobalEnv3);
      return _GlobalEnv3;
    };
    r313 = dyn eval1(p42, p43);
    check L510() else D152();
  L512():
    e105 = ld e;
    check L514() else D153();
  L513():
    r315 = dyn base49(<sym e>);
    goto L91(r315);
  L516():
    val = ld val;
    check L518() else D155();
  L517():
    r318 = dyn base50(<sym val>);
    goto L92(r318);
  L566():
    goto L109(r354);
  L569():
    goto L109(r359);
  L572():
    dx96 = getTryDispatchBuiltinValue(dr88);
    goto L110(r355, dx96);
  L573():
    dyl9 = force? dyl8;
    ____ = ldf `[[<-` in base;
    r364 = dyn ____(l27, r355, dyl9);
    goto L110(r361, r364);
  D152():
    deopt 550 [r313];
  D153():
    deopt 554 [e105];
  D155():
    deopt 561 [val];
  L93():
    goto L96(NULL);
  L96(val16):
    goto L97();
  L510():
    st val = r313;
    goto L90();
  L514():
    e106 = force? e105;
    checkMissing(e106);
    as_character4 = ldf `as.character` in base;
    r317 = dyn as_character4(e106);
    check L515() else D154();
  L518():
    val1 = force? val;
    checkMissing(val1);
    length4 = ldf length in base;
    r320 = dyn length4(val1);
    check L519() else D156();
  L520():
    val2 = ld val;
    check L521() else D157();
  D154():
    deopt 557 [r317];
  D156():
    deopt 564 [r320];
  D157():
    deopt 565 [val2];
  L515():
    goto L91(r317);
  L519():
    goto L92(r320);
  L521():
    val3 = force? val2;
    checkMissing(val3);
    l19 = ld fixes;
    c122 = `is.object`(l19);
    if c122 then L522() else L523(val3, l19);
  L94(val7, dx85):
    st fixes = dx85;
    goto L96(val7);
  L522():
    dr78 = tryDispatchBuiltin.0("[<-", l19, val3);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L524() else L523(val3, dr78);
  L523(val5, l21):
    sym51 = ldf seq_along;
    base51 = ldf seq_along in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L525() else L526();
  L95(val12, l24, val13, r322):
    ___2 = ldf `[<-` in base;
    r324 = dyn ___2(l24, val13, r322);
    goto L94(val12, r324);
  L524():
    dx84 = getTryDispatchBuiltinValue(dr78);
    goto L94(val3, dx84);
  L525():
    val14 = ld val;
    check L527() else D158();
  L526():
    r321 = dyn base51(<sym val>);
    goto L95(val5, l21, val3, r321);
  D158():
    deopt 569 [val5, l21, val3, val14];
  L527():
    val15 = force? val14;
    checkMissing(val15);
    r323 = seq_along(val15);
    goto L95(val5, l21, val3, r323);
  }
}
fun inner912049409(cc) {
  (reg cc:*) -+> V { var cc:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg cc1:*, reg cc2:V, reg as_character:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg r5:*, reg r6:V, reg r7:V, reg any:cls, reg r8:V, reg c:L, reg stop:cls, reg gettextf:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg e:*, reg e1:V, reg c1:L, reg e3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r11:V, reg as_character1:cls, reg r12:V, reg p:p(V +), reg r14:V, reg p1:p(V +), reg r16:V, reg r18:*, reg r19:V |
    mkenv;
    st cc = cc;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st r = r1;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L4():
    cc1 = ld cc;
    check L6() else D0();
  L5():
    r = dyn base(<sym cc>);
    goto L0(r);
  D0():
    deopt 2 [cc1];
  L1(r4):
    c = `as.logical`(r4);
    if c then L12() else L2();
  L6():
    cc2 = force? cc1;
    checkMissing(cc2);
    as_character = ldf `as.character` in base;
    r2 = dyn as_character(cc2);
    check L7() else D1();
  L8():
    r5 = ld r;
    check L10() else D2();
  L9():
    r3 = dyn base1(<lang `==`(r, "")>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [r5];
  L2():
    goto L3();
  L3():
    r18 = ld r;
    check L16() else D6();
  L7():
    goto L0(r2);
  L10():
    r6 = force? r5;
    checkMissing(r6);
    r7 = `==`(r6, "");
    any = ldf any in base;
    r8 = dyn any(r7);
    check L11() else D3();
  L12():
    stop = ldf stop;
    check L13() else D4();
  D3():
    deopt 14 [r8];
  D4():
    deopt 16 [];
  D6():
    deopt 23 [r18];
  L11():
    goto L1(r8);
  L13():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        sym2 = ldf `as.character`;
        base2 = ldf `as.character` in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L2() else L3();
      L0(r10):
        return r10;
      L2():
        e = ld e;
        e1 = force? e;
        checkMissing(e1);
        c1 = `is.object`(e1);
        if c1 then L4() else L5(e1);
      L3():
        r9 = dyn base2(<lang `[[`(e, 1)>);
        goto L0(r9);
      L1(dx1):
        as_character1 = ldf `as.character` in base;
        r12 = dyn as_character1(dx1);
        goto L0(r12);
      L4():
        dr = tryDispatchBuiltin.1("[[", e1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L6() else L5(dr);
      L5(e3):
        __ = ldf `[[` in base;
        r11 = dyn __(e3, 1);
        goto L1(r11);
      L6():
        dx = getTryDispatchBuiltinValue(dr);
        goto L1(dx);
      };
      r14 = dyn gettextf("empty name in directive '%s' in 'NAMESPACE' file", p);
      return r14;
    };
    r16 = dyn stop[, domain](p1, NA_LGL);
    check L14() else D5();
  L16():
    r19 = force? r18;
    checkMissing(r19);
    popenv;
    return r19;
  D5():
    deopt 20 [r16];
  L14():
    goto L3();
  }
}