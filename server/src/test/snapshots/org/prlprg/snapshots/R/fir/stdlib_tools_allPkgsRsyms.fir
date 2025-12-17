fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1227555108;
    st allPkgsRsyms = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1227555108(`lib.loc`, Ncpus, verbose) {
  (reg lib_loc:*, reg Ncpus:*, reg verbose:*) -+> V { var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var Ncpus:*, reg Ncpus_isMissing:L, reg Ncpus_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg getOption1:cls, reg r2:V, reg p1:p(V +), reg rownames:cls, reg __:cls, reg r4:V, reg r5:cls, reg lib_loc1:*, reg lib_loc2:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg r9:V, reg rbind_list:cls, reg _package_apply:cls, reg p4:*, reg p5:V, reg p6:p(V +), reg pkgRsyms:*, reg pkgRsyms1:V, reg p7:p(V +), reg Ncpus1:*, reg Ncpus2:V, reg p8:p(V +), reg verbose1:*, reg verbose2:V, reg p9:p(V +), reg r14:V, reg p10:p(V +), reg r16:V |
    mkenv;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    Ncpus_isMissing = missing.0(Ncpus);
    if Ncpus_isMissing then L1() else L2(Ncpus);
  L1():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("Ncpus", 1);
      return r;
    };
    goto L2(p);
  L2(Ncpus_orDefault):
    st Ncpus = Ncpus_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L3() else L4(verbose);
  L3():
    p1 = prom<V +>{
      getOption1 = ldf getOption;
      r2 = dyn getOption1("verbose");
      return r2;
    };
    goto L4(p1);
  L4(verbose_orDefault):
    st verbose = verbose_orDefault;
    rownames = ldf rownames;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p3 = prom<V +>{
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
      r7 = dyn r5[`lib.loc`](p2);
      return r7;
    };
    r9 = dyn rownames(p3);
    check L6() else D1();
  D1():
    deopt 3 [r9];
  L6():
    st p = r9;
    rbind_list = ldf rbind_list;
    check L7() else D2();
  D2():
    deopt 6 [];
  L7():
    p10 = prom<V +>{
      _package_apply = ldf `.package_apply`;
      p6 = prom<V +>{
        p4 = ld p;
        p5 = force? p4;
        checkMissing(p5);
        return p5;
      };
      p7 = prom<V +>{
        pkgRsyms = ld pkgRsyms;
        pkgRsyms1 = force? pkgRsyms;
        checkMissing(pkgRsyms1);
        return pkgRsyms1;
      };
      p8 = prom<V +>{
        Ncpus1 = ld Ncpus;
        Ncpus2 = force? Ncpus1;
        checkMissing(Ncpus2);
        return Ncpus2;
      };
      p9 = prom<V +>{
        verbose1 = ld verbose;
        verbose2 = force? verbose1;
        checkMissing(verbose2);
        return verbose2;
      };
      r14 = dyn _package_apply[, , Ncpus, verbose](p6, p7, p8, p9);
      return r14;
    };
    r16 = dyn rbind_list(p10);
    check L8() else D3();
  D3():
    deopt 8 [r16];
  L8():
    popenv;
    return r16;
  }
}