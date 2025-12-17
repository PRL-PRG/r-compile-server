fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3077716681;
    st `.check_package_code_tampers` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3077716681(dir) {
  (reg dir:*) -+> V { var dir:*, reg file_path:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg file_exists:cls, reg dfile:*, reg dfile1:V, reg p1:p(V +), reg r3:V, reg c:L, reg _read_description:cls, reg dfile2:*, reg dfile3:V, reg p2:p(V +), reg r5:V, reg c1:L, reg r7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r8:V, reg dx2:V, reg r9:cls, reg Filter:cls, reg length:*, reg length1:V, reg p3:p(V +), reg _find_calls_in_package_code:cls, reg dir3:*, reg dir4:V, reg p4:p(V +), reg predicate:*, reg predicate1:V, reg p5:p(V +), reg r13:V, reg p6:p(V +), reg r15:V, reg sym:cls, reg base:cls, reg guard:L, reg r16:V, reg r17:V, reg x:*, reg x1:V, reg length2:cls, reg r18:V, reg c2:L, reg writeLines:cls, reg unlist:cls, reg Map:cls, reg _format_calls_in_file:*, reg _format_calls_in_file1:V, reg p7:p(V +), reg x2:*, reg x3:V, reg p8:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r21:V, reg r22:V, reg x4:*, reg x5:V, reg names:cls, reg r23:V, reg p9:p(V +), reg r25:V, reg p10:p(V +), reg r27:V, reg p11:p(V +), reg r29:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r31:V, reg r32:V, reg x6:*, reg x7:V, reg invisible:cls, reg r33:V |
    mkenv;
    st dir = dir;
    file_path = ldf `file.path`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn file_path(p, "DESCRIPTION");
    check L8() else D1();
  D1():
    deopt 4 [r1];
  L8():
    st dfile = r1;
    file_exists = ldf `file.exists`;
    check L9() else D2();
  D2():
    deopt 7 [];
  L9():
    p1 = prom<V +>{
      dfile = ld dfile;
      dfile1 = force? dfile;
      checkMissing(dfile1);
      return dfile1;
    };
    r3 = dyn file_exists(p1);
    check L10() else D3();
  D3():
    deopt 9 [r3];
  L10():
    c = `as.logical`(r3);
    if c then L11() else L0();
  L0():
    goto L2("");
  L2(dx2):
    st pkgname = dx2;
    r9 = clos inner3708401697;
    st predicate = r9;
    Filter = ldf Filter;
    check L18() else D6();
  L11():
    _read_description = ldf `.read_description`;
    check L12() else D4();
  D4():
    deopt 11 [];
  D6():
    deopt 24 [];
  L12():
    p2 = prom<V +>{
      dfile2 = ld dfile;
      dfile3 = force? dfile2;
      checkMissing(dfile3);
      return dfile3;
    };
    r5 = dyn _read_description(p2);
    check L13() else D5();
  L18():
    p3 = prom<V +>{
      length = ld length;
      length1 = force? length;
      checkMissing(length1);
      return length1;
    };
    p6 = prom<V +>{
      _find_calls_in_package_code = ldf `.find_calls_in_package_code`;
      p4 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      p5 = prom<V +>{
        predicate = ld predicate;
        predicate1 = force? predicate;
        checkMissing(predicate1);
        return predicate1;
      };
      r13 = dyn _find_calls_in_package_code[, , recursive](p4, p5, TRUE);
      return r13;
    };
    r15 = dyn Filter(p3, p6);
    check L19() else D7();
  D5():
    deopt 13 [r5];
  D7():
    deopt 27 [r15];
  L13():
    c1 = `is.object`(r5);
    if c1 then L14() else L15(r5);
  L19():
    st x = r15;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L1(dx1):
    goto L2(dx1);
  L3(r17):
    c2 = `as.logical`(r17);
    if c2 then L24() else L4();
  L14():
    dr = tryDispatchBuiltin.1("[", r5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(r7):
    __ = ldf `[` in base;
    r8 = dyn __(r7, "Package");
    goto L1(r8);
  L20():
    x = ld x;
    check L22() else D8();
  L21():
    r16 = dyn base(<sym x>);
    goto L3(r16);
  D8():
    deopt 31 [x];
  L4():
    goto L5();
  L5():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L22():
    x1 = force? x;
    checkMissing(x1);
    length2 = ldf length in base;
    r18 = dyn length2(x1);
    check L23() else D9();
  L24():
    writeLines = ldf writeLines;
    check L25() else D10();
  D9():
    deopt 34 [r18];
  D10():
    deopt 36 [];
  L6(r32):
    popenv;
    return r32;
  L23():
    goto L3(r18);
  L25():
    p11 = prom<V +>{
      unlist = ldf unlist;
      p10 = prom<V +>{
        Map = ldf Map;
        p7 = prom<V +>{
          _format_calls_in_file = ld `.format_calls_in_file`;
          _format_calls_in_file1 = force? _format_calls_in_file;
          checkMissing(_format_calls_in_file1);
          return _format_calls_in_file1;
        };
        p8 = prom<V +>{
          x2 = ld x;
          x3 = force? x2;
          checkMissing(x3);
          return x3;
        };
        p9 = prom<V +>{
          sym1 = ldf names;
          base1 = ldf names in base;
          guard1 = `==`.4(sym1, base1);
          if guard1 then L1() else L2();
        L0(r22):
          return r22;
        L1():
          x4 = ld x;
          x5 = force? x4;
          checkMissing(x5);
          names = ldf names in base;
          r23 = dyn names(x5);
          goto L0(r23);
        L2():
          r21 = dyn base1(<sym x>);
          goto L0(r21);
        };
        r25 = dyn Map(p7, p8, p9);
        return r25;
      };
      r27 = dyn unlist(p10);
      return r27;
    };
    r29 = dyn writeLines(p11);
    check L26() else D11();
  L28():
    x6 = ld x;
    check L30() else D12();
  L29():
    r31 = dyn base2(<sym x>);
    goto L6(r31);
  D11():
    deopt 38 [r29];
  D12():
    deopt 43 [x6];
  L26():
    goto L5();
  L30():
    x7 = force? x6;
    checkMissing(x7);
    invisible = ldf invisible in base;
    r33 = dyn invisible(x7);
    check L31() else D13();
  D13():
    deopt 46 [r33];
  L31():
    goto L6(r33);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg _in_:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg e3:*, reg e4:V, reg c1:L, reg e6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r8:V, reg as_character:cls, reg r9:V, reg c2:L, reg r11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r12:V, reg p:p(V +), reg r14:V, reg c3:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg e7:*, reg e8:V, reg c4:L, reg e10:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r17:V, reg as_character1:cls, reg r18:V, reg e11:*, reg e12:V, reg c5:L, reg e14:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r19:V, reg r20:V, reg c6:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg e15:*, reg e16:V, reg c7:L, reg e18:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r23:V, reg c8:L, reg dx11:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg __5:cls, reg r24:V, reg as_character2:cls, reg r25:V, reg e19:*, reg e20:V, reg pkgname:*, reg pkgname1:V, reg r27:V, reg _in_1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg e21:*, reg e22:V, reg c9:L, reg e24:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg __6:cls, reg r32:V, reg as_character3:cls, reg r33:V, reg c10:L, reg r35:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg __7:cls, reg r36:V, reg p1:p(V +), reg r38:V, reg c11:L, reg c13:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg c16:L, reg r40:V, reg e25:*, reg e26:V, reg c17:L, reg c19:L, reg e28:V, reg dr16:V, reg dc8:L, reg dx18:V, reg c21:L, reg dx19:V, reg __8:cls, reg r41:V, reg c22:L, reg c24:L, reg dx21:V, reg dr18:V, reg dc9:L, reg dx22:V, reg c26:L, reg dx23:V, reg __9:cls, reg r42:V, reg as_character4:cls, reg r43:V, reg r44:V, reg c27:L, reg c28:V, reg c30:L, reg _in_2:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r47:V, reg r48:V, reg e29:*, reg e30:V, reg c31:L, reg e32:V, reg dr20:V, reg dc10:L, reg dx24:V, reg dx25:V, reg __10:cls, reg r49:V, reg as_character5:cls, reg r50:V, reg c32:L, reg r52:V, reg dr22:V, reg dc11:L, reg dx26:V, reg dx27:V, reg __11:cls, reg r53:V, reg p2:p(V +), reg r55:V, reg c33:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r56:V, reg r57:V, reg e33:*, reg e34:V, reg c34:L, reg e36:V, reg dr24:V, reg dc12:L, reg dx28:V, reg dx29:V, reg __12:cls, reg r58:V, reg as_character6:cls, reg r59:V, reg e37:*, reg e38:V, reg c35:L, reg e40:V, reg dr26:V, reg dc13:L, reg dx30:V, reg dx31:V, reg __13:cls, reg r60:V, reg r61:V, reg c36:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r62:V, reg r63:V, reg e41:*, reg e42:V, reg c37:L, reg e44:V, reg dr28:V, reg dc14:L, reg dx32:V, reg dx33:V, reg __14:cls, reg r64:V, reg c38:L, reg dx35:V, reg dr30:V, reg dc15:L, reg dx36:V, reg dx37:V, reg __15:cls, reg r65:V, reg as_character7:cls, reg r66:V, reg e45:*, reg e46:V, reg pkgname2:*, reg pkgname3:V, reg r68:V |
    mkenv;
    st e = e;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L29() else L30();
  L0(r1):
    r3 = `<=`(r1, 1);
    c = `as.logical`(r3);
    if c then L33() else L1();
  L29():
    e1 = ld e;
    check L31() else D0();
  L30():
    r = dyn base(<sym e>);
    goto L0(r);
  D0():
    deopt 2 [e1];
  L1():
    _in_ = ldf `%in%`;
    check L36() else D2();
  L31():
    e2 = force? e1;
    checkMissing(e2);
    length = ldf length in base;
    r2 = dyn length(e2);
    check L32() else D1();
  L33():
    popenv;
    return FALSE;
  D1():
    deopt 5 [r2];
  D2():
    deopt 14 [];
  L32():
    goto L0(r2);
  L36():
    p = prom<V +>{
      sym1 = ldf `as.character`;
      base1 = ldf `as.character` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L3() else L4();
    L0(r7):
      c2 = `is.object`(r7);
      if c2 then L8() else L9(r7);
    L3():
      e3 = ld e;
      e4 = force? e3;
      checkMissing(e4);
      c1 = `is.object`(e4);
      if c1 then L5() else L6(e4);
    L4():
      r6 = dyn base1(<lang `[[`(e, 1)>);
      goto L0(r6);
    L1(dx1):
      as_character = ldf `as.character` in base;
      r9 = dyn as_character(dx1);
      goto L0(r9);
    L2(dx3):
      return dx3;
    L5():
      dr = tryDispatchBuiltin.1("[[", e4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L7() else L6(dr);
    L6(e6):
      __ = ldf `[[` in base;
      r8 = dyn __(e6, 1);
      goto L1(r8);
    L8():
      dr2 = tryDispatchBuiltin.1("[", r7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L10() else L9(dr2);
    L9(r11):
      __1 = ldf `[` in base;
      r12 = dyn __1(r11, 1);
      goto L2(r12);
    L7():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L10():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L2(dx2);
    };
    r14 = dyn _in_(p, "unlockBinding");
    check L37() else D3();
  D3():
    deopt 17 [r14];
  L37():
    c3 = `as.logical`(r14);
    if c3 then L38() else L3();
  L3():
    _in_1 = ldf `%in%`;
    check L66() else D11();
  L38():
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  D11():
    deopt 58 [];
  L4(r16):
    st e3 = r16;
    e11 = ld e3;
    check L46() else D6();
  L39():
    e7 = ld e;
    check L41() else D4();
  L40():
    r15 = dyn base2(<lang `[[`(e, 3)>);
    goto L4(r15);
  L66():
    p1 = prom<V +>{
      sym4 = ldf `as.character`;
      base4 = ldf `as.character` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L3() else L4();
    L0(r31):
      c10 = `is.object`(r31);
      if c10 then L8() else L9(r31);
    L3():
      e21 = ld e;
      e22 = force? e21;
      checkMissing(e22);
      c9 = `is.object`(e22);
      if c9 then L5() else L6(e22);
    L4():
      r30 = dyn base4(<lang `[[`(e, 1)>);
      goto L0(r30);
    L1(dx15):
      as_character3 = ldf `as.character` in base;
      r33 = dyn as_character3(dx15);
      goto L0(r33);
    L2(dx17):
      return dx17;
    L5():
      dr12 = tryDispatchBuiltin.1("[[", e22);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L7() else L6(dr12);
    L6(e24):
      __6 = ldf `[[` in base;
      r32 = dyn __6(e24, 1);
      goto L1(r32);
    L8():
      dr14 = tryDispatchBuiltin.1("[", r31);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L10() else L9(dr14);
    L9(r35):
      __7 = ldf `[` in base;
      r36 = dyn __7(r35, 1);
      goto L2(r36);
    L7():
      dx14 = getTryDispatchBuiltinValue(dr12);
      goto L1(dx14);
    L10():
      dx16 = getTryDispatchBuiltinValue(dr14);
      goto L2(dx16);
    };
    r38 = dyn _in_1(p1, ".Internal");
    check L67() else D12();
  D4():
    deopt 20 [e7];
  D6():
    deopt 28 [e11];
  D12():
    deopt 61 [r38];
  L41():
    e8 = force? e7;
    checkMissing(e8);
    c4 = `is.object`(e8);
    if c4 then L42() else L43(e8);
  L46():
    e12 = force? e11;
    checkMissing(e12);
    c5 = `is.object`(e12);
    if c5 then L47() else L48(e12);
  L67():
    c11 = `as.logical`(r38);
    if c11 then L68() else L13(c11);
  L5(dx5):
    as_character1 = ldf `as.character` in base;
    r18 = dyn as_character1(dx5);
    check L45() else D5();
  L6(dx7):
    r20 = `==`(dx7, "asNamespace");
    c6 = `as.logical`(r20);
    if c6 then L50() else L7();
  L13(c13):
    c30 = `as.logical`(c13);
    if c30 then L80() else L17();
  L42():
    dr4 = tryDispatchBuiltin.1("[[", e8);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L44() else L43(dr4);
  L43(e10):
    __2 = ldf `[[` in base;
    r17 = dyn __2(e10, 3);
    goto L5(r17);
  L47():
    dr6 = tryDispatchBuiltin.1("[[", e12);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L49() else L48(dr6);
  L48(e14):
    __3 = ldf `[[` in base;
    r19 = dyn __3(e14, 1);
    goto L6(r19);
  L68():
    sym5 = ldf `as.character`;
    base5 = ldf `as.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L69() else L70();
  D5():
    deopt 26 [r18];
  L7():
    goto L11();
  L11():
    e19 = ld e3;
    check L62() else D9();
  L14(c16, r40):
    r44 = `==`(r40, "unlockBinding");
    c27 = `as.logical`(r44);
    c28 = `&&`(c16, c27);
    goto L13(c28);
  L17():
    _in_2 = ldf `%in%`;
    check L83() else D15();
  L44():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L5(dx4);
  L45():
    goto L4(r18);
  L49():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L6(dx6);
  L50():
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L51() else L52();
  L69():
    e25 = ld e;
    check L71() else D13();
  L70():
    r39 = dyn base5(<lang `[[`(`[[`(e, 2), 1)>);
    goto L14(c11, r39);
  L80():
    popenv;
    return TRUE;
  D9():
    deopt 50 [e19];
  D13():
    deopt 64 [c11, e25];
  D15():
    deopt 83 [];
  L8(r22):
    st e3 = r22;
    goto L11();
  L51():
    e15 = ld e;
    check L53() else D7();
  L52():
    r21 = dyn base3(<lang `[[`(`[[`(e, 3), 2)>);
    goto L8(r21);
  L62():
    e20 = force? e19;
    checkMissing(e20);
    pkgname = ld pkgname;
    check L63() else D10();
  L71():
    e26 = force? e25;
    checkMissing(e26);
    c17 = `is.object`(e26);
    if c17 then L72() else L73(c11, e26);
  L83():
    p2 = prom<V +>{
      sym6 = ldf `as.character`;
      base6 = ldf `as.character` in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L3() else L4();
    L0(r48):
      c32 = `is.object`(r48);
      if c32 then L8() else L9(r48);
    L3():
      e29 = ld e;
      e30 = force? e29;
      checkMissing(e30);
      c31 = `is.object`(e30);
      if c31 then L5() else L6(e30);
    L4():
      r47 = dyn base6(<lang `[[`(e, 1)>);
      goto L0(r47);
    L1(dx25):
      as_character5 = ldf `as.character` in base;
      r50 = dyn as_character5(dx25);
      goto L0(r50);
    L2(dx27):
      return dx27;
    L5():
      dr20 = tryDispatchBuiltin.1("[[", e30);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L7() else L6(dr20);
    L6(e32):
      __10 = ldf `[[` in base;
      r49 = dyn __10(e32, 1);
      goto L1(r49);
    L8():
      dr22 = tryDispatchBuiltin.1("[", r48);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L10() else L9(dr22);
    L9(r52):
      __11 = ldf `[` in base;
      r53 = dyn __11(r52, 1);
      goto L2(r53);
    L7():
      dx24 = getTryDispatchBuiltinValue(dr20);
      goto L1(dx24);
    L10():
      dx26 = getTryDispatchBuiltinValue(dr22);
      goto L2(dx26);
    };
    r55 = dyn _in_2(p2, "assignInNamespace");
    check L84() else D16();
  D7():
    deopt 37 [e15];
  D10():
    deopt 51 [e20, pkgname];
  D16():
    deopt 86 [r55];
  L15(c21, dx19):
    c22 = `is.object`(dx19);
    if c22 then L75() else L76(c21, dx19);
  L53():
    e16 = force? e15;
    checkMissing(e16);
    c7 = `is.object`(e16);
    if c7 then L54() else L55(e16);
  L63():
    pkgname1 = force? pkgname;
    checkMissing(pkgname1);
    r27 = `!=`(e20, pkgname1);
    popenv;
    return r27;
  L72():
    dr16 = tryDispatchBuiltin.1("[[", e26);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L74() else L73(c11, dr16);
  L73(c19, e28):
    __8 = ldf `[[` in base;
    r41 = dyn __8(e28, 2);
    goto L15(c19, r41);
  L84():
    c33 = `as.logical`(r55);
    if c33 then L85() else L19();
  L9(dx9):
    c8 = `is.object`(dx9);
    if c8 then L57() else L58(dx9);
  L16(c26, dx23):
    as_character4 = ldf `as.character` in base;
    r43 = dyn as_character4(dx23);
    check L78() else D14();
  L19():
    popenv;
    return FALSE;
  L54():
    dr8 = tryDispatchBuiltin.1("[[", e16);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L56() else L55(dr8);
  L55(e18):
    __4 = ldf `[[` in base;
    r23 = dyn __4(e18, 3);
    goto L9(r23);
  L74():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L15(c11, dx18);
  L75():
    dr18 = tryDispatchBuiltin.1("[[", dx19);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L77() else L76(c21, dr18);
  L76(c24, dx21):
    __9 = ldf `[[` in base;
    r42 = dyn __9(dx21, 1);
    goto L16(c24, r42);
  L85():
    sym7 = ldf `as.character`;
    base7 = ldf `as.character` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L86() else L87();
  D14():
    deopt 73 [c26, r43];
  L10(dx13):
    as_character2 = ldf `as.character` in base;
    r25 = dyn as_character2(dx13);
    check L60() else D8();
  L20(r57):
    st e3 = r57;
    e37 = ld e3;
    check L93() else D19();
  L56():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L9(dx8);
  L57():
    dr10 = tryDispatchBuiltin.1("[[", dx9);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L59() else L58(dr10);
  L58(dx11):
    __5 = ldf `[[` in base;
    r24 = dyn __5(dx11, 2);
    goto L10(r24);
  L77():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L16(c21, dx22);
  L78():
    goto L14(c26, r43);
  L86():
    e33 = ld e;
    check L88() else D17();
  L87():
    r56 = dyn base7(<lang `[[`(e, 4)>);
    goto L20(r56);
  D8():
    deopt 46 [r25];
  D17():
    deopt 89 [e33];
  D19():
    deopt 97 [e37];
  L59():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L10(dx12);
  L60():
    goto L8(r25);
  L88():
    e34 = force? e33;
    checkMissing(e34);
    c34 = `is.object`(e34);
    if c34 then L89() else L90(e34);
  L93():
    e38 = force? e37;
    checkMissing(e38);
    c35 = `is.object`(e38);
    if c35 then L94() else L95(e38);
  L21(dx29):
    as_character6 = ldf `as.character` in base;
    r59 = dyn as_character6(dx29);
    check L92() else D18();
  L22(dx31):
    r61 = `==`(dx31, "asNamespace");
    c36 = `as.logical`(r61);
    if c36 then L97() else L23();
  L89():
    dr24 = tryDispatchBuiltin.1("[[", e34);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L91() else L90(dr24);
  L90(e36):
    __12 = ldf `[[` in base;
    r58 = dyn __12(e36, 4);
    goto L21(r58);
  L94():
    dr26 = tryDispatchBuiltin.1("[[", e38);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L96() else L95(dr26);
  L95(e40):
    __13 = ldf `[[` in base;
    r60 = dyn __13(e40, 1);
    goto L22(r60);
  D18():
    deopt 95 [r59];
  L23():
    goto L27();
  L27():
    e45 = ld e3;
    check L109() else D22();
  L91():
    dx28 = getTryDispatchBuiltinValue(dr24);
    goto L21(dx28);
  L92():
    goto L20(r59);
  L96():
    dx30 = getTryDispatchBuiltinValue(dr26);
    goto L22(dx30);
  L97():
    sym8 = ldf `as.character`;
    base8 = ldf `as.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L98() else L99();
  D22():
    deopt 119 [e45];
  L24(r63):
    st e3 = r63;
    goto L27();
  L98():
    e41 = ld e;
    check L100() else D20();
  L99():
    r62 = dyn base8(<lang `[[`(`[[`(e, 4), 2)>);
    goto L24(r62);
  L109():
    e46 = force? e45;
    checkMissing(e46);
    pkgname2 = ld pkgname;
    check L110() else D23();
  D20():
    deopt 106 [e41];
  D23():
    deopt 120 [e46, pkgname2];
  L100():
    e42 = force? e41;
    checkMissing(e42);
    c37 = `is.object`(e42);
    if c37 then L101() else L102(e42);
  L110():
    pkgname3 = force? pkgname2;
    checkMissing(pkgname3);
    r68 = `!=`(e46, pkgname3);
    popenv;
    return r68;
  L25(dx33):
    c38 = `is.object`(dx33);
    if c38 then L104() else L105(dx33);
  L101():
    dr28 = tryDispatchBuiltin.1("[[", e42);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L103() else L102(dr28);
  L102(e44):
    __14 = ldf `[[` in base;
    r64 = dyn __14(e44, 4);
    goto L25(r64);
  L26(dx37):
    as_character7 = ldf `as.character` in base;
    r66 = dyn as_character7(dx37);
    check L107() else D21();
  L103():
    dx32 = getTryDispatchBuiltinValue(dr28);
    goto L25(dx32);
  L104():
    dr30 = tryDispatchBuiltin.1("[[", dx33);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L106() else L105(dr30);
  L105(dx35):
    __15 = ldf `[[` in base;
    r65 = dyn __15(dx35, 2);
    goto L26(r65);
  D21():
    deopt 115 [r66];
  L106():
    dx36 = getTryDispatchBuiltinValue(dr30);
    goto L26(dx36);
  L107():
    goto L24(r66);
  }
}