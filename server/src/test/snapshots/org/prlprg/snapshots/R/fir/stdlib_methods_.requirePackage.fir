fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4166806671;
    st `.requirePackage` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4166806671(package, mustFind) {
  (reg package:*, reg mustFind:*) -+> V { var package:*, var mustFind:*, reg mustFind_isMissing:L, reg mustFind_orDefault:*, reg package1:*, reg package2:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg package3:*, reg package4:V, reg nzchar:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg package5:*, reg package6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg getNamespaceRegistry:cls, reg r7:V, reg exists:cls, reg r8:V, reg c1:L, reg getNamespace:cls, reg package7:*, reg package8:V, reg p:p(V +), reg r10:V, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg package9:*, reg package10:V, reg identical:cls, reg r14:V, reg c2:L, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg package11:*, reg package12:V, reg identical1:cls, reg r19:V, reg c3:L, reg topenv:cls, reg parent_frame:cls, reg r20:V, reg p1:p(V +), reg r22:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg value:*, reg value1:V, reg is_environment:cls, reg r27:V, reg c4:L, reg value2:*, reg value3:V, reg getOption:cls, reg r30:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg topEnv:*, reg topEnv1:V, reg c5:V, reg c6:L, reg _GlobalEnv2:*, reg _GlobalEnv3:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg r34:V, reg get0:cls, reg topEnv2:*, reg topEnv3:V, reg p2:p(V +), reg r36:V, reg c7:V, reg r37:V, reg c8:L, reg c10:V, reg _identC:cls, reg package13:*, reg package14:V, reg p3:p(V +), reg pkgN:*, reg pkgN1:V, reg p4:p(V +), reg r40:V, reg c11:L, reg c12:V, reg c14:L, reg topEnv4:*, reg topEnv5:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r43:V, reg r44:V, reg package15:*, reg package16:V, reg nzchar1:cls, reg r45:V, reg c15:L, reg c17:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r46:V, reg c20:L, reg r47:V, reg require:cls, reg package17:*, reg package18:V, reg p5:p(V +), reg r49:V, reg c21:L, reg c22:V, reg c24:L, reg mustFind1:*, reg mustFind2:V, reg c25:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg package19:*, reg package20:V, reg p6:p(V +), reg r52:V, reg p7:p(V +), reg r54:V, reg p8:p(V +), reg r56:V, reg getNamespace1:cls, reg package21:*, reg package22:V, reg p9:p(V +), reg r58:V |
    mkenv;
    st package = package;
    mustFind_isMissing = missing.0(mustFind);
    if mustFind_isMissing then L0(TRUE) else L0(mustFind);
  L0(mustFind_orDefault):
    st mustFind = mustFind_orDefault;
    package1 = ld package;
    check L29() else D0();
  D0():
    deopt 0 [package1];
  L29():
    package2 = force? package1;
    checkMissing(package2);
    st value = package2;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  L1(r1):
    c = `as.logical`(r1);
    if c then L34() else L2();
  L30():
    package3 = ld package;
    check L32() else D1();
  L31():
    r = dyn base(<sym package>);
    goto L1(r);
  D1():
    deopt 5 [package3];
  L2():
    goto L12();
  L12():
    sym5 = ldf `is.environment`;
    base5 = ldf `is.environment` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L64() else L65();
  L32():
    package4 = force? package3;
    checkMissing(package4);
    nzchar = ldf nzchar in base;
    r2 = dyn nzchar(package4);
    check L33() else D2();
  L34():
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  D2():
    deopt 8 [r2];
  L3(r4):
    c1 = `as.logical`(r4);
    if c1 then L42() else L5();
  L13(r26):
    c4 = `as.logical`(r26);
    if c4 then L68() else L14();
  L33():
    goto L1(r2);
  L35():
    package5 = ld package;
    check L37() else D3();
  L36():
    r3 = dyn base1(<lang exists(package, .Internal(getNamespaceRegistry()), "any", FALSE)>);
    goto L3(r3);
  L64():
    value = ld value;
    check L66() else D15();
  L65():
    r25 = dyn base5(<sym value>);
    goto L13(r25);
  D3():
    deopt 11 [package5];
  D15():
    deopt 70 [value];
  L5():
    sym3 = ldf identical;
    base3 = ldf identical in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L6(r11):
    goto L12();
  L14():
    getOption = ldf getOption;
    check L72() else D18();
  L37():
    package6 = force? package5;
    checkMissing(package6);
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  L42():
    getNamespace = ldf getNamespace;
    check L43() else D6();
  L66():
    value1 = force? value;
    checkMissing(value1);
    is_environment = ldf `is.environment` in base;
    r27 = dyn is_environment(value1);
    check L67() else D16();
  L68():
    value2 = ld value;
    check L69() else D17();
  D6():
    deopt 22 [];
  D16():
    deopt 73 [r27];
  D17():
    deopt 74 [value2];
  D18():
    deopt 80 [];
  L4(r6):
    exists = ldf exists in base;
    r8 = dyn exists(package6, r6, "any", FALSE);
    check L41() else D5();
  L7(r13):
    c2 = `as.logical`(r13);
    if c2 then L50() else L8();
  L38():
    getNamespaceRegistry = ldf getNamespaceRegistry in base;
    r7 = dyn getNamespaceRegistry();
    check L40() else D4();
  L39():
    r5 = dyn base2(<lang getNamespaceRegistry()>);
    goto L4(r5);
  L43():
    p = prom<V +>{
      package7 = ld package;
      package8 = force? package7;
      checkMissing(package8);
      return package8;
    };
    r10 = dyn getNamespace(p);
    check L44() else D7();
  L46():
    package9 = ld package;
    check L48() else D8();
  L47():
    r12 = dyn base3(<sym package>, ".GlobalEnv");
    goto L7(r12);
  L67():
    goto L13(r27);
  L69():
    value3 = force? value2;
    checkMissing(value3);
    popenv;
    return value3;
  L72():
    r30 = dyn getOption("topLevelEnvironment");
    check L73() else D19();
  D4():
    deopt 16 [r7];
  D5():
    deopt 20 [r8];
  D7():
    deopt 24 [r10];
  D8():
    deopt 28 [package9];
  D19():
    deopt 82 [r30];
  L8():
    sym4 = ldf identical;
    base4 = ldf identical in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L54() else L55();
  L40():
    goto L4(r7);
  L41():
    goto L3(r8);
  L44():
    st value = r10;
    goto L6(r10);
  L48():
    package10 = force? package9;
    checkMissing(package10);
    identical = ldf identical in base;
    r14 = dyn identical(package10, ".GlobalEnv", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L49() else D9();
  L50():
    _GlobalEnv = ld `.GlobalEnv`;
    check L51() else D10();
  L73():
    st topEnv = r30;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L74() else L75();
  D9():
    deopt 39 [r14];
  D10():
    deopt 40 [_GlobalEnv];
  L10(r18):
    c3 = `as.logical`(r18);
    if c3 then L58() else L11();
  L16(r32):
    c6 = `as.logical`(r32);
    if c6 then L77() else L17();
  L49():
    goto L7(r14);
  L51():
    _GlobalEnv1 = force? _GlobalEnv;
    checkMissing(_GlobalEnv1);
    popenv;
    return _GlobalEnv1;
  L54():
    package11 = ld package;
    check L56() else D11();
  L55():
    r17 = dyn base4(<sym package>, "methods");
    goto L10(r17);
  L74():
    topEnv = ld topEnv;
    check L76() else D20();
  L75():
    r31 = dyn base6(<sym topEnv>);
    goto L16(r31);
  D11():
    deopt 47 [package11];
  D20():
    deopt 85 [topEnv];
  L11():
    goto L6(NULL);
  L17():
    goto L18();
  L18():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L80() else L81();
  L56():
    package12 = force? package11;
    checkMissing(package12);
    identical1 = ldf identical in base;
    r19 = dyn identical1(package12, "methods", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L57() else D12();
  L58():
    topenv = ldf topenv;
    check L59() else D13();
  L76():
    topEnv1 = force? topEnv;
    checkMissing(topEnv1);
    c5 = `==`(topEnv1, NULL);
    goto L16(c5);
  L77():
    _GlobalEnv2 = ld `.GlobalEnv`;
    check L78() else D21();
  D12():
    deopt 58 [r19];
  D13():
    deopt 60 [];
  D21():
    deopt 88 [_GlobalEnv2];
  L19(r34):
    r37 = `!`(r34);
    c8 = `as.logical`(r37);
    if c8 then L84() else L20(c8);
  L57():
    goto L10(r19);
  L59():
    p1 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r20 = dyn parent_frame();
      return r20;
    };
    r22 = dyn topenv(p1);
    check L60() else D14();
  L78():
    _GlobalEnv3 = force? _GlobalEnv2;
    checkMissing(_GlobalEnv3);
    st topEnv = _GlobalEnv3;
    goto L18();
  L80():
    get0 = ldf get0;
    check L82() else D22();
  L81():
    r33 = dyn base7(<lang `<-`(pkgN, get0(".packageName", topEnv, inherits=TRUE))>);
    goto L19(r33);
  D14():
    deopt 62 [r22];
  D22():
    deopt 95 [];
  L20(c10):
    c14 = `as.logical`(c10);
    if c14 then L88() else L21();
  L60():
    popenv;
    return r22;
  L82():
    p2 = prom<V +>{
      topEnv2 = ld topEnv;
      topEnv3 = force? topEnv2;
      checkMissing(topEnv3);
      return topEnv3;
    };
    r36 = dyn get0[, , inherits](".packageName", p2, TRUE);
    check L83() else D23();
  L84():
    _identC = ldf `.identC`;
    check L85() else D24();
  D23():
    deopt 100 [r36];
  D24():
    deopt 105 [c8];
  L21():
    sym8 = ldf nzchar;
    base8 = ldf nzchar in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L92() else L93();
  L83():
    st pkgN = r36;
    c7 = `==`(r36, NULL);
    goto L19(c7);
  L85():
    p3 = prom<V +>{
      package13 = ld package;
      package14 = force? package13;
      checkMissing(package14);
      return package14;
    };
    p4 = prom<V +>{
      pkgN = ld pkgN;
      pkgN1 = force? pkgN;
      checkMissing(pkgN1);
      return pkgN1;
    };
    r40 = dyn _identC(p3, p4);
    check L86() else D25();
  L88():
    topEnv4 = ld topEnv;
    check L89() else D26();
  D25():
    deopt 108 [c8, r40];
  D26():
    deopt 110 [topEnv4];
  L23(r44):
    c15 = `as.logical`(r44);
    if c15 then L96() else L24(c15);
  L86():
    c11 = `as.logical`(r40);
    c12 = `&&`(c8, c11);
    goto L20(c12);
  L89():
    topEnv5 = force? topEnv4;
    checkMissing(topEnv5);
    popenv;
    return topEnv5;
  L92():
    package15 = ld package;
    check L94() else D27();
  L93():
    r43 = dyn base8(<sym package>);
    goto L23(r43);
  D27():
    deopt 117 [package15];
  L24(c17):
    c24 = `as.logical`(c17);
    if c24 then L102() else L26();
  L94():
    package16 = force? package15;
    checkMissing(package16);
    nzchar1 = ldf nzchar in base;
    r45 = dyn nzchar1(package16);
    check L95() else D28();
  L96():
    sym9 = ldf require;
    base9 = ldf require in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L97() else L98();
  D28():
    deopt 120 [r45];
  L25(c20, r47):
    c21 = `as.logical`(r47);
    c22 = `&&`(c20, c21);
    goto L24(c22);
  L26():
    mustFind1 = ld mustFind;
    check L104() else D31();
  L27():
    getNamespace1 = ldf getNamespace;
    check L110() else D34();
  L95():
    goto L23(r45);
  L97():
    require = ldf require;
    check L99() else D29();
  L98():
    r46 = dyn base9[, `character.only`](<sym package>, TRUE);
    goto L25(c15, r46);
  L102():
    goto L27();
  D29():
    deopt 123 [c15];
  D31():
    deopt 131 [mustFind1];
  D34():
    deopt 143 [];
  L99():
    p5 = prom<V +>{
      package17 = ld package;
      package18 = force? package17;
      checkMissing(package18);
      return package18;
    };
    r49 = dyn require[, `character.only`](p5, TRUE);
    check L100() else D30();
  L104():
    mustFind2 = force? mustFind1;
    checkMissing(mustFind2);
    c25 = `as.logical`(mustFind2);
    if c25 then L105() else L28();
  L110():
    p9 = prom<V +>{
      package21 = ld package;
      package22 = force? package21;
      checkMissing(package22);
      return package22;
    };
    r58 = dyn getNamespace1(p9);
    check L111() else D35();
  D30():
    deopt 127 [c15, r49];
  D35():
    deopt 145 [r58];
  L28():
    popenv;
    return NULL;
  L100():
    goto L25(c15, r49);
  L105():
    stop = ldf stop;
    check L106() else D32();
  L111():
    popenv;
    return r58;
  D32():
    deopt 134 [];
  L106():
    p8 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        sQuote = ldf sQuote;
        p6 = prom<V +>{
          package19 = ld package;
          package20 = force? package19;
          checkMissing(package20);
          return package20;
        };
        r52 = dyn sQuote(p6);
        return r52;
      };
      r54 = dyn gettextf("unable to find required package %s", p7);
      return r54;
    };
    r56 = dyn stop[, domain](p8, NA_LGL);
    check L107() else D33();
  D33():
    deopt 138 [r56];
  L107():
    goto L27();
  }
}