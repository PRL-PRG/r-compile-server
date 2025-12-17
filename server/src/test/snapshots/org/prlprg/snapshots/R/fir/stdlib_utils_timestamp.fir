fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3614610176;
    st timestamp = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3614610176(stamp, prefix, suffix, quiet) {
  (reg stamp:*, reg prefix:*, reg suffix:*, reg quiet:*) -+> V { var stamp:*, reg stamp_isMissing:L, reg stamp_orDefault:*, reg date:cls, reg r:V, reg p:p(V +), var prefix:*, reg prefix_isMissing:L, reg prefix_orDefault:*, var suffix:*, reg suffix_isMissing:L, reg suffix_orDefault:*, var quiet:*, reg quiet_isMissing:L, reg quiet_orDefault:*, reg paste0:cls, reg prefix1:*, reg prefix2:V, reg p1:p(V +), reg stamp1:*, reg stamp2:V, reg p2:p(V +), reg suffix1:*, reg suffix2:V, reg p3:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg C_addhistory:*, reg C_addhistory1:V, reg stamp3:*, reg stamp4:V, reg _External2:cls, reg r8:V, reg quiet1:*, reg quiet2:V, reg r9:V, reg c:L, reg cat:cls, reg stamp5:*, reg stamp6:V, reg p4:p(V +), reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg stamp7:*, reg stamp8:V, reg invisible:cls, reg r15:V |
    mkenv;
    stamp_isMissing = missing.0(stamp);
    if stamp_isMissing then L0() else L1(stamp);
  L0():
    p = prom<V +>{
      date = ldf date;
      r = dyn date();
      return r;
    };
    goto L1(p);
  L1(stamp_orDefault):
    st stamp = stamp_orDefault;
    prefix_isMissing = missing.0(prefix);
    if prefix_isMissing then L2("##------ ") else L2(prefix);
  L2(prefix_orDefault):
    st prefix = prefix_orDefault;
    suffix_isMissing = missing.0(suffix);
    if suffix_isMissing then L3(" ------##") else L3(suffix);
  L3(suffix_orDefault):
    st suffix = suffix_orDefault;
    quiet_isMissing = missing.0(quiet);
    if quiet_isMissing then L4(FALSE) else L4(quiet);
  L4(quiet_orDefault):
    st quiet = quiet_orDefault;
    paste0 = ldf paste0;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p1 = prom<V +>{
      prefix1 = ld prefix;
      prefix2 = force? prefix1;
      checkMissing(prefix2);
      return prefix2;
    };
    p2 = prom<V +>{
      stamp1 = ld stamp;
      stamp2 = force? stamp1;
      checkMissing(stamp2);
      return stamp2;
    };
    p3 = prom<V +>{
      suffix1 = ld suffix;
      suffix2 = force? suffix1;
      checkMissing(suffix2);
      return suffix2;
    };
    r5 = dyn paste0(p1, p2, p3);
    check L10() else D1();
  D1():
    deopt 5 [r5];
  L10():
    st stamp = r5;
    sym = ldf `.External2`;
    base = ldf `.External2` in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L5():
    quiet1 = ld quiet;
    check L16() else D5();
  L11():
    C_addhistory = ld C_addhistory;
    check L13() else D2();
  L12():
    r6 = dyn base(<sym C_addhistory>, <sym stamp>);
    goto L5();
  D2():
    deopt 9 [C_addhistory];
  D5():
    deopt 15 [quiet1];
  L13():
    C_addhistory1 = force? C_addhistory;
    checkMissing(C_addhistory1);
    stamp3 = ld stamp;
    check L14() else D3();
  L16():
    quiet2 = force? quiet1;
    checkMissing(quiet2);
    r9 = `!`(quiet2);
    c = `as.logical`(r9);
    if c then L17() else L6();
  D3():
    deopt 11 [stamp3];
  L6():
    goto L7();
  L7():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L14():
    stamp4 = force? stamp3;
    checkMissing(stamp4);
    _External2 = ldf `.External2` in base;
    r8 = dyn _External2(C_addhistory1, stamp4);
    check L15() else D4();
  L17():
    cat = ldf cat;
    check L18() else D6();
  D4():
    deopt 14 [r8];
  D6():
    deopt 19 [];
  L8(r14):
    popenv;
    return r14;
  L15():
    goto L5();
  L18():
    p4 = prom<V +>{
      stamp5 = ld stamp;
      stamp6 = force? stamp5;
      checkMissing(stamp6);
      return stamp6;
    };
    r11 = dyn cat[, sep](p4, "\n");
    check L19() else D7();
  L21():
    stamp7 = ld stamp;
    check L23() else D8();
  L22():
    r13 = dyn base1(<sym stamp>);
    goto L8(r13);
  D7():
    deopt 23 [r11];
  D8():
    deopt 28 [stamp7];
  L19():
    goto L7();
  L23():
    stamp8 = force? stamp7;
    checkMissing(stamp8);
    invisible = ldf invisible in base;
    r15 = dyn invisible(stamp8);
    check L24() else D9();
  D9():
    deopt 31 [r15];
  L24():
    goto L8(r15);
  }
}