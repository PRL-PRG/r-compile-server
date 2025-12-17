fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1444949165;
    st `.update_package_rds` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1444949165(`lib.loc`) {
  (reg lib_loc:*) -+> V { var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg lib_loc1:*, reg lib_loc2:V, reg c:V, reg c1:L, reg _libPaths:cls, reg r2:V, reg lib_loc3:*, reg lib_loc4:V, reg c2:L, reg lib_loc6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg file_exists:cls, reg lib_loc7:*, reg lib_loc8:V, reg p:p(V +), reg r5:V, reg __:cls, reg r6:V, reg lib_loc9:*, reg lib_loc10:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x:V, reg list_files:cls, reg lib:*, reg lib1:V, reg p1:p(V +), reg r8:V, reg a:*, reg a1:V, reg s1:V, reg l1:I, reg i5:I, reg i6:I, reg i7:I, reg i8:I, reg c4:L, reg x1:V, reg file_path:cls, reg nam:*, reg nam1:V, reg p2:p(V +), reg r10:V, reg file_exists1:cls, reg dfile:*, reg dfile1:V, reg p3:p(V +), reg r12:V, reg c5:L, reg print:cls, reg nam2:*, reg nam3:V, reg p4:p(V +), reg r14:V, reg _install_package_description:cls, reg nam4:*, reg nam5:V, reg p5:p(V +), reg nam6:*, reg nam7:V, reg p6:p(V +), reg r17:V, reg i17:I, reg i18:I |
    mkenv;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L14() else L2();
  L11():
    lib_loc1 = ld `lib.loc`;
    check L13() else D0();
  L12():
    r = dyn base(<sym lib.loc>);
    goto L1(r);
  D0():
    deopt 1 [lib_loc1];
  L2():
    goto L3();
  L3():
    lib_loc3 = ld `lib.loc`;
    check L18() else D3();
  L13():
    lib_loc2 = force? lib_loc1;
    checkMissing(lib_loc2);
    c = `==`(lib_loc2, NULL);
    goto L1(c);
  L14():
    _libPaths = ldf `.libPaths`;
    check L15() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 10 [lib_loc3];
  L15():
    r2 = dyn _libPaths();
    check L16() else D2();
  L18():
    lib_loc4 = force? lib_loc3;
    checkMissing(lib_loc4);
    c2 = `is.object`(lib_loc4);
    if c2 then L19() else L20(lib_loc4);
  D2():
    deopt 6 [r2];
  L4(dx1):
    st `lib.loc` = dx1;
    lib_loc9 = ld `lib.loc`;
    check L24() else D6();
  L16():
    st `lib.loc` = r2;
    goto L3();
  L19():
    dr = tryDispatchBuiltin.1("[", lib_loc4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(lib_loc6):
    file_exists = ldf `file.exists`;
    check L22() else D4();
  D4():
    deopt 13 [lib_loc6];
  D6():
    deopt 18 [lib_loc9];
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L22():
    p = prom<V +>{
      lib_loc7 = ld `lib.loc`;
      lib_loc8 = force? lib_loc7;
      checkMissing(lib_loc8);
      return lib_loc8;
    };
    r5 = dyn file_exists(p);
    check L23() else D5();
  L24():
    lib_loc10 = force? lib_loc9;
    checkMissing(lib_loc10);
    s = toForSeq(lib_loc10);
    l = length(s);
    i = 0;
    goto L5(i);
  D5():
    deopt 15 [lib_loc6, r5];
  L5(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l, i2);
    if c3 then L25() else L10();
  L23():
    __ = ldf `[` in base;
    r6 = dyn __(lib_loc6, r5);
    goto L4(r6);
  L10():
    x = `[[`(s, i2, NULL, TRUE);
    st lib = x;
    list_files = ldf `list.files`;
    check L26() else D7();
  L25():
    invisible.0();
    popenv;
    return i2;
  D7():
    deopt 21 [i2];
  L26():
    p1 = prom<V +>{
      lib = ld lib;
      lib1 = force? lib;
      checkMissing(lib1);
      return lib1;
    };
    r8 = dyn list_files[, `all.files`, `full.names`](p1, FALSE, TRUE);
    check L27() else D8();
  D8():
    deopt 27 [i2, r8];
  L27():
    st a = r8;
    a = ld a;
    check L28() else D9();
  D9():
    deopt 29 [i2, a];
  L28():
    a1 = force? a;
    checkMissing(a1);
    s1 = toForSeq(a1);
    l1 = length(s1);
    i5 = 0;
    goto L6(i2, i5);
  L6(i6, i7):
    i8 = `+`.1(i7, 1);
    c4 = `<`.1(l1, i8);
    if c4 then L29() else L9();
  L9():
    x1 = `[[`(s1, i8, NULL, TRUE);
    st nam = x1;
    file_path = ldf `file.path`;
    check L30() else D10();
  L29():
    goto L5(i6);
  D10():
    deopt 32 [i6, i8];
  L30():
    p2 = prom<V +>{
      nam = ld nam;
      nam1 = force? nam;
      checkMissing(nam1);
      return nam1;
    };
    r10 = dyn file_path(p2, "DESCRIPTION");
    check L31() else D11();
  D11():
    deopt 35 [i6, i8, r10];
  L31():
    st dfile = r10;
    file_exists1 = ldf `file.exists`;
    check L32() else D12();
  D12():
    deopt 38 [i6, i8];
  L32():
    p3 = prom<V +>{
      dfile = ld dfile;
      dfile1 = force? dfile;
      checkMissing(dfile1);
      return dfile1;
    };
    r12 = dyn file_exists1(p3);
    check L33() else D13();
  D13():
    deopt 40 [i6, i8, r12];
  L33():
    c5 = `as.logical`(r12);
    if c5 then L34() else L7();
  L7():
    goto L8(i6, i8);
  L8(i17, i18):
    goto L6(i17, i18);
  L34():
    print = ldf print;
    check L35() else D14();
  D14():
    deopt 42 [i6, i8];
  L35():
    p4 = prom<V +>{
      nam2 = ld nam;
      nam3 = force? nam2;
      checkMissing(nam3);
      return nam3;
    };
    r14 = dyn print(p4);
    check L36() else D15();
  D15():
    deopt 44 [i6, i8, r14];
  L36():
    _install_package_description = ldf `.install_package_description`;
    check L37() else D16();
  D16():
    deopt 46 [i6, i8];
  L37():
    p5 = prom<V +>{
      nam4 = ld nam;
      nam5 = force? nam4;
      checkMissing(nam5);
      return nam5;
    };
    p6 = prom<V +>{
      nam6 = ld nam;
      nam7 = force? nam6;
      checkMissing(nam7);
      return nam7;
    };
    r17 = dyn _install_package_description(p5, p6);
    check L38() else D17();
  D17():
    deopt 49 [i6, i8, r17];
  L38():
    goto L8(i6, i8);
  }
}