fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner671120299;
    st `.unpacked_source_repository_apply` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner671120299(dir, FUN, `...`, pattern, verbose, Ncpus) {
  (reg dir:*, reg FUN:*, reg ddd:dots, reg pattern:*, reg verbose:*, reg Ncpus:*) -+> V { var dir:*, var FUN:*, var `...`:dots?, var pattern:*, reg pattern_isMissing:L, reg pattern_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, var Ncpus:*, reg Ncpus_isMissing:L, reg Ncpus_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), reg file_path_as_absolute:cls, reg dir1:*, reg dir2:V, reg p1:p(V +), reg r3:V, reg Sys_glob:cls, reg file_path:cls, reg dir3:*, reg dir4:V, reg p2:p(V +), reg pattern1:*, reg pattern2:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V, reg dirname:cls, reg dfiles:*, reg dfiles1:V, reg p5:p(V +), reg r10:V, reg r11:cls, reg Ncpus1:*, reg Ncpus2:V, reg r12:V, reg c:L, reg _Platform:*, reg _Platform1:V, reg c1:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r13:V, reg r14:V, reg c2:L, reg __:cls, reg r15:V, reg r16:cls, reg paths:*, reg paths1:V, reg p6:p(V +), reg one:*, reg one1:V, reg p7:p(V +), reg Ncpus3:*, reg Ncpus4:V, reg p8:p(V +), reg r20:V, reg r21:V, reg __1:cls, reg r22:V, reg r23:cls, reg Ncpus5:*, reg Ncpus6:V, reg p9:p(V +), reg r25:V, reg sym:cls, reg base:cls, reg guard:L, reg r26:V, reg r27:V, reg list:cls, reg FUN1:*, reg FUN2:V, reg p10:p(V +), reg ddd1:dots?, reg r29:V, reg __2:cls, reg r30:V, reg r31:cls, reg cl:*, reg cl1:V, reg p11:p(V +), reg paths2:*, reg paths3:V, reg p12:p(V +), reg one2:*, reg one3:V, reg p13:p(V +), reg r35:V, reg __3:cls, reg r36:V, reg r37:cls, reg cl2:*, reg cl3:V, reg p14:p(V +), reg r39:V, reg lapply:cls, reg paths4:*, reg paths5:V, reg p15:p(V +), reg one4:*, reg one5:V, reg p16:p(V +), reg r43:V, reg basename:cls, reg paths6:*, reg paths7:V, reg p17:p(V +), reg r45:V, reg l:*, reg names__:cls, reg r46:V, reg out:*, reg out1:V |
    mkenv;
    st dir = dir;
    st FUN = FUN;
    st `...` = ddd;
    pattern_isMissing = missing.0(pattern);
    if pattern_isMissing then L0("*") else L0(pattern);
  L0(pattern_orDefault):
    st pattern = pattern_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L1(FALSE) else L1(verbose);
  L1(verbose_orDefault):
    st verbose = verbose_orDefault;
    Ncpus_isMissing = missing.0(Ncpus);
    if Ncpus_isMissing then L2() else L3(Ncpus);
  L2():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("Ncpus", 1);
      return r;
    };
    goto L3(p);
  L3(Ncpus_orDefault):
    st Ncpus = Ncpus_orDefault;
    file_path_as_absolute = ldf file_path_as_absolute;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p1 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r3 = dyn file_path_as_absolute(p1);
    check L10() else D1();
  D1():
    deopt 3 [r3];
  L10():
    st dir = r3;
    Sys_glob = ldf `Sys.glob`;
    check L11() else D2();
  D2():
    deopt 6 [];
  L11():
    p4 = prom<V +>{
      file_path = ldf `file.path`;
      p2 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      p3 = prom<V +>{
        pattern1 = ld pattern;
        pattern2 = force? pattern1;
        checkMissing(pattern2);
        return pattern2;
      };
      r6 = dyn file_path(p2, p3, "DESCRIPTION");
      return r6;
    };
    r8 = dyn Sys_glob(p4);
    check L12() else D3();
  D3():
    deopt 8 [r8];
  L12():
    st dfiles = r8;
    dirname = ldf dirname;
    check L13() else D4();
  D4():
    deopt 11 [];
  L13():
    p5 = prom<V +>{
      dfiles = ld dfiles;
      dfiles1 = force? dfiles;
      checkMissing(dfiles1);
      return dfiles1;
    };
    r10 = dyn dirname(p5);
    check L14() else D5();
  D5():
    deopt 13 [r10];
  L14():
    st paths = r10;
    r11 = clos inner3913899244;
    st one = r11;
    Ncpus1 = ld Ncpus;
    check L15() else D6();
  D6():
    deopt 18 [Ncpus1];
  L15():
    Ncpus2 = force? Ncpus1;
    checkMissing(Ncpus2);
    r12 = `>`(Ncpus2, 1);
    c = `as.logical`(r12);
    if c then L16() else L4();
  L4():
    lapply = ldf lapply;
    check L41() else D22();
  L8():
    basename = ldf basename;
    check L43() else D24();
  L16():
    _Platform = ld `.Platform`;
    check L17() else D7();
  D7():
    deopt 22 [_Platform];
  D22():
    deopt 75 [];
  D24():
    deopt 81 [];
  L17():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c1 = `is.object`(_Platform1);
    if c1 then L19() else L20(_Platform1);
  L41():
    p15 = prom<V +>{
      paths4 = ld paths;
      paths5 = force? paths4;
      checkMissing(paths5);
      return paths5;
    };
    p16 = prom<V +>{
      one4 = ld one;
      one5 = force? one4;
      checkMissing(one5);
      return one5;
    };
    r43 = dyn lapply(p15, p16);
    check L42() else D23();
  L43():
    p17 = prom<V +>{
      paths6 = ld paths;
      paths7 = force? paths6;
      checkMissing(paths7);
      return paths7;
    };
    r45 = dyn basename(p17);
    check L44() else D25();
  D23():
    deopt 78 [r43];
  D25():
    deopt 83 [r45];
  L18(dx1):
    r14 = `!=`(dx1, "windows");
    c2 = `as.logical`(r14);
    if c2 then L22() else L5();
  L19():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(_Platform3):
    r13 = `$`(_Platform3, <sym OS.type>);
    goto L18(r13);
  L42():
    st out = r43;
    goto L8();
  L44():
    l = ld out;
    names__ = ldf `names<-`;
    check L45() else D26();
  D26():
    deopt 85 [r45, l, r45];
  L5():
    __1 = ldf `::`;
    check L27() else D11();
  L6(r21):
    goto L8();
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L18(dx);
  L22():
    __ = ldf `::`;
    check L23() else D8();
  L45():
    r46 = dyn names__(l, NULL, r45);
    check L46() else D27();
  D8():
    deopt 28 [];
  D11():
    deopt 40 [];
  D27():
    deopt 87 [r45, r46];
  L23():
    r15 = dyn __("parallel", "mclapply");
    check L24() else D9();
  L27():
    r22 = dyn __1("parallel", "makeCluster");
    check L28() else D12();
  L46():
    st out = r46;
    out = ld out;
    check L47() else D28();
  D9():
    deopt 31 [r15];
  D12():
    deopt 43 [r22];
  D28():
    deopt 89 [out];
  L24():
    checkFun.0(r15);
    r16 = r15 as cls;
    p6 = prom<V +>{
      paths = ld paths;
      paths1 = force? paths;
      checkMissing(paths1);
      return paths1;
    };
    p7 = prom<V +>{
      one = ld one;
      one1 = force? one;
      checkMissing(one1);
      return one1;
    };
    p8 = prom<V +>{
      Ncpus3 = ld Ncpus;
      Ncpus4 = force? Ncpus3;
      checkMissing(Ncpus4);
      return Ncpus4;
    };
    r20 = dyn r16[, , `mc.cores`](p6, p7, p8);
    check L25() else D10();
  L28():
    checkFun.0(r22);
    r23 = r22 as cls;
    p9 = prom<V +>{
      Ncpus5 = ld Ncpus;
      Ncpus6 = force? Ncpus5;
      checkMissing(Ncpus6);
      return Ncpus6;
    };
    r25 = dyn r23(p9);
    check L29() else D13();
  L47():
    out1 = force? out;
    checkMissing(out1);
    popenv;
    return out1;
  D10():
    deopt 37 [r20];
  D13():
    deopt 46 [r25];
  L25():
    st out = r20;
    goto L6(r20);
  L29():
    st cl = r25;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  L7(r27):
    st args = r27;
    __2 = ldf `::`;
    check L34() else D16();
  L30():
    list = ldf list;
    check L32() else D14();
  L31():
    r26 = dyn base(<sym FUN>, <sym ...>);
    goto L7(r26);
  D14():
    deopt 50 [];
  D16():
    deopt 56 [];
  L32():
    p10 = prom<V +>{
      FUN1 = ld FUN;
      FUN2 = force? FUN1;
      checkMissing(FUN2);
      return FUN2;
    };
    ddd1 = ld `...`;
    r29 = dyn list[, `...`](p10, ddd1);
    check L33() else D15();
  L34():
    r30 = dyn __2("parallel", "parLapply");
    check L35() else D17();
  D15():
    deopt 53 [r29];
  D17():
    deopt 59 [r30];
  L33():
    goto L7(r29);
  L35():
    checkFun.0(r30);
    r31 = r30 as cls;
    p11 = prom<V +>{
      cl = ld cl;
      cl1 = force? cl;
      checkMissing(cl1);
      return cl1;
    };
    p12 = prom<V +>{
      paths2 = ld paths;
      paths3 = force? paths2;
      checkMissing(paths3);
      return paths3;
    };
    p13 = prom<V +>{
      one2 = ld one;
      one3 = force? one2;
      checkMissing(one3);
      return one3;
    };
    r35 = dyn r31(p11, p12, p13);
    check L36() else D18();
  D18():
    deopt 64 [r35];
  L36():
    st out = r35;
    __3 = ldf `::`;
    check L37() else D19();
  D19():
    deopt 67 [];
  L37():
    r36 = dyn __3("parallel", "stopCluster");
    check L38() else D20();
  D20():
    deopt 70 [r36];
  L38():
    checkFun.0(r36);
    r37 = r36 as cls;
    p14 = prom<V +>{
      cl2 = ld cl;
      cl3 = force? cl2;
      checkMissing(cl3);
      return cl3;
    };
    r39 = dyn r37(p14);
    check L39() else D21();
  D21():
    deopt 73 [r39];
  L39():
    goto L6(r39);
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg verbose:*, reg verbose1:V, reg c:L, reg message:cls, reg sprintf:cls, reg basename:cls, reg p1:*, reg p2:V, reg p3:p(V +), reg r1:V, reg p4:p(V +), reg r3:V, reg p5:p(V +), reg r5:V, reg tryCatch:cls, reg FUN:cls, reg p6:*, reg p7:V, reg p8:p(V +), reg ddd:*, reg r8:V, reg p9:p(V +), reg identity:*, reg identity1:V, reg p10:p(V +), reg r11:V |
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
    p5 = prom<V +>{
      sprintf = ldf sprintf;
      p4 = prom<V +>{
        basename = ldf basename;
        p3 = prom<V +>{
          p1 = ld p;
          p2 = force? p1;
          checkMissing(p2);
          return p2;
        };
        r1 = dyn basename(p3);
        return r1;
      };
      r3 = dyn sprintf("processing %s", p4);
      return r3;
    };
    r5 = dyn message(p5);
    check L5() else D2();
  L7():
    p9 = prom<V +>{
      FUN = ldf FUN;
      p8 = prom<V +>{
        p6 = ld p;
        p7 = force? p6;
        checkMissing(p7);
        return p7;
      };
      ddd = ld `...`;
      r8 = dyn FUN[, `...`](p8, ddd);
      return r8;
    };
    p10 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r11 = dyn tryCatch[, error](p9, p10);
    check L8() else D4();
  D2():
    deopt 5 [r5];
  D4():
    deopt 13 [r11];
  L5():
    goto L1();
  L8():
    popenv;
    return r11;
  }
}