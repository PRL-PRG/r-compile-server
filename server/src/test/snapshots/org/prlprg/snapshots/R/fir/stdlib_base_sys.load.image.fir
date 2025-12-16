fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1456617106;
    st `sys.load.image` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1456617106(name, quiet) {
  (reg name:*, reg quiet:*) -+> V { var name:*, var quiet:*, reg file_exists:cls, reg name1:*, reg name2:V, reg p:p(V +), reg r1:V, reg c:L, reg load:cls, reg name3:*, reg name4:V, reg p1:p(V +), reg _GlobalEnv:*, reg _GlobalEnv1:V, reg p2:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg RNGkind:cls, reg r7:V, reg c1:L, reg r9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r10:V, reg sample_kind:*, reg sample_kind1:V, reg r11:V, reg c2:L, reg warning:cls, reg r12:V, reg quiet1:*, reg quiet2:V, reg r14:V, reg c3:L, reg message:cls, reg r15:V |
    mkenv;
    st name = name;
    st quiet = quiet;
    file_exists = ldf `file.exists`;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    r1 = dyn file_exists(p);
    check L7() else D1();
  D1():
    deopt 3 [r1];
  L7():
    c = `as.logical`(r1);
    if c then L8() else L0();
  L0():
    invisible.0();
    popenv;
    return NULL;
  L8():
    load = ldf load;
    check L9() else D2();
  D2():
    deopt 5 [];
  L9():
    p1 = prom<V +>{
      name3 = ld name;
      name4 = force? name3;
      checkMissing(name4);
      return name4;
    };
    p2 = prom<V +>{
      _GlobalEnv = ld `.GlobalEnv`;
      _GlobalEnv1 = force? _GlobalEnv;
      checkMissing(_GlobalEnv1);
      return _GlobalEnv1;
    };
    r4 = dyn load[, envir](p1, p2);
    check L10() else D3();
  D3():
    deopt 9 [r4];
  L10():
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L1(r6):
    c1 = `is.object`(r6);
    if c1 then L14() else L15(r6);
  L11():
    RNGkind = ldf RNGkind in base;
    r7 = dyn RNGkind(NULL, NULL, NULL);
    check L13() else D4();
  L12():
    r5 = dyn base(<lang RNGkind(NULL, NULL, NULL)>);
    goto L1(r5);
  D4():
    deopt 16 [r7];
  L2(dx1):
    st `sample.kind` = dx1;
    sample_kind = ld `sample.kind`;
    check L17() else D5();
  L13():
    goto L1(r7);
  L14():
    dr = tryDispatchBuiltin.1("[", r6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(r9):
    __ = ldf `[` in base;
    r10 = dyn __(r9, 3);
    goto L2(r10);
  D5():
    deopt 21 [sample_kind];
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L17():
    sample_kind1 = force? sample_kind;
    checkMissing(sample_kind1);
    r11 = `==`(sample_kind1, 0);
    c2 = `as.logical`(r11);
    if c2 then L18() else L3();
  L3():
    goto L4();
  L4():
    quiet1 = ld quiet;
    check L22() else D8();
  L18():
    warning = ldf warning;
    check L19() else D6();
  D6():
    deopt 26 [];
  D8():
    deopt 33 [quiet1];
  L19():
    r12 = dyn warning[, domain]("non-uniform 'Rounding' sampler used", NA_LGL);
    check L20() else D7();
  L22():
    quiet2 = force? quiet1;
    checkMissing(quiet2);
    r14 = `!`(quiet2);
    c3 = `as.logical`(r14);
    if c3 then L23() else L5();
  D7():
    deopt 30 [r12];
  L5():
    invisible.0();
    popenv;
    return NULL;
  L20():
    goto L4();
  L23():
    message = ldf message;
    check L24() else D9();
  D9():
    deopt 37 [];
  L24():
    r15 = dyn message("[Previously saved workspace restored]", "\n");
    check L25() else D10();
  D10():
    deopt 40 [r15];
  L25():
    popenv;
    return r15;
  }
}