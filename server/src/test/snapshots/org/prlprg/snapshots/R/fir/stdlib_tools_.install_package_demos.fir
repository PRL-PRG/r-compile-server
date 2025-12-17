fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner405800796;
    st `.install_package_demos` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner405800796(dir, outDir) {
  (reg dir:*, reg outDir:*) -+> V { var dir:*, var outDir:*, reg file_path:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg dir_exists:cls, reg demodir:*, reg demodir1:V, reg p1:p(V +), reg r3:V, reg r4:V, reg c:L, reg list_files_with_type:cls, reg demodir2:*, reg demodir3:V, reg p2:p(V +), reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg demofiles:*, reg demofiles1:V, reg length:cls, reg r11:V, reg r12:V, reg c1:L, reg file_path1:cls, reg outDir1:*, reg outDir2:V, reg p3:p(V +), reg r16:V, reg dir_exists1:cls, reg demoOutDir:*, reg demoOutDir1:V, reg p4:p(V +), reg r18:V, reg r19:V, reg c2:L, reg dir_create:cls, reg demoOutDir2:*, reg demoOutDir3:V, reg p5:p(V +), reg r21:V, reg file_copy:cls, reg file_path2:cls, reg demodir4:*, reg demodir5:V, reg p6:p(V +), reg demofiles2:*, reg demofiles3:V, reg p7:p(V +), reg r25:V, reg p8:p(V +), reg demoOutDir4:*, reg demoOutDir5:V, reg p9:p(V +), reg r28:V |
    mkenv;
    st dir = dir;
    st outDir = outDir;
    file_path = ldf `file.path`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn file_path(p, "demo");
    check L8() else D1();
  D1():
    deopt 4 [r1];
  L8():
    st demodir = r1;
    dir_exists = ldf `dir.exists`;
    check L9() else D2();
  D2():
    deopt 7 [];
  L9():
    p1 = prom<V +>{
      demodir = ld demodir;
      demodir1 = force? demodir;
      checkMissing(demodir1);
      return demodir1;
    };
    r3 = dyn dir_exists(p1);
    check L10() else D3();
  D3():
    deopt 9 [r3];
  L10():
    r4 = `!`(r3);
    c = `as.logical`(r4);
    if c then L11() else L0();
  L0():
    list_files_with_type = ldf list_files_with_type;
    check L14() else D4();
  L11():
    popenv;
    return NULL;
  D4():
    deopt 17 [];
  L14():
    p2 = prom<V +>{
      demodir2 = ld demodir;
      demodir3 = force? demodir2;
      checkMissing(demodir3);
      return demodir3;
    };
    r8 = dyn list_files_with_type[, , `full.names`](p2, "demo", FALSE);
    check L15() else D5();
  D5():
    deopt 22 [r8];
  L15():
    st demofiles = r8;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L2(r10):
    r12 = `!`(r10);
    c1 = `as.logical`(r12);
    if c1 then L20() else L3();
  L16():
    demofiles = ld demofiles;
    check L18() else D6();
  L17():
    r9 = dyn base(<sym demofiles>);
    goto L2(r9);
  D6():
    deopt 26 [demofiles];
  L3():
    file_path1 = ldf `file.path`;
    check L23() else D8();
  L18():
    demofiles1 = force? demofiles;
    checkMissing(demofiles1);
    length = ldf length in base;
    r11 = dyn length(demofiles1);
    check L19() else D7();
  L20():
    popenv;
    return NULL;
  D7():
    deopt 29 [r11];
  D8():
    deopt 37 [];
  L19():
    goto L2(r11);
  L23():
    p3 = prom<V +>{
      outDir1 = ld outDir;
      outDir2 = force? outDir1;
      checkMissing(outDir2);
      return outDir2;
    };
    r16 = dyn file_path1(p3, "demo");
    check L24() else D9();
  D9():
    deopt 40 [r16];
  L24():
    st demoOutDir = r16;
    dir_exists1 = ldf `dir.exists`;
    check L25() else D10();
  D10():
    deopt 43 [];
  L25():
    p4 = prom<V +>{
      demoOutDir = ld demoOutDir;
      demoOutDir1 = force? demoOutDir;
      checkMissing(demoOutDir1);
      return demoOutDir1;
    };
    r18 = dyn dir_exists1(p4);
    check L26() else D11();
  D11():
    deopt 45 [r18];
  L26():
    r19 = `!`(r18);
    c2 = `as.logical`(r19);
    if c2 then L27() else L5();
  L5():
    goto L6();
  L6():
    file_copy = ldf `file.copy`;
    check L31() else D14();
  L27():
    dir_create = ldf `dir.create`;
    check L28() else D12();
  D12():
    deopt 48 [];
  D14():
    deopt 54 [];
  L28():
    p5 = prom<V +>{
      demoOutDir2 = ld demoOutDir;
      demoOutDir3 = force? demoOutDir2;
      checkMissing(demoOutDir3);
      return demoOutDir3;
    };
    r21 = dyn dir_create(p5);
    check L29() else D13();
  L31():
    p8 = prom<V +>{
      file_path2 = ldf `file.path`;
      p6 = prom<V +>{
        demodir4 = ld demodir;
        demodir5 = force? demodir4;
        checkMissing(demodir5);
        return demodir5;
      };
      p7 = prom<V +>{
        demofiles2 = ld demofiles;
        demofiles3 = force? demofiles2;
        checkMissing(demofiles3);
        return demofiles3;
      };
      r25 = dyn file_path2(p6, p7);
      return r25;
    };
    p9 = prom<V +>{
      demoOutDir4 = ld demoOutDir;
      demoOutDir5 = force? demoOutDir4;
      checkMissing(demoOutDir5);
      return demoOutDir5;
    };
    r28 = dyn file_copy[, , overwrite](p8, p9, TRUE);
    check L32() else D15();
  D13():
    deopt 50 [r21];
  D15():
    deopt 59 [r28];
  L29():
    goto L6();
  L32():
    popenv;
    return r28;
  }
}