fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4001578419;
    st `.onLoad` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4001578419(libname, pkgname) {
  (reg libname:*, reg pkgname:*) -+> V { var libname:*, var pkgname:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg Sys_getenv:cls, reg r2:V, reg identical:cls, reg r3:V, reg c:L, reg character:cls, reg r4:V, reg tryCatch:cls, reg _get_repositories:cls, reg r6:V, reg p:p(V +), reg identity:*, reg identity1:V, reg p1:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg reposdf:*, reg reposdf1:V, reg inherits:cls, reg r12:V, reg c1:L, reg character1:cls, reg r13:V, reg reposdf2:*, reg reposdf3:V, reg c2:L, reg reposdf5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg reposdf6:*, reg reposdf7:V, reg c3:L, reg reposdf10:V, reg reposdf11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r15:V, reg __:cls, reg r16:V, reg reposdf14:*, reg reposdf15:V, reg c4:L, reg reposdf17:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r17:V, reg row_names:cls, reg reposdf18:*, reg reposdf19:V, reg p2:p(V +), reg r19:V, reg l:*, reg names__:cls, reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg repos:*, reg repos1:V, reg names:cls, reg r27:V, reg match:cls, reg r28:V, reg is_na:cls, reg r29:V, reg c5:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg repos2:*, reg repos3:V, reg c6:cls, reg r32:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg r34:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r35:V, reg r36:V, reg c7:cls, reg r37:V, reg _Platform:*, reg _Platform1:V, reg c8:L, reg _Platform3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r38:V, reg r39:V, reg c9:L, reg r40:S, reg strOptions:cls, reg r41:V, reg defaultUserAgent:cls, reg r42:V, reg repos4:*, reg repos5:V, reg list:cls, reg r43:V, reg _Platform4:*, reg _Platform5:V, reg c10:L, reg _Platform7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r44:V, reg r45:V, reg c11:L, reg Sys_getenv1:cls, reg r46:V, reg l1:*, reg c12:L, reg r48:V, reg l3:*, reg dr10:V, reg dc5:L, reg dx10:V, reg r50:V, reg dx11:V, reg ____:cls, reg r51:V, reg _Platform8:*, reg _Platform9:V, reg c13:L, reg _Platform11:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r53:V, reg r54:V, reg c14:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r55:V, reg r56:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r57:V, reg r58:V, reg grep:cls, reg commandArgs:cls, reg r59:V, reg p3:p(V +), reg r61:V, reg length:cls, reg r62:V, reg c15:L, reg r63:S, reg _Platform12:*, reg _Platform13:V, reg c16:L, reg _Platform15:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r64:V, reg r65:V, reg c17:L, reg askYesNoWinDialog:*, reg askYesNoWinDialog1:V, reg askYesNoWinDialog2:V, reg list1:cls, reg r66:V, reg r67:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r68:V, reg Sys_getenv2:cls, reg r69:V, reg Sys_getenv3:cls, reg r70:V, reg list2:cls, reg r71:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r72:V, reg r73:V, reg op_utils:*, reg op_utils1:V, reg extra:*, reg extra1:V, reg c18:cls, reg r74:V, reg _in_:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r75:V, reg r76:V, reg op_utils2:*, reg op_utils3:V, reg names1:cls, reg r77:V, reg p4:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r79:V, reg r80:V, reg _Options:*, reg _Options1:V, reg names2:cls, reg r81:V, reg p5:p(V +), reg r83:V, reg r84:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r85:V, reg r86:V, reg toset:*, reg toset1:V, reg any:cls, reg r87:V, reg c19:L, reg options:cls, reg op_utils4:*, reg op_utils5:V, reg c20:L, reg op_utils7:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg toset2:*, reg toset3:V, reg __1:cls, reg r88:V, reg p6:p(V +), reg r90:V, reg environment:cls, reg sys_function:cls, reg r92:V, reg p7:p(V +), reg r94:V, reg assign:cls, reg _osVersion:cls, reg r95:V, reg p8:p(V +), reg ns:*, reg ns1:V, reg p9:p(V +), reg r98:V |
    mkenv;
    st libname = libname;
    st pkgname = pkgname;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L31() else L32();
  L0(r1):
    c = `as.logical`(r1);
    if c then L36() else L1();
  L31():
    Sys_getenv = ldf `Sys.getenv`;
    check L33() else D0();
  L32():
    r = dyn base(<lang Sys.getenv("R_REPOSITORIES")>, "NULL");
    goto L0(r);
  D0():
    deopt 3 [];
  L1():
    tryCatch = ldf tryCatch;
    check L40() else D5();
  L2():
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L84() else L85();
  L33():
    r2 = dyn Sys_getenv("R_REPOSITORIES");
    check L34() else D1();
  L36():
    character = ldf character;
    check L37() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 17 [];
  D5():
    deopt 21 [];
  L12(r34):
    st `op.utils` = r34;
    _Platform4 = ld `.Platform`;
    check L102() else D32();
  L34():
    identical = ldf identical in base;
    r3 = dyn identical(r2, "NULL", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L35() else D2();
  L37():
    r4 = dyn character();
    check L38() else D4();
  L40():
    p = prom<V +>{
      _get_repositories = ldf `.get_repositories`;
      r6 = dyn _get_repositories();
      return r6;
    };
    p1 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r9 = dyn tryCatch[, error](p, p1);
    check L41() else D6();
  L84():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L86() else L87();
  L85():
    r33 = dyn base6[`help.try.all.packages`, `help.search.types`, `citation.bibtex.max`, `internet.info`, pkgType, str, `demo.ask`, `example.ask`, HTTPUserAgent, `menu.graphics`, mailer, repos](FALSE, <lang c("vignette", "demo", "help")>, 1, 2, <lang if(`!=`(`$`(.Platform, pkgType), "source"), "both", "source")>, <lang strOptions()>, "default", "default", <lang defaultUserAgent()>, TRUE, "mailto", <sym repos>);
    goto L12(r33);
  D2():
    deopt 15 [r3];
  D4():
    deopt 18 [r4];
  D6():
    deopt 25 [r9];
  D32():
    deopt 137 [_Platform4];
  L13(r36):
    _Platform = ld `.Platform`;
    check L89() else D25();
  L35():
    goto L0(r3);
  L38():
    st repos = r4;
    goto L2();
  L41():
    st reposdf = r9;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L42() else L43();
  L86():
    c7 = ldf c in base;
    r37 = dyn c7("vignette", "demo", "help");
    check L88() else D24();
  L87():
    r35 = dyn base7("vignette", "demo", "help");
    goto L13(r35);
  L102():
    _Platform5 = force? _Platform4;
    checkMissing(_Platform5);
    c10 = `is.object`(_Platform5);
    if c10 then L104() else L105(_Platform5);
  D24():
    deopt 99 [r37];
  D25():
    deopt 105 [_Platform];
  L3(r11):
    c1 = `as.logical`(r11);
    if c1 then L46() else L4();
  L42():
    reposdf = ld reposdf;
    check L44() else D7();
  L43():
    r10 = dyn base1(<sym reposdf>, "error");
    goto L3(r10);
  L88():
    goto L13(r37);
  L89():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c8 = `is.object`(_Platform1);
    if c8 then L91() else L92(_Platform1);
  L103(dx9):
    r45 = `!=`(dx9, "source");
    c11 = `as.logical`(r45);
    if c11 then L107() else L16();
  L104():
    dr8 = tryDispatchBuiltin.1("$", _Platform5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L106() else L105(dr8);
  L105(_Platform7):
    r44 = `$`(_Platform7, <sym pkgType>);
    goto L103(r44);
  D7():
    deopt 29 [reposdf];
  L4():
    reposdf2 = ld reposdf;
    check L50() else D11();
  L5():
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L68() else L69();
  L16():
    goto L18();
  L18():
    _Platform8 = ld `.Platform`;
    check L114() else D35();
  L44():
    reposdf1 = force? reposdf;
    checkMissing(reposdf1);
    inherits = ldf inherits in base;
    r12 = dyn inherits(reposdf1, "error", FALSE);
    check L45() else D8();
  L46():
    character1 = ldf character;
    check L47() else D9();
  L90(dx7):
    r39 = `!=`(dx7, "source");
    c9 = `as.logical`(r39);
    if c9 then L94() else L14();
  L91():
    dr6 = tryDispatchBuiltin.1("$", _Platform1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L93() else L92(dr6);
  L92(_Platform3):
    r38 = `$`(_Platform3, <sym pkgType>);
    goto L90(r38);
  L106():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L103(dx8);
  L107():
    Sys_getenv1 = ldf `Sys.getenv`;
    check L108() else D33();
  D8():
    deopt 34 [r12];
  D9():
    deopt 36 [];
  D11():
    deopt 39 [reposdf2];
  D33():
    deopt 143 [];
  D35():
    deopt 154 [_Platform8];
  L7(r22):
    c5 = `as.logical`(r22);
    if c5 then L78() else L10();
  L14():
    goto L15("source");
  L15(r40):
    strOptions = ldf strOptions;
    check L96() else D26();
  L45():
    goto L3(r12);
  L47():
    r13 = dyn character1();
    check L48() else D10();
  L50():
    reposdf3 = force? reposdf2;
    checkMissing(reposdf3);
    c2 = `is.object`(reposdf3);
    if c2 then L51() else L52(reposdf3);
  L68():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L70() else L71();
  L69():
    r21 = dyn base2(<lang match("CRAN", names(repos))>);
    goto L7(r21);
  L93():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L90(dx6);
  L94():
    goto L15("both");
  L108():
    r46 = dyn Sys_getenv1("R_COMPILE_AND_INSTALL_PACKAGES", "interactive");
    check L109() else D34();
  L114():
    _Platform9 = force? _Platform8;
    checkMissing(_Platform9);
    c13 = `is.object`(_Platform9);
    if c13 then L116() else L117(_Platform9);
  D10():
    deopt 37 [r13];
  D26():
    deopt 116 [];
  D34():
    deopt 146 [r46];
  L6(dx1):
    st reposdf = dx1;
    reposdf14 = ld reposdf;
    check L59() else D13();
  L8(r24):
    is_na = ldf `is.na` in base;
    r29 = dyn is_na(r24);
    check L77() else D21();
  L10():
    goto L2();
  L48():
    st repos = r13;
    goto L5();
  L51():
    dr = tryDispatchBuiltin.1("[", reposdf3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L53() else L52(dr);
  L52(reposdf5):
    reposdf6 = ld reposdf;
    check L54() else D12();
  L70():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L72() else L73();
  L71():
    r23 = dyn base3("CRAN", <lang names(repos)>);
    goto L8(r23);
  L78():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L79() else L80();
  L96():
    r41 = dyn strOptions();
    check L97() else D27();
  L109():
    l1 = ld `op.utils`;
    c12 = `is.object`(l1);
    if c12 then L110() else L111(r46, l1);
  L115(dx13):
    r54 = `==`(dx13, "windows");
    c14 = `as.logical`(r54);
    if c14 then L119() else L19();
  L116():
    dr12 = tryDispatchBuiltin.1("$", _Platform9);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L118() else L117(dr12);
  L117(_Platform11):
    r53 = `$`(_Platform11, <sym OS.type>);
    goto L115(r53);
  D12():
    deopt 41 [reposdf5, reposdf6];
  D13():
    deopt 48 [reposdf14];
  D21():
    deopt 77 [r29];
  D27():
    deopt 117 [r41];
  L9(r26):
    match = ldf match in base;
    r28 = dyn match("CRAN", r26, NA_INT, NULL);
    check L76() else D20();
  L11(r31):
    st repos = r31;
    goto L2();
  L17(r50, dx11):
    st `op.utils` = dx11;
    goto L18();
  L19():
    sym10 = ldf list;
    base10 = ldf list in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L139() else L140();
  L26(r67):
    st extra = r67;
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L146() else L147();
  L53():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L54():
    reposdf7 = force? reposdf6;
    checkMissing(reposdf7);
    c3 = `is.object`(reposdf7);
    if c3 then L56() else L57(reposdf5, reposdf7);
  L59():
    reposdf15 = force? reposdf14;
    checkMissing(reposdf15);
    c4 = `is.object`(reposdf15);
    if c4 then L61() else L62(reposdf15);
  L72():
    repos = ld repos;
    check L74() else D18();
  L73():
    r25 = dyn base4(<sym repos>);
    goto L9(r25);
  L77():
    goto L7(r29);
  L79():
    repos2 = ld repos;
    check L81() else D22();
  L80():
    r30 = dyn base5[CRAN, ]("@CRAN@", <sym repos>);
    goto L11(r30);
  L97():
    defaultUserAgent = ldf defaultUserAgent;
    check L98() else D28();
  L110():
    dr10 = tryDispatchBuiltin.0("[[<-", l1, r46);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L112() else L111(r46, dr10);
  L111(r48, l3):
    ____ = ldf `[[<-` in base;
    r51 = dyn ____(l3, r46, "install.packages.compile.from.source");
    goto L17(r48, r51);
  L118():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L115(dx12);
  L119():
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L120() else L121();
  D18():
    deopt 68 [repos];
  D20():
    deopt 75 [r28];
  D22():
    deopt 82 [repos2];
  D28():
    deopt 124 [];
  L20(r56):
    goto L26(r56);
  L27(r73):
    st `op.utils` = r73;
    _in_ = ldf `%in%`;
    check L151() else D50();
  L55(dx3):
    __ = ldf `[` in base;
    r16 = dyn __(reposdf3, dx3, <missing>);
    goto L6(r16);
  L56():
    dr2 = tryDispatchBuiltin.1("$", reposdf7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L58() else L57(reposdf5, dr2);
  L57(reposdf10, reposdf11):
    r15 = `$`(reposdf11, <sym default>);
    goto L55(r15);
  L60(dx5):
    st repos = dx5;
    row_names = ldf `row.names`;
    check L64() else D14();
  L61():
    dr4 = tryDispatchBuiltin.1("$", reposdf15);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L63() else L62(dr4);
  L62(reposdf17):
    r17 = `$`(reposdf17, <sym URL>);
    goto L60(r17);
  L74():
    repos1 = force? repos;
    checkMissing(repos1);
    names = ldf names in base;
    r27 = dyn names(repos1);
    check L75() else D19();
  L76():
    goto L8(r28);
  L81():
    repos3 = force? repos2;
    checkMissing(repos3);
    c6 = ldf c in base;
    r32 = dyn c6("@CRAN@", repos3);
    check L82() else D23();
  L98():
    r42 = dyn defaultUserAgent();
    check L99() else D29();
  L112():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L17(r46, dx10);
  L120():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L122() else L123();
  L121():
    r55 = dyn base8[unzip, editor, askYesNo]("internal", <lang if(length(grep("Rgui", commandArgs(), TRUE)), "internal", "notepad")>, <lang if(`==`(`$`(.Platform, GUI), "Rgui"), askYesNoWinDialog)>);
    goto L20(r55);
  L139():
    Sys_getenv2 = ldf `Sys.getenv`;
    check L141() else D42();
  L140():
    r68 = dyn base10[unzip, editor](<lang Sys.getenv("R_UNZIPCMD")>, <lang Sys.getenv("EDITOR")>);
    goto L26(r68);
  L146():
    op_utils = ld `op.utils`;
    check L148() else D47();
  L147():
    r72 = dyn base11(<sym op.utils>, <sym extra>);
    goto L27(r72);
  D14():
    deopt 53 [];
  D19():
    deopt 71 [r27];
  D23():
    deopt 85 [r32];
  D29():
    deopt 125 [r42];
  D42():
    deopt 193 [];
  D47():
    deopt 207 [op_utils];
  D50():
    deopt 215 [];
  L21(r58):
    c15 = `as.logical`(r58);
    if c15 then L127() else L22();
  L58():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L55(dx2);
  L63():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L60(dx4);
  L64():
    p2 = prom<V +>{
      reposdf18 = ld reposdf;
      reposdf19 = force? reposdf18;
      checkMissing(reposdf19);
      return reposdf19;
    };
    r19 = dyn row_names(p2);
    check L65() else D15();
  L75():
    goto L9(r27);
  L82():
    goto L11(r32);
  L99():
    repos4 = ld repos;
    check L100() else D30();
  L122():
    grep = ldf grep;
    check L124() else D36();
  L123():
    r57 = dyn base9(<lang grep("Rgui", commandArgs(), TRUE)>);
    goto L21(r57);
  L141():
    r69 = dyn Sys_getenv2("R_UNZIPCMD");
    check L142() else D43();
  L148():
    op_utils1 = force? op_utils;
    checkMissing(op_utils1);
    extra = ld extra;
    check L149() else D48();
  L151():
    p4 = prom<V +>{
      sym12 = ldf names;
      base12 = ldf names in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r76):
      return r76;
    L1():
      op_utils2 = ld `op.utils`;
      op_utils3 = force? op_utils2;
      checkMissing(op_utils3);
      names1 = ldf names in base;
      r77 = dyn names1(op_utils3);
      goto L0(r77);
    L2():
      r75 = dyn base12(<sym op.utils>);
      goto L0(r75);
    };
    p5 = prom<V +>{
      sym13 = ldf names;
      base13 = ldf names in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r80):
      return r80;
    L1():
      _Options = ld `.Options`;
      _Options1 = force? _Options;
      checkMissing(_Options1);
      names2 = ldf names in base;
      r81 = dyn names2(_Options1);
      goto L0(r81);
    L2():
      r79 = dyn base13(<sym .Options>);
      goto L0(r79);
    };
    r83 = dyn _in_(p4, p5);
    check L152() else D51();
  D15():
    deopt 55 [r19];
  D30():
    deopt 131 [repos4];
  D36():
    deopt 166 [];
  D43():
    deopt 195 [r69];
  D48():
    deopt 209 [extra];
  D51():
    deopt 218 [r83];
  L22():
    goto L23("notepad");
  L23(r63):
    _Platform12 = ld `.Platform`;
    check L129() else D39();
  L65():
    l = ld repos;
    names__ = ldf `names<-`;
    check L66() else D16();
  L100():
    repos5 = force? repos4;
    checkMissing(repos5);
    list = ldf list in base;
    r43 = dyn list(FALSE, r36, 1, 2, r40, r41, "default", "default", r42, TRUE, "mailto", repos5);
    check L101() else D31();
  L124():
    p3 = prom<V +>{
      commandArgs = ldf commandArgs;
      r59 = dyn commandArgs();
      return r59;
    };
    r61 = dyn grep("Rgui", p3, TRUE);
    check L125() else D37();
  L127():
    goto L23("internal");
  L142():
    Sys_getenv3 = ldf `Sys.getenv`;
    check L143() else D44();
  L149():
    extra1 = force? extra;
    checkMissing(extra1);
    c18 = ldf c in base;
    r74 = dyn c18(op_utils1, extra1);
    check L150() else D49();
  L152():
    r84 = `!`(r83);
    st toset = r84;
    sym14 = ldf any;
    base14 = ldf any in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L153() else L154();
  D16():
    deopt 57 [r19, l, r19];
  D31():
    deopt 135 [r43];
  D37():
    deopt 170 [r61];
  D39():
    deopt 178 [_Platform12];
  D44():
    deopt 198 [];
  D49():
    deopt 212 [r74];
  L28(r86):
    c19 = `as.logical`(r86);
    if c19 then L157() else L29();
  L66():
    r20 = dyn names__(l, NULL, r19);
    check L67() else D17();
  L101():
    goto L12(r43);
  L125():
    length = ldf length in base;
    r62 = dyn length(r61);
    check L126() else D38();
  L129():
    _Platform13 = force? _Platform12;
    checkMissing(_Platform13);
    c16 = `is.object`(_Platform13);
    if c16 then L131() else L132(_Platform13);
  L143():
    r70 = dyn Sys_getenv3("EDITOR");
    check L144() else D45();
  L150():
    goto L27(r74);
  L153():
    toset = ld toset;
    check L155() else D52();
  L154():
    r85 = dyn base14(<sym toset>);
    goto L28(r85);
  D17():
    deopt 59 [r19, r20];
  D38():
    deopt 172 [r62];
  D45():
    deopt 200 [r70];
  D52():
    deopt 223 [toset];
  L29():
    goto L30();
  L30():
    environment = ldf environment;
    check L161() else D56();
  L67():
    st repos = r20;
    goto L5();
  L126():
    goto L21(r62);
  L130(dx15):
    r65 = `==`(dx15, "Rgui");
    c17 = `as.logical`(r65);
    if c17 then L134() else L24();
  L131():
    dr14 = tryDispatchBuiltin.1("$", _Platform13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L133() else L132(dr14);
  L132(_Platform15):
    r64 = `$`(_Platform15, <sym GUI>);
    goto L130(r64);
  L144():
    list2 = ldf list in base;
    r71 = dyn list2(r69, r70);
    check L145() else D46();
  L155():
    toset1 = force? toset;
    checkMissing(toset1);
    any = ldf any in base;
    r87 = dyn any(toset1);
    check L156() else D53();
  L157():
    options = ldf options;
    check L158() else D54();
  D46():
    deopt 203 [r71];
  D53():
    deopt 226 [r87];
  D54():
    deopt 228 [];
  D56():
    deopt 234 [];
  L24():
    goto L25(NULL);
  L25(askYesNoWinDialog2):
    list1 = ldf list in base;
    r66 = dyn list1("internal", r63, askYesNoWinDialog2);
    check L137() else D41();
  L133():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L130(dx14);
  L134():
    askYesNoWinDialog = ld askYesNoWinDialog;
    check L135() else D40();
  L145():
    goto L26(r71);
  L156():
    goto L28(r87);
  L158():
    p6 = prom<V +>{
      op_utils4 = ld `op.utils`;
      op_utils5 = force? op_utils4;
      checkMissing(op_utils5);
      c20 = `is.object`(op_utils5);
      if c20 then L1() else L2(op_utils5);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", op_utils5);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(op_utils7):
      toset2 = ld toset;
      toset3 = force? toset2;
      __1 = ldf `[` in base;
      r88 = dyn __1(op_utils7, toset3);
      goto L0(r88);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r90 = dyn options(p6);
    check L159() else D55();
  L161():
    p7 = prom<V +>{
      sys_function = ldf `sys.function`;
      r92 = dyn sys_function();
      return r92;
    };
    r94 = dyn environment(p7);
    check L162() else D57();
  D40():
    deopt 183 [askYesNoWinDialog];
  D41():
    deopt 189 [r66];
  D55():
    deopt 230 [r90];
  D57():
    deopt 236 [r94];
  L135():
    askYesNoWinDialog1 = force? askYesNoWinDialog;
    checkMissing(askYesNoWinDialog1);
    goto L25(askYesNoWinDialog1);
  L137():
    goto L20(r66);
  L159():
    goto L30();
  L162():
    st ns = r94;
    assign = ldf assign;
    check L163() else D58();
  D58():
    deopt 239 [];
  L163():
    p8 = prom<V +>{
      _osVersion = ldf `.osVersion`;
      r95 = dyn _osVersion();
      return r95;
    };
    p9 = prom<V +>{
      ns = ld ns;
      ns1 = force? ns;
      checkMissing(ns1);
      return ns1;
    };
    r98 = dyn assign[, , envir]("osVersion", p8, p9);
    check L164() else D59();
  D59():
    deopt 244 [r98];
  L164():
    popenv;
    return r98;
  }
}