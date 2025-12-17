fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st file_path_as_absolute = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg r4:V, reg file_exists:cls, reg path_expand:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r7:V, reg p1:p(V +), reg r9:V, reg r10:V, reg c1:L, reg stop1:cls, reg gettextf:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r12:V, reg p3:p(V +), reg r14:V, reg normalizePath:cls, reg epath:*, reg epath1:V, reg p4:p(V +), reg r17:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    r3 = `!=`(r1, 1);
    c = `as.logical`(r3);
    if c then L9() else L1();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    goto L2();
  L2():
    file_exists = ldf `file.exists`;
    check L13() else D4();
  L7():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L8() else D1();
  L9():
    stop = ldf stop;
    check L10() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [];
  D4():
    deopt 15 [];
  L8():
    goto L0(r2);
  L10():
    r4 = dyn stop("'x' must be a single character string");
    check L11() else D3();
  L13():
    p1 = prom<V +>{
      path_expand = ldf `path.expand`;
      p = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r7 = dyn path_expand(p);
      st epath = r7;
      invisible.0();
      return r7;
    };
    r9 = dyn file_exists(p1);
    check L14() else D5();
  D3():
    deopt 11 [r4];
  D5():
    deopt 17 [r9];
  L11():
    goto L2();
  L14():
    r10 = `!`(r9);
    c1 = `as.logical`(r10);
    if c1 then L15() else L3();
  L3():
    goto L4();
  L4():
    normalizePath = ldf normalizePath;
    check L19() else D8();
  L15():
    stop1 = ldf stop;
    check L16() else D6();
  D6():
    deopt 20 [];
  D8():
    deopt 28 [];
  L16():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r12 = dyn gettextf("file '%s' does not exist", p2);
      return r12;
    };
    r14 = dyn stop1[, domain](p3, NA_LGL);
    check L17() else D7();
  L19():
    p4 = prom<V +>{
      epath = ld epath;
      epath1 = force? epath;
      checkMissing(epath1);
      return epath1;
    };
    r17 = dyn normalizePath(p4, "/", TRUE);
    check L20() else D9();
  D7():
    deopt 24 [r14];
  D9():
    deopt 32 [r17];
  L17():
    goto L4();
  L20():
    popenv;
    return r17;
  }
}