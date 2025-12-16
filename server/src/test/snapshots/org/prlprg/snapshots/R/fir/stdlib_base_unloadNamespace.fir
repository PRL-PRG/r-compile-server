fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner162799014;
    st unloadNamespace = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner162799014(ns) {
  (reg ns:*) -+> V { var ns:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ns1:*, reg ns2:V, reg c:L, reg c1:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg c6:L, reg r3:V, reg ns3:*, reg ns4:V, reg loadedNamespaces:cls, reg r4:V, reg r5:V, reg any:cls, reg r6:V, reg c7:L, reg c8:V, reg c10:L, reg c11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c15:L, reg r8:V, reg ns5:*, reg ns6:V, reg is_environment:cls, reg r9:V, reg c16:L, reg c19:L, reg c20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg c25:L, reg c26:L, reg r11:V, reg getNamespaceName:cls, reg ns7:*, reg ns8:V, reg p:p(V +), reg r13:V, reg loadedNamespaces1:cls, reg r14:V, reg r15:V, reg any1:cls, reg r16:V, reg c27:L, reg c28:V, reg c31:L, reg c32:V, reg c34:L, reg r17:cls, reg asNamespace:cls, reg ns9:*, reg ns10:V, reg p1:p(V +), reg r19:V, reg getNamespaceName1:cls, reg ns11:*, reg ns12:V, reg p2:p(V +), reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg paste0:cls, reg nsname:*, reg nsname1:V, reg p3:p(V +), reg r25:V, reg search:cls, reg r26:V, reg match:cls, reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg pos:*, reg pos1:V, reg is_na:cls, reg r30:V, reg r31:V, reg c35:L, reg detach:cls, reg pos2:*, reg pos3:V, reg p4:p(V +), reg r33:V, reg getNamespaceUsers:cls, reg ns13:*, reg ns14:V, reg p5:p(V +), reg r36:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:V, reg users:*, reg users1:V, reg length:cls, reg r39:V, reg c36:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg getNamespaceName2:cls, reg ns15:*, reg ns16:V, reg p6:p(V +), reg r41:V, reg p7:p(V +), reg r43:V, reg p8:p(V +), reg paste1:cls, reg sQuote1:cls, reg users2:*, reg users3:V, reg p9:p(V +), reg r46:V, reg p10:p(V +), reg r48:V, reg p11:p(V +), reg r50:V, reg p12:p(V +), reg r52:V, reg _getNamespaceInfo:cls, reg ns17:*, reg ns18:V, reg p13:p(V +), reg r55:V, reg getHook:cls, reg packageEvent:cls, reg nsname2:*, reg nsname3:V, reg p14:p(V +), reg r57:V, reg p15:p(V +), reg r59:V, reg rev:cls, reg hook:*, reg hook1:V, reg p16:p(V +), reg r61:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c37:L, reg x:V, reg try:cls, reg fun:cls, reg nsname4:*, reg nsname5:V, reg p17:p(V +), reg nspath:*, reg nspath1:V, reg p18:p(V +), reg r64:V, reg p19:p(V +), reg r66:V, reg runHook:cls, reg ns19:*, reg ns20:V, reg p20:p(V +), reg nspath2:*, reg nspath3:V, reg p21:p(V +), reg r69:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r70:V, reg nsname6:*, reg nsname7:V, reg unregisterNamespace:cls, reg r72:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r73:V, reg r74:V, reg _isMethodsDispatchOn:cls, reg r75:V, reg c38:L, reg c40:V, reg ___:cls, reg r76:V, reg r77:cls, reg ns21:*, reg ns22:V, reg p22:p(V +), reg r79:V, reg c41:L, reg c42:V, reg c44:L, reg __:cls, reg r80:V, reg r81:cls, reg ns23:*, reg ns24:V, reg p23:p(V +), reg ns25:*, reg ns26:V, reg p24:p(V +), reg r84:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r86:V, reg r87:V, reg paste2:cls, reg nspath4:*, reg nspath5:V, reg p25:p(V +), reg nsname8:*, reg nsname9:V, reg p26:p(V +), reg r90:V, reg lazyLoadDBflush:cls, reg r91:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r93:V, reg r94:V, reg invisible:cls, reg r95:V |
    mkenv;
    st ns = ns;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L28() else L1(c1);
  L25():
    ns1 = ld ns;
    check L27() else D0();
  L26():
    r = dyn base(<sym ns>);
    goto L0(r);
  D0():
    deopt 1 [ns1];
  L1(c3):
    c10 = `as.logical`(c3);
    if c10 then L3(c10) else L36();
  L27():
    ns2 = force? ns1;
    checkMissing(ns2);
    c = `is.character`(ns2);
    goto L0(c);
  L28():
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L2(c6, r3):
    c7 = `as.logical`(r3);
    c8 = `&&`(c6, c7);
    goto L1(c8);
  L3(c11):
    c34 = `as.logical`(c11);
    if c34 then L51() else L7();
  L29():
    ns3 = ld ns;
    check L31() else D1();
  L30():
    r2 = dyn base1(<lang `==`(ns, loadedNamespaces())>);
    goto L2(c1, r2);
  L36():
    sym2 = ldf `is.environment`;
    base2 = ldf `is.environment` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  D1():
    deopt 6 [c1, ns3];
  L4(c15, r8):
    c16 = `as.logical`(r8);
    if c16 then L41() else L5(c15, c16);
  L7():
    goto L23();
  L23():
    sym10 = ldf invisible;
    base10 = ldf invisible in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L115() else L116();
  L31():
    ns4 = force? ns3;
    checkMissing(ns4);
    loadedNamespaces = ldf loadedNamespaces;
    check L32() else D2();
  L37():
    ns5 = ld ns;
    check L39() else D5();
  L38():
    r7 = dyn base2(<sym ns>);
    goto L4(c10, r7);
  L51():
    r17 = clos `inner-382022608`;
    st runHook = r17;
    asNamespace = ldf asNamespace;
    check L52() else D12();
  D2():
    deopt 8 [c1, ns4];
  D5():
    deopt 16 [c10, ns5];
  D12():
    deopt 37 [];
  L5(c19, c20):
    c31 = `as.logical`(c20);
    c32 = `||`(c19, c31);
    goto L3(c32);
  L24(r94):
    popenv;
    return r94;
  L32():
    r4 = dyn loadedNamespaces();
    check L33() else D3();
  L39():
    ns6 = force? ns5;
    checkMissing(ns6);
    is_environment = ldf `is.environment` in base;
    r9 = dyn is_environment(ns6);
    check L40() else D6();
  L41():
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  L52():
    p1 = prom<V +>{
      ns9 = ld ns;
      ns10 = force? ns9;
      checkMissing(ns10);
      return ns10;
    };
    r19 = dyn asNamespace[, `base.OK`](p1, FALSE);
    check L53() else D13();
  L115():
    invisible = ldf invisible in base;
    r95 = dyn invisible();
    check L117() else D53();
  L116():
    r93 = dyn base10();
    goto L24(r93);
  D3():
    deopt 9 [c1, ns4, r4];
  D6():
    deopt 19 [c10, r9];
  D13():
    deopt 41 [r19];
  D53():
    deopt 171 [r95];
  L6(c25, c26, r11):
    c27 = `as.logical`(r11);
    c28 = `&&`(c26, c27);
    goto L5(c25, c28);
  L33():
    r5 = `==`(ns4, r4);
    any = ldf any in base;
    r6 = dyn any(r5);
    check L34() else D4();
  L40():
    goto L4(c10, r9);
  L42():
    getNamespaceName = ldf getNamespaceName;
    check L44() else D7();
  L43():
    r10 = dyn base3(<lang `==`(getNamespaceName(ns), loadedNamespaces())>);
    goto L6(c15, c16, r10);
  L53():
    st ns = r19;
    getNamespaceName1 = ldf getNamespaceName;
    check L54() else D14();
  L117():
    goto L24(r95);
  D4():
    deopt 12 [c1, r6];
  D7():
    deopt 23 [c15, c16];
  D14():
    deopt 44 [];
  L34():
    goto L2(c1, r6);
  L44():
    p = prom<V +>{
      ns7 = ld ns;
      ns8 = force? ns7;
      checkMissing(ns8);
      return ns8;
    };
    r13 = dyn getNamespaceName(p);
    check L45() else D8();
  L54():
    p2 = prom<V +>{
      ns11 = ld ns;
      ns12 = force? ns11;
      checkMissing(ns12);
      return ns12;
    };
    r21 = dyn getNamespaceName1(p2);
    check L55() else D15();
  D8():
    deopt 25 [c15, c16, r13];
  D15():
    deopt 46 [r21];
  L45():
    loadedNamespaces1 = ldf loadedNamespaces;
    check L46() else D9();
  L55():
    st nsname = r21;
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  D9():
    deopt 26 [c15, c16, r13];
  L8(r23):
    st pos = r23;
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L63() else L64();
  L46():
    r14 = dyn loadedNamespaces1();
    check L47() else D10();
  L56():
    paste0 = ldf paste0;
    check L58() else D16();
  L57():
    r22 = dyn base4(<lang paste0("package:", nsname)>, <lang search()>);
    goto L8(r22);
  D10():
    deopt 27 [c15, c16, r13, r14];
  D16():
    deopt 51 [];
  L9(r29):
    r31 = `!`(r29);
    c35 = `as.logical`(r31);
    if c35 then L67() else L10();
  L47():
    r15 = `==`(r13, r14);
    any1 = ldf any in base;
    r16 = dyn any1(r15);
    check L48() else D11();
  L58():
    p3 = prom<V +>{
      nsname = ld nsname;
      nsname1 = force? nsname;
      checkMissing(nsname1);
      return nsname1;
    };
    r25 = dyn paste0("package:", p3);
    check L59() else D17();
  L63():
    pos = ld pos;
    check L65() else D21();
  L64():
    r28 = dyn base5(<sym pos>);
    goto L9(r28);
  D11():
    deopt 30 [c15, c16, r16];
  D17():
    deopt 54 [r25];
  D21():
    deopt 65 [pos];
  L10():
    goto L11();
  L11():
    getNamespaceUsers = ldf getNamespaceUsers;
    check L71() else D25();
  L48():
    goto L6(c15, c16, r16);
  L59():
    search = ldf search;
    check L60() else D18();
  L65():
    pos1 = force? pos;
    checkMissing(pos1);
    is_na = ldf `is.na` in base;
    r30 = dyn is_na(pos1);
    check L66() else D22();
  L67():
    detach = ldf detach;
    check L68() else D23();
  D18():
    deopt 56 [];
  D22():
    deopt 68 [r30];
  D23():
    deopt 71 [];
  D25():
    deopt 78 [];
  L60():
    r26 = dyn search();
    check L61() else D19();
  L66():
    goto L9(r30);
  L68():
    p4 = prom<V +>{
      pos2 = ld pos;
      pos3 = force? pos2;
      checkMissing(pos3);
      return pos3;
    };
    r33 = dyn detach[pos](p4);
    check L69() else D24();
  L71():
    p5 = prom<V +>{
      ns13 = ld ns;
      ns14 = force? ns13;
      checkMissing(ns14);
      return ns14;
    };
    r36 = dyn getNamespaceUsers(p5);
    check L72() else D26();
  D19():
    deopt 57 [r26];
  D24():
    deopt 74 [r33];
  D26():
    deopt 80 [r36];
  L61():
    match = ldf match in base;
    r27 = dyn match(r25, r26, NA_INT, NULL);
    check L62() else D20();
  L69():
    goto L11();
  L72():
    st users = r36;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L73() else L74();
  D20():
    deopt 61 [r27];
  L12(r38):
    c36 = `as.logical`(r38);
    if c36 then L77() else L13();
  L62():
    goto L8(r27);
  L73():
    users = ld users;
    check L75() else D27();
  L74():
    r37 = dyn base6(<sym users>);
    goto L12(r37);
  D27():
    deopt 84 [users];
  L13():
    goto L14();
  L14():
    _getNamespaceInfo = ldf `.getNamespaceInfo`;
    check L81() else D31();
  L75():
    users1 = force? users;
    checkMissing(users1);
    length = ldf length in base;
    r39 = dyn length(users1);
    check L76() else D28();
  L77():
    stop = ldf stop;
    check L78() else D29();
  D28():
    deopt 87 [r39];
  D29():
    deopt 89 [];
  D31():
    deopt 97 [];
  L76():
    goto L12(r39);
  L78():
    p12 = prom<V +>{
      gettextf = ldf gettextf;
      p8 = prom<V +>{
        sQuote = ldf sQuote;
        p7 = prom<V +>{
          getNamespaceName2 = ldf getNamespaceName;
          p6 = prom<V +>{
            ns15 = ld ns;
            ns16 = force? ns15;
            checkMissing(ns16);
            return ns16;
          };
          r41 = dyn getNamespaceName2(p6);
          return r41;
        };
        r43 = dyn sQuote(p7);
        return r43;
      };
      p11 = prom<V +>{
        paste1 = ldf paste;
        p10 = prom<V +>{
          sQuote1 = ldf sQuote;
          p9 = prom<V +>{
            users2 = ld users;
            users3 = force? users2;
            checkMissing(users3);
            return users3;
          };
          r46 = dyn sQuote1(p9);
          return r46;
        };
        r48 = dyn paste1[, collapse](p10, ", ");
        return r48;
      };
      r50 = dyn gettextf("namespace %s is imported by %s so cannot be unloaded", p8, p11);
      return r50;
    };
    r52 = dyn stop[, domain](p12, NA_LGL);
    check L79() else D30();
  L81():
    p13 = prom<V +>{
      ns17 = ld ns;
      ns18 = force? ns17;
      checkMissing(ns18);
      return ns18;
    };
    r55 = dyn _getNamespaceInfo(p13, "path");
    check L82() else D32();
  D30():
    deopt 93 [r52];
  D32():
    deopt 100 [r55];
  L79():
    goto L14();
  L82():
    st nspath = r55;
    getHook = ldf getHook;
    check L83() else D33();
  D33():
    deopt 103 [];
  L83():
    p15 = prom<V +>{
      packageEvent = ldf packageEvent;
      p14 = prom<V +>{
        nsname2 = ld nsname;
        nsname3 = force? nsname2;
        checkMissing(nsname3);
        return nsname3;
      };
      r57 = dyn packageEvent(p14, "onUnload");
      return r57;
    };
    r59 = dyn getHook(p15);
    check L84() else D34();
  D34():
    deopt 105 [r59];
  L84():
    st hook = r59;
    rev = ldf rev;
    check L85() else D35();
  D35():
    deopt 108 [];
  L85():
    p16 = prom<V +>{
      hook = ld hook;
      hook1 = force? hook;
      checkMissing(hook1);
      return hook1;
    };
    r61 = dyn rev(p16);
    check L86() else D36();
  D36():
    deopt 110 [r61];
  L86():
    s = toForSeq(r61);
    l = length(s);
    i = 0;
    goto L15(i);
  L15(i1):
    i2 = `+`.1(i1, 1);
    c37 = `<`.1(l, i2);
    if c37 then L87() else L16();
  L16():
    x = `[[`(s, i2, NULL, TRUE);
    st fun = x;
    try = ldf try;
    check L88() else D37();
  L87():
    runHook = ldf runHook;
    check L90() else D39();
  D37():
    deopt 112 [i2];
  D39():
    deopt 119 [];
  L88():
    p19 = prom<V +>{
      fun = ldf fun;
      p17 = prom<V +>{
        nsname4 = ld nsname;
        nsname5 = force? nsname4;
        checkMissing(nsname5);
        return nsname5;
      };
      p18 = prom<V +>{
        nspath = ld nspath;
        nspath1 = force? nspath;
        checkMissing(nspath1);
        return nspath1;
      };
      r64 = dyn fun(p17, p18);
      return r64;
    };
    r66 = dyn try(p19);
    check L89() else D38();
  L90():
    p20 = prom<V +>{
      ns19 = ld ns;
      ns20 = force? ns19;
      checkMissing(ns20);
      return ns20;
    };
    p21 = prom<V +>{
      nspath2 = ld nspath;
      nspath3 = force? nspath2;
      checkMissing(nspath3);
      return nspath3;
    };
    r69 = dyn runHook(".onUnload", p20, p21);
    check L91() else D40();
  D38():
    deopt 114 [i2, r66];
  D40():
    deopt 123 [r69];
  L89():
    goto L15(i2);
  L91():
    sym7 = ldf `.Internal`;
    base7 = ldf `.Internal` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L92() else L93();
  L17():
    sym8 = ldf `.isMethodsDispatchOn`;
    base8 = ldf `.isMethodsDispatchOn` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L96() else L97();
  L92():
    nsname6 = ld nsname;
    check L94() else D41();
  L93():
    r70 = dyn base7(<lang unregisterNamespace(nsname)>);
    goto L17();
  D41():
    deopt 126 [nsname6];
  L18(r74):
    c38 = `as.logical`(r74);
    if c38 then L99() else L19(c38);
  L94():
    nsname7 = force? nsname6;
    checkMissing(nsname7);
    unregisterNamespace = ldf unregisterNamespace in base;
    r72 = dyn unregisterNamespace(nsname7);
    check L95() else D42();
  L96():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r75 = dyn _isMethodsDispatchOn();
    check L98() else D43();
  L97():
    r73 = dyn base8();
    goto L18(r73);
  D42():
    deopt 129 [r72];
  D43():
    deopt 133 [r75];
  L19(c40):
    c44 = `as.logical`(c40);
    if c44 then L104() else L20();
  L95():
    goto L17();
  L98():
    goto L18(r75);
  L99():
    ___ = ldf `:::`;
    check L100() else D44();
  D44():
    deopt 135 [c38];
  L20():
    goto L21();
  L21():
    sym9 = ldf `.Internal`;
    base9 = ldf `.Internal` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L109() else L110();
  L100():
    r76 = dyn ___("methods", ".hasS4MetaData");
    check L101() else D45();
  L104():
    __ = ldf `::`;
    check L105() else D47();
  D45():
    deopt 138 [c38, r76];
  D47():
    deopt 144 [];
  L22(r87):
    goto L23();
  L101():
    checkFun.0(r76);
    r77 = r76 as cls;
    p22 = prom<V +>{
      ns21 = ld ns;
      ns22 = force? ns21;
      checkMissing(ns22);
      return ns22;
    };
    r79 = dyn r77(p22);
    check L102() else D46();
  L105():
    r80 = dyn __("methods", "cacheMetaData");
    check L106() else D48();
  L109():
    paste2 = ldf paste0;
    check L111() else D50();
  L110():
    r86 = dyn base9(<lang lazyLoadDBflush(paste0(nspath, "/R/", nsname, ".rdb"))>);
    goto L22(r86);
  D46():
    deopt 141 [c38, r79];
  D48():
    deopt 147 [r80];
  D50():
    deopt 158 [];
  L102():
    c41 = `as.logical`(r79);
    c42 = `&&`(c38, c41);
    goto L19(c42);
  L106():
    checkFun.0(r80);
    r81 = r80 as cls;
    p23 = prom<V +>{
      ns23 = ld ns;
      ns24 = force? ns23;
      checkMissing(ns24);
      return ns24;
    };
    p24 = prom<V +>{
      ns25 = ld ns;
      ns26 = force? ns25;
      checkMissing(ns26);
      return ns26;
    };
    r84 = dyn r81(p23, FALSE, p24);
    check L107() else D49();
  L111():
    p25 = prom<V +>{
      nspath4 = ld nspath;
      nspath5 = force? nspath4;
      checkMissing(nspath5);
      return nspath5;
    };
    p26 = prom<V +>{
      nsname8 = ld nsname;
      nsname9 = force? nsname8;
      checkMissing(nsname9);
      return nsname9;
    };
    r90 = dyn paste2(p25, "/R/", p26, ".rdb");
    check L112() else D51();
  D49():
    deopt 152 [r84];
  D51():
    deopt 163 [r90];
  L107():
    goto L21();
  L112():
    lazyLoadDBflush = ldf lazyLoadDBflush in base;
    r91 = dyn lazyLoadDBflush(r90);
    check L113() else D52();
  D52():
    deopt 165 [r91];
  L113():
    goto L22(r91);
  }
}
fun `inner-382022608`(hookname, env, `...`) {
  (reg hookname:*, reg env:*, reg ddd:dots) -+> V { var hookname:*, var env:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg env1:*, reg env2:V, reg c:L, reg env4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg hookname1:*, reg hookname2:V, reg __:cls, reg r2:V, reg c1:V, reg r3:V, reg c2:L, reg tryCatch:cls, reg fun:cls, reg ddd1:dots?, reg r4:V, reg p:p(V +), reg identity:*, reg identity1:V, reg p1:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg res:*, reg res1:V, reg inherits:cls, reg r10:V, reg c3:L, reg warning:cls, reg gettextf:cls, reg hookname3:*, reg hookname4:V, reg p2:p(V +), reg nsname:*, reg nsname1:V, reg p3:p(V +), reg deparse:cls, reg conditionCall:cls, reg res2:*, reg res3:V, reg p4:p(V +), reg r14:V, reg p5:p(V +), reg r16:V, reg c4:L, reg r18:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r19:V, reg p6:p(V +), reg conditionMessage:cls, reg res4:*, reg res5:V, reg p7:p(V +), reg r22:V, reg p8:p(V +), reg r24:V, reg p9:p(V +), reg r26:V |
    mkenv;
    st hookname = hookname;
    st env = env;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    r3 = `!`(r1);
    c2 = `as.logical`(r3);
    if c2 then L12() else L2();
  L5():
    env1 = ld env;
    check L7() else D0();
  L6():
    r = dyn base(<lang `<-`(fun, `[[`(env, hookname))>);
    goto L0(r);
  D0():
    deopt 1 [env1];
  L2():
    invisible.0();
    popenv;
    return NULL;
  L7():
    env2 = force? env1;
    checkMissing(env2);
    c = `is.object`(env2);
    if c then L8() else L9(env2);
  L12():
    tryCatch = ldf tryCatch;
    check L13() else D2();
  D2():
    deopt 10 [];
  L1(dx1):
    st fun = dx1;
    c1 = `==`(dx1, NULL);
    goto L0(c1);
  L8():
    dr = tryDispatchBuiltin.1("[[", env2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(env4):
    hookname1 = ld hookname;
    check L11() else D1();
  L13():
    p = prom<V +>{
      fun = ldf fun;
      ddd1 = ld `...`;
      r4 = dyn fun[`...`](ddd1);
      return r4;
    };
    p1 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r7 = dyn tryCatch[, error](p, p1);
    check L14() else D3();
  D1():
    deopt 3 [env4, hookname1];
  D3():
    deopt 14 [r7];
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L11():
    hookname2 = force? hookname1;
    __ = ldf `[[` in base;
    r2 = dyn __(env4, hookname2);
    goto L1(r2);
  L14():
    st res = r7;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L3(r9):
    c3 = `as.logical`(r9);
    if c3 then L19() else L4();
  L15():
    res = ld res;
    check L17() else D4();
  L16():
    r8 = dyn base1(<sym res>, "error");
    goto L3(r8);
  D4():
    deopt 18 [res];
  L4():
    invisible.0();
    popenv;
    return NULL;
  L17():
    res1 = force? res;
    checkMissing(res1);
    inherits = ldf inherits in base;
    r10 = dyn inherits(res1, "error", FALSE);
    check L18() else D5();
  L19():
    warning = ldf warning;
    check L20() else D6();
  D5():
    deopt 23 [r10];
  D6():
    deopt 25 [];
  L18():
    goto L3(r10);
  L20():
    p9 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        hookname3 = ld hookname;
        hookname4 = force? hookname3;
        checkMissing(hookname4);
        return hookname4;
      };
      p3 = prom<V +>{
        nsname = ld nsname;
        nsname1 = force? nsname;
        checkMissing(nsname1);
        return nsname1;
      };
      p6 = prom<V +>{
        deparse = ldf deparse;
        p5 = prom<V +>{
          conditionCall = ldf conditionCall;
          p4 = prom<V +>{
            res2 = ld res;
            res3 = force? res2;
            checkMissing(res3);
            return res3;
          };
          r14 = dyn conditionCall(p4);
          return r14;
        };
        r16 = dyn deparse(p5);
        c4 = `is.object`(r16);
        if c4 then L1() else L2(r16);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[", r16);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(r18):
        __1 = ldf `[` in base;
        r19 = dyn __1(r18, 1);
        goto L0(r19);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      p8 = prom<V +>{
        conditionMessage = ldf conditionMessage;
        p7 = prom<V +>{
          res4 = ld res;
          res5 = force? res4;
          checkMissing(res5);
          return res5;
        };
        r22 = dyn conditionMessage(p7);
        return r22;
      };
      r24 = dyn gettextf("%s failed in %s() for '%s', details:\n  call: %s\n  error: %s", p2, "unloadNamespace", p3, p6, p8);
      return r24;
    };
    r26 = dyn warning[, `call.`, domain](p9, FALSE, NA_LGL);
    check L21() else D7();
  D7():
    deopt 31 [r26];
  L21():
    popenv;
    return r26;
  }
}