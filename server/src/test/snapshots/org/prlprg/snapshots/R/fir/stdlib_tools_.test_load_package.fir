fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3255071855;
    st `.test_load_package` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3255071855(pkg_name, lib) {
  (reg pkg_name:*, reg lib:*) -+> V { var pkg_name:*, var lib:*, reg options:cls, reg r:V, reg try:cls, reg suppressPackageStartupMessages:cls, reg library:cls, reg pkg_name1:*, reg pkg_name2:V, reg p:p(V +), reg lib1:*, reg lib2:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg res:*, reg res1:V, reg inherits:cls, reg r10:V, reg c:L, reg c1:V, reg res2:*, reg res3:V, reg r11:V, reg c3:L, reg c4:V, reg c6:L, reg stop:cls, reg r12:V |
    mkenv;
    st pkg_name = pkg_name;
    st lib = lib;
    options = ldf options;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    r = dyn options[warn](1.0);
    check L4() else D1();
  D1():
    deopt 4 [r];
  L4():
    try = ldf try;
    check L5() else D2();
  D2():
    deopt 6 [];
  L5():
    p3 = prom<V +>{
      suppressPackageStartupMessages = ldf suppressPackageStartupMessages;
      p2 = prom<V +>{
        library = ldf library;
        p = prom<V +>{
          pkg_name1 = ld pkg_name;
          pkg_name2 = force? pkg_name1;
          checkMissing(pkg_name2);
          return pkg_name2;
        };
        p1 = prom<V +>{
          lib1 = ld lib;
          lib2 = force? lib1;
          checkMissing(lib2);
          return lib2;
        };
        r3 = dyn library[, `lib.loc`, `character.only`, `logical.return`](p, p1, TRUE, TRUE);
        return r3;
      };
      r5 = dyn suppressPackageStartupMessages(p2);
      return r5;
    };
    r7 = dyn try(p3);
    check L6() else D3();
  D3():
    deopt 8 [r7];
  L6():
    st res = r7;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r9):
    c = `as.logical`(r9);
    if c then L1(c) else L11();
  L7():
    res = ld res;
    check L9() else D4();
  L8():
    r8 = dyn base(<sym res>, "try-error");
    goto L0(r8);
  D4():
    deopt 12 [res];
  L1(c1):
    c6 = `as.logical`(c1);
    if c6 then L14() else L2();
  L9():
    res1 = force? res;
    checkMissing(res1);
    inherits = ldf inherits in base;
    r10 = dyn inherits(res1, "try-error", FALSE);
    check L10() else D5();
  L11():
    res2 = ld res;
    check L12() else D6();
  D5():
    deopt 17 [r10];
  D6():
    deopt 18 [c, res2];
  L2():
    invisible.0();
    popenv;
    return NULL;
  L10():
    goto L0(r10);
  L12():
    res3 = force? res2;
    checkMissing(res3);
    r11 = `!`(res3);
    c3 = `as.logical`(r11);
    c4 = `||`(c, c3);
    goto L1(c4);
  L14():
    stop = ldf stop;
    check L15() else D7();
  D7():
    deopt 23 [];
  L15():
    r12 = dyn stop[, `call.`]("loading failed", FALSE);
    check L16() else D8();
  D8():
    deopt 27 [r12];
  L16():
    popenv;
    return r12;
  }
}