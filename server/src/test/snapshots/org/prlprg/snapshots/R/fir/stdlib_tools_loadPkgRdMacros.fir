fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1096800484;
    st loadPkgRdMacros = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1096800484(pkgdir, macros) {
  (reg pkgdir:*, reg macros:*) -+> V { var pkgdir:*, var macros:*, reg macros_isMissing:L, reg macros_orDefault:*, reg _get_package_metadata:cls, reg pkgdir1:*, reg pkgdir2:V, reg p:p(V +), reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg pkglist:*, reg pkglist1:V, reg is_na:cls, reg r7:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg macros1:*, reg macros2:V, reg c2:V, reg c3:L, reg initialRdMacros:cls, reg pkglist2:*, reg pkglist3:V, reg p1:p(V +), reg r12:V, reg initialRdMacros1:cls, reg pkglist4:*, reg pkglist5:V, reg p2:p(V +), reg macros3:*, reg macros4:V, reg p3:p(V +), reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg list_files:cls, reg file_path:cls, reg pkgdir3:*, reg pkgdir4:V, reg p4:p(V +), reg r20:V, reg p5:p(V +), reg r22:V, reg list_files1:cls, reg file_path1:cls, reg pkgdir5:*, reg pkgdir6:V, reg p6:p(V +), reg r24:V, reg p7:p(V +), reg r26:V, reg c4:cls, reg r27:V, reg files:*, reg files1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c5:L, reg x:V, reg loadRdMacros:cls, reg f:*, reg f1:V, reg p8:p(V +), reg macros5:*, reg macros6:V, reg p9:p(V +), reg r30:V, reg macros7:*, reg macros8:V |
    mkenv;
    st pkgdir = pkgdir;
    macros_isMissing = missing.0(macros);
    if macros_isMissing then L0(NULL) else L0(macros);
  L0(macros_orDefault):
    st macros = macros_orDefault;
    _get_package_metadata = ldf `.get_package_metadata`;
    check L11() else D0();
  D0():
    deopt 1 [];
  L11():
    p = prom<V +>{
      pkgdir1 = ld pkgdir;
      pkgdir2 = force? pkgdir1;
      checkMissing(pkgdir2);
      return pkgdir2;
    };
    r1 = dyn _get_package_metadata(p);
    check L12() else D1();
  D1():
    deopt 3 [r1];
  L12():
    c = `is.object`(r1);
    if c then L13() else L14(r1);
  L1(dx1):
    st pkglist = dx1;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L13():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(r3):
    __ = ldf `[` in base;
    r4 = dyn __(r3, "RdMacros");
    goto L1(r4);
  L2(r6):
    c1 = `as.logical`(r6);
    if c1 then L20() else L3();
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L16():
    pkglist = ld pkglist;
    check L18() else D2();
  L17():
    r5 = dyn base(<sym pkglist>);
    goto L2(r5);
  D2():
    deopt 10 [pkglist];
  L3():
    goto L4();
  L4():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L18():
    pkglist1 = force? pkglist;
    checkMissing(pkglist1);
    is_na = ldf `is.na` in base;
    r7 = dyn is_na(pkglist1);
    check L19() else D3();
  L20():
    st pkglist = NULL;
    goto L4();
  D3():
    deopt 13 [r7];
  L5(r10):
    c3 = `as.logical`(r10);
    if c3 then L25() else L6();
  L19():
    goto L2(r7);
  L22():
    macros1 = ld macros;
    check L24() else D4();
  L23():
    r9 = dyn base1(<sym macros>);
    goto L5(r9);
  D4():
    deopt 20 [macros1];
  L6():
    initialRdMacros1 = ldf initialRdMacros;
    check L29() else D7();
  L7():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  L24():
    macros2 = force? macros1;
    checkMissing(macros2);
    c2 = `==`(macros2, NULL);
    goto L5(c2);
  L25():
    initialRdMacros = ldf initialRdMacros;
    check L26() else D5();
  D5():
    deopt 24 [];
  D7():
    deopt 29 [];
  L8(r18):
    st files = r18;
    files = ld files;
    check L38() else D14();
  L26():
    p1 = prom<V +>{
      pkglist2 = ld pkglist;
      pkglist3 = force? pkglist2;
      checkMissing(pkglist3);
      return pkglist3;
    };
    r12 = dyn initialRdMacros(p1);
    check L27() else D6();
  L29():
    p2 = prom<V +>{
      pkglist4 = ld pkglist;
      pkglist5 = force? pkglist4;
      checkMissing(pkglist5);
      return pkglist5;
    };
    p3 = prom<V +>{
      macros3 = ld macros;
      macros4 = force? macros3;
      checkMissing(macros4);
      return macros4;
    };
    r16 = dyn initialRdMacros1(p2, p3);
    check L30() else D8();
  L31():
    list_files = ldf `list.files`;
    check L33() else D9();
  L32():
    r17 = dyn base2(<lang list.files(file.path(pkgdir, "man", "macros"), pattern="\\.Rd$", full.names=TRUE)>, <lang list.files(file.path(pkgdir, "help", "macros"), pattern="\\.Rd$", full.names=TRUE)>);
    goto L8(r17);
  D6():
    deopt 26 [r12];
  D8():
    deopt 32 [r16];
  D9():
    deopt 37 [];
  D14():
    deopt 55 [files];
  L27():
    st macros = r12;
    goto L7();
  L30():
    st macros = r16;
    goto L7();
  L33():
    p5 = prom<V +>{
      file_path = ldf `file.path`;
      p4 = prom<V +>{
        pkgdir3 = ld pkgdir;
        pkgdir4 = force? pkgdir3;
        checkMissing(pkgdir4);
        return pkgdir4;
      };
      r20 = dyn file_path(p4, "man", "macros");
      return r20;
    };
    r22 = dyn list_files[, pattern, `full.names`](p5, "\\.Rd$", TRUE);
    check L34() else D10();
  L38():
    files1 = force? files;
    checkMissing(files1);
    s = toForSeq(files1);
    l = length(s);
    i = 0;
    goto L9(i);
  D10():
    deopt 43 [r22];
  L9(i1):
    i2 = `+`.1(i1, 1);
    c5 = `<`.1(l, i2);
    if c5 then L39() else L10();
  L34():
    list_files1 = ldf `list.files`;
    check L35() else D11();
  D11():
    deopt 45 [];
  L10():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    loadRdMacros = ldf loadRdMacros;
    check L40() else D15();
  L35():
    p7 = prom<V +>{
      file_path1 = ldf `file.path`;
      p6 = prom<V +>{
        pkgdir5 = ld pkgdir;
        pkgdir6 = force? pkgdir5;
        checkMissing(pkgdir6);
        return pkgdir6;
      };
      r24 = dyn file_path1(p6, "help", "macros");
      return r24;
    };
    r26 = dyn list_files1[, pattern, `full.names`](p7, "\\.Rd$", TRUE);
    check L36() else D12();
  L39():
    macros7 = ld macros;
    check L42() else D17();
  D12():
    deopt 51 [r26];
  D15():
    deopt 58 [i2];
  D17():
    deopt 66 [macros7];
  L36():
    c4 = ldf c in base;
    r27 = dyn c4(r22, r26);
    check L37() else D13();
  L40():
    p8 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    p9 = prom<V +>{
      macros5 = ld macros;
      macros6 = force? macros5;
      checkMissing(macros6);
      return macros6;
    };
    r30 = dyn loadRdMacros(p8, p9);
    check L41() else D16();
  L42():
    macros8 = force? macros7;
    checkMissing(macros8);
    popenv;
    return macros8;
  D13():
    deopt 53 [r27];
  D16():
    deopt 61 [i2, r30];
  L37():
    goto L8(r27);
  L41():
    st macros = r30;
    goto L9(i2);
  }
}