fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner405800796;
    st `.install_package_demo_index` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner405800796(dir, outDir) {
  (reg dir:*, reg outDir:*) -+> V { var dir:*, var outDir:*, reg file_path:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg dir_exists:cls, reg demoDir:*, reg demoDir1:V, reg p1:p(V +), reg r3:V, reg r4:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg invisible:cls, reg r7:V, reg _build_demo_index:cls, reg demoDir2:*, reg demoDir3:V, reg p2:p(V +), reg r11:V, reg saveRDS:cls, reg demoIndex:*, reg demoIndex1:V, reg p3:p(V +), reg file_path1:cls, reg outDir1:*, reg outDir2:V, reg p4:p(V +), reg r14:V, reg p5:p(V +), reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg invisible1:cls, reg r19:V |
    mkenv;
    st dir = dir;
    st outDir = outDir;
    file_path = ldf `file.path`;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn file_path(p, "demo");
    check L5() else D1();
  D1():
    deopt 4 [r1];
  L5():
    st demoDir = r1;
    dir_exists = ldf `dir.exists`;
    check L6() else D2();
  D2():
    deopt 7 [];
  L6():
    p1 = prom<V +>{
      demoDir = ld demoDir;
      demoDir1 = force? demoDir;
      checkMissing(demoDir1);
      return demoDir1;
    };
    r3 = dyn dir_exists(p1);
    check L7() else D3();
  D3():
    deopt 9 [r3];
  L7():
    r4 = `!`(r3);
    c = `as.logical`(r4);
    if c then L8() else L0();
  L0():
    _build_demo_index = ldf `.build_demo_index`;
    check L14() else D5();
  L8():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  D5():
    deopt 19 [];
  L1(r6):
    popenv;
    return r6;
  L9():
    invisible = ldf invisible in base;
    r7 = dyn invisible();
    check L11() else D4();
  L10():
    r5 = dyn base();
    goto L1(r5);
  L14():
    p2 = prom<V +>{
      demoDir2 = ld demoDir;
      demoDir3 = force? demoDir2;
      checkMissing(demoDir3);
      return demoDir3;
    };
    r11 = dyn _build_demo_index(p2);
    check L15() else D6();
  D4():
    deopt 14 [r7];
  D6():
    deopt 21 [r11];
  L11():
    goto L1(r7);
  L15():
    st demoIndex = r11;
    saveRDS = ldf saveRDS;
    check L16() else D7();
  D7():
    deopt 24 [];
  L16():
    p3 = prom<V +>{
      demoIndex = ld demoIndex;
      demoIndex1 = force? demoIndex;
      checkMissing(demoIndex1);
      return demoIndex1;
    };
    p5 = prom<V +>{
      file_path1 = ldf `file.path`;
      p4 = prom<V +>{
        outDir1 = ld outDir;
        outDir2 = force? outDir1;
        checkMissing(outDir2);
        return outDir2;
      };
      r14 = dyn file_path1(p4, "Meta", "demo.rds");
      return r14;
    };
    r16 = dyn saveRDS[, file](p3, p5);
    check L17() else D8();
  D8():
    deopt 28 [r16];
  L17():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L3(r18):
    popenv;
    return r18;
  L18():
    invisible1 = ldf invisible in base;
    r19 = dyn invisible1();
    check L20() else D9();
  L19():
    r17 = dyn base1();
    goto L3(r17);
  D9():
    deopt 32 [r19];
  L20():
    goto L3(r19);
  }
}