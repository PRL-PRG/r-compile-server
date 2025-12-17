fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2627190161;
    st dependsOnPkgs = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2627190161(pkgs, dependencies, recursive, `lib.loc`, installed) {
  (reg pkgs:*, reg dependencies:*, reg recursive:*, reg lib_loc:*, reg installed:*) -+> V { var pkgs:*, var dependencies:*, reg dependencies_isMissing:L, reg dependencies_orDefault:*, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var installed:*, reg installed_isMissing:L, reg installed_orDefault:*, reg __:cls, reg r:V, reg r1:cls, reg lib_loc1:*, reg lib_loc2:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg _expand_dependency_type_spec:cls, reg dependencies1:*, reg dependencies2:V, reg p2:p(V +), reg r6:V, reg installed1:*, reg installed2:V, reg c:L, reg installed4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg dependencies3:*, reg dependencies4:V, reg __1:cls, reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg installed5:*, reg installed6:V, reg c1:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __2:cls, reg r10:V, reg as_character:cls, reg r11:V, reg apply:cls, reg av:*, reg av1:V, reg p3:p(V +), reg r13:cls, reg p4:p(V +), reg r15:V, reg rn:*, reg rn1:V, reg c2:L, reg rn3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg need:*, reg need1:V, reg __3:cls, reg r16:V, reg recursive1:*, reg recursive2:V, reg c3:L, reg pkgs1:*, reg pkgs2:V, reg unique:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg p5:*, reg p6:V, reg uses:*, reg uses1:V, reg c4:cls, reg r19:V, reg p7:p(V +), reg r21:V, reg apply1:cls, reg av2:*, reg av3:V, reg p8:p(V +), reg r23:cls, reg p9:p(V +), reg r25:V, reg unique1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg p10:*, reg p11:V, reg rn4:*, reg rn5:V, reg c5:L, reg rn7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg need2:*, reg need3:V, reg __4:cls, reg r28:V, reg c6:cls, reg r29:V, reg p12:p(V +), reg r31:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg r33:V, reg uses2:*, reg uses3:V, reg length:cls, reg r34:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r37:V, reg r38:V, reg r39:V, reg p13:*, reg p14:V, reg length1:cls, reg r40:V, reg r41:V, reg c7:L, reg setdiff:cls, reg uses4:*, reg uses5:V, reg p15:p(V +), reg pkgs3:*, reg pkgs4:V, reg p16:p(V +), reg r46:V |
    mkenv;
    st pkgs = pkgs;
    dependencies_isMissing = missing.0(dependencies);
    if dependencies_isMissing then L0("strong") else L0(dependencies);
  L0(dependencies_orDefault):
    st dependencies = dependencies_orDefault;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L1(TRUE) else L1(recursive);
  L1(recursive_orDefault):
    st recursive = recursive_orDefault;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L2(NULL) else L2(lib_loc);
  L2(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    installed_isMissing = missing.0(installed);
    if installed_isMissing then L3() else L4(installed);
  L3():
    p1 = prom<V +>{
      __ = ldf `::`;
      r = dyn __("utils", "installed.packages");
      checkFun.0(r);
      r1 = r as cls;
      p = prom<V +>{
        lib_loc1 = ld `lib.loc`;
        lib_loc2 = force? lib_loc1;
        checkMissing(lib_loc2);
        return lib_loc2;
      };
      r3 = dyn r1[, fields](p, "Enhances");
      return r3;
    };
    goto L4(p1);
  L4(installed_orDefault):
    st installed = installed_orDefault;
    _expand_dependency_type_spec = ldf `.expand_dependency_type_spec`;
    check L17() else D0();
  D0():
    deopt 1 [];
  L17():
    p2 = prom<V +>{
      dependencies1 = ld dependencies;
      dependencies2 = force? dependencies1;
      checkMissing(dependencies2);
      return dependencies2;
    };
    r6 = dyn _expand_dependency_type_spec(p2);
    check L18() else D1();
  D1():
    deopt 3 [r6];
  L18():
    st dependencies = r6;
    installed1 = ld installed;
    check L19() else D2();
  D2():
    deopt 5 [installed1];
  L19():
    installed2 = force? installed1;
    checkMissing(installed2);
    c = `is.object`(installed2);
    if c then L20() else L21(installed2);
  L5(dx1):
    st av = dx1;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L20():
    dr = tryDispatchBuiltin.1("[", installed2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(dr);
  L21(installed4):
    dependencies3 = ld dependencies;
    check L23() else D3();
  D3():
    deopt 8 [installed4, dependencies3];
  L6(r9):
    st rn = r9;
    apply = ldf apply;
    check L31() else D6();
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L23():
    dependencies4 = force? dependencies3;
    __1 = ldf `[` in base;
    r7 = dyn __1(installed2, <missing>, dependencies4, FALSE);
    goto L5(r7);
  L24():
    installed5 = ld installed;
    check L26() else D4();
  L25():
    r8 = dyn base(<lang `[`(installed, , "Package")>);
    goto L6(r8);
  D4():
    deopt 17 [installed5];
  D6():
    deopt 27 [];
  L26():
    installed6 = force? installed5;
    checkMissing(installed6);
    c1 = `is.object`(installed6);
    if c1 then L27() else L28();
  L31():
    p3 = prom<V +>{
      av = ld av;
      av1 = force? av;
      checkMissing(av1);
      return av1;
    };
    p4 = prom<V +>{
      r13 = clos inner2501545716;
      return r13;
    };
    r15 = dyn apply(p3, 1, p4);
    check L32() else D7();
  D7():
    deopt 31 [r15];
  L7(dx3):
    as_character = ldf `as.character` in base;
    r11 = dyn as_character(dx3);
    check L30() else D5();
  L27():
    dr2 = tryDispatchBuiltin.1("[", installed6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L29() else L28();
  L28():
    __2 = ldf `[` in base;
    r10 = dyn __2(installed6, <missing>, "Package");
    goto L7(r10);
  L32():
    st need = r15;
    rn = ld rn;
    check L33() else D8();
  D5():
    deopt 24 [r11];
  D8():
    deopt 33 [rn];
  L29():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  L30():
    goto L6(r11);
  L33():
    rn1 = force? rn;
    checkMissing(rn1);
    c2 = `is.object`(rn1);
    if c2 then L34() else L35(rn1);
  L8(dx5):
    st uses = dx5;
    recursive1 = ld recursive;
    check L38() else D10();
  L34():
    dr4 = tryDispatchBuiltin.1("[", rn1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L36() else L35(dr4);
  L35(rn3):
    need = ld need;
    check L37() else D9();
  D9():
    deopt 35 [rn3, need];
  D10():
    deopt 39 [recursive1];
  L36():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L8(dx4);
  L37():
    need1 = force? need;
    __3 = ldf `[` in base;
    r16 = dyn __3(rn3, need1);
    goto L8(r16);
  L38():
    recursive2 = force? recursive1;
    checkMissing(recursive2);
    c3 = `as.logical`(recursive2);
    if c3 then L39() else L9();
  L9():
    goto L16();
  L16():
    setdiff = ldf setdiff;
    check L60() else D22();
  L39():
    pkgs1 = ld pkgs;
    check L40() else D11();
  D11():
    deopt 41 [pkgs1];
  D22():
    deopt 83 [];
  L40():
    pkgs2 = force? pkgs1;
    checkMissing(pkgs2);
    st p = pkgs2;
    goto L15();
  L60():
    p15 = prom<V +>{
      uses4 = ld uses;
      uses5 = force? uses4;
      checkMissing(uses5);
      return uses5;
    };
    p16 = prom<V +>{
      pkgs3 = ld pkgs;
      pkgs4 = force? pkgs3;
      checkMissing(pkgs4);
      return pkgs4;
    };
    r46 = dyn setdiff(p15, p16);
    check L61() else D23();
  D23():
    deopt 86 [r46];
  L15():
    unique = ldf unique;
    check L41() else D12();
  L61():
    popenv;
    return r46;
  D12():
    deopt 45 [];
  L41():
    p7 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      p5 = ld p;
      p6 = force? p5;
      checkMissing(p6);
      uses = ld uses;
      uses1 = force? uses;
      checkMissing(uses1);
      c4 = ldf c in base;
      r19 = dyn c4(p6, uses1);
      goto L0(r19);
    L2():
      r17 = dyn base1(<sym p>, <sym uses>);
      goto L0(r17);
    };
    r21 = dyn unique(p7);
    check L42() else D13();
  D13():
    deopt 47 [r21];
  L42():
    st p = r21;
    apply1 = ldf apply;
    check L43() else D14();
  D14():
    deopt 50 [];
  L43():
    p8 = prom<V +>{
      av2 = ld av;
      av3 = force? av2;
      checkMissing(av3);
      return av3;
    };
    p9 = prom<V +>{
      r23 = clos inner2501545716;
      return r23;
    };
    r25 = dyn apply1(p8, 1, p9);
    check L44() else D15();
  D15():
    deopt 54 [r25];
  L44():
    st need = r25;
    unique1 = ldf unique;
    check L45() else D16();
  D16():
    deopt 57 [];
  L45():
    p12 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r27):
      return r27;
    L2():
      p10 = ld p;
      p11 = force? p10;
      checkMissing(p11);
      rn4 = ld rn;
      rn5 = force? rn4;
      checkMissing(rn5);
      c5 = `is.object`(rn5);
      if c5 then L4() else L5(rn5);
    L3():
      r26 = dyn base2(<sym p>, <lang `[`(rn, need)>);
      goto L0(r26);
    L1(dx7):
      c6 = ldf c in base;
      r29 = dyn c6(p11, dx7);
      goto L0(r29);
    L4():
      dr6 = tryDispatchBuiltin.1("[", rn5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L6() else L5(dr6);
    L5(rn7):
      need2 = ld need;
      need3 = force? need2;
      __4 = ldf `[` in base;
      r28 = dyn __4(rn7, need3);
      goto L1(r28);
    L6():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L1(dx6);
    };
    r31 = dyn unique1(p12);
    check L46() else D17();
  D17():
    deopt 59 [r31];
  L46():
    st uses = r31;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L47() else L48();
  L10(r33):
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L51() else L52();
  L47():
    uses2 = ld uses;
    check L49() else D18();
  L48():
    r32 = dyn base3(<sym uses>);
    goto L10(r32);
  D18():
    deopt 63 [uses2];
  L11(r38, r39):
    r41 = `<=`(r38, r39);
    c7 = `as.logical`(r41);
    if c7 then L55() else L12();
  L49():
    uses3 = force? uses2;
    checkMissing(uses3);
    length = ldf length in base;
    r34 = dyn length(uses3);
    check L50() else D19();
  L51():
    p13 = ld p;
    check L53() else D20();
  L52():
    r37 = dyn base4(<sym p>);
    goto L11(r33, r37);
  D19():
    deopt 66 [r34];
  D20():
    deopt 68 [r33, p13];
  L12():
    goto L15();
  L50():
    goto L10(r34);
  L53():
    p14 = force? p13;
    checkMissing(p14);
    length1 = ldf length in base;
    r40 = dyn length1(p14);
    check L54() else D21();
  L55():
    goto L16();
  D21():
    deopt 71 [r33, r40];
  L54():
    goto L11(r33, r40);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _in_:cls, reg pkgs:*, reg pkgs1:V, reg p:p(V +), reg ___:cls, reg r3:V, reg r4:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg any:cls, reg r9:V |
    mkenv;
    st x = x;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    _in_ = ldf `%in%`;
    check L3() else D0();
  L2():
    r = dyn base(<lang `%in%`(pkgs, `:::`(utils, .clean_up_dependencies)(x))>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      pkgs = ld pkgs;
      pkgs1 = force? pkgs;
      checkMissing(pkgs1);
      return pkgs1;
    };
    p2 = prom<V +>{
      ___ = ldf `:::`;
      r3 = dyn ___("utils", ".clean_up_dependencies");
      checkFun.0(r3);
      r4 = r3 as cls;
      p1 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r6 = dyn r4(p1);
      return r6;
    };
    r8 = dyn _in_(p, p2);
    check L4() else D1();
  D1():
    deopt 6 [r8];
  L4():
    any = ldf any in base;
    r9 = dyn any(r8);
    check L5() else D2();
  D2():
    deopt 8 [r9];
  L5():
    goto L0(r9);
  }
}