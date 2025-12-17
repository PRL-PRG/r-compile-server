fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1822388125;
    st checkAllPkgsAPI = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1822388125(`lib.loc`, priority, all, Ncpus, verbose) {
  (reg lib_loc:*, reg priority:*, reg all:*, reg Ncpus:*, reg verbose:*) -+> V { var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var priority:*, reg priority_isMissing:L, reg priority_orDefault:*, var all:*, reg all_isMissing:L, reg all_orDefault:*, var Ncpus:*, reg Ncpus_isMissing:L, reg Ncpus_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg getOption1:cls, reg r2:V, reg p1:p(V +), reg rownames:cls, reg __:cls, reg r4:V, reg r5:cls, reg lib_loc1:*, reg lib_loc2:V, reg p2:p(V +), reg priority1:*, reg priority2:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), reg r10:V, reg r11:cls, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p5:p(V +), reg _package_apply:cls, reg p6:*, reg p7:V, reg p8:p(V +), reg checkOne:*, reg checkOne1:V, reg p9:p(V +), reg Ncpus1:*, reg Ncpus2:V, reg p10:p(V +), reg verbose1:*, reg verbose2:V, reg p11:p(V +), reg r17:V, reg p12:p(V +), reg r19:V, reg l:*, reg rownames__:cls, reg r20:V, reg val:*, reg val1:V |
    mkenv;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    priority_isMissing = missing.0(priority);
    if priority_isMissing then L1(NULL) else L1(priority);
  L1(priority_orDefault):
    st priority = priority_orDefault;
    all_isMissing = missing.0(all);
    if all_isMissing then L2(FALSE) else L2(all);
  L2(all_orDefault):
    st all = all_orDefault;
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
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L5() else L6(verbose);
  L5():
    p1 = prom<V +>{
      getOption1 = ldf getOption;
      r2 = dyn getOption1("verbose");
      return r2;
    };
    goto L6(p1);
  L6(verbose_orDefault):
    st verbose = verbose_orDefault;
    rownames = ldf rownames;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p4 = prom<V +>{
      __ = ldf `::`;
      r4 = dyn __("utils", "installed.packages");
      checkFun.0(r4);
      r5 = r4 as cls;
      p2 = prom<V +>{
        lib_loc1 = ld `lib.loc`;
        lib_loc2 = force? lib_loc1;
        checkMissing(lib_loc2);
        return lib_loc2;
      };
      p3 = prom<V +>{
        priority1 = ld priority;
        priority2 = force? priority1;
        checkMissing(priority2);
        return priority2;
      };
      r8 = dyn r5[`lib.loc`, priority](p2, p3);
      return r8;
    };
    r10 = dyn rownames(p4);
    check L8() else D1();
  D1():
    deopt 3 [r10];
  L8():
    st p = r10;
    r11 = clos inner423301576;
    st checkOne = r11;
    do_call = ldf `do.call`;
    check L9() else D2();
  D2():
    deopt 9 [];
  L9():
    p5 = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p12 = prom<V +>{
      _package_apply = ldf `.package_apply`;
      p8 = prom<V +>{
        p6 = ld p;
        p7 = force? p6;
        checkMissing(p7);
        return p7;
      };
      p9 = prom<V +>{
        checkOne = ld checkOne;
        checkOne1 = force? checkOne;
        checkMissing(checkOne1);
        return checkOne1;
      };
      p10 = prom<V +>{
        Ncpus1 = ld Ncpus;
        Ncpus2 = force? Ncpus1;
        checkMissing(Ncpus2);
        return Ncpus2;
      };
      p11 = prom<V +>{
        verbose1 = ld verbose;
        verbose2 = force? verbose1;
        checkMissing(verbose2);
        return verbose2;
      };
      r17 = dyn _package_apply[, , Ncpus, verbose](p8, p9, p10, p11);
      return r17;
    };
    r19 = dyn do_call(p5, p12);
    check L10() else D3();
  D3():
    deopt 12 [r19];
  L10():
    st val = r19;
    l = ld val;
    rownames__ = ldf `rownames<-`;
    check L11() else D4();
  D4():
    deopt 17 [NULL, l, NULL];
  L11():
    r20 = dyn rownames__(l, NULL, NULL);
    check L12() else D5();
  D5():
    deopt 19 [NULL, r20];
  L12():
    st val = r20;
    val = ld val;
    check L13() else D6();
  D6():
    deopt 21 [val];
  L13():
    val1 = force? val;
    checkMissing(val1);
    popenv;
    return val1;
  }
}
fun inner423301576(pkg) {
  (reg pkg:*) -+> V { var pkg:*, reg checkPkgAPI:cls, reg pkg1:*, reg pkg2:V, reg p:p(V +), reg lib_loc:*, reg lib_loc1:V, reg p1:p(V +), reg all:*, reg all1:V, reg p2:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg data:*, reg data1:V, reg c:V, reg r6:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg rep:cls, reg r9:V, reg l:*, reg c2:L, reg r11:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg r13:V, reg dx1:V, reg r14:V, reg data2:*, reg data3:V |
    mkenv;
    st pkg = pkg;
    checkPkgAPI = ldf checkPkgAPI;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      pkg1 = ld pkg;
      pkg2 = force? pkg1;
      checkMissing(pkg2);
      return pkg2;
    };
    p1 = prom<V +>{
      lib_loc = ld `lib.loc`;
      lib_loc1 = force? lib_loc;
      checkMissing(lib_loc1);
      return lib_loc1;
    };
    p2 = prom<V +>{
      all = ld all;
      all1 = force? all;
      checkMissing(all1);
      return all1;
    };
    r3 = dyn checkPkgAPI[, `lib.loc`, all](p, p1, p2);
    check L5() else D1();
  D1():
    deopt 7 [r3];
  L5():
    st data = r3;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r5):
    r6 = `!`(r5);
    c1 = `as.logical`(r6);
    if c1 then L9() else L1();
  L6():
    data = ld data;
    check L8() else D2();
  L7():
    r4 = dyn base(<sym data>);
    goto L0(r4);
  D2():
    deopt 10 [data];
  L1():
    goto L3();
  L3():
    data2 = ld data;
    check L17() else D3();
  L8():
    data1 = force? data;
    checkMissing(data1);
    c = `==`(data1, NULL);
    goto L0(c);
  L9():
    sym1 = ldf rep;
    base1 = ldf rep in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  D3():
    deopt 22 [data2];
  L2(r8):
    l = ld data;
    c2 = `is.object`(l);
    if c2 then L13() else L14(r8, l);
  L10():
    rep = ldf rep in base;
    r9 = dyn rep(<sym pkg>, <lang nrow(data)>);
    goto L2(r9);
  L11():
    r7 = dyn base1(<sym pkg>, <lang nrow(data)>);
    goto L2(r7);
  L17():
    data3 = force? data2;
    checkMissing(data3);
    popenv;
    return data3;
  L12(r13, dx1):
    st data = dx1;
    goto L3();
  L13():
    dr = tryDispatchBuiltin.0("$<-", l, r8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(r8, dr);
  L14(r11, l2):
    r14 = `$<-`(l2, <sym pkg>, r8);
    goto L12(r11, r14);
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(r8, dx);
  }
}