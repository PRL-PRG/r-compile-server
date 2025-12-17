fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1342324061;
    st getVignetteInfo = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1342324061(package, `lib.loc`, all) {
  (reg package:*, reg lib_loc:*, reg all:*) -+> V { var package:*, reg package_isMissing:L, reg package_orDefault:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var all:*, reg all_isMissing:L, reg all_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg package1:*, reg package2:V, reg c:V, reg c1:L, reg _packages:cls, reg all1:*, reg all2:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r4:V, reg find_package:cls, reg package3:*, reg package4:V, reg p2:p(V +), reg lib_loc3:*, reg lib_loc4:V, reg p3:p(V +), reg r7:V, reg r8:V, reg find_package1:cls, reg package5:*, reg package6:V, reg p4:p(V +), reg lib_loc5:*, reg lib_loc6:V, reg p5:p(V +), reg r11:V, reg paths:*, reg paths1:V, reg c2:L, reg paths3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg dir_exists:cls, reg file_path:cls, reg paths4:*, reg paths5:V, reg p6:p(V +), reg r13:V, reg p7:p(V +), reg r15:V, reg __:cls, reg r16:V, reg cbind:cls, reg character:cls, reg r17:V, reg p8:p(V +), reg character1:cls, reg r19:V, reg p9:p(V +), reg character2:cls, reg r21:V, reg p10:p(V +), reg character3:cls, reg r23:V, reg p11:p(V +), reg character4:cls, reg r25:V, reg p12:p(V +), reg character5:cls, reg r27:V, reg p13:p(V +), reg character6:cls, reg r29:V, reg p14:p(V +), reg r31:V, reg r32:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r33:V, reg r34:V, reg paths6:*, reg paths7:V, reg length:cls, reg r35:V, reg c3:L, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p15:p(V +), reg lapply:cls, reg paths8:*, reg paths9:V, reg p16:p(V +), reg getVinfo:*, reg getVinfo1:V, reg p17:p(V +), reg r39:V, reg p18:p(V +), reg r41:V, reg empty:*, reg empty1:V |
    mkenv;
    package_isMissing = missing.0(package);
    if package_isMissing then L0(NULL) else L0(package);
  L0(package_orDefault):
    st package = package_orDefault;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L1(NULL) else L1(lib_loc);
  L1(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    all_isMissing = missing.0(all);
    if all_isMissing then L2(TRUE) else L2(all);
  L2(all_orDefault):
    st all = all_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L3(r1):
    c1 = `as.logical`(r1);
    if c1 then L12() else L4();
  L9():
    package1 = ld package;
    check L11() else D0();
  L10():
    r = dyn base(<sym package>);
    goto L3(r);
  D0():
    deopt 1 [package1];
  L4():
    find_package1 = ldf `find.package`;
    check L18() else D5();
  L5(r8):
    st paths = r8;
    paths = ld paths;
    check L20() else D7();
  L11():
    package2 = force? package1;
    checkMissing(package2);
    c = `==`(package2, NULL);
    goto L3(c);
  L12():
    _packages = ldf `.packages`;
    check L13() else D1();
  D1():
    deopt 5 [];
  D5():
    deopt 19 [];
  D7():
    deopt 24 [paths];
  L13():
    p = prom<V +>{
      all1 = ld all;
      all2 = force? all1;
      checkMissing(all2);
      return all2;
    };
    p1 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r4 = dyn _packages[`all.available`, ](p, p1);
    check L14() else D2();
  L18():
    p4 = prom<V +>{
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      return package6;
    };
    p5 = prom<V +>{
      lib_loc5 = ld `lib.loc`;
      lib_loc6 = force? lib_loc5;
      checkMissing(lib_loc6);
      return lib_loc6;
    };
    r11 = dyn find_package1(p4, p5);
    check L19() else D6();
  L20():
    paths1 = force? paths;
    checkMissing(paths1);
    c2 = `is.object`(paths1);
    if c2 then L21() else L22(paths1);
  D2():
    deopt 9 [r4];
  D6():
    deopt 22 [r11];
  L6(dx1):
    st paths = dx1;
    cbind = ldf cbind;
    check L26() else D10();
  L14():
    st package = r4;
    find_package = ldf `find.package`;
    check L15() else D3();
  L19():
    goto L5(r11);
  L21():
    dr = tryDispatchBuiltin.1("[", paths1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(dr);
  L22(paths3):
    dir_exists = ldf `dir.exists`;
    check L24() else D8();
  D3():
    deopt 12 [];
  D8():
    deopt 27 [paths3];
  D10():
    deopt 33 [];
  L15():
    p2 = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    p3 = prom<V +>{
      lib_loc3 = ld `lib.loc`;
      lib_loc4 = force? lib_loc3;
      checkMissing(lib_loc4);
      return lib_loc4;
    };
    r7 = dyn find_package[, , quiet](p2, p3, TRUE);
    check L16() else D4();
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L24():
    p7 = prom<V +>{
      file_path = ldf `file.path`;
      p6 = prom<V +>{
        paths4 = ld paths;
        paths5 = force? paths4;
        checkMissing(paths5);
        return paths5;
      };
      r13 = dyn file_path(p6, "doc");
      return r13;
    };
    r15 = dyn dir_exists(p7);
    check L25() else D9();
  L26():
    p8 = prom<V +>{
      character = ldf character;
      r17 = dyn character(0.0);
      return r17;
    };
    p9 = prom<V +>{
      character1 = ldf character;
      r19 = dyn character1(0.0);
      return r19;
    };
    p10 = prom<V +>{
      character2 = ldf character;
      r21 = dyn character2(0.0);
      return r21;
    };
    p11 = prom<V +>{
      character3 = ldf character;
      r23 = dyn character3(0.0);
      return r23;
    };
    p12 = prom<V +>{
      character4 = ldf character;
      r25 = dyn character4(0.0);
      return r25;
    };
    p13 = prom<V +>{
      character5 = ldf character;
      r27 = dyn character5(0.0);
      return r27;
    };
    p14 = prom<V +>{
      character6 = ldf character;
      r29 = dyn character6(0.0);
      return r29;
    };
    r31 = dyn cbind[Package, Dir, Topic, File, Title, R, PDF](p8, p9, p10, p11, p12, p13, p14);
    check L27() else D11();
  D4():
    deopt 17 [r7];
  D9():
    deopt 29 [paths3, r15];
  D11():
    deopt 48 [r31];
  L16():
    goto L5(r7);
  L25():
    __ = ldf `[` in base;
    r16 = dyn __(paths3, r15);
    goto L6(r16);
  L27():
    st empty = r31;
    r32 = clos inner3077716681;
    st getVinfo = r32;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L7(r34):
    c3 = `as.logical`(r34);
    if c3 then L32() else L8();
  L28():
    paths6 = ld paths;
    check L30() else D12();
  L29():
    r33 = dyn base1(<sym paths>);
    goto L7(r33);
  D12():
    deopt 55 [paths6];
  L8():
    empty = ld empty;
    check L36() else D16();
  L30():
    paths7 = force? paths6;
    checkMissing(paths7);
    length = ldf length in base;
    r35 = dyn length(paths7);
    check L31() else D13();
  L32():
    do_call = ldf `do.call`;
    check L33() else D14();
  D13():
    deopt 58 [r35];
  D14():
    deopt 60 [];
  D16():
    deopt 64 [empty];
  L31():
    goto L7(r35);
  L33():
    p15 = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p18 = prom<V +>{
      lapply = ldf lapply;
      p16 = prom<V +>{
        paths8 = ld paths;
        paths9 = force? paths8;
        checkMissing(paths9);
        return paths9;
      };
      p17 = prom<V +>{
        getVinfo = ld getVinfo;
        getVinfo1 = force? getVinfo;
        checkMissing(getVinfo1);
        return getVinfo1;
      };
      r39 = dyn lapply(p16, p17);
      return r39;
    };
    r41 = dyn do_call(p15, p18);
    check L34() else D15();
  L36():
    empty1 = force? empty;
    checkMissing(empty1);
    popenv;
    return empty1;
  D15():
    deopt 63 [r41];
  L34():
    popenv;
    return r41;
  }
}
fun inner3077716681(dir) {
  (reg dir:*) -+> V { var dir:*, reg file_exists:cls, reg file_path:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg c:L, reg readRDS:cls, reg INDEX:*, reg INDEX1:V, reg p2:p(V +), reg r5:V, reg NROW:cls, reg entries:*, reg entries1:V, reg p3:p(V +), reg r8:V, reg r9:V, reg c1:L, reg ____:cls, reg entries2:*, reg entries3:V, reg c2:L, reg entries5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r10:V, reg p4:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg NROW1:cls, reg entries6:*, reg entries7:V, reg p5:p(V +), reg r15:V, reg rep_int:cls, reg r16:V, reg p6:p(V +), reg r18:V, reg basename:cls, reg entries8:*, reg entries9:V, reg c3:L, reg entries11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r19:V, reg p7:p(V +), reg r21:V, reg entries12:*, reg entries13:V, reg c4:L, reg entries15:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r22:V, reg file_path_sans_ext:cls, reg ifelse:cls, reg R:*, reg R1:V, reg r23:V, reg p8:p(V +), reg ifelse1:cls, reg pdf:*, reg pdf1:V, reg r25:V, reg p9:p(V +), reg file:*, reg file1:V, reg p10:p(V +), reg pdf2:*, reg pdf3:V, reg p11:p(V +), reg r29:V, reg p12:p(V +), reg R2:*, reg R3:V, reg p13:p(V +), reg r32:V, reg p14:p(V +), reg r34:V, reg cbind:cls, reg basename1:cls, reg dir3:*, reg dir4:V, reg p15:p(V +), reg r36:V, reg p16:p(V +), reg dir5:*, reg dir6:V, reg p17:p(V +), reg topic:*, reg topic1:V, reg p18:p(V +), reg file2:*, reg file3:V, reg p19:p(V +), reg entries16:*, reg entries17:V, reg c5:L, reg entries19:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r41:V, reg p20:p(V +), reg R4:*, reg R5:V, reg p21:p(V +), reg pdf4:*, reg pdf5:V, reg p22:p(V +), reg r45:V, reg c6:L, reg r47:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg order:cls, reg entries20:*, reg entries21:V, reg c7:L, reg entries23:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r48:V, reg p23:p(V +), reg r50:V, reg __:cls, reg r51:V, reg empty:*, reg empty1:V |
    mkenv;
    st dir = dir;
    st entries = NULL;
    file_exists = ldf `file.exists`;
    check L4() else D0();
  D0():
    deopt 4 [];
  L4():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      r1 = dyn file_path(p, "Meta", "vignette.rds");
      st INDEX = r1;
      invisible.0();
      return r1;
    };
    r3 = dyn file_exists(p1);
    check L5() else D1();
  D1():
    deopt 6 [r3];
  L5():
    c = `as.logical`(r3);
    if c then L6() else L0();
  L0():
    goto L1();
  L1():
    NROW = ldf NROW;
    check L10() else D4();
  L6():
    readRDS = ldf readRDS;
    check L7() else D2();
  D2():
    deopt 8 [];
  D4():
    deopt 15 [];
  L7():
    p2 = prom<V +>{
      INDEX = ld INDEX;
      INDEX1 = force? INDEX;
      checkMissing(INDEX1);
      return INDEX1;
    };
    r5 = dyn readRDS(p2);
    check L8() else D3();
  L10():
    p3 = prom<V +>{
      entries = ld entries;
      entries1 = force? entries;
      checkMissing(entries1);
      return entries1;
    };
    r8 = dyn NROW(p3);
    check L11() else D5();
  D3():
    deopt 10 [r5];
  D5():
    deopt 17 [r8];
  L8():
    st entries = r5;
    goto L1();
  L11():
    r9 = `>`(r8, 0.0);
    c1 = `as.logical`(r9);
    if c1 then L12() else L2();
  L2():
    empty = ld empty;
    check L32() else D17();
  L12():
    ____ = ldf `%||%`;
    check L13() else D6();
  D6():
    deopt 21 [];
  D17():
    deopt 66 [empty];
  L13():
    p4 = prom<V +>{
      entries2 = ld entries;
      entries3 = force? entries2;
      checkMissing(entries3);
      c2 = `is.object`(entries3);
      if c2 then L1() else L2(entries3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", entries3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(entries5):
      r10 = `$`(entries5, <sym R>);
      goto L0(r10);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p6 = prom<V +>{
      sym = ldf `rep.int`;
      base = ldf `rep.int` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r13):
      return r13;
    L1():
      NROW1 = ldf NROW;
      p5 = prom<V +>{
        entries6 = ld entries;
        entries7 = force? entries6;
        checkMissing(entries7);
        return entries7;
      };
      r15 = dyn NROW1(p5);
      rep_int = ldf `rep.int` in base;
      r16 = dyn rep_int("", r15);
      goto L0(r16);
    L2():
      r12 = dyn base("", <lang NROW(entries)>);
      goto L0(r12);
    };
    r18 = dyn ____(p4, p6);
    check L14() else D7();
  L32():
    empty1 = force? empty;
    checkMissing(empty1);
    popenv;
    return empty1;
  D7():
    deopt 24 [r18];
  L14():
    st R = r18;
    basename = ldf basename;
    check L15() else D8();
  D8():
    deopt 27 [];
  L15():
    p7 = prom<V +>{
      entries8 = ld entries;
      entries9 = force? entries8;
      checkMissing(entries9);
      c3 = `is.object`(entries9);
      if c3 then L1() else L2(entries9);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", entries9);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(entries11):
      r19 = `$`(entries11, <sym File>);
      goto L0(r19);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r21 = dyn basename(p7);
    check L16() else D9();
  D9():
    deopt 29 [r21];
  L16():
    st file = r21;
    entries12 = ld entries;
    check L17() else D10();
  D10():
    deopt 31 [entries12];
  L17():
    entries13 = force? entries12;
    checkMissing(entries13);
    c4 = `is.object`(entries13);
    if c4 then L19() else L20(entries13);
  L18(dx5):
    st pdf = dx5;
    file_path_sans_ext = ldf file_path_sans_ext;
    check L22() else D11();
  L19():
    dr4 = tryDispatchBuiltin.1("$", entries13);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L21() else L20(dr4);
  L20(entries15):
    r22 = `$`(entries15, <sym PDF>);
    goto L18(r22);
  D11():
    deopt 36 [];
  L21():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L18(dx4);
  L22():
    p14 = prom<V +>{
      ifelse = ldf ifelse;
      p8 = prom<V +>{
        R = ld R;
        R1 = force? R;
        checkMissing(R1);
        r23 = `==`(R1, "");
        return r23;
      };
      p12 = prom<V +>{
        ifelse1 = ldf ifelse;
        p9 = prom<V +>{
          pdf = ld pdf;
          pdf1 = force? pdf;
          checkMissing(pdf1);
          r25 = `==`(pdf1, "");
          return r25;
        };
        p10 = prom<V +>{
          file = ld file;
          file1 = force? file;
          checkMissing(file1);
          return file1;
        };
        p11 = prom<V +>{
          pdf2 = ld pdf;
          pdf3 = force? pdf2;
          checkMissing(pdf3);
          return pdf3;
        };
        r29 = dyn ifelse1(p9, p10, p11);
        return r29;
      };
      p13 = prom<V +>{
        R2 = ld R;
        R3 = force? R2;
        checkMissing(R3);
        return R3;
      };
      r32 = dyn ifelse(p8, p12, p13);
      return r32;
    };
    r34 = dyn file_path_sans_ext(p14);
    check L23() else D12();
  D12():
    deopt 38 [r34];
  L23():
    st topic = r34;
    cbind = ldf cbind;
    check L24() else D13();
  D13():
    deopt 41 [];
  L24():
    p16 = prom<V +>{
      basename1 = ldf basename;
      p15 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r36 = dyn basename1(p15);
      return r36;
    };
    p17 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    p18 = prom<V +>{
      topic = ld topic;
      topic1 = force? topic;
      checkMissing(topic1);
      return topic1;
    };
    p19 = prom<V +>{
      file2 = ld file;
      file3 = force? file2;
      checkMissing(file3);
      return file3;
    };
    p20 = prom<V +>{
      entries16 = ld entries;
      entries17 = force? entries16;
      checkMissing(entries17);
      c5 = `is.object`(entries17);
      if c5 then L1() else L2(entries17);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", entries17);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(entries19):
      r41 = `$`(entries19, <sym Title>);
      goto L0(r41);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p21 = prom<V +>{
      R4 = ld R;
      R5 = force? R4;
      checkMissing(R5);
      return R5;
    };
    p22 = prom<V +>{
      pdf4 = ld pdf;
      pdf5 = force? pdf4;
      checkMissing(pdf5);
      return pdf5;
    };
    r45 = dyn cbind[Package, Dir, Topic, File, Title, R, PDF](p16, p17, p18, p19, p20, p21, p22);
    check L25() else D14();
  D14():
    deopt 56 [r45];
  L25():
    c6 = `is.object`(r45);
    if c6 then L26() else L27(r45);
  L3(dx9):
    popenv;
    return dx9;
  L26():
    dr8 = tryDispatchBuiltin.1("[", r45);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L28() else L27(dr8);
  L27(r47):
    order = ldf order;
    check L29() else D15();
  D15():
    deopt 58 [r47];
  L28():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L3(dx8);
  L29():
    p23 = prom<V +>{
      entries20 = ld entries;
      entries21 = force? entries20;
      checkMissing(entries21);
      c7 = `is.object`(entries21);
      if c7 then L1() else L2(entries21);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", entries21);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(entries23):
      r48 = `$`(entries23, <sym Title>);
      goto L0(r48);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r50 = dyn order(p23);
    check L30() else D16();
  D16():
    deopt 60 [r47, r50];
  L30():
    __ = ldf `[` in base;
    r51 = dyn __(r45, r50, <missing>, FALSE);
    goto L3(r51);
  }
}