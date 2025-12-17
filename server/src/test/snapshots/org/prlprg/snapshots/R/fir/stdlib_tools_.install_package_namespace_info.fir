fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner405800796;
    st `.install_package_namespace_info` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner405800796(dir, outDir) {
  (reg dir:*, reg outDir:*) -+> V { var dir:*, var outDir:*, reg file_path_as_absolute:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg file_path:cls, reg dir3:*, reg dir4:V, reg p1:p(V +), reg r3:V, reg file_test:cls, reg nsFile:*, reg nsFile1:V, reg p2:p(V +), reg r5:V, reg r6:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg invisible:cls, reg r9:V, reg file_path1:cls, reg outDir1:*, reg outDir2:V, reg p3:p(V +), reg r13:V, reg file_test1:cls, reg nsInfoFilePath:*, reg nsInfoFilePath1:V, reg p4:p(V +), reg nsFile2:*, reg nsFile3:V, reg p5:p(V +), reg r16:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg invisible1:cls, reg r19:V, reg parseNamespaceFile:cls, reg basename:cls, reg dir5:*, reg dir6:V, reg p6:p(V +), reg r23:V, reg p7:p(V +), reg dirname:cls, reg dir7:*, reg dir8:V, reg p8:p(V +), reg r26:V, reg p9:p(V +), reg r28:V, reg file_path2:cls, reg outDir3:*, reg outDir4:V, reg p10:p(V +), reg r30:V, reg dir_exists:cls, reg outMetaDir:*, reg outMetaDir1:V, reg p11:p(V +), reg r32:V, reg r33:V, reg c2:L, reg c4:V, reg dir_create:cls, reg outMetaDir2:*, reg outMetaDir3:V, reg p12:p(V +), reg r35:V, reg r36:V, reg c5:L, reg c6:V, reg c8:L, reg stop:cls, reg gettextf:cls, reg outMetaDir4:*, reg outMetaDir5:V, reg p13:p(V +), reg r38:V, reg p14:p(V +), reg r40:V, reg saveRDS:cls, reg nsInfo:*, reg nsInfo1:V, reg p15:p(V +), reg nsInfoFilePath2:*, reg nsInfoFilePath3:V, reg p16:p(V +), reg r44:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r45:V, reg r46:V, reg invisible2:cls, reg r47:V |
    mkenv;
    st dir = dir;
    st outDir = outDir;
    file_path_as_absolute = ldf file_path_as_absolute;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn file_path_as_absolute(p);
    check L11() else D1();
  D1():
    deopt 3 [r1];
  L11():
    st dir = r1;
    file_path = ldf `file.path`;
    check L12() else D2();
  D2():
    deopt 6 [];
  L12():
    p1 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r3 = dyn file_path(p1, "NAMESPACE");
    check L13() else D3();
  D3():
    deopt 9 [r3];
  L13():
    st nsFile = r3;
    file_test = ldf file_test;
    check L14() else D4();
  D4():
    deopt 12 [];
  L14():
    p2 = prom<V +>{
      nsFile = ld nsFile;
      nsFile1 = force? nsFile;
      checkMissing(nsFile1);
      return nsFile1;
    };
    r5 = dyn file_test("-f", p2);
    check L15() else D5();
  D5():
    deopt 15 [r5];
  L15():
    r6 = `!`(r5);
    c = `as.logical`(r6);
    if c then L16() else L0();
  L0():
    file_path1 = ldf `file.path`;
    check L22() else D7();
  L16():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  D7():
    deopt 25 [];
  L1(r8):
    popenv;
    return r8;
  L17():
    invisible = ldf invisible in base;
    r9 = dyn invisible();
    check L19() else D6();
  L18():
    r7 = dyn base();
    goto L1(r7);
  L22():
    p3 = prom<V +>{
      outDir1 = ld outDir;
      outDir2 = force? outDir1;
      checkMissing(outDir2);
      return outDir2;
    };
    r13 = dyn file_path1(p3, "Meta", "nsInfo.rds");
    check L23() else D8();
  D6():
    deopt 20 [r9];
  D8():
    deopt 29 [r13];
  L19():
    goto L1(r9);
  L23():
    st nsInfoFilePath = r13;
    file_test1 = ldf file_test;
    check L24() else D9();
  D9():
    deopt 32 [];
  L24():
    p4 = prom<V +>{
      nsInfoFilePath = ld nsInfoFilePath;
      nsInfoFilePath1 = force? nsInfoFilePath;
      checkMissing(nsInfoFilePath1);
      return nsInfoFilePath1;
    };
    p5 = prom<V +>{
      nsFile2 = ld nsFile;
      nsFile3 = force? nsFile2;
      checkMissing(nsFile3);
      return nsFile3;
    };
    r16 = dyn file_test1("-nt", p4, p5);
    check L25() else D10();
  D10():
    deopt 36 [r16];
  L25():
    c1 = `as.logical`(r16);
    if c1 then L26() else L3();
  L3():
    parseNamespaceFile = ldf parseNamespaceFile;
    check L32() else D12();
  L26():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  D12():
    deopt 45 [];
  L4(r18):
    popenv;
    return r18;
  L27():
    invisible1 = ldf invisible in base;
    r19 = dyn invisible1();
    check L29() else D11();
  L28():
    r17 = dyn base1();
    goto L4(r17);
  L32():
    p7 = prom<V +>{
      basename = ldf basename;
      p6 = prom<V +>{
        dir5 = ld dir;
        dir6 = force? dir5;
        checkMissing(dir6);
        return dir6;
      };
      r23 = dyn basename(p6);
      return r23;
    };
    p9 = prom<V +>{
      dirname = ldf dirname;
      p8 = prom<V +>{
        dir7 = ld dir;
        dir8 = force? dir7;
        checkMissing(dir8);
        return dir8;
      };
      r26 = dyn dirname(p8);
      return r26;
    };
    r28 = dyn parseNamespaceFile(p7, p9);
    check L33() else D13();
  D11():
    deopt 40 [r19];
  D13():
    deopt 48 [r28];
  L29():
    goto L4(r19);
  L33():
    st nsInfo = r28;
    file_path2 = ldf `file.path`;
    check L34() else D14();
  D14():
    deopt 51 [];
  L34():
    p10 = prom<V +>{
      outDir3 = ld outDir;
      outDir4 = force? outDir3;
      checkMissing(outDir4);
      return outDir4;
    };
    r30 = dyn file_path2(p10, "Meta");
    check L35() else D15();
  D15():
    deopt 54 [r30];
  L35():
    st outMetaDir = r30;
    dir_exists = ldf `dir.exists`;
    check L36() else D16();
  D16():
    deopt 57 [];
  L36():
    p11 = prom<V +>{
      outMetaDir = ld outMetaDir;
      outMetaDir1 = force? outMetaDir;
      checkMissing(outMetaDir1);
      return outMetaDir1;
    };
    r32 = dyn dir_exists(p11);
    check L37() else D17();
  D17():
    deopt 59 [r32];
  L37():
    r33 = `!`(r32);
    c2 = `as.logical`(r33);
    if c2 then L38() else L6(c2);
  L6(c4):
    c8 = `as.logical`(c4);
    if c8 then L42() else L7();
  L38():
    dir_create = ldf `dir.create`;
    check L39() else D18();
  D18():
    deopt 62 [c2];
  L7():
    goto L8();
  L8():
    saveRDS = ldf saveRDS;
    check L46() else D22();
  L39():
    p12 = prom<V +>{
      outMetaDir2 = ld outMetaDir;
      outMetaDir3 = force? outMetaDir2;
      checkMissing(outMetaDir3);
      return outMetaDir3;
    };
    r35 = dyn dir_create(p12);
    check L40() else D19();
  L42():
    stop = ldf stop;
    check L43() else D20();
  D19():
    deopt 64 [c2, r35];
  D20():
    deopt 68 [];
  D22():
    deopt 76 [];
  L40():
    r36 = `!`(r35);
    c5 = `as.logical`(r36);
    c6 = `&&`(c2, c5);
    goto L6(c6);
  L43():
    p14 = prom<V +>{
      gettextf = ldf gettextf;
      p13 = prom<V +>{
        outMetaDir4 = ld outMetaDir;
        outMetaDir5 = force? outMetaDir4;
        checkMissing(outMetaDir5);
        return outMetaDir5;
      };
      r38 = dyn gettextf("cannot open directory '%s'", p13);
      return r38;
    };
    r40 = dyn stop[, domain](p14, NA_LGL);
    check L44() else D21();
  L46():
    p15 = prom<V +>{
      nsInfo = ld nsInfo;
      nsInfo1 = force? nsInfo;
      checkMissing(nsInfo1);
      return nsInfo1;
    };
    p16 = prom<V +>{
      nsInfoFilePath2 = ld nsInfoFilePath;
      nsInfoFilePath3 = force? nsInfoFilePath2;
      checkMissing(nsInfoFilePath3);
      return nsInfoFilePath3;
    };
    r44 = dyn saveRDS(p15, p16);
    check L47() else D23();
  D21():
    deopt 72 [r40];
  D23():
    deopt 79 [r44];
  L44():
    goto L8();
  L47():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L48() else L49();
  L9(r46):
    popenv;
    return r46;
  L48():
    invisible2 = ldf invisible in base;
    r47 = dyn invisible2();
    check L50() else D24();
  L49():
    r45 = dyn base2();
    goto L9(r45);
  D24():
    deopt 83 [r47];
  L50():
    goto L9(r47);
  }
}