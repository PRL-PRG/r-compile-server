fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner406387114;
    st `.vinstall_package_descriptions_as_RDS` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner406387114(dir, packages) {
  (reg dir:*, reg packages:*) -+> V { var dir:*, var packages:*, reg unlist:cls, reg strsplit:cls, reg packages1:*, reg packages2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg file_path:cls, reg dir1:*, reg dir2:V, reg p2:p(V +), reg p3:*, reg p4:V, reg p5:p(V +), reg r6:V, reg dir_exists:cls, reg meta_dir:*, reg meta_dir1:V, reg p6:p(V +), reg r8:V, reg r9:V, reg c1:L, reg i6:I, reg c3:V, reg dir_create:cls, reg meta_dir2:*, reg meta_dir3:V, reg p7:p(V +), reg r11:V, reg r12:V, reg c4:L, reg c5:V, reg c7:L, reg stop:cls, reg gettextf:cls, reg meta_dir4:*, reg meta_dir5:V, reg p8:p(V +), reg r14:V, reg p9:p(V +), reg r16:V, reg i10:I, reg file_path1:cls, reg dir3:*, reg dir4:V, reg p10:p(V +), reg p11:*, reg p12:V, reg p13:p(V +), reg r20:V, reg file_path2:cls, reg meta_dir6:*, reg meta_dir7:V, reg p14:p(V +), reg r22:V, reg file_test:cls, reg package_info_rds_file:*, reg package_info_rds_file1:V, reg p15:p(V +), reg package_info_dcf_file:*, reg package_info_dcf_file1:V, reg p16:p(V +), reg r25:V, reg c8:L, reg saveRDS:cls, reg _split_description:cls, reg _read_description:cls, reg package_info_dcf_file2:*, reg package_info_dcf_file3:V, reg p17:p(V +), reg r28:V, reg p18:p(V +), reg r30:V, reg p19:p(V +), reg package_info_rds_file2:*, reg package_info_rds_file3:V, reg p20:p(V +), reg r33:V, reg sym:cls, reg base:cls, reg guard:L, reg r34:V, reg r35:V, reg invisible:cls, reg r36:V |
    mkenv;
    st dir = dir;
    st packages = packages;
    unlist = ldf unlist;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p1 = prom<V +>{
      strsplit = ldf strsplit;
      p = prom<V +>{
        packages1 = ld packages;
        packages2 = force? packages1;
        checkMissing(packages2);
        return packages2;
      };
      r1 = dyn strsplit(p, "[[:space:]]+");
      return r1;
    };
    r3 = dyn unlist(p1);
    check L9() else D1();
  D1():
    deopt 3 [r3];
  L9():
    s = toForSeq(r3);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L10() else L6();
  L6():
    x = `[[`(s, i2, NULL, TRUE);
    st p = x;
    file_path = ldf `file.path`;
    check L11() else D2();
  L10():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L34() else L35();
  D2():
    deopt 5 [i2];
  L7(r35):
    popenv;
    return r35;
  L11():
    p2 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    p5 = prom<V +>{
      p3 = ld p;
      p4 = force? p3;
      checkMissing(p4);
      return p4;
    };
    r6 = dyn file_path(p2, p5, "Meta");
    check L12() else D3();
  L34():
    invisible = ldf invisible in base;
    r36 = dyn invisible();
    check L36() else D18();
  L35():
    r34 = dyn base();
    goto L7(r34);
  D3():
    deopt 9 [i2, r6];
  D18():
    deopt 62 [r36];
  L12():
    st meta_dir = r6;
    dir_exists = ldf `dir.exists`;
    check L13() else D4();
  L36():
    goto L7(r36);
  D4():
    deopt 12 [i2];
  L13():
    p6 = prom<V +>{
      meta_dir = ld meta_dir;
      meta_dir1 = force? meta_dir;
      checkMissing(meta_dir1);
      return meta_dir1;
    };
    r8 = dyn dir_exists(p6);
    check L14() else D5();
  D5():
    deopt 14 [i2, r8];
  L14():
    r9 = `!`(r8);
    c1 = `as.logical`(r9);
    if c1 then L15() else L1(i2, c1);
  L1(i6, c3):
    c7 = `as.logical`(c3);
    if c7 then L19() else L2();
  L15():
    dir_create = ldf `dir.create`;
    check L16() else D6();
  D6():
    deopt 17 [i2, c1];
  L2():
    goto L3(i6);
  L3(i10):
    file_path1 = ldf `file.path`;
    check L23() else D10();
  L16():
    p7 = prom<V +>{
      meta_dir2 = ld meta_dir;
      meta_dir3 = force? meta_dir2;
      checkMissing(meta_dir3);
      return meta_dir3;
    };
    r11 = dyn dir_create(p7);
    check L17() else D7();
  L19():
    stop = ldf stop;
    check L20() else D8();
  D7():
    deopt 19 [i2, c1, r11];
  D8():
    deopt 23 [i6];
  D10():
    deopt 29 [i10];
  L17():
    r12 = `!`(r11);
    c4 = `as.logical`(r12);
    c5 = `&&`(c1, c4);
    goto L1(i2, c5);
  L20():
    p9 = prom<V +>{
      gettextf = ldf gettextf;
      p8 = prom<V +>{
        meta_dir4 = ld meta_dir;
        meta_dir5 = force? meta_dir4;
        checkMissing(meta_dir5);
        return meta_dir5;
      };
      r14 = dyn gettextf("cannot open directory '%s'", p8);
      return r14;
    };
    r16 = dyn stop(p9);
    check L21() else D9();
  L23():
    p10 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    p13 = prom<V +>{
      p11 = ld p;
      p12 = force? p11;
      checkMissing(p12);
      return p12;
    };
    r20 = dyn file_path1(p10, p13, "DESCRIPTION");
    check L24() else D11();
  D9():
    deopt 25 [i6, r16];
  D11():
    deopt 33 [i10, r20];
  L21():
    goto L3(i6);
  L24():
    st package_info_dcf_file = r20;
    file_path2 = ldf `file.path`;
    check L25() else D12();
  D12():
    deopt 36 [i10];
  L25():
    p14 = prom<V +>{
      meta_dir6 = ld meta_dir;
      meta_dir7 = force? meta_dir6;
      checkMissing(meta_dir7);
      return meta_dir7;
    };
    r22 = dyn file_path2(p14, "package.rds");
    check L26() else D13();
  D13():
    deopt 39 [i10, r22];
  L26():
    st package_info_rds_file = r22;
    file_test = ldf file_test;
    check L27() else D14();
  D14():
    deopt 42 [i10];
  L27():
    p15 = prom<V +>{
      package_info_rds_file = ld package_info_rds_file;
      package_info_rds_file1 = force? package_info_rds_file;
      checkMissing(package_info_rds_file1);
      return package_info_rds_file1;
    };
    p16 = prom<V +>{
      package_info_dcf_file = ld package_info_dcf_file;
      package_info_dcf_file1 = force? package_info_dcf_file;
      checkMissing(package_info_dcf_file1);
      return package_info_dcf_file1;
    };
    r25 = dyn file_test("-nt", p15, p16);
    check L28() else D15();
  D15():
    deopt 46 [i10, r25];
  L28():
    c8 = `as.logical`(r25);
    if c8 then L29() else L4();
  L4():
    saveRDS = ldf saveRDS;
    check L32() else D16();
  L29():
    goto L0(i10);
  D16():
    deopt 52 [i10];
  L32():
    p19 = prom<V +>{
      _split_description = ldf `.split_description`;
      p18 = prom<V +>{
        _read_description = ldf `.read_description`;
        p17 = prom<V +>{
          package_info_dcf_file2 = ld package_info_dcf_file;
          package_info_dcf_file3 = force? package_info_dcf_file2;
          checkMissing(package_info_dcf_file3);
          return package_info_dcf_file3;
        };
        r28 = dyn _read_description(p17);
        return r28;
      };
      r30 = dyn _split_description(p18);
      return r30;
    };
    p20 = prom<V +>{
      package_info_rds_file2 = ld package_info_rds_file;
      package_info_rds_file3 = force? package_info_rds_file2;
      checkMissing(package_info_rds_file3);
      return package_info_rds_file3;
    };
    r33 = dyn saveRDS(p19, p20);
    check L33() else D17();
  D17():
    deopt 55 [i10, r33];
  L33():
    goto L0(i10);
  }
}