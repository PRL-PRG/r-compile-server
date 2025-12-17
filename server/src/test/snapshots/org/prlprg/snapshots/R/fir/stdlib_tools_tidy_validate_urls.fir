fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2249233644;
    st tidy_validate_urls = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2249233644(urls, verbose) {
  (reg urls:*, reg verbose:*) -+> V { var urls:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg interactive:cls, reg r2:V, reg p:p(V +), reg tempfile:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg on_exit:cls, reg r7:V, reg tidy_validate_db:cls, reg lapply:cls, reg urls1:*, reg urls2:V, reg p1:p(V +), reg r9:cls, reg p2:p(V +), reg r11:V, reg p3:p(V +), reg urls3:*, reg urls4:V, reg p4:p(V +), reg r14:V |
    mkenv;
    st urls = urls;
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
    tempfile = ldf tempfile;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    r4 = dyn tempfile("tidy_validate");
    check L4() else D1();
  D1():
    deopt 3 [r4];
  L4():
    st destfile = r4;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L2():
    tidy_validate_db = ldf tidy_validate_db;
    check L7() else D2();
  L5():
    on_exit = ldf `on.exit` in base;
    r7 = dyn on_exit(<lang unlink(destfile)>);
    goto L2();
  L6():
    r5 = dyn base1(<lang unlink(destfile)>);
    goto L2();
  D2():
    deopt 9 [];
  L7():
    p3 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        urls1 = ld urls;
        urls2 = force? urls1;
        checkMissing(urls2);
        return urls2;
      };
      p2 = prom<V +>{
        r9 = clos inner883694641;
        return r9;
      };
      r11 = dyn lapply(p1, p2);
      return r11;
    };
    p4 = prom<V +>{
      urls3 = ld urls;
      urls4 = force? urls3;
      checkMissing(urls4);
      return urls4;
    };
    r14 = dyn tidy_validate_db(p3, p4);
    check L8() else D3();
  D3():
    deopt 12 [r14];
  L8():
    popenv;
    return r14;
  }
}
fun inner883694641(u) {
  (reg u:*) -+> V { var u:*, reg verbose:*, reg verbose1:V, reg c:L, reg message:cls, reg sprintf:cls, reg u1:*, reg u2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg __:cls, reg r5:V, reg r6:cls, reg u3:*, reg u4:V, reg p2:p(V +), reg destfile:*, reg destfile1:V, reg p3:p(V +), reg r9:V, reg tidy_validate:cls, reg destfile2:*, reg destfile3:V, reg p4:p(V +), reg r11:V |
    mkenv;
    st u = u;
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
    __ = ldf `::`;
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
        u1 = ld u;
        u2 = force? u1;
        checkMissing(u2);
        return u2;
      };
      r1 = dyn sprintf("Processing %s ...", p);
      return r1;
    };
    r3 = dyn message(p1);
    check L5() else D2();
  L7():
    r5 = dyn __("utils", "download.file");
    check L8() else D4();
  D2():
    deopt 5 [r3];
  D4():
    deopt 12 [r5];
  L5():
    goto L1();
  L8():
    checkFun.0(r5);
    r6 = r5 as cls;
    p2 = prom<V +>{
      u3 = ld u;
      u4 = force? u3;
      checkMissing(u4);
      return u4;
    };
    p3 = prom<V +>{
      destfile = ld destfile;
      destfile1 = force? destfile;
      checkMissing(destfile1);
      return destfile1;
    };
    r9 = dyn r6[, , quiet](p2, p3, TRUE);
    check L9() else D5();
  D5():
    deopt 18 [r9];
  L9():
    tidy_validate = ldf tidy_validate;
    check L10() else D6();
  D6():
    deopt 20 [];
  L10():
    p4 = prom<V +>{
      destfile2 = ld destfile;
      destfile3 = force? destfile2;
      checkMissing(destfile3);
      return destfile3;
    };
    r11 = dyn tidy_validate(p4);
    check L11() else D7();
  D7():
    deopt 22 [r11];
  L11():
    popenv;
    return r11;
  }
}