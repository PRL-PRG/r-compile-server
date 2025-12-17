fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner180949382;
    st `.normalizePath` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner180949382(path, wd) {
  (reg path:*, reg wd:*) -+> V { var path:*, var wd:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg wd1:*, reg wd2:V, reg c6:V, reg r6:V, reg c7:L, reg c8:V, reg c10:L, reg setwd:cls, reg wd3:*, reg wd4:V, reg p:p(V +), reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg on_exit:cls, reg r11:V, reg suppressWarnings:cls, reg normalizePath:cls, reg path1:*, reg path2:V, reg p1:p(V +), reg r14:V, reg p2:p(V +), reg r16:V |
    mkenv;
    st path = path;
    st wd = wd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L8() else L1(c);
  L6():
    missing = ldf missing in base;
    r2 = dyn missing(<sym wd>);
    goto L0(r2);
  L7():
    r = dyn base(<sym wd>);
    goto L0(r);
  L1(c2):
    c10 = `as.logical`(c2);
    if c10 then L13() else L3();
  L8():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L2(c5, r5):
    r6 = `!`(r5);
    c7 = `as.logical`(r6);
    c8 = `&&`(c5, c7);
    goto L1(c8);
  L3():
    goto L5();
  L5():
    suppressWarnings = ldf suppressWarnings;
    check L19() else D3();
  L9():
    wd1 = ld wd;
    check L11() else D0();
  L10():
    r4 = dyn base1(<sym wd>);
    goto L2(c, r4);
  L13():
    setwd = ldf setwd;
    check L14() else D1();
  D0():
    deopt 5 [c, wd1];
  D1():
    deopt 11 [];
  D3():
    deopt 21 [];
  L11():
    wd2 = force? wd1;
    checkMissing(wd2);
    c6 = `==`(wd2, NULL);
    goto L2(c, c6);
  L14():
    p = prom<V +>{
      wd3 = ld wd;
      wd4 = force? wd3;
      checkMissing(wd4);
      return wd4;
    };
    r8 = dyn setwd(p);
    check L15() else D2();
  L19():
    p2 = prom<V +>{
      normalizePath = ldf normalizePath;
      p1 = prom<V +>{
        path1 = ld path;
        path2 = force? path1;
        checkMissing(path2);
        return path2;
      };
      r14 = dyn normalizePath(p1);
      return r14;
    };
    r16 = dyn suppressWarnings(p2);
    check L20() else D4();
  D2():
    deopt 13 [r8];
  D4():
    deopt 23 [r16];
  L15():
    st oldwd = r8;
    sym2 = ldf `on.exit`;
    base2 = ldf `on.exit` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L20():
    popenv;
    return r16;
  L4(r10):
    goto L5();
  L16():
    on_exit = ldf `on.exit` in base;
    r11 = dyn on_exit(<lang setwd(oldwd)>);
    goto L4(r11);
  L17():
    r9 = dyn base2(<lang setwd(oldwd)>);
    goto L4(r9);
  }
}