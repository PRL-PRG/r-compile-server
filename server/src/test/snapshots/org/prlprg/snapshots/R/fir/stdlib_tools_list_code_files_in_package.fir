fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3077716681;
    st list_code_files_in_package = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3077716681(dir) {
  (reg dir:*) -+> V { var dir:*, reg normalizePath:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg file_path:cls, reg dir3:*, reg dir4:V, reg p1:p(V +), reg r3:V, reg list_files_with_type:cls, reg code_dir:*, reg code_dir1:V, reg p2:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg code_files:*, reg code_files1:V, reg length:cls, reg r8:V, reg r9:V, reg c:L, reg code_files2:*, reg code_files3:V, reg _get_package_metadata:cls, reg dir5:*, reg dir6:V, reg p3:p(V +), reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg paste0:cls, reg _OStype:cls, reg r16:V, reg p4:p(V +), reg r18:V, reg c1:cls, reg r19:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg _in_:cls, reg collate_fields:*, reg collate_fields1:V, reg p5:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg meta:*, reg meta1:V, reg names:cls, reg r25:V, reg p6:p(V +), reg r27:V, reg any:cls, reg r28:V, reg c2:L, reg file_path1:cls, reg code_dir2:*, reg code_dir3:V, reg p7:p(V +), reg _read_collate_field:cls, reg meta2:*, reg meta3:V, reg c3:L, reg meta5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg collate_fields2:*, reg collate_fields3:V, reg c4:L, reg meta7:V, reg collate_fields5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg meta9:V, reg dx3:V, reg i:*, reg i1:V, reg __:cls, reg r30:V, reg c5:L, reg meta11:V, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg meta13:V, reg dx7:V, reg __1:cls, reg r31:V, reg __2:cls, reg r32:V, reg p8:p(V +), reg r34:V, reg p9:p(V +), reg r36:V, reg collate:*, reg collate1:V, reg c6:L, reg collate3:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg _in_1:cls, reg collate4:*, reg collate5:V, reg p10:p(V +), reg code_files4:*, reg code_files5:V, reg p11:p(V +), reg r39:V, reg __3:cls, reg r40:V, reg code_files6:*, reg code_files7:V |
    mkenv;
    st dir = dir;
    normalizePath = ldf normalizePath;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn normalizePath(p);
    check L9() else D1();
  D1():
    deopt 3 [r1];
  L9():
    st dir = r1;
    file_path = ldf `file.path`;
    check L10() else D2();
  D2():
    deopt 6 [];
  L10():
    p1 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r3 = dyn file_path(p1, "R");
    check L11() else D3();
  D3():
    deopt 9 [r3];
  L11():
    st code_dir = r3;
    list_files_with_type = ldf list_files_with_type;
    check L12() else D4();
  D4():
    deopt 12 [];
  L12():
    p2 = prom<V +>{
      code_dir = ld code_dir;
      code_dir1 = force? code_dir;
      checkMissing(code_dir1);
      return code_dir1;
    };
    r5 = dyn list_files_with_type(p2, "code");
    check L13() else D5();
  D5():
    deopt 15 [r5];
  L13():
    st code_files = r5;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r7):
    r9 = `!`(r7);
    c = `as.logical`(r9);
    if c then L18() else L1();
  L14():
    code_files = ld code_files;
    check L16() else D6();
  L15():
    r6 = dyn base(<sym code_files>);
    goto L0(r6);
  D6():
    deopt 19 [code_files];
  L1():
    _get_package_metadata = ldf `.get_package_metadata`;
    check L22() else D9();
  L16():
    code_files1 = force? code_files;
    checkMissing(code_files1);
    length = ldf length in base;
    r8 = dyn length(code_files1);
    check L17() else D7();
  L18():
    code_files2 = ld code_files;
    check L19() else D8();
  D7():
    deopt 22 [r8];
  D8():
    deopt 24 [code_files2];
  D9():
    deopt 30 [];
  L17():
    goto L0(r8);
  L19():
    code_files3 = force? code_files2;
    checkMissing(code_files3);
    popenv;
    return code_files3;
  L22():
    p3 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r13 = dyn _get_package_metadata(p3);
    check L23() else D10();
  D10():
    deopt 32 [r13];
  L23():
    st meta = r13;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L3(r15):
    st collate_fields = r15;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L24():
    paste0 = ldf paste0;
    check L26() else D11();
  L25():
    r14 = dyn base1(<lang paste0("Collate.", .OStype())>, "Collate");
    goto L3(r14);
  D11():
    deopt 37 [];
  L4(r21):
    c2 = `as.logical`(r21);
    if c2 then L34() else L5();
  L26():
    p4 = prom<V +>{
      _OStype = ldf `.OStype`;
      r16 = dyn _OStype();
      return r16;
    };
    r18 = dyn paste0("Collate.", p4);
    check L27() else D12();
  L29():
    _in_ = ldf `%in%`;
    check L31() else D14();
  L30():
    r20 = dyn base2(<lang `<-`(i, `(`(`%in%`(collate_fields, names(meta))))>);
    goto L4(r20);
  D12():
    deopt 40 [r18];
  D14():
    deopt 48 [];
  L5():
    goto L7();
  L7():
    code_files6 = ld code_files;
    check L44() else D22();
  L27():
    c1 = ldf c in base;
    r19 = dyn c1(r18, "Collate");
    check L28() else D13();
  L31():
    p5 = prom<V +>{
      collate_fields = ld collate_fields;
      collate_fields1 = force? collate_fields;
      checkMissing(collate_fields1);
      return collate_fields1;
    };
    p6 = prom<V +>{
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      meta = ld meta;
      meta1 = force? meta;
      checkMissing(meta1);
      names = ldf names in base;
      r25 = dyn names(meta1);
      goto L0(r25);
    L2():
      r23 = dyn base3(<sym meta>);
      goto L0(r23);
    };
    r27 = dyn _in_(p5, p6);
    check L32() else D15();
  L34():
    file_path1 = ldf `file.path`;
    check L35() else D17();
  D13():
    deopt 43 [r19];
  D15():
    deopt 51 [r27];
  D17():
    deopt 56 [];
  D22():
    deopt 72 [code_files6];
  L28():
    goto L3(r19);
  L32():
    st i = r27;
    any = ldf any in base;
    r28 = dyn any(r27);
    check L33() else D16();
  L35():
    p7 = prom<V +>{
      code_dir2 = ld code_dir;
      code_dir3 = force? code_dir2;
      checkMissing(code_dir3);
      return code_dir3;
    };
    p9 = prom<V +>{
      _read_collate_field = ldf `.read_collate_field`;
      p8 = prom<V +>{
        meta2 = ld meta;
        meta3 = force? meta2;
        checkMissing(meta3);
        c3 = `is.object`(meta3);
        if c3 then L3() else L4(meta3);
      L0(dx1):
        return dx1;
      L3():
        dr = tryDispatchBuiltin.1("[", meta3);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L5() else L4(dr);
      L4(meta5):
        collate_fields2 = ld collate_fields;
        collate_fields3 = force? collate_fields2;
        checkMissing(collate_fields3);
        c4 = `is.object`(collate_fields3);
        if c4 then L6() else L7(meta5, collate_fields3);
      L1(meta9, dx3):
        c5 = `is.object`(dx3);
        if c5 then L9() else L10(meta9, dx3);
      L5():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      L6():
        dr2 = tryDispatchBuiltin.1("[", collate_fields3);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L8() else L7(meta5, dr2);
      L7(meta7, collate_fields5):
        i = ld i;
        i1 = force? i;
        __ = ldf `[` in base;
        r30 = dyn __(collate_fields5, i1);
        goto L1(meta7, r30);
      L2(meta13, dx7):
        __2 = ldf `[` in base;
        r32 = dyn __2(meta13, dx7);
        goto L0(r32);
      L8():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L1(meta5, dx2);
      L9():
        dr4 = tryDispatchBuiltin.1("[", dx3);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L11() else L10(meta9, dr4);
      L10(meta11, dx5):
        __1 = ldf `[` in base;
        r31 = dyn __1(dx5, 1);
        goto L2(meta11, r31);
      L11():
        dx6 = getTryDispatchBuiltinValue(dr4);
        goto L2(meta9, dx6);
      };
      r34 = dyn _read_collate_field(p8);
      return r34;
    };
    r36 = dyn file_path1(p7, p9);
    check L36() else D18();
  L44():
    code_files7 = force? code_files6;
    checkMissing(code_files7);
    popenv;
    return code_files7;
  D16():
    deopt 54 [r28];
  D18():
    deopt 59 [r36];
  L33():
    goto L4(r28);
  L36():
    st collate = r36;
    collate = ld collate;
    check L37() else D19();
  D19():
    deopt 61 [collate];
  L37():
    collate1 = force? collate;
    checkMissing(collate1);
    c6 = `is.object`(collate1);
    if c6 then L38() else L39(collate1);
  L6(dx9):
    st code_files = dx9;
    goto L7();
  L38():
    dr6 = tryDispatchBuiltin.1("[", collate1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L40() else L39(dr6);
  L39(collate3):
    _in_1 = ldf `%in%`;
    check L41() else D20();
  D20():
    deopt 64 [collate3];
  L40():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L6(dx8);
  L41():
    p10 = prom<V +>{
      collate4 = ld collate;
      collate5 = force? collate4;
      checkMissing(collate5);
      return collate5;
    };
    p11 = prom<V +>{
      code_files4 = ld code_files;
      code_files5 = force? code_files4;
      checkMissing(code_files5);
      return code_files5;
    };
    r39 = dyn _in_1(p10, p11);
    check L42() else D21();
  D21():
    deopt 67 [collate3, r39];
  L42():
    __3 = ldf `[` in base;
    r40 = dyn __3(collate3, r39);
    goto L6(r40);
  }
}