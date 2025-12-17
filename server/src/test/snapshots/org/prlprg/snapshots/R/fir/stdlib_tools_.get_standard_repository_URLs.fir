fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1057858581;
    st `.get_standard_repository_URLs` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1057858581(ForXrefs) {
  (reg ForXrefs:*) -+> V { var ForXrefs:*, reg ForXrefs_isMissing:L, reg ForXrefs_orDefault:*, reg ForXrefs1:*, reg ForXrefs2:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg c5:L, reg r1:V, reg Sys_getenv:cls, reg r2:V, reg nzchar:cls, reg r3:V, reg c6:L, reg c7:V, reg c9:L, reg ___:cls, reg r4:V, reg r5:cls, reg strsplit:cls, reg repos:*, reg repos1:V, reg p:p(V +), reg r7:V, reg c10:L, reg r9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r10:V, reg p1:p(V +), reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg c11:cls, reg r17:V, reg getOption:cls, reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg repos2:*, reg repos3:V, reg c12:V, reg r21:V, reg c13:L, reg c15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg c18:L, reg r23:V, reg repos4:*, reg repos5:V, reg c19:L, reg c21:L, reg repos7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c23:L, reg dx3:V, reg nms:*, reg nms1:V, reg __1:cls, reg r24:V, reg anyNA:cls, reg r25:V, reg r26:V, reg c24:L, reg c25:V, reg c27:L, reg c29:V, reg repos8:*, reg repos9:V, reg c30:L, reg c32:L, reg repos11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c34:L, reg dx5:V, reg __2:cls, reg r27:V, reg r28:V, reg c35:L, reg c36:V, reg c38:L, reg repos12:*, reg repos13:V, reg c39:L, reg repos15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg nms2:*, reg nms3:V, reg __3:cls, reg r29:V, reg ___1:cls, reg r30:V, reg r31:cls, reg r32:V, reg c40:L, reg r34:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg nms4:*, reg nms5:V, reg __4:cls, reg r35:V, reg nms6:*, reg nms7:V, reg l:*, reg names__:cls, reg r36:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r37:V, reg r38:V, reg repos16:*, reg repos17:V, reg c41:L, reg repos19:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg __5:cls, reg r39:V, reg is_na:cls, reg r40:V, reg c42:L, reg c43:V, reg repos20:*, reg repos21:V, reg c45:L, reg c47:L, reg repos23:V, reg dr12:V, reg dc6:L, reg dx13:V, reg c49:L, reg dx14:V, reg __6:cls, reg r41:V, reg r42:V, reg c50:L, reg c51:V, reg c53:L, reg l1:*, reg c54:L, reg r44:S, reg l3:*, reg dr14:V, reg dc7:L, reg dx15:V, reg r46:S, reg dx16:V, reg ___2:cls, reg r47:V, reg repos24:*, reg repos25:V |
    mkenv;
    ForXrefs_isMissing = missing.0(ForXrefs);
    if ForXrefs_isMissing then L0(FALSE) else L0(ForXrefs);
  L0(ForXrefs_orDefault):
    st ForXrefs = ForXrefs_orDefault;
    ForXrefs1 = ld ForXrefs;
    check L22() else D0();
  D0():
    deopt 0 [ForXrefs1];
  L22():
    ForXrefs2 = force? ForXrefs1;
    checkMissing(ForXrefs2);
    c = `as.logical`(ForXrefs2);
    if c then L23() else L1(c);
  L1(c2):
    c9 = `as.logical`(c2);
    if c9 then L30() else L3();
  L23():
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L2(c5, r1):
    c6 = `as.logical`(r1);
    c7 = `&&`(c5, c6);
    goto L1(c7);
  L3():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L36() else L37();
  L24():
    Sys_getenv = ldf `Sys.getenv`;
    check L26() else D1();
  L25():
    r = dyn base(<lang `<-`(repos, Sys.getenv("_R_CHECK_XREFS_REPOSITORIES_", ""))>);
    goto L2(c, r);
  L30():
    ___ = ldf `:::`;
    check L31() else D4();
  D1():
    deopt 5 [c];
  D4():
    deopt 14 [];
  L5(r16):
    st nms = r16;
    getOption = ldf getOption;
    check L39() else D8();
  L26():
    r2 = dyn Sys_getenv("_R_CHECK_XREFS_REPOSITORIES_", "");
    check L27() else D2();
  L31():
    r4 = dyn ___("utils", ".expand_BioC_repository_URLs");
    check L32() else D5();
  L36():
    c11 = ldf c in base;
    r17 = dyn c11("CRAN", "BioCsoft", "BioCann", "BioCexp");
    check L38() else D7();
  L37():
    r15 = dyn base1("CRAN", "BioCsoft", "BioCann", "BioCexp");
    goto L5(r15);
  D2():
    deopt 8 [c, r2];
  D5():
    deopt 17 [r4];
  D7():
    deopt 31 [r17];
  D8():
    deopt 34 [];
  L27():
    st repos = r2;
    nzchar = ldf nzchar in base;
    r3 = dyn nzchar(r2);
    check L28() else D3();
  L32():
    checkFun.0(r4);
    r5 = r4 as cls;
    p1 = prom<V +>{
      strsplit = ldf strsplit;
      p = prom<V +>{
        repos = ld repos;
        repos1 = force? repos;
        checkMissing(repos1);
        return repos1;
      };
      r7 = dyn strsplit(p, " +");
      c10 = `is.object`(r7);
      if c10 then L1() else L2(r7);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", r7);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r9):
      __ = ldf `[[` in base;
      r10 = dyn __(r9, 1);
      goto L0(r10);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r12 = dyn r5(p1);
    check L33() else D6();
  L38():
    goto L5(r17);
  L39():
    r18 = dyn getOption("repos");
    check L40() else D9();
  D3():
    deopt 11 [c, r3];
  D6():
    deopt 20 [r12];
  D9():
    deopt 36 [r18];
  L28():
    goto L2(c, r3);
  L33():
    popenv;
    return r12;
  L40():
    st repos = r18;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  L6(r20):
    r21 = `!`(r20);
    c13 = `as.logical`(r21);
    if c13 then L44() else L7(c13);
  L41():
    repos2 = ld repos;
    check L43() else D10();
  L42():
    r19 = dyn base2(<sym repos>);
    goto L6(r19);
  D10():
    deopt 39 [repos2];
  L7(c15):
    c27 = `as.logical`(c15);
    if c27 then L54() else L10(c27);
  L43():
    repos3 = force? repos2;
    checkMissing(repos3);
    c12 = `==`(repos3, NULL);
    goto L6(c12);
  L44():
    sym3 = ldf anyNA;
    base3 = ldf anyNA in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L45() else L46();
  L8(c18, r23):
    r26 = `!`(r23);
    c24 = `as.logical`(r26);
    c25 = `&&`(c18, c24);
    goto L7(c25);
  L10(c29):
    c38 = `as.logical`(c29);
    if c38 then L60() else L12();
  L45():
    repos4 = ld repos;
    check L47() else D11();
  L46():
    r22 = dyn base3(<lang `[`(repos, nms)>);
    goto L8(c13, r22);
  L54():
    repos8 = ld repos;
    check L55() else D14();
  D11():
    deopt 45 [c13, repos4];
  D14():
    deopt 54 [c27, repos8];
  L12():
    ___1 = ldf `:::`;
    check L67() else D17();
  L14():
    repos24 = ld repos;
    check L95() else D27();
  L47():
    repos5 = force? repos4;
    checkMissing(repos5);
    c19 = `is.object`(repos5);
    if c19 then L48() else L49(c13, repos5);
  L55():
    repos9 = force? repos8;
    checkMissing(repos9);
    c30 = `is.object`(repos9);
    if c30 then L56() else L57(c27, repos9);
  L60():
    repos12 = ld repos;
    check L61() else D15();
  D15():
    deopt 62 [repos12];
  D17():
    deopt 69 [];
  D27():
    deopt 113 [repos24];
  L9(c23, dx3):
    anyNA = ldf anyNA in base;
    r25 = dyn anyNA(dx3);
    check L52() else D13();
  L11(c34, dx5):
    r28 = `!=`(dx5, "@CRAN@");
    c35 = `as.logical`(r28);
    c36 = `&&`(c34, c35);
    goto L10(c36);
  L48():
    dr2 = tryDispatchBuiltin.1("[", repos5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L50() else L49(c13, dr2);
  L49(c21, repos7):
    nms = ld nms;
    check L51() else D12();
  L56():
    dr4 = tryDispatchBuiltin.1("[", repos9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L58() else L57(c27, dr4);
  L57(c32, repos11):
    __2 = ldf `[` in base;
    r27 = dyn __2(repos11, "CRAN");
    goto L11(c32, r27);
  L61():
    repos13 = force? repos12;
    checkMissing(repos13);
    c39 = `is.object`(repos13);
    if c39 then L62() else L63(repos13);
  L67():
    r30 = dyn ___1("utils", ".get_repositories");
    check L68() else D18();
  L95():
    repos25 = force? repos24;
    checkMissing(repos25);
    popenv;
    return repos25;
  D12():
    deopt 47 [c21, repos7, nms];
  D13():
    deopt 51 [c23, r25];
  D18():
    deopt 72 [r30];
  L13(dx7):
    st repos = dx7;
    goto L14();
  L50():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(c13, dx2);
  L51():
    nms1 = force? nms;
    __1 = ldf `[` in base;
    r24 = dyn __1(repos7, nms1);
    goto L9(c21, r24);
  L52():
    goto L8(c23, r25);
  L58():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L11(c27, dx4);
  L62():
    dr6 = tryDispatchBuiltin.1("[", repos13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L64() else L63(dr6);
  L63(repos15):
    nms2 = ld nms;
    check L65() else D16();
  L68():
    checkFun.0(r30);
    r31 = r30 as cls;
    r32 = dyn r31();
    check L69() else D19();
  D16():
    deopt 64 [repos15, nms2];
  D19():
    deopt 74 [r32];
  L64():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L13(dx6);
  L65():
    nms3 = force? nms2;
    __3 = ldf `[` in base;
    r29 = dyn __3(repos15, nms3);
    goto L13(r29);
  L69():
    c40 = `is.object`(r32);
    if c40 then L70() else L71(r32);
  L15(dx10):
    st repos = dx10;
    nms6 = ld nms;
    check L74() else D21();
  L70():
    dr8 = tryDispatchBuiltin.1("[", r32);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L72() else L71(dr8);
  L71(r34):
    nms4 = ld nms;
    check L73() else D20();
  D20():
    deopt 75 [r34, nms4];
  D21():
    deopt 80 [nms6];
  L72():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L15(dx9);
  L73():
    nms5 = force? nms4;
    __4 = ldf `[` in base;
    r35 = dyn __4(r34, nms5, "URL");
    goto L15(r35);
  L74():
    nms7 = force? nms6;
    checkMissing(nms7);
    l = ld repos;
    names__ = ldf `names<-`;
    check L75() else D22();
  D22():
    deopt 83 [nms7, l, nms7];
  L75():
    r36 = dyn names__(l, NULL, nms7);
    check L76() else D23();
  D23():
    deopt 85 [nms7, r36];
  L76():
    st repos = r36;
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L77() else L78();
  L16(r38):
    c42 = `as.logical`(r38);
    if c42 then L18(c42) else L84();
  L77():
    repos16 = ld repos;
    check L79() else D24();
  L78():
    r37 = dyn base4(<lang `[`(repos, "CRAN")>);
    goto L16(r37);
  D24():
    deopt 89 [repos16];
  L18(c43):
    c53 = `as.logical`(c43);
    if c53 then L90() else L20();
  L79():
    repos17 = force? repos16;
    checkMissing(repos17);
    c41 = `is.object`(repos17);
    if c41 then L80() else L81(repos17);
  L84():
    repos20 = ld repos;
    check L85() else D26();
  D26():
    deopt 96 [c42, repos20];
  L17(dx12):
    is_na = ldf `is.na` in base;
    r40 = dyn is_na(dx12);
    check L83() else D25();
  L20():
    goto L14();
  L80():
    dr10 = tryDispatchBuiltin.1("[", repos17);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L82() else L81(dr10);
  L81(repos19):
    __5 = ldf `[` in base;
    r39 = dyn __5(repos19, "CRAN");
    goto L17(r39);
  L85():
    repos21 = force? repos20;
    checkMissing(repos21);
    c45 = `is.object`(repos21);
    if c45 then L86() else L87(c42, repos21);
  L90():
    l1 = ld repos;
    c54 = `is.object`(l1);
    if c54 then L91() else L92("https://CRAN.R-project.org", l1);
  D25():
    deopt 95 [r40];
  L19(c49, dx14):
    r42 = `==`(dx14, "@CRAN@");
    c50 = `as.logical`(r42);
    c51 = `||`(c49, c50);
    goto L18(c51);
  L21(r46, dx16):
    st repos = dx16;
    goto L14();
  L82():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L17(dx11);
  L83():
    goto L16(r40);
  L86():
    dr12 = tryDispatchBuiltin.1("[", repos21);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L88() else L87(c42, dr12);
  L87(c47, repos23):
    __6 = ldf `[` in base;
    r41 = dyn __6(repos23, "CRAN");
    goto L19(c47, r41);
  L91():
    dr14 = tryDispatchBuiltin.0("[<-", l1, "https://CRAN.R-project.org");
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L93() else L92("https://CRAN.R-project.org", dr14);
  L92(r44, l3):
    ___2 = ldf `[<-` in base;
    r47 = dyn ___2(l3, "https://CRAN.R-project.org", "CRAN");
    goto L21(r44, r47);
  L88():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L19(c42, dx13);
  L93():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L21("https://CRAN.R-project.org", dx15);
  }
}