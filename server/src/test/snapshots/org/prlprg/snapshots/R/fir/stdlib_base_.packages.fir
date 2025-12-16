fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-697819872`;
    st `.packages` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-697819872`(`all.available`, `lib.loc`) {
  (reg all_available:*, reg lib_loc:*) -+> V { var `all.available`:*, reg all_available_isMissing:L, reg all_available_orDefault:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg lib_loc1:*, reg lib_loc2:V, reg c:V, reg c1:L, reg _libPaths:cls, reg r2:V, reg all_available1:*, reg all_available2:V, reg c2:L, reg character:cls, reg r4:V, reg lib_loc3:*, reg lib_loc4:V, reg c3:L, reg lib_loc6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg file_exists:cls, reg lib_loc7:*, reg lib_loc8:V, reg p:p(V +), reg r6:V, reg __:cls, reg r7:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c4:L, reg x:V, reg list_files:cls, reg lib:*, reg lib1:V, reg p1:p(V +), reg r9:V, reg file_path:cls, reg lib2:*, reg lib3:V, reg p2:p(V +), reg a:*, reg a1:V, reg p3:p(V +), reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg i7:I, reg r14:V, reg ans:*, reg ans1:V, reg a2:*, reg a3:V, reg c5:L, reg i9:I, reg a5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i11:I, reg dx3:V, reg file_exists1:cls, reg pfile:*, reg pfile1:V, reg p4:p(V +), reg r16:V, reg __1:cls, reg r17:V, reg c6:cls, reg r18:V, reg unique:cls, reg ans2:*, reg ans3:V, reg p5:p(V +), reg r20:V, reg search:cls, reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg r25:V, reg _rmpkg:cls, reg s1:*, reg s2:V, reg c7:L, reg s4:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg startsWith:cls, reg s5:*, reg s6:V, reg p6:p(V +), reg r27:V, reg __2:cls, reg r28:V, reg p7:p(V +), reg r30:V, reg invisible:cls, reg r31:V |
    mkenv;
    all_available_isMissing = missing.0(all_available);
    if all_available_isMissing then L0(FALSE) else L0(all_available);
  L0(all_available_orDefault):
    st `all.available` = all_available_orDefault;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L1(NULL) else L1(lib_loc);
  L1(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L2(r1):
    c1 = `as.logical`(r1);
    if c1 then L16() else L3();
  L13():
    lib_loc1 = ld `lib.loc`;
    check L15() else D0();
  L14():
    r = dyn base(<sym lib.loc>);
    goto L2(r);
  D0():
    deopt 1 [lib_loc1];
  L3():
    goto L4();
  L4():
    all_available1 = ld `all.available`;
    check L20() else D3();
  L15():
    lib_loc2 = force? lib_loc1;
    checkMissing(lib_loc2);
    c = `==`(lib_loc2, NULL);
    goto L2(c);
  L16():
    _libPaths = ldf `.libPaths`;
    check L17() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 10 [all_available1];
  L17():
    r2 = dyn _libPaths();
    check L18() else D2();
  L20():
    all_available2 = force? all_available1;
    checkMissing(all_available2);
    c2 = `as.logical`(all_available2);
    if c2 then L21() else L5();
  D2():
    deopt 6 [r2];
  L5():
    search = ldf search;
    check L49() else D20();
  L18():
    st `lib.loc` = r2;
    goto L4();
  L21():
    character = ldf character;
    check L22() else D4();
  D4():
    deopt 13 [];
  D20():
    deopt 65 [];
  L22():
    r4 = dyn character();
    check L23() else D5();
  L49():
    r23 = dyn search();
    check L50() else D21();
  D5():
    deopt 14 [r4];
  D21():
    deopt 66 [r23];
  L23():
    st ans = r4;
    lib_loc3 = ld `lib.loc`;
    check L24() else D6();
  L50():
    st s = r23;
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L51() else L52();
  D6():
    deopt 16 [lib_loc3];
  L12(r25):
    popenv;
    return r25;
  L24():
    lib_loc4 = force? lib_loc3;
    checkMissing(lib_loc4);
    c3 = `is.object`(lib_loc4);
    if c3 then L25() else L26(lib_loc4);
  L51():
    _rmpkg = ldf `.rmpkg`;
    check L53() else D22();
  L52():
    r24 = dyn base2(<lang .rmpkg(`[`(s, startsWith(s, "package:")))>);
    goto L12(r24);
  D22():
    deopt 71 [];
  L6(dx1):
    s = toForSeq(dx1);
    l = length(s);
    i = 0;
    goto L7(i);
  L25():
    dr = tryDispatchBuiltin.1("[", lib_loc4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(dr);
  L26(lib_loc6):
    file_exists = ldf `file.exists`;
    check L28() else D7();
  L53():
    p7 = prom<V +>{
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      c7 = `is.object`(s2);
      if c7 then L1() else L2(s2);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", s2);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(s4):
      startsWith = ldf startsWith;
      p6 = prom<V +>{
        s5 = ld s;
        s6 = force? s5;
        checkMissing(s6);
        return s6;
      };
      r27 = dyn startsWith(p6, "package:");
      __2 = ldf `[` in base;
      r28 = dyn __2(s4, r27);
      goto L0(r28);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r30 = dyn _rmpkg(p7);
    check L54() else D23();
  D7():
    deopt 19 [lib_loc6];
  D23():
    deopt 73 [r30];
  L7(i1):
    i2 = `+`.1(i1, 1);
    c4 = `<`.1(l, i2);
    if c4 then L30() else L10();
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L28():
    p = prom<V +>{
      lib_loc7 = ld `lib.loc`;
      lib_loc8 = force? lib_loc7;
      checkMissing(lib_loc8);
      return lib_loc8;
    };
    r6 = dyn file_exists(p);
    check L29() else D8();
  L54():
    invisible = ldf invisible in base;
    r31 = dyn invisible(r30);
    check L55() else D24();
  D8():
    deopt 21 [lib_loc6, r6];
  D24():
    deopt 75 [r31];
  L10():
    x = `[[`(s, i2, NULL, TRUE);
    st lib = x;
    list_files = ldf `list.files`;
    check L31() else D9();
  L29():
    __ = ldf `[` in base;
    r7 = dyn __(lib_loc6, r6);
    goto L6(r7);
  L30():
    unique = ldf unique;
    check L45() else D18();
  L55():
    goto L12(r31);
  D9():
    deopt 24 [i2];
  D18():
    deopt 58 [];
  L31():
    p1 = prom<V +>{
      lib = ld lib;
      lib1 = force? lib;
      checkMissing(lib1);
      return lib1;
    };
    r9 = dyn list_files[, `all.files`, `full.names`](p1, FALSE, FALSE);
    check L32() else D10();
  L45():
    p5 = prom<V +>{
      ans2 = ld ans;
      ans3 = force? ans2;
      checkMissing(ans3);
      return ans3;
    };
    r20 = dyn unique(p5);
    check L46() else D19();
  D10():
    deopt 30 [i2, r9];
  D19():
    deopt 60 [r20];
  L32():
    st a = r9;
    file_path = ldf `file.path`;
    check L33() else D11();
  L46():
    popenv;
    return r20;
  D11():
    deopt 33 [i2];
  L33():
    p2 = prom<V +>{
      lib2 = ld lib;
      lib3 = force? lib2;
      checkMissing(lib3);
      return lib3;
    };
    p3 = prom<V +>{
      a = ld a;
      a1 = force? a;
      checkMissing(a1);
      return a1;
    };
    r12 = dyn file_path(p2, p3, "Meta", "package.rds");
    check L34() else D12();
  D12():
    deopt 38 [i2, r12];
  L34():
    st pfile = r12;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  L8(i7, r14):
    st ans = r14;
    goto L7(i7);
  L35():
    ans = ld ans;
    check L37() else D13();
  L36():
    r13 = dyn base1(<sym ans>, <lang `[`(a, file.exists(pfile))>);
    goto L8(i2, r13);
  D13():
    deopt 42 [i2, ans];
  L37():
    ans1 = force? ans;
    checkMissing(ans1);
    a2 = ld a;
    check L38() else D14();
  D14():
    deopt 44 [i2, a2];
  L38():
    a3 = force? a2;
    checkMissing(a3);
    c5 = `is.object`(a3);
    if c5 then L39() else L40(i2, a3);
  L9(i11, dx3):
    c6 = ldf c in base;
    r18 = dyn c6(ans1, dx3);
    check L44() else D17();
  L39():
    dr2 = tryDispatchBuiltin.1("[", a3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L41() else L40(i2, dr2);
  L40(i9, a5):
    file_exists1 = ldf `file.exists`;
    check L42() else D15();
  D15():
    deopt 47 [i9, a5];
  D17():
    deopt 52 [i11, r18];
  L41():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(i2, dx2);
  L42():
    p4 = prom<V +>{
      pfile = ld pfile;
      pfile1 = force? pfile;
      checkMissing(pfile1);
      return pfile1;
    };
    r16 = dyn file_exists1(p4);
    check L43() else D16();
  L44():
    goto L8(i11, r18);
  D16():
    deopt 49 [i9, a5, r16];
  L43():
    __1 = ldf `[` in base;
    r17 = dyn __1(a5, r16);
    goto L9(i9, r17);
  }
}