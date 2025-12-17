fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1278957660;
    st `.process_repository_package_db_to_matrix` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1278957660(desc, path, addFiles, addPaths, latestOnly) {
  (reg desc:*, reg path:*, reg addFiles:*, reg addPaths:*, reg latestOnly:*) -+> V { var desc:*, var path:*, var addFiles:*, var addPaths:*, var latestOnly:*, reg Filter:cls, reg length:*, reg length1:V, reg p:p(V +), reg desc1:*, reg desc2:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg desc3:*, reg desc4:V, reg length2:cls, reg r5:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg desc5:*, reg desc6:V, reg names:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg desc7:*, reg desc8:V, reg c1:L, reg desc10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r11:V, reg names1:cls, reg r12:V, reg matrix:cls, reg unlist:cls, reg desc11:*, reg desc12:V, reg p2:p(V +), reg r14:V, reg p3:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg fields:*, reg fields1:V, reg length3:cls, reg r18:V, reg p4:p(V +), reg r20:V, reg fields2:*, reg fields3:V, reg l:*, reg colnames__:cls, reg r21:V, reg addFiles1:*, reg addFiles2:V, reg c2:L, reg cbind:cls, reg desc13:*, reg desc14:V, reg p5:p(V +), reg Files:*, reg Files1:V, reg p6:p(V +), reg r24:V, reg addPaths1:*, reg addPaths2:V, reg c3:L, reg cbind1:cls, reg desc15:*, reg desc16:V, reg p7:p(V +), reg path1:*, reg path2:V, reg p8:p(V +), reg r28:V, reg latestOnly1:*, reg latestOnly2:V, reg c4:L, reg _remove_stale_dups:cls, reg desc17:*, reg desc18:V, reg p9:p(V +), reg r31:V, reg analyze_licenses:cls, reg desc19:*, reg desc20:V, reg c5:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r33:V, reg p10:p(V +), reg r35:V, reg ifelse:cls, reg license_info:*, reg license_info1:V, reg c6:L, reg license_info3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r36:V, reg p11:p(V +), reg license_info4:*, reg license_info5:V, reg c7:L, reg license_info7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r38:V, reg p12:p(V +), reg r40:V, reg l1:*, reg c8:L, reg r42:V, reg dr8:V, reg dc4:L, reg dx8:V, reg r44:V, reg dx9:V, reg ___:cls, reg r45:V, reg desc23:*, reg desc24:V |
    mkenv;
    st desc = desc;
    st path = path;
    st addFiles = addFiles;
    st addPaths = addPaths;
    st latestOnly = latestOnly;
    Filter = ldf Filter;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    p = prom<V +>{
      length = ld length;
      length1 = force? length;
      checkMissing(length1);
      return length1;
    };
    p1 = prom<V +>{
      desc1 = ld desc;
      desc2 = force? desc1;
      checkMissing(desc2);
      return desc2;
    };
    r2 = dyn Filter(p, p1);
    check L14() else D1();
  D1():
    deopt 4 [r2];
  L14():
    st desc = r2;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L0(r4):
    c = `as.logical`(r4);
    if c then L19() else L1();
  L15():
    desc3 = ld desc;
    check L17() else D2();
  L16():
    r3 = dyn base(<sym desc>);
    goto L0(r3);
  D2():
    deopt 8 [desc3];
  L1():
    goto L12();
  L12():
    desc23 = ld desc;
    check L59() else D26();
  L17():
    desc4 = force? desc3;
    checkMissing(desc4);
    length2 = ldf length in base;
    r5 = dyn length2(desc4);
    check L18() else D3();
  L19():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  D3():
    deopt 11 [r5];
  D26():
    deopt 95 [desc23];
  L2(r7):
    st Files = r7;
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L18():
    goto L0(r5);
  L20():
    desc5 = ld desc;
    check L22() else D4();
  L21():
    r6 = dyn base1(<sym desc>);
    goto L2(r6);
  L59():
    desc24 = force? desc23;
    checkMissing(desc24);
    popenv;
    return desc24;
  D4():
    deopt 14 [desc5];
  L3(r10):
    st fields = r10;
    matrix = ldf matrix;
    check L31() else D8();
  L22():
    desc6 = force? desc5;
    checkMissing(desc6);
    names = ldf names in base;
    r8 = dyn names(desc6);
    check L23() else D5();
  L24():
    desc7 = ld desc;
    check L26() else D6();
  L25():
    r9 = dyn base2(<lang `[[`(desc, 1)>);
    goto L3(r9);
  D5():
    deopt 17 [r8];
  D6():
    deopt 21 [desc7];
  D8():
    deopt 30 [];
  L23():
    goto L2(r8);
  L26():
    desc8 = force? desc7;
    checkMissing(desc8);
    c1 = `is.object`(desc8);
    if c1 then L27() else L28(desc8);
  L31():
    p3 = prom<V +>{
      unlist = ldf unlist;
      p2 = prom<V +>{
        desc11 = ld desc;
        desc12 = force? desc11;
        checkMissing(desc12);
        return desc12;
      };
      r14 = dyn unlist(p2);
      return r14;
    };
    p4 = prom<V +>{
      sym3 = ldf length;
      base3 = ldf length in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      fields = ld fields;
      fields1 = force? fields;
      checkMissing(fields1);
      length3 = ldf length in base;
      r18 = dyn length3(fields1);
      goto L0(r18);
    L2():
      r16 = dyn base3(<sym fields>);
      goto L0(r16);
    };
    r20 = dyn matrix[, ncol, byrow](p3, p4, TRUE);
    check L32() else D9();
  D9():
    deopt 36 [r20];
  L4(dx1):
    names1 = ldf names in base;
    r12 = dyn names1(dx1);
    check L30() else D7();
  L27():
    dr = tryDispatchBuiltin.1("[[", desc8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(dr);
  L28(desc10):
    __ = ldf `[[` in base;
    r11 = dyn __(desc10, 1);
    goto L4(r11);
  L32():
    st desc = r20;
    fields2 = ld fields;
    check L33() else D10();
  D7():
    deopt 27 [r12];
  D10():
    deopt 38 [fields2];
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L30():
    goto L3(r12);
  L33():
    fields3 = force? fields2;
    checkMissing(fields3);
    l = ld desc;
    colnames__ = ldf `colnames<-`;
    check L34() else D11();
  D11():
    deopt 41 [fields3, l, fields3];
  L34():
    r21 = dyn colnames__(l, NULL, fields3);
    check L35() else D12();
  D12():
    deopt 43 [fields3, r21];
  L35():
    st desc = r21;
    addFiles1 = ld addFiles;
    check L36() else D13();
  D13():
    deopt 45 [addFiles1];
  L36():
    addFiles2 = force? addFiles1;
    checkMissing(addFiles2);
    c2 = `as.logical`(addFiles2);
    if c2 then L37() else L5();
  L5():
    goto L6();
  L6():
    addPaths1 = ld addPaths;
    check L41() else D16();
  L37():
    cbind = ldf cbind;
    check L38() else D14();
  D14():
    deopt 48 [];
  D16():
    deopt 56 [addPaths1];
  L38():
    p5 = prom<V +>{
      desc13 = ld desc;
      desc14 = force? desc13;
      checkMissing(desc14);
      return desc14;
    };
    p6 = prom<V +>{
      Files = ld Files;
      Files1 = force? Files;
      checkMissing(Files1);
      return Files1;
    };
    r24 = dyn cbind[, File](p5, p6);
    check L39() else D15();
  L41():
    addPaths2 = force? addPaths1;
    checkMissing(addPaths2);
    c3 = `as.logical`(addPaths2);
    if c3 then L42() else L7();
  D15():
    deopt 52 [r24];
  L7():
    goto L8();
  L8():
    latestOnly1 = ld latestOnly;
    check L46() else D19();
  L39():
    st desc = r24;
    goto L6();
  L42():
    cbind1 = ldf cbind;
    check L43() else D17();
  D17():
    deopt 59 [];
  D19():
    deopt 67 [latestOnly1];
  L43():
    p7 = prom<V +>{
      desc15 = ld desc;
      desc16 = force? desc15;
      checkMissing(desc16);
      return desc16;
    };
    p8 = prom<V +>{
      path1 = ld path;
      path2 = force? path1;
      checkMissing(path2);
      return path2;
    };
    r28 = dyn cbind1[, Path](p7, p8);
    check L44() else D18();
  L46():
    latestOnly2 = force? latestOnly1;
    checkMissing(latestOnly2);
    c4 = `as.logical`(latestOnly2);
    if c4 then L47() else L9();
  D18():
    deopt 63 [r28];
  L9():
    goto L10();
  L10():
    analyze_licenses = ldf analyze_licenses;
    check L51() else D22();
  L44():
    st desc = r28;
    goto L8();
  L47():
    _remove_stale_dups = ldf `.remove_stale_dups`;
    check L48() else D20();
  D20():
    deopt 70 [];
  D22():
    deopt 77 [];
  L48():
    p9 = prom<V +>{
      desc17 = ld desc;
      desc18 = force? desc17;
      checkMissing(desc18);
      return desc18;
    };
    r31 = dyn _remove_stale_dups(p9);
    check L49() else D21();
  L51():
    p10 = prom<V +>{
      desc19 = ld desc;
      desc20 = force? desc19;
      checkMissing(desc20);
      c5 = `is.object`(desc20);
      if c5 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", desc20);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      __1 = ldf `[` in base;
      r33 = dyn __1(desc20, <missing>, "License");
      goto L0(r33);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r35 = dyn analyze_licenses(p10);
    check L52() else D23();
  D21():
    deopt 72 [r31];
  D23():
    deopt 79 [r35];
  L49():
    st desc = r31;
    goto L10();
  L52():
    st license_info = r35;
    ifelse = ldf ifelse;
    check L53() else D24();
  D24():
    deopt 82 [];
  L53():
    p11 = prom<V +>{
      license_info = ld license_info;
      license_info1 = force? license_info;
      checkMissing(license_info1);
      c6 = `is.object`(license_info1);
      if c6 then L1() else L2(license_info1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", license_info1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(license_info3):
      r36 = `$`(license_info3, <sym is_standardizable>);
      goto L0(r36);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p12 = prom<V +>{
      license_info4 = ld license_info;
      license_info5 = force? license_info4;
      checkMissing(license_info5);
      c7 = `is.object`(license_info5);
      if c7 then L1() else L2(license_info5);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", license_info5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(license_info7):
      r38 = `$`(license_info7, <sym standardization>);
      goto L0(r38);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r40 = dyn ifelse(p11, p12, NA_LGL);
    check L54() else D25();
  D25():
    deopt 86 [r40];
  L54():
    l1 = ld desc;
    c8 = `is.object`(l1);
    if c8 then L55() else L56(r40);
  L11(r44, dx9):
    st desc = dx9;
    goto L12();
  L55():
    dr8 = tryDispatchBuiltin.0("[<-", l1, r40);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L57() else L56(r40);
  L56(r42):
    ___ = ldf `[<-` in base;
    r45 = dyn ___(l1, <missing>, "License", r40);
    goto L11(r42, r45);
  L57():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L11(r40, dx8);
  }
}