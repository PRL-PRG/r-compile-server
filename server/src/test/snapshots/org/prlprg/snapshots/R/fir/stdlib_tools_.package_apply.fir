fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3159204334;
    st `.package_apply` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3159204334(packages, FUN, `...`, pattern, verbose, Ncpus) {
  (reg packages:*, reg FUN:*, reg ddd:dots, reg pattern:*, reg verbose:*, reg Ncpus:*) -+> V { var packages:*, reg packages_isMissing:L, reg packages_orDefault:*, var FUN:*, var `...`:dots?, var pattern:*, reg pattern_isMissing:L, reg pattern_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, var Ncpus:*, reg Ncpus_isMissing:L, reg Ncpus_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg packages1:*, reg packages2:V, reg c:V, reg c1:L, reg unique:cls, reg __:cls, reg r4:V, reg r5:cls, reg r6:V, reg c2:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg pattern1:*, reg pattern2:V, reg r13:V, reg c3:L, reg packages3:*, reg packages4:V, reg c4:L, reg packages6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg grepl:cls, reg __2:cls, reg r14:V, reg r15:cls, reg pattern3:*, reg pattern4:V, reg p2:p(V +), reg r17:V, reg p3:p(V +), reg packages7:*, reg packages8:V, reg p4:p(V +), reg r20:V, reg __3:cls, reg r21:V, reg r22:cls, reg Ncpus1:*, reg Ncpus2:V, reg r23:V, reg c5:L, reg _Platform:*, reg _Platform1:V, reg c6:L, reg _Platform3:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r24:V, reg r25:V, reg c7:L, reg __4:cls, reg r26:V, reg r27:cls, reg packages9:*, reg packages10:V, reg p5:p(V +), reg one:*, reg one1:V, reg p6:p(V +), reg Ncpus3:*, reg Ncpus4:V, reg p7:p(V +), reg r31:V, reg r32:V, reg __5:cls, reg r33:V, reg r34:cls, reg Ncpus5:*, reg Ncpus6:V, reg p8:p(V +), reg r36:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r37:V, reg r38:V, reg list:cls, reg FUN1:*, reg FUN2:V, reg p9:p(V +), reg ddd1:dots?, reg r40:V, reg __6:cls, reg r41:V, reg r42:cls, reg cl:*, reg cl1:V, reg p10:p(V +), reg packages11:*, reg packages12:V, reg p11:p(V +), reg one2:*, reg one3:V, reg p12:p(V +), reg r46:V, reg __7:cls, reg r47:V, reg r48:cls, reg cl2:*, reg cl3:V, reg p13:p(V +), reg r50:V, reg lapply:cls, reg packages13:*, reg packages14:V, reg p14:p(V +), reg one4:*, reg one5:V, reg p15:p(V +), reg r54:V, reg packages15:*, reg packages16:V, reg l:*, reg names__:cls, reg r55:V, reg out:*, reg out1:V |
    mkenv;
    packages_isMissing = missing.0(packages);
    if packages_isMissing then L0(NULL) else L0(packages);
  L0(packages_orDefault):
    st packages = packages_orDefault;
    st FUN = FUN;
    st `...` = ddd;
    pattern_isMissing = missing.0(pattern);
    if pattern_isMissing then L1("*") else L1(pattern);
  L1(pattern_orDefault):
    st pattern = pattern_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L2(TRUE) else L2(verbose);
  L2(verbose_orDefault):
    st verbose = verbose_orDefault;
    Ncpus_isMissing = missing.0(Ncpus);
    if Ncpus_isMissing then L3() else L4(Ncpus);
  L3():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("Ncpus", 1);
      return r;
    };
    goto L4(p);
  L4(Ncpus_orDefault):
    st Ncpus = Ncpus_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L5(r3):
    c1 = `as.logical`(r3);
    if c1 then L19() else L6();
  L16():
    packages1 = ld packages;
    check L18() else D0();
  L17():
    r2 = dyn base(<sym packages>);
    goto L5(r2);
  D0():
    deopt 1 [packages1];
  L6():
    goto L7();
  L7():
    pattern1 = ld pattern;
    check L23() else D3();
  L18():
    packages2 = force? packages1;
    checkMissing(packages2);
    c = `==`(packages2, NULL);
    goto L5(c);
  L19():
    unique = ldf unique;
    check L20() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 11 [pattern1];
  L20():
    p1 = prom<V +>{
      __ = ldf `::`;
      r4 = dyn __("utils", "installed.packages");
      checkFun.0(r4);
      r5 = r4 as cls;
      r6 = dyn r5[priority]("high");
      c2 = `is.object`(r6);
      if c2 then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", r6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __1 = ldf `[` in base;
      r9 = dyn __1(r6, <missing>, 1);
      goto L0(r9);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r11 = dyn unique(p1);
    check L21() else D2();
  L23():
    pattern2 = force? pattern1;
    checkMissing(pattern2);
    r13 = `!=`(pattern2, "*");
    c3 = `as.logical`(r13);
    if c3 then L24() else L8();
  D2():
    deopt 7 [r11];
  L8():
    goto L10();
  L10():
    r22 = clos inner3913899244;
    st one = r22;
    Ncpus1 = ld Ncpus;
    check L32() else D7();
  L21():
    st packages = r11;
    goto L7();
  L24():
    packages3 = ld packages;
    check L25() else D4();
  D4():
    deopt 15 [packages3];
  D7():
    deopt 29 [Ncpus1];
  L25():
    packages4 = force? packages3;
    checkMissing(packages4);
    c4 = `is.object`(packages4);
    if c4 then L26() else L27(packages4);
  L32():
    Ncpus2 = force? Ncpus1;
    checkMissing(Ncpus2);
    r23 = `>`(Ncpus2, 1);
    c5 = `as.logical`(r23);
    if c5 then L33() else L11();
  L9(dx3):
    st packages = dx3;
    goto L10();
  L11():
    lapply = ldf lapply;
    check L58() else D23();
  L15():
    packages15 = ld packages;
    check L60() else D25();
  L26():
    dr2 = tryDispatchBuiltin.1("[", packages4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L28() else L27(dr2);
  L27(packages6):
    grepl = ldf grepl;
    check L29() else D5();
  L33():
    _Platform = ld `.Platform`;
    check L34() else D8();
  D5():
    deopt 18 [packages6];
  D8():
    deopt 33 [_Platform];
  D23():
    deopt 86 [];
  D25():
    deopt 91 [packages15];
  L28():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L29():
    p3 = prom<V +>{
      __2 = ldf `::`;
      r14 = dyn __2("utils", "glob2rx");
      checkFun.0(r14);
      r15 = r14 as cls;
      p2 = prom<V +>{
        pattern3 = ld pattern;
        pattern4 = force? pattern3;
        checkMissing(pattern4);
        return pattern4;
      };
      r17 = dyn r15(p2);
      return r17;
    };
    p4 = prom<V +>{
      packages7 = ld packages;
      packages8 = force? packages7;
      checkMissing(packages8);
      return packages8;
    };
    r20 = dyn grepl(p3, p4);
    check L30() else D6();
  L34():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c6 = `is.object`(_Platform1);
    if c6 then L36() else L37(_Platform1);
  L58():
    p14 = prom<V +>{
      packages13 = ld packages;
      packages14 = force? packages13;
      checkMissing(packages14);
      return packages14;
    };
    p15 = prom<V +>{
      one4 = ld one;
      one5 = force? one4;
      checkMissing(one5);
      return one5;
    };
    r54 = dyn lapply(p14, p15);
    check L59() else D24();
  L60():
    packages16 = force? packages15;
    checkMissing(packages16);
    l = ld out;
    names__ = ldf `names<-`;
    check L61() else D26();
  D6():
    deopt 21 [packages6, r20];
  D24():
    deopt 89 [r54];
  D26():
    deopt 94 [packages16, l, packages16];
  L30():
    __3 = ldf `[` in base;
    r21 = dyn __3(packages6, r20);
    goto L9(r21);
  L35(dx6):
    r25 = `!=`(dx6, "windows");
    c7 = `as.logical`(r25);
    if c7 then L39() else L12();
  L36():
    dr4 = tryDispatchBuiltin.1("$", _Platform1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L38() else L37(dr4);
  L37(_Platform3):
    r24 = `$`(_Platform3, <sym OS.type>);
    goto L35(r24);
  L59():
    st out = r54;
    goto L15();
  L61():
    r55 = dyn names__(l, NULL, packages16);
    check L62() else D27();
  D27():
    deopt 96 [packages16, r55];
  L12():
    __5 = ldf `::`;
    check L44() else D12();
  L13(r32):
    goto L15();
  L38():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L35(dx5);
  L39():
    __4 = ldf `::`;
    check L40() else D9();
  L62():
    st out = r55;
    out = ld out;
    check L63() else D28();
  D9():
    deopt 39 [];
  D12():
    deopt 51 [];
  D28():
    deopt 98 [out];
  L40():
    r26 = dyn __4("parallel", "mclapply");
    check L41() else D10();
  L44():
    r33 = dyn __5("parallel", "makeCluster");
    check L45() else D13();
  L63():
    out1 = force? out;
    checkMissing(out1);
    popenv;
    return out1;
  D10():
    deopt 42 [r26];
  D13():
    deopt 54 [r33];
  L41():
    checkFun.0(r26);
    r27 = r26 as cls;
    p5 = prom<V +>{
      packages9 = ld packages;
      packages10 = force? packages9;
      checkMissing(packages10);
      return packages10;
    };
    p6 = prom<V +>{
      one = ld one;
      one1 = force? one;
      checkMissing(one1);
      return one1;
    };
    p7 = prom<V +>{
      Ncpus3 = ld Ncpus;
      Ncpus4 = force? Ncpus3;
      checkMissing(Ncpus4);
      return Ncpus4;
    };
    r31 = dyn r27[, , `mc.cores`](p5, p6, p7);
    check L42() else D11();
  L45():
    checkFun.0(r33);
    r34 = r33 as cls;
    p8 = prom<V +>{
      Ncpus5 = ld Ncpus;
      Ncpus6 = force? Ncpus5;
      checkMissing(Ncpus6);
      return Ncpus6;
    };
    r36 = dyn r34(p8);
    check L46() else D14();
  D11():
    deopt 48 [r31];
  D14():
    deopt 57 [r36];
  L42():
    st out = r31;
    goto L13(r31);
  L46():
    st cl = r36;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L47() else L48();
  L14(r38):
    st args = r38;
    __6 = ldf `::`;
    check L51() else D17();
  L47():
    list = ldf list;
    check L49() else D15();
  L48():
    r37 = dyn base1(<sym FUN>, <sym ...>);
    goto L14(r37);
  D15():
    deopt 61 [];
  D17():
    deopt 67 [];
  L49():
    p9 = prom<V +>{
      FUN1 = ld FUN;
      FUN2 = force? FUN1;
      checkMissing(FUN2);
      return FUN2;
    };
    ddd1 = ld `...`;
    r40 = dyn list[, `...`](p9, ddd1);
    check L50() else D16();
  L51():
    r41 = dyn __6("parallel", "parLapply");
    check L52() else D18();
  D16():
    deopt 64 [r40];
  D18():
    deopt 70 [r41];
  L50():
    goto L14(r40);
  L52():
    checkFun.0(r41);
    r42 = r41 as cls;
    p10 = prom<V +>{
      cl = ld cl;
      cl1 = force? cl;
      checkMissing(cl1);
      return cl1;
    };
    p11 = prom<V +>{
      packages11 = ld packages;
      packages12 = force? packages11;
      checkMissing(packages12);
      return packages12;
    };
    p12 = prom<V +>{
      one2 = ld one;
      one3 = force? one2;
      checkMissing(one3);
      return one3;
    };
    r46 = dyn r42(p10, p11, p12);
    check L53() else D19();
  D19():
    deopt 75 [r46];
  L53():
    st out = r46;
    __7 = ldf `::`;
    check L54() else D20();
  D20():
    deopt 78 [];
  L54():
    r47 = dyn __7("parallel", "stopCluster");
    check L55() else D21();
  D21():
    deopt 81 [r47];
  L55():
    checkFun.0(r47);
    r48 = r47 as cls;
    p13 = prom<V +>{
      cl2 = ld cl;
      cl3 = force? cl2;
      checkMissing(cl3);
      return cl3;
    };
    r50 = dyn r48(p13);
    check L56() else D22();
  D22():
    deopt 84 [r50];
  L56():
    goto L13(r50);
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg verbose:*, reg verbose1:V, reg c:L, reg message:cls, reg sprintf:cls, reg p1:*, reg p2:V, reg p3:p(V +), reg r1:V, reg p4:p(V +), reg r3:V, reg tryCatch:cls, reg FUN:cls, reg p5:*, reg p6:V, reg p7:p(V +), reg ddd:*, reg r6:V, reg p8:p(V +), reg identity:*, reg identity1:V, reg p9:p(V +), reg r9:V |
    mkenv;
    st p = p;
    verbose = ld verbose;
    check L2() else D0();
  D0():
    deopt 0 [verbose];
  L2():
    verbose1 = force? verbose;
    checkMissing(verbose1);
    c = `as.logical`(verbose1);
    if c then L3() else L0();
  L0():
    goto L1();
  L1():
    tryCatch = ldf tryCatch;
    check L7() else D3();
  L3():
    message = ldf message;
    check L4() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 9 [];
  L4():
    p4 = prom<V +>{
      sprintf = ldf sprintf;
      p3 = prom<V +>{
        p1 = ld p;
        p2 = force? p1;
        checkMissing(p2);
        return p2;
      };
      r1 = dyn sprintf("processing %s", p3);
      return r1;
    };
    r3 = dyn message(p4);
    check L5() else D2();
  L7():
    p8 = prom<V +>{
      FUN = ldf FUN;
      p7 = prom<V +>{
        p5 = ld p;
        p6 = force? p5;
        checkMissing(p6);
        return p6;
      };
      ddd = ld `...`;
      r6 = dyn FUN[, `...`](p7, ddd);
      return r6;
    };
    p9 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r9 = dyn tryCatch[, error](p8, p9);
    check L8() else D4();
  D2():
    deopt 5 [r3];
  D4():
    deopt 13 [r9];
  L5():
    goto L1();
  L8():
    popenv;
    return r9;
  }
}