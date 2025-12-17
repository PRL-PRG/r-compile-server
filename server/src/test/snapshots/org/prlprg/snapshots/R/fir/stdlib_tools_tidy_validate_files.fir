fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2364799581;
    st tidy_validate_files = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2364799581(files, verbose) {
  (reg files:*, reg verbose:*) -+> V { var files:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg interactive:cls, reg r2:V, reg p:p(V +), reg tidy_validate_db:cls, reg lapply:cls, reg files1:*, reg files2:V, reg p1:p(V +), reg r5:cls, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg files3:*, reg files4:V, reg p4:p(V +), reg r10:V |
    mkenv;
    st files = files;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L0() else L1(verbose);
  L0():
    p = prom<V +>{
      sym = ldf interactive;
      base = ldf interactive in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      interactive = ldf interactive in base;
      r2 = dyn interactive();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L1(p);
  L1(verbose_orDefault):
    st verbose = verbose_orDefault;
    tidy_validate_db = ldf tidy_validate_db;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p3 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        files1 = ld files;
        files2 = force? files1;
        checkMissing(files2);
        return files2;
      };
      p2 = prom<V +>{
        r5 = clos inner1384373858;
        return r5;
      };
      r7 = dyn lapply(p1, p2);
      return r7;
    };
    p4 = prom<V +>{
      files3 = ld files;
      files4 = force? files3;
      checkMissing(files4);
      return files4;
    };
    r10 = dyn tidy_validate_db(p3, p4);
    check L3() else D1();
  D1():
    deopt 4 [r10];
  L3():
    popenv;
    return r10;
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg verbose:*, reg verbose1:V, reg c:L, reg message:cls, reg sprintf:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg tidy_validate:cls, reg f3:*, reg f4:V, reg p2:p(V +), reg r6:V |
    mkenv;
    st f = f;
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
    tidy_validate = ldf tidy_validate;
    check L7() else D3();
  L3():
    message = ldf message;
    check L4() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 9 [];
  L4():
    p1 = prom<V +>{
      sprintf = ldf sprintf;
      p = prom<V +>{
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
      r1 = dyn sprintf("Processing %s ...", p);
      return r1;
    };
    r3 = dyn message(p1);
    check L5() else D2();
  L7():
    p2 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    r6 = dyn tidy_validate(p2);
    check L8() else D4();
  D2():
    deopt 5 [r3];
  D4():
    deopt 11 [r6];
  L5():
    goto L1();
  L8():
    popenv;
    return r6;
  }
}