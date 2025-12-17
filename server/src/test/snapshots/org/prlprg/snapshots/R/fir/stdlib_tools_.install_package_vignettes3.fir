fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4077909334;
    st `.install_package_vignettes3` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4077909334(dir, outDir, encoding) {
  (reg dir:*, reg outDir:*, reg encoding:*) -+> V { var dir:*, var outDir:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg basename:cls, reg outDir1:*, reg outDir2:V, reg p:p(V +), reg r1:V, reg file_path_as_absolute:cls, reg dir1:*, reg dir2:V, reg p1:p(V +), reg r3:V, reg file_path:cls, reg dir3:*, reg dir4:V, reg p2:p(V +), reg r5:V, reg file_test:cls, reg indexname:*, reg indexname1:V, reg p3:p(V +), reg r7:V, reg ok:*, reg ok1:V, reg r8:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg invisible:cls, reg r11:V, reg file_copy:cls, reg indexname2:*, reg indexname3:V, reg p4:p(V +), reg file_path1:cls, reg outDir3:*, reg outDir4:V, reg p5:p(V +), reg r16:V, reg p6:p(V +), reg r18:V, reg file_path2:cls, reg outDir5:*, reg outDir6:V, reg p7:p(V +), reg r20:V, reg file_test1:cls, reg file_path3:cls, reg vignetteDir:*, reg vignetteDir1:V, reg p8:p(V +), reg r22:V, reg p9:p(V +), reg r24:V, reg file_path4:cls, reg outDir7:*, reg outDir8:V, reg p10:p(V +), reg r26:V, reg readRDS:cls, reg indexname4:*, reg indexname5:V, reg p11:p(V +), reg r28:V, reg hasHtmlIndex:*, reg hasHtmlIndex1:V, reg r29:V, reg c1:L, reg _writeVignetteHtmlIndex:cls, reg packageName:*, reg packageName1:V, reg p12:p(V +), reg htmlIndex:*, reg htmlIndex1:V, reg p13:p(V +), reg vignetteIndex:*, reg vignetteIndex1:V, reg p14:p(V +), reg r33:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r35:V, reg r36:V, reg invisible1:cls, reg r37:V |
    mkenv;
    st dir = dir;
    st outDir = outDir;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L0("") else L0(encoding);
  L0(encoding_orDefault):
    st encoding = encoding_orDefault;
    basename = ldf basename;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      outDir1 = ld outDir;
      outDir2 = force? outDir1;
      checkMissing(outDir2);
      return outDir2;
    };
    r1 = dyn basename(p);
    check L8() else D1();
  D1():
    deopt 3 [r1];
  L8():
    st packageName = r1;
    file_path_as_absolute = ldf file_path_as_absolute;
    check L9() else D2();
  D2():
    deopt 6 [];
  L9():
    p1 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r3 = dyn file_path_as_absolute(p1);
    check L10() else D3();
  D3():
    deopt 8 [r3];
  L10():
    st dir = r3;
    file_path = ldf `file.path`;
    check L11() else D4();
  D4():
    deopt 11 [];
  L11():
    p2 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r5 = dyn file_path(p2, "build", "vignette.rds");
    check L12() else D5();
  D5():
    deopt 15 [r5];
  L12():
    st indexname = r5;
    file_test = ldf file_test;
    check L13() else D6();
  D6():
    deopt 18 [];
  L13():
    p3 = prom<V +>{
      indexname = ld indexname;
      indexname1 = force? indexname;
      checkMissing(indexname1);
      return indexname1;
    };
    r7 = dyn file_test("-f", p3);
    check L14() else D7();
  D7():
    deopt 21 [r7];
  L14():
    st ok = r7;
    ok = ld ok;
    check L15() else D8();
  D8():
    deopt 23 [ok];
  L15():
    ok1 = force? ok;
    checkMissing(ok1);
    r8 = `!`(ok1);
    c = `as.logical`(r8);
    if c then L16() else L1();
  L1():
    file_copy = ldf `file.copy`;
    check L22() else D10();
  L16():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  D10():
    deopt 34 [];
  L2(r10):
    popenv;
    return r10;
  L17():
    invisible = ldf invisible in base;
    r11 = dyn invisible();
    check L19() else D9();
  L18():
    r9 = dyn base();
    goto L2(r9);
  L22():
    p4 = prom<V +>{
      indexname2 = ld indexname;
      indexname3 = force? indexname2;
      checkMissing(indexname3);
      return indexname3;
    };
    p6 = prom<V +>{
      file_path1 = ldf `file.path`;
      p5 = prom<V +>{
        outDir3 = ld outDir;
        outDir4 = force? outDir3;
        checkMissing(outDir4);
        return outDir4;
      };
      r16 = dyn file_path1(p5, "Meta");
      return r16;
    };
    r18 = dyn file_copy(p4, p6);
    check L23() else D11();
  D9():
    deopt 29 [r11];
  D11():
    deopt 37 [r18];
  L19():
    goto L2(r11);
  L23():
    file_path2 = ldf `file.path`;
    check L24() else D12();
  D12():
    deopt 39 [];
  L24():
    p7 = prom<V +>{
      outDir5 = ld outDir;
      outDir6 = force? outDir5;
      checkMissing(outDir6);
      return outDir6;
    };
    r20 = dyn file_path2(p7, "doc");
    check L25() else D13();
  D13():
    deopt 42 [r20];
  L25():
    st vignetteDir = r20;
    file_test1 = ldf file_test;
    check L26() else D14();
  D14():
    deopt 45 [];
  L26():
    p9 = prom<V +>{
      file_path3 = ldf `file.path`;
      p8 = prom<V +>{
        vignetteDir = ld vignetteDir;
        vignetteDir1 = force? vignetteDir;
        checkMissing(vignetteDir1);
        return vignetteDir1;
      };
      r22 = dyn file_path3(p8, "index.html");
      return r22;
    };
    r24 = dyn file_test1("-f", p9);
    check L27() else D15();
  D15():
    deopt 48 [r24];
  L27():
    st hasHtmlIndex = r24;
    file_path4 = ldf `file.path`;
    check L28() else D16();
  D16():
    deopt 51 [];
  L28():
    p10 = prom<V +>{
      outDir7 = ld outDir;
      outDir8 = force? outDir7;
      checkMissing(outDir8);
      return outDir8;
    };
    r26 = dyn file_path4(p10, "doc", "index.html");
    check L29() else D17();
  D17():
    deopt 55 [r26];
  L29():
    st htmlIndex = r26;
    readRDS = ldf readRDS;
    check L30() else D18();
  D18():
    deopt 58 [];
  L30():
    p11 = prom<V +>{
      indexname4 = ld indexname;
      indexname5 = force? indexname4;
      checkMissing(indexname5);
      return indexname5;
    };
    r28 = dyn readRDS(p11);
    check L31() else D19();
  D19():
    deopt 60 [r28];
  L31():
    st vignetteIndex = r28;
    hasHtmlIndex = ld hasHtmlIndex;
    check L32() else D20();
  D20():
    deopt 62 [hasHtmlIndex];
  L32():
    hasHtmlIndex1 = force? hasHtmlIndex;
    checkMissing(hasHtmlIndex1);
    r29 = `!`(hasHtmlIndex1);
    c1 = `as.logical`(r29);
    if c1 then L33() else L4();
  L4():
    goto L5();
  L5():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  L33():
    _writeVignetteHtmlIndex = ldf `.writeVignetteHtmlIndex`;
    check L34() else D21();
  D21():
    deopt 66 [];
  L6(r36):
    popenv;
    return r36;
  L34():
    p12 = prom<V +>{
      packageName = ld packageName;
      packageName1 = force? packageName;
      checkMissing(packageName1);
      return packageName1;
    };
    p13 = prom<V +>{
      htmlIndex = ld htmlIndex;
      htmlIndex1 = force? htmlIndex;
      checkMissing(htmlIndex1);
      return htmlIndex1;
    };
    p14 = prom<V +>{
      vignetteIndex = ld vignetteIndex;
      vignetteIndex1 = force? vignetteIndex;
      checkMissing(vignetteIndex1);
      return vignetteIndex1;
    };
    r33 = dyn _writeVignetteHtmlIndex(p12, p13, p14);
    check L35() else D22();
  L37():
    invisible1 = ldf invisible in base;
    r37 = dyn invisible1();
    check L39() else D23();
  L38():
    r35 = dyn base1();
    goto L6(r35);
  D22():
    deopt 70 [r33];
  D23():
    deopt 76 [r37];
  L35():
    goto L5();
  L39():
    goto L6(r37);
  }
}