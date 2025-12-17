fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4176558045;
    st `.check_vignette_index` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4176558045(vignetteDir, pkgdir) {
  (reg vignetteDir:*, reg pkgdir:*) -+> V { var vignetteDir:*, var pkgdir:*, reg pkgdir_isMissing:L, reg pkgdir_orDefault:*, reg file_path:cls, reg pkgdir1:*, reg pkgdir2:V, reg p:p(V +), reg vignetteDir1:*, reg vignetteDir2:V, reg p1:p(V +), reg r2:V, reg dir_exists:cls, reg dir:*, reg dir1:V, reg p2:p(V +), reg r4:V, reg r5:V, reg c:L, reg stop:cls, reg gettextf:cls, reg dir2:*, reg dir3:V, reg p3:p(V +), reg r7:V, reg p4:p(V +), reg r9:V, reg gsub:cls, reg pkgdir3:*, reg pkgdir4:V, reg p5:p(V +), reg dir4:*, reg dir5:V, reg p6:p(V +), reg r13:V, reg pkgVignettes:cls, reg pkgdir5:*, reg pkgdir6:V, reg p7:p(V +), reg subdir:*, reg subdir1:V, reg p8:p(V +), reg r16:V, reg _build_vignette_index:cls, reg vigns:*, reg vigns1:V, reg p9:p(V +), reg r18:V, reg vignetteIndex:*, reg vignetteIndex1:V, reg c1:L, reg vignetteIndex3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg grep:cls, reg vignetteIndex4:*, reg vignetteIndex5:V, reg c2:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r19:V, reg p10:p(V +), reg r21:V, reg __1:cls, reg r22:V, reg l:*, reg class__:cls, reg r23:V, reg badEntries:*, reg badEntries1:V |
    mkenv;
    st vignetteDir = vignetteDir;
    pkgdir_isMissing = missing.0(pkgdir);
    if pkgdir_isMissing then L0(".") else L0(pkgdir);
  L0(pkgdir_orDefault):
    st pkgdir = pkgdir_orDefault;
    file_path = ldf `file.path`;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      pkgdir1 = ld pkgdir;
      pkgdir2 = force? pkgdir1;
      checkMissing(pkgdir2);
      return pkgdir2;
    };
    p1 = prom<V +>{
      vignetteDir1 = ld vignetteDir;
      vignetteDir2 = force? vignetteDir1;
      checkMissing(vignetteDir2);
      return vignetteDir2;
    };
    r2 = dyn file_path(p, p1);
    check L5() else D1();
  D1():
    deopt 4 [r2];
  L5():
    st dir = r2;
    dir_exists = ldf `dir.exists`;
    check L6() else D2();
  D2():
    deopt 7 [];
  L6():
    p2 = prom<V +>{
      dir = ld dir;
      dir1 = force? dir;
      checkMissing(dir1);
      return dir1;
    };
    r4 = dyn dir_exists(p2);
    check L7() else D3();
  D3():
    deopt 9 [r4];
  L7():
    r5 = `!`(r4);
    c = `as.logical`(r5);
    if c then L8() else L1();
  L1():
    goto L2();
  L2():
    gsub = ldf gsub;
    check L12() else D6();
  L8():
    stop = ldf stop;
    check L9() else D4();
  D4():
    deopt 12 [];
  D6():
    deopt 20 [];
  L9():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        dir2 = ld dir;
        dir3 = force? dir2;
        checkMissing(dir3);
        return dir3;
      };
      r7 = dyn gettextf("directory '%s' does not exist", p3);
      return r7;
    };
    r9 = dyn stop[, domain](p4, NA_LGL);
    check L10() else D5();
  L12():
    p5 = prom<V +>{
      pkgdir3 = ld pkgdir;
      pkgdir4 = force? pkgdir3;
      checkMissing(pkgdir4);
      return pkgdir4;
    };
    p6 = prom<V +>{
      dir4 = ld dir;
      dir5 = force? dir4;
      checkMissing(dir5);
      return dir5;
    };
    r13 = dyn gsub[, , , fixed](p5, "", p6, TRUE);
    check L13() else D7();
  D5():
    deopt 16 [r9];
  D7():
    deopt 26 [r13];
  L10():
    goto L2();
  L13():
    st subdir = r13;
    pkgVignettes = ldf pkgVignettes;
    check L14() else D8();
  D8():
    deopt 29 [];
  L14():
    p7 = prom<V +>{
      pkgdir5 = ld pkgdir;
      pkgdir6 = force? pkgdir5;
      checkMissing(pkgdir6);
      return pkgdir6;
    };
    p8 = prom<V +>{
      subdir = ld subdir;
      subdir1 = force? subdir;
      checkMissing(subdir1);
      return subdir1;
    };
    r16 = dyn pkgVignettes[dir, subdirs](p7, p8);
    check L15() else D9();
  D9():
    deopt 34 [r16];
  L15():
    st vigns = r16;
    _build_vignette_index = ldf `.build_vignette_index`;
    check L16() else D10();
  D10():
    deopt 37 [];
  L16():
    p9 = prom<V +>{
      vigns = ld vigns;
      vigns1 = force? vigns;
      checkMissing(vigns1);
      return vigns1;
    };
    r18 = dyn _build_vignette_index(p9);
    check L17() else D11();
  D11():
    deopt 39 [r18];
  L17():
    st vignetteIndex = r18;
    vignetteIndex = ld vignetteIndex;
    check L18() else D12();
  D12():
    deopt 41 [vignetteIndex];
  L18():
    vignetteIndex1 = force? vignetteIndex;
    checkMissing(vignetteIndex1);
    c1 = `is.object`(vignetteIndex1);
    if c1 then L19() else L20(vignetteIndex1);
  L3(dx1):
    st badEntries = dx1;
    l = ld badEntries;
    class__ = ldf `class<-`;
    check L24() else D15();
  L19():
    dr = tryDispatchBuiltin.1("[", vignetteIndex1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(vignetteIndex3):
    grep = ldf grep;
    check L22() else D13();
  D13():
    deopt 44 [vignetteIndex3];
  D15():
    deopt 54 ["check_vignette_index", l, "check_vignette_index"];
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L22():
    p10 = prom<V +>{
      vignetteIndex4 = ld vignetteIndex;
      vignetteIndex5 = force? vignetteIndex4;
      checkMissing(vignetteIndex5);
      c2 = `is.object`(vignetteIndex5);
      if c2 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", vignetteIndex5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r19 = dyn __(vignetteIndex5, <missing>, "Title");
      goto L0(r19);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r21 = dyn grep("^[[:space:]]*$", p10);
    check L23() else D14();
  L24():
    r23 = dyn class__(l, NULL, "check_vignette_index");
    check L25() else D16();
  D14():
    deopt 47 [vignetteIndex3, r21];
  D16():
    deopt 56 ["check_vignette_index", r23];
  L23():
    __1 = ldf `[` in base;
    r22 = dyn __1(vignetteIndex3, r21, "File");
    goto L3(r22);
  L25():
    st badEntries = r23;
    badEntries = ld badEntries;
    check L26() else D17();
  D17():
    deopt 58 [badEntries];
  L26():
    badEntries1 = force? badEntries;
    checkMissing(badEntries1);
    popenv;
    return badEntries1;
  }
}