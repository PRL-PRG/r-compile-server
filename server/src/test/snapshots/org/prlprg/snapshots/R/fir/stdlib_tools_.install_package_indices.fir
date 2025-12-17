fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner405800796;
    st `.install_package_indices` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner405800796(dir, outDir) {
  (reg dir:*, reg outDir:*) -+> V { var dir:*, var outDir:*, reg options:cls, reg r:V, reg dir_exists:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg gettextf:cls, reg dir3:*, reg dir4:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg r7:V, reg dir_exists1:cls, reg outDir1:*, reg outDir2:V, reg p3:p(V +), reg r10:V, reg r11:V, reg c1:L, reg stop1:cls, reg gettextf1:cls, reg outDir3:*, reg outDir4:V, reg p4:p(V +), reg r13:V, reg p5:p(V +), reg r15:V, reg file_test:cls, reg file_path:cls, reg dir5:*, reg dir6:V, reg p6:p(V +), reg r18:V, reg p7:p(V +), reg r20:V, reg c2:L, reg file_copy:cls, reg file_path1:cls, reg dir7:*, reg dir8:V, reg p8:p(V +), reg r22:V, reg p9:p(V +), reg file_path2:cls, reg outDir5:*, reg outDir6:V, reg p10:p(V +), reg r25:V, reg p11:p(V +), reg r27:V, reg r28:V, reg c3:L, reg stop2:cls, reg gettextf2:cls, reg file_path3:cls, reg outDir7:*, reg outDir8:V, reg p12:p(V +), reg r30:V, reg p13:p(V +), reg r32:V, reg p14:p(V +), reg r34:V, reg r35:V, reg file_path4:cls, reg outDir9:*, reg outDir10:V, reg p15:p(V +), reg r38:V, reg dir_exists2:cls, reg outMetaDir:*, reg outMetaDir1:V, reg p16:p(V +), reg r40:V, reg r41:V, reg c4:L, reg c6:V, reg dir_create:cls, reg outMetaDir2:*, reg outMetaDir3:V, reg p17:p(V +), reg r43:V, reg r44:V, reg c7:L, reg c8:V, reg c10:L, reg stop3:cls, reg gettextf3:cls, reg outMetaDir4:*, reg outMetaDir5:V, reg p18:p(V +), reg r46:V, reg p19:p(V +), reg r48:V, reg _install_package_Rd_indices:cls, reg dir9:*, reg dir10:V, reg p20:p(V +), reg outDir11:*, reg outDir12:V, reg p21:p(V +), reg r52:V, reg _install_package_demo_index:cls, reg dir11:*, reg dir12:V, reg p22:p(V +), reg outDir13:*, reg outDir14:V, reg p23:p(V +), reg r55:V, reg sym:cls, reg base:cls, reg guard:L, reg r56:V, reg r57:V, reg invisible:cls, reg r58:V |
    mkenv;
    st dir = dir;
    st outDir = outDir;
    options = ldf options;
    check L12() else D0();
  D0():
    deopt 1 [];
  L12():
    r = dyn options[warn](1.0);
    check L13() else D1();
  D1():
    deopt 4 [r];
  L13():
    dir_exists = ldf `dir.exists`;
    check L14() else D2();
  D2():
    deopt 6 [];
  L14():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r2 = dyn dir_exists(p);
    check L15() else D3();
  D3():
    deopt 8 [r2];
  L15():
    r3 = `!`(r2);
    c = `as.logical`(r3);
    if c then L16() else L0();
  L0():
    goto L1();
  L1():
    dir_exists1 = ldf `dir.exists`;
    check L20() else D6();
  L16():
    stop = ldf stop;
    check L17() else D4();
  D4():
    deopt 11 [];
  D6():
    deopt 19 [];
  L17():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r5 = dyn gettextf("directory '%s' does not exist", p1);
      return r5;
    };
    r7 = dyn stop[, domain](p2, NA_LGL);
    check L18() else D5();
  L20():
    p3 = prom<V +>{
      outDir1 = ld outDir;
      outDir2 = force? outDir1;
      checkMissing(outDir2);
      return outDir2;
    };
    r10 = dyn dir_exists1(p3);
    check L21() else D7();
  D5():
    deopt 15 [r7];
  D7():
    deopt 21 [r10];
  L18():
    goto L1();
  L21():
    r11 = `!`(r10);
    c1 = `as.logical`(r11);
    if c1 then L22() else L2();
  L2():
    goto L3();
  L3():
    file_test = ldf file_test;
    check L26() else D10();
  L22():
    stop1 = ldf stop;
    check L23() else D8();
  D8():
    deopt 24 [];
  D10():
    deopt 32 [];
  L23():
    p5 = prom<V +>{
      gettextf1 = ldf gettextf;
      p4 = prom<V +>{
        outDir3 = ld outDir;
        outDir4 = force? outDir3;
        checkMissing(outDir4);
        return outDir4;
      };
      r13 = dyn gettextf1("directory '%s' does not exist", p4);
      return r13;
    };
    r15 = dyn stop1[, domain](p5, NA_LGL);
    check L24() else D9();
  L26():
    p7 = prom<V +>{
      file_path = ldf `file.path`;
      p6 = prom<V +>{
        dir5 = ld dir;
        dir6 = force? dir5;
        checkMissing(dir6);
        return dir6;
      };
      r18 = dyn file_path(p6, "INDEX");
      return r18;
    };
    r20 = dyn file_test("-f", p7);
    check L27() else D11();
  D9():
    deopt 28 [r15];
  D11():
    deopt 35 [r20];
  L24():
    goto L3();
  L27():
    c2 = `as.logical`(r20);
    if c2 then L28() else L4();
  L4():
    goto L7();
  L7():
    file_path4 = ldf `file.path`;
    check L36() else D16();
  L28():
    file_copy = ldf `file.copy`;
    check L29() else D12();
  D12():
    deopt 37 [];
  D16():
    deopt 55 [];
  L29():
    p9 = prom<V +>{
      file_path1 = ldf `file.path`;
      p8 = prom<V +>{
        dir7 = ld dir;
        dir8 = force? dir7;
        checkMissing(dir8);
        return dir8;
      };
      r22 = dyn file_path1(p8, "INDEX");
      return r22;
    };
    p11 = prom<V +>{
      file_path2 = ldf `file.path`;
      p10 = prom<V +>{
        outDir5 = ld outDir;
        outDir6 = force? outDir5;
        checkMissing(outDir6);
        return outDir6;
      };
      r25 = dyn file_path2(p10, "INDEX");
      return r25;
    };
    r27 = dyn file_copy[, , overwrite](p9, p11, TRUE);
    check L30() else D13();
  L36():
    p15 = prom<V +>{
      outDir9 = ld outDir;
      outDir10 = force? outDir9;
      checkMissing(outDir10);
      return outDir10;
    };
    r38 = dyn file_path4(p15, "Meta");
    check L37() else D17();
  D13():
    deopt 42 [r27];
  D17():
    deopt 58 [r38];
  L30():
    r28 = `!`(r27);
    c3 = `as.logical`(r28);
    if c3 then L31() else L5();
  L37():
    st outMetaDir = r38;
    dir_exists2 = ldf `dir.exists`;
    check L38() else D18();
  D18():
    deopt 61 [];
  L5():
    goto L6(NULL);
  L6(r35):
    goto L7();
  L31():
    stop2 = ldf stop;
    check L32() else D14();
  L38():
    p16 = prom<V +>{
      outMetaDir = ld outMetaDir;
      outMetaDir1 = force? outMetaDir;
      checkMissing(outMetaDir1);
      return outMetaDir1;
    };
    r40 = dyn dir_exists2(p16);
    check L39() else D19();
  D14():
    deopt 45 [];
  D19():
    deopt 63 [r40];
  L32():
    p14 = prom<V +>{
      gettextf2 = ldf gettextf;
      p13 = prom<V +>{
        file_path3 = ldf `file.path`;
        p12 = prom<V +>{
          outDir7 = ld outDir;
          outDir8 = force? outDir7;
          checkMissing(outDir8);
          return outDir8;
        };
        r30 = dyn file_path3(p12, "INDEX");
        return r30;
      };
      r32 = dyn gettextf2("unable to copy INDEX to '%s'", p13);
      return r32;
    };
    r34 = dyn stop2[, domain](p14, NA_LGL);
    check L33() else D15();
  L39():
    r41 = `!`(r40);
    c4 = `as.logical`(r41);
    if c4 then L40() else L8(c4);
  D15():
    deopt 49 [r34];
  L8(c6):
    c10 = `as.logical`(c6);
    if c10 then L44() else L9();
  L33():
    goto L6(r34);
  L40():
    dir_create = ldf `dir.create`;
    check L41() else D20();
  D20():
    deopt 66 [c4];
  L9():
    goto L10();
  L10():
    _install_package_Rd_indices = ldf `.install_package_Rd_indices`;
    check L48() else D24();
  L41():
    p17 = prom<V +>{
      outMetaDir2 = ld outMetaDir;
      outMetaDir3 = force? outMetaDir2;
      checkMissing(outMetaDir3);
      return outMetaDir3;
    };
    r43 = dyn dir_create(p17);
    check L42() else D21();
  L44():
    stop3 = ldf stop;
    check L45() else D22();
  D21():
    deopt 68 [c4, r43];
  D22():
    deopt 72 [];
  D24():
    deopt 80 [];
  L42():
    r44 = `!`(r43);
    c7 = `as.logical`(r44);
    c8 = `&&`(c4, c7);
    goto L8(c8);
  L45():
    p19 = prom<V +>{
      gettextf3 = ldf gettextf;
      p18 = prom<V +>{
        outMetaDir4 = ld outMetaDir;
        outMetaDir5 = force? outMetaDir4;
        checkMissing(outMetaDir5);
        return outMetaDir5;
      };
      r46 = dyn gettextf3("cannot open directory '%s'", p18);
      return r46;
    };
    r48 = dyn stop3[, domain](p19, NA_LGL);
    check L46() else D23();
  L48():
    p20 = prom<V +>{
      dir9 = ld dir;
      dir10 = force? dir9;
      checkMissing(dir10);
      return dir10;
    };
    p21 = prom<V +>{
      outDir11 = ld outDir;
      outDir12 = force? outDir11;
      checkMissing(outDir12);
      return outDir12;
    };
    r52 = dyn _install_package_Rd_indices(p20, p21);
    check L49() else D25();
  D23():
    deopt 76 [r48];
  D25():
    deopt 83 [r52];
  L46():
    goto L10();
  L49():
    _install_package_demo_index = ldf `.install_package_demo_index`;
    check L50() else D26();
  D26():
    deopt 85 [];
  L50():
    p22 = prom<V +>{
      dir11 = ld dir;
      dir12 = force? dir11;
      checkMissing(dir12);
      return dir12;
    };
    p23 = prom<V +>{
      outDir13 = ld outDir;
      outDir14 = force? outDir13;
      checkMissing(outDir14);
      return outDir14;
    };
    r55 = dyn _install_package_demo_index(p22, p23);
    check L51() else D27();
  D27():
    deopt 88 [r55];
  L51():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L52() else L53();
  L11(r57):
    popenv;
    return r57;
  L52():
    invisible = ldf invisible in base;
    r58 = dyn invisible();
    check L54() else D28();
  L53():
    r56 = dyn base();
    goto L11(r56);
  D28():
    deopt 92 [r58];
  L54():
    goto L11(r58);
  }
}