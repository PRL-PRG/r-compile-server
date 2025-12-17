fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1349171238;
    st `.installMD5sums` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1349171238(pkgDir, outDir) {
  (reg pkgDir:*, reg outDir:*) -+> V { var pkgDir:*, var outDir:*, reg outDir_isMissing:L, reg outDir_orDefault:*, reg pkgDir1:*, reg pkgDir2:V, reg p:p(V +), reg getwd:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg dot:*, reg dot1:V, reg c:V, reg c1:L, reg stop:cls, reg r4:V, reg setwd:cls, reg pkgDir3:*, reg pkgDir4:V, reg p1:p(V +), reg r7:V, reg md5sum:cls, reg dir:cls, reg r8:V, reg p2:p(V +), reg r10:V, reg setwd1:cls, reg dot2:*, reg dot3:V, reg p3:p(V +), reg r12:V, reg x:*, reg x1:V, reg c2:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg x6:V, reg r14:V, reg x7:*, reg x8:V, reg names:cls, reg r15:V, reg r16:V, reg __:cls, reg r17:V, reg cat:cls, reg paste:cls, reg x9:*, reg x10:V, reg p4:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg x11:*, reg x12:V, reg names1:cls, reg r21:V, reg p5:p(V +), reg r23:V, reg p6:p(V +), reg file_path:cls, reg outDir1:*, reg outDir2:V, reg p7:p(V +), reg r26:V, reg p8:p(V +), reg r28:V |
    mkenv;
    st pkgDir = pkgDir;
    outDir_isMissing = missing.0(outDir);
    if outDir_isMissing then L0() else L1(outDir);
  L0():
    p = prom<V +>{
      pkgDir1 = ld pkgDir;
      pkgDir2 = force? pkgDir1;
      checkMissing(pkgDir2);
      return pkgDir2;
    };
    goto L1(p);
  L1(outDir_orDefault):
    st outDir = outDir_orDefault;
    getwd = ldf getwd;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    r1 = dyn getwd();
    check L8() else D1();
  D1():
    deopt 2 [r1];
  L8():
    st dot = r1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L2(r3):
    c1 = `as.logical`(r3);
    if c1 then L12() else L3();
  L9():
    dot = ld dot;
    check L11() else D2();
  L10():
    r2 = dyn base(<sym dot>);
    goto L2(r2);
  D2():
    deopt 5 [dot];
  L3():
    goto L4();
  L4():
    setwd = ldf setwd;
    check L16() else D5();
  L11():
    dot1 = force? dot;
    checkMissing(dot1);
    c = `==`(dot1, NULL);
    goto L2(c);
  L12():
    stop = ldf stop;
    check L13() else D3();
  D3():
    deopt 9 [];
  D5():
    deopt 15 [];
  L13():
    r4 = dyn stop("current working directory cannot be ascertained");
    check L14() else D4();
  L16():
    p1 = prom<V +>{
      pkgDir3 = ld pkgDir;
      pkgDir4 = force? pkgDir3;
      checkMissing(pkgDir4);
      return pkgDir4;
    };
    r7 = dyn setwd(p1);
    check L17() else D6();
  D4():
    deopt 11 [r4];
  D6():
    deopt 17 [r7];
  L14():
    goto L4();
  L17():
    md5sum = ldf md5sum;
    check L18() else D7();
  D7():
    deopt 19 [];
  L18():
    p2 = prom<V +>{
      dir = ldf dir;
      r8 = dyn dir[, recursive](".", TRUE);
      return r8;
    };
    r10 = dyn md5sum(p2);
    check L19() else D8();
  D8():
    deopt 21 [r10];
  L19():
    st x = r10;
    setwd1 = ldf setwd;
    check L20() else D9();
  D9():
    deopt 24 [];
  L20():
    p3 = prom<V +>{
      dot2 = ld dot;
      dot3 = force? dot2;
      checkMissing(dot3);
      return dot3;
    };
    r12 = dyn setwd1(p3);
    check L21() else D10();
  D10():
    deopt 26 [r12];
  L21():
    x = ld x;
    check L22() else D11();
  D11():
    deopt 27 [x];
  L22():
    x1 = force? x;
    checkMissing(x1);
    c2 = `is.object`(x1);
    if c2 then L23() else L24(x1);
  L5(dx1):
    st x = dx1;
    cat = ldf cat;
    check L30() else D14();
  L23():
    dr = tryDispatchBuiltin.1("[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(dr);
  L24(x3):
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  D14():
    deopt 40 [];
  L6(x6, r14):
    r16 = `!=`(r14, "MD5");
    __ = ldf `[` in base;
    r17 = dyn __(x6, r16);
    goto L5(r17);
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L26():
    x7 = ld x;
    check L28() else D12();
  L27():
    r13 = dyn base1(<sym x>);
    goto L6(x3, r13);
  L30():
    p6 = prom<V +>{
      paste = ldf paste;
      p4 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        return x10;
      };
      p5 = prom<V +>{
        sym2 = ldf names;
        base2 = ldf names in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r20):
        return r20;
      L1():
        x11 = ld x;
        x12 = force? x11;
        checkMissing(x12);
        names1 = ldf names in base;
        r21 = dyn names1(x12);
        goto L0(r21);
      L2():
        r19 = dyn base2(<sym x>);
        goto L0(r19);
      };
      r23 = dyn paste[, , sep](p4, p5, " *");
      return r23;
    };
    p8 = prom<V +>{
      file_path = ldf `file.path`;
      p7 = prom<V +>{
        outDir1 = ld outDir;
        outDir2 = force? outDir1;
        checkMissing(outDir2);
        return outDir2;
      };
      r26 = dyn file_path(p7, "MD5");
      return r26;
    };
    r28 = dyn cat[, sep, file](p6, "\n", p8);
    check L31() else D15();
  D12():
    deopt 31 [x3, x7];
  D15():
    deopt 46 [r28];
  L28():
    x8 = force? x7;
    checkMissing(x8);
    names = ldf names in base;
    r15 = dyn names(x8);
    check L29() else D13();
  L31():
    popenv;
    return r28;
  D13():
    deopt 34 [x3, r15];
  L29():
    goto L6(x3, r15);
  }
}